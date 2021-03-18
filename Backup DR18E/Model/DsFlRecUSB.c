/** <!--------------------------------------------------------------------------------------------->
*
*   @file
*     DsFlRecUSB.c
*   @ingroup GrpDsFlRecUSB
*
*   @related_files
*     DsFlRecUSB.h
*     DsFlRecUSBMsg.h
*
*   @brief
*     Flight recorder module for writing data to a USB device.
*
*   @author
*     E. Wiens
*
*   @description
*     This module contains functions for using the USB flight recorder. This flight
*     recorder writes data to a USB device.
*
*   @remarks
*
*   @copyright
*     (C) 2009, dSPACE GmbH, Technologiepark 25, 33100 Paderborn, Germany
*
*   @version
*     $RCSfile: DsFlRecUSB.c $ $Revision: 1.23 $ $Date: 2012/09/18 13:34:19CEST $
*     $ProjectName: e:/ARC/Products/ImplSW/RTLibSW/RTLib1401/Develop/DS1401/RTLib/DSFlRecUSB.pj $
*
*   <hr><br>
*<!---------------------------------------------------------------------------------------------->*/

#include <DsTypes.h>
#include <DsFlRec.h>
#include <DsFlRecUSB.h>
#include <DsFlRecUSBFifo.h>
#include <DsFlRecUSBMsg.h>
#include <Ds1401_msg.h>
#include <Dsmem.h>
#include <dsts.h>
#include <SYS1401.h>
#include <DsStd.h>
#include <String.h>
#include <DsMsg.h>
#include "dsmodule.h"


/***************************************************************************************************
  constant, macro, and type definitions
***************************************************************************************************/

// Minimal benötigte HCN FW Version
#define DSFLREC_USB_MIN_HCN_FWVERSION_MAJ         4
#define DSFLREC_USB_MIN_HCN_FWVERSION_MIN         1

// Startadressen im Global Mem
// Flight Recorder puffert im Global Mem seine "InitTable"
// sowie die FIFO mit der die Daten vom CN zum HCN geleitet werden.
#define DSFLREC_USB_INIT_TABLE_START        DS1401_GLOBAL_RAM_START_FLIGHT_REC
#define DSFLREC_USB_INIT_TABLE_SIZE         0x8000
#define DSFLREC_USB_FIFO_START             (DSFLREC_USB_INIT_TABLE_START + DSFLREC_USB_INIT_TABLE_SIZE)
#define DSFLREC_USB_FIFO_SIZE              (DS1401_GLOBAL_RAM_SIZE_FLIGHT_REC - DSFLREC_USB_INIT_TABLE_SIZE)

// Laufzeitzustaende
#define DSFLREC_USB_STATE_STOPPED           0
#define DSFLREC_USB_STATE_RUNNING           1
#define DSFLREC_USB_STATE_TERMINATING       2
#define DSFLREC_USB_STATE_TERMINATED        3


/** Constant definition for the overwrite read mode flag */
#define DSFLREC_USB_MODE_OVERWRITE              DSFLREC_MODE_OVERWRITE
/** Constant definition for the discard new data read mode flag */
#define DSFLREC_USB_MODE_DISCARD_NEW_DATA       DSFLREC_MODE_BLOCKED
/** Constant definition for the use all available storage flag */
#define DSFLREC_USB_USE_ALL_AVAILABLE_MEMORY    1

/** In diesem Modul werden 3 verschiedene Zeiteinheiten benutzt:
 *
 *  1. Timestamps des Timestamp-Moduls
 *     Dieser TS ist ein 64bit Float und gibt die Anzahl
 *     verstrichener Sekunden seit Systemstart an.
 *     Tatsächliche Auflösung: :TODO:
 *
 *  2. Interne Timestamps dieses Modul
 *     Dieser TS ist ein 64bit Integer (ts_timestamp_type)
 *     Auflösung: 80ns
 *
 *  3. Timestamps die in die Flight-Recorder-Daten geschrieben werden
 *     Diese Timestamps sind faktisch 56-Bit Integers
 *     (32 Bit für den High-Value und 24 bit für den Low-Value)
 *     Auflösung: 20us (80ns * 256)
 */
#define DSFLREC_USB_MIT_PERIOD           0.00000008
#define DSFLREC_USB_MAT_PERIOD           (((double)TS_SINGLE_RELOAD_VALUE) * DSFLREC_USB_MIT_PERIOD)
#define DSFLREC_USB_TB_OVERFLOW          0x80000000
#define DSFLREC_USB_MIT_PER_MAT          (TS_SINGLE_RELOAD_VALUE - 1)

/** To set the DataTypeId in the init table it has to be shifted by this constant */
#define DSFLREC_USB_DATA_TYPE_ID_SHIFT   8
/** To set the VarIndex in the varindex_time field of the dsflrec_usb_data_struct struct the value
   has to be shifted by this constant */
#define DSFLREC_USB_VAR_INDEX_SHIFT     24
/** A mask to get the time out of the varindex_time field of the dsflrec_usb_data_struct struct */
#define DSFLREC_USB_TIME_MASK            0xFFFFFF


/** Convert 64-bit floating point time stamp received from time stamp module
 *  to flight-recorder timestamp (which has a lower resolution)
 */
#define DSFLREC_USB_TIMESTAMP_CALC(Time, Ts)                                  \
{                                                                             \
  Ts.mat = Time / DSFLREC_USB_MAT_PERIOD;                                     \
  Time = Time - (Ts.mat * DSFLREC_USB_MAT_PERIOD);                            \
  Ts.mit = Time / DSFLREC_USB_MIT_PERIOD;                                     \
}


/** Calculate difference between two flight-recorder timestamps
 */
#define DSFLREC_USB_TIMEDIFF_CALC(ts_result, ts1, ts2 )                       \
{                                                                             \
  UInt32  tmp_mit, tmp_mat;                                                   \
  /* Berechne tmp = ts1 - ts2 */                                              \
  if (ts1.mit >= ts2.mit )                                                    \
  {                                                                           \
    tmp_mit = ts1.mit - ts2.mit;                                              \
    tmp_mat = ts1.mat - ts2.mat;                                              \
  }                                                                           \
  else                                                                        \
  {                                                                           \
    UInt32  mat_carry;                                                        \
                                                                              \
    tmp_mat = ts1.mat - (ts2.mat + 1);                                        \
    tmp_mit = ts2.mit - ts1.mit;                                              \
    if (tmp_mit > DSFLREC_USB_MIT_PER_MAT)                                    \
    {                                                                         \
      mat_carry = (tmp_mit - 1) / DSFLREC_USB_MIT_PER_MAT;                    \
      tmp_mat = tmp_mat - mat_carry;                                          \
      tmp_mit = tmp_mit - (mat_carry * DSFLREC_USB_MIT_PER_MAT);              \
    }                                                                         \
    tmp_mit = DSFLREC_USB_MIT_PER_MAT - tmp_mit;                              \
    tmp_mit++;                                                                \
  }                                                                           \
  ts_result.mit = tmp_mit;                                                    \
  ts_result.mat = tmp_mat;                                                    \
}



typedef struct
{
    UInt32              state;              /* Flag which indicates that the USB flight recorder is in use (i.e. has been has been initialized by its init() function */
    UInt32              varCount;           /* Counts number of registered variables */
    UInt32              failedWrites;       /* Counts number of failed write attempts */

    ts_timestamp_type   tsOnInit;           /* Time stamp of init function call */
    ts_timestamp_type   tsLastOverflow;     /* Time stamp of last TS overflow */

    DsFixedSizeFifo_t    *pFifo;             /* Pointer to shared memory FIFO for data transfert to HCN */
    dsflrec_init_table  *pInitTable;         /* POointer to flight recorder init table in  global memory */

    UInt32              supportsShutdown;   /* Set to 1 if HCN FW version supports graceful USB shutdown */
    ts_timestamp_type   tsShutdown;         /* Time stamp of shutdown sequence start */

} DsFlrecUsbGlobals_t;


/***************************************************************************************************
  Global variables
****************************************************************************************************/

DsFlrecUsbGlobals_t     gDsFlRecUsb =
{
        DSFLREC_USB_STATE_STOPPED,          // UInt32              state;
        0,          // UInt32              varCount;
        0,          // UInt32              failedWrites;

        { 0, 0 },   // ts_timestamp_type   tsOnInit;
        { 0, 0 },   // ts_timestamp_type   tsLastOverflow;

        NULL,       // DsFixedSizeFifo_t   pFifo;
        NULL,       // dsflrec_init_table  pInitTable;

        0,          // UInt32              supportsShutdown;
        { 0, 0 },   // ts_timestamp_type   tsShutdown;

};

/* Admin data (will be copied to VCM module) */
DsFlrecUsbAdmin_t       DsFlrecUsbAdmin;

/* Global flag indicating that USB Flight Recorder is available and activated */
int                     gUsbFlightRecorderActive = 0;

/***************************************************************************************************
  function prototypes
***************************************************************************************************/

Int16  dsflrec_usb_write (UInt16 VarIndex, UInt32 *Value);
void   dsflrec_usb_vcm_register (void);
void   dsflrec_read_rtc(dsflrec_data_struct *RtcTimeStamp);
static int dsflrec_usb_shutdown_initiate(void);
static int dsflrec_usb_shutdown_finalize(void);
static int dsflrec_check_hcn_version(UInt8 minVersionMajor, UInt8 minVersionMinor );



/***************************************************************************************************
  version information
***************************************************************************************************/



/***************************************************************************************************
  function declarations
***************************************************************************************************/


/** <!--------------------------------------------------------------------------------------------->
 *   This function provides a 32-bit memset suitable for global RAM.
 *
 *<!---------------------------------------------------------------------------------------------->*/
void memset32(UInt32 *mem, UInt32 val, UInt32 count)
{
    count /= 4;
    while(count>0)
    {
        *mem = val;
        mem++;
        count--;
    }
}


/** <!--------------------------------------------------------------------------------------------->
 *   This function reads the current value of real-time-clock.
 *
 *<!---------------------------------------------------------------------------------------------->*/
void   dsflrec_read_rtc(dsflrec_data_struct *RtcTimeStamp)
{
  UInt32 TempVal;
  real_time_clock RTCTemp ;

  ds1401_read_rtc (&RTCTemp);

  TempVal  = (RTCTemp.sec_100 & 0xFF) ;
  TempVal |= (RTCTemp.sec     & 0xFF) << 8 ;
  TempVal |= (RTCTemp.min     & 0xFF) << 16 ;
  TempVal |= (RTCTemp.hour    & 0xFF) << 24 ;
  RtcTimeStamp->data = TempVal ;

  TempVal  = (RTCTemp.date    & 0xFF) ;
  TempVal |= (RTCTemp.month   & 0xFF) << 8 ;
  TempVal |= (RTCTemp.year    & 0xFF) << 16 ;
  RtcTimeStamp->varindex_time =
                              TempVal | (UInt32)(DSFLREC_USB_RTC_TIMESTAMP << 24);

}


/** <!--------------------------------------------------------------------------------------------->
*   This function registers the flight recorder USB module in VCM.
*
*   @description
*     Registers the flight recorder USB module in VCM.
*
*<!---------------------------------------------------------------------------------------------->*/
void dsflrec_usb_vcm_register(void)
{
    vcm_module_descriptor_type  *FlrecVCMEntry;
    DsFlrecUsbAdmin_t           *FlrecVCMAddmem;

    FlrecVCMEntry = vcm_module_register(
                        VCM_MID_FLREC_USB_1401, 0,
                        VCM_TXT_FLREC_USB_1401,
                        USB_FLREC_SOFTWARE_VER_MAR,
                        USB_FLREC_SOFTWARE_VER_MIR,
                        USB_FLREC_SOFTWARE_VER_MAI,
                        USB_FLREC_SOFTWARE_VER_SPB,
                        USB_FLREC_SOFTWARE_VER_SPN,
                        USB_FLREC_SOFTWARE_VER_PLV,
                        0, 0
                    );

    FlrecVCMAddmem = (DsFlrecUsbAdmin_t*)vcm_cfg_malloc(sizeof(DsFlrecUsbAdmin_t));
    memcpy(FlrecVCMAddmem, &DsFlrecUsbAdmin, sizeof(DsFlrecUsbAdmin_t));
    vcm_memory_ptr_set(FlrecVCMEntry, (vcm_cfg_mem_ptr_type)FlrecVCMAddmem, sizeof(DsFlrecUsbAdmin_t));

}


/** <!--------------------------------------------------------------------------------------------->
*   This function intitializes the flight recorder USB module.
*
*   @description
*     Initializes the flight recorder by doing the following steps: \n
*     1. Allocating global memory for the fifo, which buffers flight recorder data. \n
*     2. Allocating global memory for the init table, where mapping information for the variables
*        is stored.
*
*   @parameters
*       @param Mode                 Record mode. Use the following predefined constants:
*                                   - DSFLREC_USB_MODE_DISCARD_NEW_DATA
*                                   - DSFLREC_USB_MODE_OVERWRITE
*       @param AvailableMemory      The available memory for data records on the USB device.
*
*<!---------------------------------------------------------------------------------------------->*/
Int16 dsflrec_usb_initialize(UInt16 RecordingMode, UInt16 MaxFileSizeMB)
{
  // Hardwareversion prüfen
  if(  (ds1401_cfg_section->__cfg_version <  DS1401_MABX_II_HW_VERSION_VER) ||
      (
       (ds1401_cfg_section->__cfg_version == DS1401_MABX_II_HW_VERSION_VER) &&
       (ds1401_cfg_section->__cfg_revision < DS1401_MABX_II_HW_VERSION_REV)
      )
    )
  {
    ds1401_msg_error_set(DS1401_WRONG_HW_VERSION);
    exit(1);
  }

  // Aufrufparameter pruefen
  if( RecordingMode != DSFLREC_USB_MODE_OVERWRITE && RecordingMode != DSFLREC_USB_MODE_DISCARD_NEW_DATA )
  {
      return DSFLREC_USB_ILLEGAL_RECORDING_MODE;
  }
  if( MaxFileSizeMB == 0 || MaxFileSizeMB > 256 )
  {
      return DSFLREC_USB_ILLEGAL_FILESIZE;
  }

  // USB Modul muss nur 1x initialisier werden :-)
  if (gDsFlRecUsb.state != DSFLREC_USB_STATE_STOPPED )
  {
      return DSFLREC_USB_ALREADY_INITIALIZED;
  }


  /* set the init table pointer to the start of the flight recorder data section in the global memory*/
  gDsFlRecUsb.pInitTable = (dsflrec_init_table*)DSFLREC_USB_INIT_TABLE_START;

  /* Clear init table */
  memset32( (UInt32*)gDsFlRecUsb.pInitTable, 0xFFFFFFFF, DSFLREC_USB_INIT_TABLE_SIZE);

  /* initialize the fifo for the flight recorder data */
  gDsFlRecUsb.pFifo = dsflrec_usb_fifo_init(DSFLREC_USB_FIFO_SIZE, DSFLREC_USB_FIFO_START);

  /*-- Intialize timestamp information --------------------------------------------------------------*/

  Float64               CurrentTime;
  dsflrec_data_struct   StartTimeStampRecord;

  // Get current time stamp (based on time base register)
  CurrentTime = ts_time_read();
  DSFLREC_USB_TIMESTAMP_CALC(CurrentTime, gDsFlRecUsb.tsOnInit);

  // Get current time stamp (based on real-time-clock)
  dsflrec_read_rtc(&StartTimeStampRecord);
  StartTimeStampRecord.varindex_time = (StartTimeStampRecord.varindex_time & DSFLREC_USB_TIME_MASK) |
                              (UInt32) (DSFLREC_USB_APPLICATION_START << DSFLREC_USB_VAR_INDEX_SHIFT);

  // Set flight recorder characteristics
  DsFlrecUsbAdmin.recordingMode      = RecordingMode;
  DsFlrecUsbAdmin.maxRecordingSizeMB = MaxFileSizeMB;                     // Maximum file size in megabytes
  DsFlrecUsbAdmin.initTableStart     = DSFLREC_USB_INIT_TABLE_START;
  DsFlrecUsbAdmin.fifoStart          = DSFLREC_USB_FIFO_START;
  DsFlrecUsbAdmin.rtcStartRecord     = StartTimeStampRecord;

  // Store characteristics in VCM module
  dsflrec_usb_vcm_register();

  // Check if HCN firmware supports graceful USB shutdown
  if( dsflrec_check_hcn_version(DSFLREC_USB_MIN_HCN_FWVERSION_MAJ, DSFLREC_USB_MIN_HCN_FWVERSION_MIN) == 0 )
  {
      // Activate power hold mode
      // Power hold mode is used to delay a pending box shutdown
      // until the HCN has properly unmounted the USB stick
      // (to prevent USB file system corruption)
      ds1401_power_hold_on_usb();

      // Make sure, shutdown request flag is in a defined state
      ds1401_cfg_section->__cfg_usb_shutdown_request = 0;

      // Set "shutdown handling" flag to "true"
      gDsFlRecUsb.supportsShutdown = 1;
  }
  else
  {
      msg_info_printf(MSG_SM_RTLIB, USB_FLREC_HCN_VERSION_OUTDATED, "USB Flight Recorder: Outdated host interface firmware detected");
      msg_info_printf(MSG_SM_RTLIB, USB_FLREC_HCN_VERSION_OUTDATED, "USB Flight Recorder: Graceful USB shutdown via remote_in not supported.");

      // Set "shutdown handling" flag to "false"
      gDsFlRecUsb.supportsShutdown = 0;
}

  // Done!  Set internal state
  gDsFlRecUsb.state = DSFLREC_USB_STATE_RUNNING;

  // Set global, external flag
  gUsbFlightRecorderActive = 1;

  return DSFLREC_USB_NO_ERROR;
}


/** <!--------------------------------------------------------------------------------------------->
*   This function adds a new variable to the flight recorder init table.
*
*   @description
*     Adds a new variable to the flight recorder init table. Each variable, which is added
*     into the init table will be recorded during runtime. The information, that is added for
*     each variable is:
*
*     \li \c name of the variable
*     \li \c data type of the variable
*     \li \c index of the variable
*
*   @parameters
*     @param VarName    The name of the variable.
*     @param DataTypeId The data type id of the variable.
*
*   @returns
*     \li \c DSFLREC_USB_NO_ERROR
*     \li \c DSFLREC_USB_INIT_TABLE_FULL
*     \li \c DSFLREC_USB_VAR_ALREADY_EXIST
*
*<!---------------------------------------------------------------------------------------------->*/
Int16 dsflrec_usb_add_variable(char *VarName, UInt16 DataTypeId, UInt16 *pVarIndex)
{
  UInt16 *VarNameTemp       = NULL;
  UInt16 i                  = 0;
  UInt16 TableIndex         = 0;
  UInt16 CharArrayIndex     = 0;
  UInt16 UInt16ArrayIndex   = 0;
  UInt16 FirstByteMask      = 0xFF00;
  UInt16 OneByteShift       = 8;
  UInt16 VarNameLocal[DSFLREC_VAR_NAME_LENGHT/2];
  UInt16 VarIndex;

  /* if this condition is true, the maximum number of flight recorder variables is reached,
     the init table is full*/
  // :TODO: Bugfix: Eigentlich sollte count bis DSFLREC_USB_MAX_VAR_NUMBER laufen dürfen
  if (gDsFlRecUsb.varCount >= DSFLREC_USB_MAX_VAR_NUMBER )
  {
    // Fehlermeldung und aussteigen
    msg_info_printf(MSG_SM_RTLIB, USB_FLREC_MSG_USB_VARCOUNT_TOO_HIGH, "USB Flight Recorder: The maximum number of flight recorder variables has been exceeded!");
    return DSFLREC_USB_INIT_TABLE_FULL;
  }

  /* check if the incoming variable name already exists in the init table */
  for (TableIndex = 0; TableIndex < gDsFlRecUsb.varCount; TableIndex++)
  {
    VarNameTemp = (UInt16*) gDsFlRecUsb.pInitTable[TableIndex].VarName.name;

    /* read a variable name out of the global memory */
    for (i = 0; i < DSFLREC_VAR_NAME_LENGHT/2; i++)
    {
        VarNameLocal[i] = VarNameTemp[i];
    }

    /* compare incoming variable name with existing variable name */
    if (strcmp(VarName, (char*)VarNameLocal) == 0)
    {
        return DSFLREC_USB_VAR_ALREADY_EXIST;
    }
  }

  /* set the variable index and the variable data type */
  VarIndex = gDsFlRecUsb.varCount + 1;
  gDsFlRecUsb.pInitTable[gDsFlRecUsb.varCount].VarIndex_DataTypeId = VarIndex | (DataTypeId << DSFLREC_USB_DATA_TYPE_ID_SHIFT);

  /* set the variable name */
  /* the global memory does not allow one byte accesses, it is necessary to cast the char
   * array into an UInt16 array to set the variable name in the init table */

  VarNameTemp = (UInt16*) (gDsFlRecUsb.pInitTable[gDsFlRecUsb.varCount].VarName.name);

  while (VarName[CharArrayIndex] != '\0' && CharArrayIndex < DSFLREC_VAR_NAME_LENGHT - 1)
  {
    if (CharArrayIndex % 2 == 0)
    {
      /* get the first char of the variable name */
      VarNameTemp[UInt16ArrayIndex] =
            ((UInt16)VarName[CharArrayIndex] << OneByteShift) & FirstByteMask;
    }
    else
    {
      /* disjunction with the second char */
      VarNameTemp[UInt16ArrayIndex] = VarNameTemp[UInt16ArrayIndex] | VarName[CharArrayIndex];
      UInt16ArrayIndex++;
    }
    CharArrayIndex++;
  }

  /* append a terminating zero at the end of a variable name */
  if (CharArrayIndex % 2 == 0)
  {
    VarNameTemp[UInt16ArrayIndex] =
            ((UInt16)'\0' << OneByteShift) & FirstByteMask;
  }
  else
  {
    VarNameTemp[UInt16ArrayIndex] = VarNameTemp[UInt16ArrayIndex] | '\0';
  }

  /* increment the variable count */
  gDsFlRecUsb.varCount++;
  *pVarIndex = VarIndex;

  return DSFLREC_USB_NO_ERROR;
}


/** <!--------------------------------------------------------------------------------------------->
*   This function stores the data of a variable into the flight recorder data section.
*
*   @description
*     The data of a variable:
*
*     \li \c index
*     \li \c value \n \n
*     is written into the flight recorder data section.
*
*   @parameters
*     @param VarIndex    The name of the variable.
*     @param Value       The index of the variable.
*
*   @returns
*     \li \c DSFLREC_USB_NO_ERROR
*     \li \c DSFLREC_USB_DATA_SECTION_FULL
*
*<!---------------------------------------------------------------------------------------------->*/
Int16 dsflrec_usb_write_int32(UInt16 VarIndex, UInt32 Value)
{
  Int16 Error = DSFLREC_USB_NO_ERROR;

  Error = dsflrec_usb_write(VarIndex, &Value);
  return(Error);
}


/** <!--------------------------------------------------------------------------------------------->
*   This function stores the data of a variable into the flight recorder data section.
*
*   @description
*     The data of a variable:
*
*     \li \c index
*     \li \c value \n \n
*     is written into the flight recorder data section.
*
*   @parameters
*     @param VarIndex    The name of the variable.
*     @param Value       The index of the variable.
*
*   @returns
*     \li \c DSFLREC_USB_NO_ERROR
*     \li \c DSFLREC_USB_DATA_SECTION_FULL
*
*<!---------------------------------------------------------------------------------------------->*/
Int16 dsflrec_usb_write_float32(UInt16 VarIndex, Float32 Value)
{
  Int16 Error = DSFLREC_USB_NO_ERROR;

  Error = dsflrec_usb_write(VarIndex, (UInt32*) &Value);
  return(Error);
}


Int16 dsflrec_usb_write(UInt16 VarIndex, UInt32 *Value)
{
  Float64               CurrentTime;
  ts_timestamp_type     CurrentTimeStamp;
  dsflrec_data_struct   FlRecData;
  UInt32                recordsNeeded;

  // If Flight Recorder is not initialized or was already stopped
  // no (more) data will be written
  if( gDsFlRecUsb.state != DSFLREC_USB_STATE_RUNNING )
  {
      return DSFLREC_USB_NO_ERROR;
  }

  // Check if variable index is valid
  // :TODO: Bugfix: Eigentlich sollte count bis DSFLREC_USB_MAX_VAR_NUMBER laufen dürfen
  if (VarIndex > DSFLREC_USB_MAX_VAR_NUMBER)
  {
    msg_info_printf(MSG_SM_RTLIB, USB_FLREC_MSG_USB_VARIDX_WRONG, "USB Flight Recorder: The index = %d of the variable is invalid, has to be between 0 and %d!",
                    VarIndex,
                    DSFLREC_USB_MAX_VAR_NUMBER);
    return DSFLREC_USB_ILLEGAL_VARINDEX;
  }

  // Get current time and covert to time stamp which is relative to start time
  CurrentTime = ts_time_read();
  DSFLREC_USB_TIMESTAMP_CALC(CurrentTime, CurrentTimeStamp);
  // Berechne:  CurrentTimeStamp = CurrentTimeStamp - gDsFlRecUsb.tsOnInit
  DSFLREC_USB_TIMEDIFF_CALC(CurrentTimeStamp, CurrentTimeStamp, gDsFlRecUsb.tsOnInit);

  /* Check for time stamp overflow.  If yes, send overflow indication record */
  if ( (CurrentTimeStamp.mit - gDsFlRecUsb.tsLastOverflow.mit >= DSFLREC_USB_TB_OVERFLOW)
       ||
       (CurrentTimeStamp.mat > gDsFlRecUsb.tsLastOverflow.mat &&
        gDsFlRecUsb.tsLastOverflow.mit - CurrentTimeStamp.mit >= DSFLREC_USB_TB_OVERFLOW))
  {
    if (CurrentTimeStamp.mit >= DSFLREC_USB_TB_OVERFLOW)
    {
      gDsFlRecUsb.tsLastOverflow.mit = DSFLREC_USB_TB_OVERFLOW;
    }
    else
    {
      gDsFlRecUsb.tsLastOverflow.mit = 0;
    }

    gDsFlRecUsb.tsLastOverflow.mat = CurrentTimeStamp.mat;

    FlRecData.data          =   gDsFlRecUsb.tsLastOverflow.mat;
    FlRecData.varindex_time = ((gDsFlRecUsb.tsLastOverflow.mit & 0xFFFFFF00) >> 8) |
                              (UInt32) (DSFLREC_USB_TB_TIMESTAMP << DSFLREC_USB_VAR_INDEX_SHIFT);

    dsflrec_usb_fifo_write(gDsFlRecUsb.pFifo, 1, &FlRecData);
  }

  // Calculate number of records to write
  if( gDsFlRecUsb.failedWrites == 0 )
  {
      // No preivously failed write attempts:  Write data record only
      recordsNeeded = 1;
  }
  else
  {
      // A previous write attempt failed:  Write "DATA LOST" record and new data record
      recordsNeeded = 2;
  }

  // Check for ample space
  if( dsflrec_usb_fifo_free(gDsFlRecUsb.pFifo) < recordsNeeded )
  {
      gDsFlRecUsb.failedWrites++;
      return DSFLREC_USB_WRITE_FAILED;
  }

  // A previous write attempt failed:  Write "DATA LOST" record
  if( gDsFlRecUsb.failedWrites>0 )
  {
      FlRecData.data          = (gDsFlRecUsb.failedWrites >> 1) + 1 ;
      FlRecData.varindex_time = ((CurrentTimeStamp.mit >> 7) & 0x00FFFFFF) |
                                ((UInt32) (DSFLREC_USB_DATA_LOST_STAMP << DSFLREC_USB_VAR_INDEX_SHIFT)) ;
      dsflrec_usb_fifo_write(gDsFlRecUsb.pFifo, 1, &FlRecData);
      gDsFlRecUsb.failedWrites = 0;
  }

  // Store flight recorder data record
  FlRecData.data          = *Value;
  FlRecData.varindex_time = ((CurrentTimeStamp.mit >> 7) & 0x00FFFFFF) |
                            ((VarIndex & 0xFF) << DSFLREC_USB_VAR_INDEX_SHIFT);
  dsflrec_usb_fifo_write(gDsFlRecUsb.pFifo, 1, &FlRecData);

  return DSFLREC_USB_NO_ERROR;
}


/** <!--------------------------------------------------------------------------------------------->
*   USB flight recorder background function.
*
*   @description
*     This function must be called in the RTLib background.
*
*     The USB flight recorder background function repeately checks for a pending MABX shutdown
*     via "remote in"/KL15 signal.  If the flight recorder is active and if such an upcoming
*     shutdown is detected, the function will notify the HCN that the box is about to be switched off.
*     The HCN will then sync the USB file system and unmount the USB stick.
*
*   @parameters
*       None
*
*   @returns
*       Nothing
*<!---------------------------------------------------------------------------------------------->*/
void dsflrec_usb_background(void)
{
    if( gDsFlRecUsb.supportsShutdown )
    {
        switch( gDsFlRecUsb.state )
        {
        // If no flight recorder is active nothing needs to be done.
        case DSFLREC_USB_STATE_STOPPED:
            break;

        // If the flight recorder is active we need to check if a box shut down is pending.
        // If yes, we will notify the HCN so that it can properly unmount the USB device
        // in order to avoid any file system corruption. Our state will then be set
        // to "TERMINATING"
        case DSFLREC_USB_STATE_RUNNING:
            if( ds1401_remote_in_read() == SYS1401_REMOTE_IN_NOT_CONNECTED )
            {
                dsflrec_usb_shutdown_initiate();
            }
            break;

        // While "TERMINATING" we check if the HCN has completed its shutdown/unmount procedure
        // Once this is done, power hold mode will be released and the box will shut down.
        case DSFLREC_USB_STATE_TERMINATING:
            dsflrec_usb_shutdown_finalize();
            break;

        default:
            break;

        }
    }
}


/** <!--------------------------------------------------------------------------------------------->
*   USB flight recorder shutdown function.
*
*   @description
*     This function must be called in the RTLib termination logic.
*
*     The USB flight recorder background shutdown function will notify the HCN that
*     the box is about to be switched off. Th HCN will then sync the USB file system
*     and unmount the USB stick.  When this is done, the "power hold" mode if deactivated,
*     allowing the box to shut down power supply.
*
*   @parameters
*       None
*
*   @returns
*       Nothing
*<!---------------------------------------------------------------------------------------------->*/
static
int dsflrec_usb_shutdown_initiate(void)
{
    if( gDsFlRecUsb.state == DSFLREC_USB_STATE_RUNNING )
    {
        msg_info_printf( 0, USB_FLREC_MSG_BOX_SHUTDOWN, "USB Flight Recorder: Shutting down USB interface" );

        // Signal HCN that box must be shut down
        ds1401_cfg_section->__cfg_usb_shutdown_request = DSFLREC_USB_SHUTDOWN_REQ;

        // Shutdown procedure has a 10 second timeout
        ts_timestamp_read(&gDsFlRecUsb.tsShutdown);

        // Proceed to state "TERMINATING"
        gDsFlRecUsb.state = DSFLREC_USB_STATE_TERMINATING;
    }
    return 0;
}


/** <!--------------------------------------------------------------------------------------------->
*   USB flight recorder shutdown function.
*
*   @description
*     This function must be called in the RTLib termination logic.
*
*     The USB flight recorder background shutdown function will notify the HCN that
*     the box is about to be switched off. The HCN will then sync the USB file system
*     and unmount the USB stick.  When this is done, the "power hold" mode if deactivated,
*     allowing the box to shut down power supply.
*
*   @parameters
*       None
*
*   @returns
*       Nothing
*<!---------------------------------------------------------------------------------------------->*/
static
int dsflrec_usb_shutdown_finalize(void)
{
    ts_timestamp_type       tsCurrent;

    // We will wait at most DSFLREC_USB_SHUTDOWN_TIMEOUT seconds for the HCN
    // to acknowledge that the USB device has been successfully unmounted.
    // Once the acknowledge has been received or once the timeout occurs,
    // the box will be shut down.

    // Get current time stamp.
    ts_timestamp_read(&tsCurrent);

    // Check for ACK or timeout
    if(  ds1401_cfg_section->__cfg_usb_shutdown_request == DSFLREC_USB_SHUTDOWN_ACK
      || ts_timestamp_interval(&gDsFlRecUsb.tsShutdown, &tsCurrent) >= DSFLREC_USB_SHUTDOWN_TIMEOUT )
    {
        // Release power hold
        // MABX will shutdown now if "power hold" was exclusively activated by USB flight recorder
        // If "power hold" was also activated by RTI, MABX will shut down as soon as RTI has
        // release "power hold" mode as well.
        ds1401_power_hold_off_usb();

        // Switch off Flight Recording
        gDsFlRecUsb.state = DSFLREC_USB_STATE_TERMINATED;

        // Done.  Box will switch off in a few microseconds
        return 1;
    }
    else
    {
        return 0;
    }
}


/** <!--------------------------------------------------------------------------------------------->
*   USB flight recorder eject function.
*
*   @description
*     This function can be called to "manually" unmoun/eject the USB device
*     in order to safely remove it from the box.
*
*   @parameters
*       None
*
*   @returns
*       Nothing
*<!---------------------------------------------------------------------------------------------->*/
void dsflrec_usb_eject(void)
{
    ds1401_cfg_section->__cfg_usb_eject_request = DSFLREC_USB_EJECT_REQ;
}


/** <!--------------------------------------------------------------------------------------------->
 *   Check required HCN firmware version
 *
 *<!---------------------------------------------------------------------------------------------->*/
static int dsflrec_check_hcn_version(UInt8 minVersionMajor, UInt8 minVersionMinor )
{
    UInt8  hcnVersionMajor, hcnVersionMinor;
    UInt32 hcnVersion = * (UInt32*)DS1401_HOSTIF_FW_VERSION_REG;

    hcnVersionMajor       = (UInt8)(hcnVersion >> 16);
    hcnVersionMinor       = (UInt8)(hcnVersion >> 8);

    if( hcnVersionMajor > minVersionMajor )
    {
        return 0;
    }
    else if( hcnVersionMajor == minVersionMajor && hcnVersionMinor >= minVersionMinor )
    {
        return 0;
    }
    else
    {
        return -1;
    }
}


