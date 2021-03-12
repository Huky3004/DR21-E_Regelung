/*********************** dSPACE target specific file *************************

   Include file DR18E_Testpult_rti.c:

   Definition of functions and variables for the system I/O and for
   the hardware and software interrupts used.

   RTI1401 7.8 (02-May-2017)
   Sat Feb 23 14:54:45 2019

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

#if !(defined(__RTI_SIMENGINE__) || defined(RTIMP_FRAME))
# error This file may be included only by the RTI(-MP) simulation engine.
#endif

/* Include the model header file. */
#include "DR18E_Testpult.h"
#include "DR18E_Testpult_private.h"

/* Defines for block output and parameter structure existence */
#define RTI_rtB_STRUCTURE_EXISTS       1
#define RTI_rtP_STRUCTURE_EXISTS       1
#define RTB_STRUCTURE_NAME             DR18E_Testpult_B
#define RTP_STRUCTURE_NAME             DR18E_Testpult_P

/* dSPACE generated includes for header files */
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <dsflrecusb.h>
#include <rti_msg_access.h>
#include <rtiusbflightrec_msg.h>
#include <rtican_ds1401.h>
#ifndef dsRtmGetNumSampleTimes
# define dsRtmGetNumSampleTimes(rtm)   8
#endif

#ifndef dsRtmGetTPtr
# define dsRtmGetTPtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef dsRtmSetTaskTime
# define dsRtmSetTaskTime(rtm, sti, val) (dsRtmGetTPtr((rtm))[sti] = (val))
#endif

/****** Definitions: task functions for timer tasks *********************/

/* Timer Task 1. (Base rate). */
static void rti_TIMERA(rtk_p_task_control_block task)
{
  /* Task entry code BEGIN */
  /* -- None. -- */
  /* Task entry code END */

  /* Task code. */
  baseRateService(task);

  /* Task exit code BEGIN */
  /* -- None. -- */
  /* Task exit code END */
}

/* ===== Declarations of RTI blocks ======================================== */

/* dSPACE I/O Board DSUSBFLIGHTREC #1 */
UInt16 MSoll_Links_Index_UsbFlRec;
UInt16 MSoll_Rechts_Index_UsbFlRec;
UInt16 UBattZelle_all_Index_UsbFlRec;
UInt16 Gierrate_Index_UsbFlRec;
UInt16 UDC_HV_Index_UsbFlRec;
UInt16 Inverter1Temp_Index_UsbFlRec;
UInt16 MMotL_ist_Index_UsbFlRec;
UInt16 MotorLTemp_Index_UsbFlRec;
UInt16 MMotR_Ist_Index_UsbFlRec;
UInt16 Lenkwinkel_Index_UsbFlRec;
UInt16 KuehlwasserTemp_Index_UsbFlRec;
UInt16 UBatt_LV_Index_UsbFlRec;
UInt16 WaterPump_Index_UsbFlRec;
UInt16 WaterCooler_Index_UsbFlRec;
UInt16 oiltemp_Index_UsbFlRec;
UInt16 BremsdruckVorne_Index_UsbFlRec;
UInt16 BremsdruckHinten_Index_UsbFlRec;
UInt16 Bremse_bin_Index_UsbFlRec;
UInt16 M_max_pro_Mot_Nm_Index_UsbFlRec;
UInt16 Verbrauch_Whprokm_Index_UsbFlRec;
UInt16 PsiPunktSoll_Index_UsbFlRec;
UInt16 PsiPunktSoll2_Index_UsbFlRec;
UInt16 gas_plausibel_prozent_Index_UsbFlRec;
UInt16 gesamt_s_m_Index_UsbFlRec;
UInt16 v_kmh_Index_UsbFlRec;
UInt16 DrehzahlRL_rpm_Index_UsbFlRec;
UInt16 DrehzahlRR_rpm_Index_UsbFlRec;
UInt16 DrehzahlFR_rpm_Index_UsbFlRec;
UInt16 DrehzahlFL_rpm_Index_UsbFlRec;
UInt16 slip_links_0_1_Index_UsbFlRec;
UInt16 slip_rechts_0_1_Index_UsbFlRec;
UInt16 tages_s_m_Index_UsbFlRec;
UInt16 HV_current_A_Index_UsbFlRec;
UInt16 HV_voltage_V_Index_UsbFlRec;
UInt16 currentConsumption_As_Index_UsbFlRec;
UInt16 powerConsumption_Ws_Index_UsbFlRec;
UInt16 HV_power_W_Index_UsbFlRec;
UInt16 State_Index_UsbFlRec;
UInt16 ErrorNo_Index_UsbFlRec;

/* dSPACE I/O Board DS1_RTICAN #2 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M2_C1;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M2_C1[13];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_XTD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* dSPACE I/O Board DS1_RTICAN #1 */

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C1;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M1_C1[13];

/* ...  definition of channel struct */
can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  service variables for the RTICAN status block */
can_tp1_canService* can_type1_service_M1_C2[13];

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* declare pointers to CAN message structures for support of TX-Custom code */
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* ... definition of message variable for the RTICAN blocks */
can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* dSPACE I/O Board RTICAN_GLOBAL #0 */

/* ===== Definition of interface functions for simulation engine =========== */
#if GRTINTERFACE == 1
#ifdef MULTITASKING
# define dsIsSampleHit(RTM,sti)        rtmGetSampleHitPtr(RTM)[sti]
#else
# define dsIsSampleHit(RTM,sti)        rtmIsSampleHit(RTM,sti,0)
#endif

#else
#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

# define dsIsSampleHit(RTM,sti)        rtmStepTask(RTM, sti)
#endif

#undef __INLINE
#if defined(_INLINE)
# define __INLINE                      static inline
#else
# define __INLINE                      static
#endif

/*Define additional variables*/
static time_T dsTFinal = -1.0;

#define dsGetTFinal(rtm)               (dsTFinal)

static time_T dsStepSize = 0.001;

# define dsGetStepSize(rtm)            (dsStepSize)

static void rti_mdl_initialize_host_services(void)
{
  ts_timestamp_type ts = { 0, 0 };

  host_service(1, &ts);
  DsDaq_Init(0, 32, 1);
}

static void rti_mdl_initialize_io_boards(void)
{
  /* Registering of RTI products and modules at VCM */
  {
    vcm_module_register(VCM_MID_RTI1401, (void *) 0,
                        VCM_TXT_RTI1401, 7, 8, 0,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);

    {
      vcm_module_descriptor_type* msg_mod_ptr;
      msg_mod_ptr = vcm_module_register(VCM_MID_MATLAB, (void *) 0,
        VCM_TXT_MATLAB, 9, 2, 0,
        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_SIMULINK, msg_mod_ptr,
                          VCM_TXT_SIMULINK, 8, 9, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_RTW, msg_mod_ptr,
                          VCM_TXT_RTW, 8, 12, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW, msg_mod_ptr,
                          VCM_TXT_STATEFLOW, 8, 9, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
      vcm_module_register(VCM_MID_STATEFLOW_CODER, msg_mod_ptr,
                          VCM_TXT_STATEFLOW_CODER, 8, 12, 0,
                          VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
    }

    vcm_module_register(VCM_MID_RTICAN, (void *) 0,
                        VCM_TXT_RTICAN, 3, 4, 4,
                        VCM_VERSION_RELEASE, 0, 0, 0, VCM_CTRL_NO_ST);
  }

  /* dSPACE I/O Board DS1401STDDIOT3 #1 */
  /* main init for DIO TP3 module 1 */
  dio_tp3_init(DIO_TP3_1_MODULE_ADDR);

  /* dSPACE I/O Board DS1401STDDIOT3 #1 Unit:BITINCH */
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH7);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH1);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH11);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH2);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH6);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH4);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH5);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH8);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH9);
  dio_tp3_digin_init(DIO_TP3_1_MODULE_ADDR, 2, DIO_TP3_MASK_CH10);

  /* dSPACE I/O Board DS1401BASEII #1 Unit:NVRAM */
  ds1401_nvram_init();

  /* dSPACE I/O Board DSUSBFLIGHTREC #1 */
  {
    /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:SETUP */
    /* This part of code has been generated from the block: */
    /* USB device flight recorder initialization function */

    /* if not already done, initialize the USB device flight recorder */
    dsflrec_usb_initialize(0, RTI_USB_FLREC_DEFAULT_BLOCK_SIZE);
  }

  /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE */
  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "MSoll_Links_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&MSoll_Links_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "MSoll_Rechts_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&MSoll_Rechts_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "UBattZelle_all_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&UBattZelle_all_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "Gierrate_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&Gierrate_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "UDC_HV_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&UDC_HV_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "Inverter1Temp_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&Inverter1Temp_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "MMotL_ist_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&MMotL_ist_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "MotorLTemp_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&MotorLTemp_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "MMotR_Ist_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&MMotR_Ist_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "Lenkwinkel_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&Lenkwinkel_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "KuehlwasserTemp_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&KuehlwasserTemp_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "UBatt_LV_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&UBatt_LV_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "WaterPump_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&WaterPump_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "WaterCooler_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&WaterCooler_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "oiltemp_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&oiltemp_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "BremsdruckVorne_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&BremsdruckVorne_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "BremsdruckHinten_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&BremsdruckHinten_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "Bremse_bin_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&Bremse_bin_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "M_max_pro_Mot_Nm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&M_max_pro_Mot_Nm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "Verbrauch_Whprokm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&Verbrauch_Whprokm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "PsiPunktSoll_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&PsiPunktSoll_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "PsiPunktSoll2_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&PsiPunktSoll2_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "gas_plausibel_prozent_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&gas_plausibel_prozent_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "gesamt_s_m_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&gesamt_s_m_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "v_kmh_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&v_kmh_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "DrehzahlRL_rpm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&DrehzahlRL_rpm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "DrehzahlRR_rpm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&DrehzahlRR_rpm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "DrehzahlFR_rpm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&DrehzahlFR_rpm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "DrehzahlFL_rpm_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&DrehzahlFL_rpm_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "slip_links_0_1_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&slip_links_0_1_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "slip_rechts_0_1_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&slip_rechts_0_1_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "tages_s_m_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&tages_s_m_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "HV_current_A_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&HV_current_A_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "HV_voltage_V_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&HV_voltage_V_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "currentConsumption_As_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&currentConsumption_As_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "powerConsumption_Ws_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&powerConsumption_Ws_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "HV_power_W_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&HV_power_W_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "State_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&State_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  {
    /* dSPACE USB FLIGHT RECORDER WRITE */
    Int16 errorCode = 0;

    /* ----------------------------------------------------------------------  */
    /* |  prototype function                                                 | */
    /* ----------------------------------------------------------------------  */
    /* | Int16  dsflrec_usb_add_variable (char       *VarName,               | */
    /* |                                  UInt16    DataTypeId,              | */
    /* |                                  UInt16    *VarIndex);              | */
    /* ----------------------------------------------------------------------- */
    /* ----------------------------------------------------------------------- */
    char variable_name[]= "ErrorNo_UsbFlRec";
    errorCode = dsflrec_usb_add_variable(&variable_name[0],
      DSFLREC_DATA_TYPE_FLOAT32,&ErrorNo_Index_UsbFlRec);

#ifdef DEBUG_INIT

    if (errorCode == DSFLREC_USB_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI_USB_FLREC_VARIABLE_ERROR);

#endif

    if (errorCode == DSFLREC_USB_INIT_TABLE_FULL)
      rti_msg_error_set(RTI_USB_FLREC_INIT_TABLE_ERROR);
  }

  /* dSPACE I/O Board DS1401STDADCT4 #1 */
  adc_tp4_init(ADC_TP4_1_MODULE_ADDR);

  /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC */
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH5,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH6,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH1,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH2,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH3,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH4,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH7,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);
  adc_tp4_single_init2(ADC_TP4_1_MODULE_ADDR,
                       ADC_TP4_CH8,
                       ADC_TP4_INPUT_VOLTAGE_RANGE_1,
                       ADC_TP4_TRIG_SW,
                       0.0);

  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[1].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M2_C1 = can_tp1_channel_init(can_tp1_address_table[1].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M2_C1,
    CAN_TP1_TERMINATION_ON);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M2_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M2_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M2_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M2_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "SIG_FAN_HVBATTERY" Id:822 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 822, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_Brakelight" Id:805 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 4, 805, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_Buzzer" Id:803 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 4, 803, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_FAN" Id:807 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 807, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_Inverter_Enable" Id:804 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 4, 804, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_PRECHARGE" Id:818 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 818, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_PUMP" Id:808 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 808, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "SIG_SHUTDOWN" Id:817 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 817, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Car_State" Id:1637 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1637, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "DISP_Error_Code" Id:1638 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1638, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "LED_BAR" Id:1636 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1636, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Dashboard_LEDs" Id:788 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 4, 788, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "MOTOR_1_Temp" Id:1648 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1648, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "MOTOR_2_Temp" Id:1649 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1649, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "IGBT_1_Temp" Id:1650 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1650, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "IGBT_2_Temp" Id:1651 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 1651, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN TX Message Block: "Drive_Torque_Max" Id:819 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333] = can_tp1_msg_tx_register
    (can_type1_channel_M2_C1, 5, 819, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO), CAN_TP1_NO_SUBINT, 0,
     CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "HV_STK1A_Temp" Id:538 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 538, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK1B_Temp" Id:539 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 539, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK2A_Temp" Id:540 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 540, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK2B_Temp" Id:541 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 541, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK3A_Temp" Id:542 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 542, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK3B_Temp" Id:543 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 543, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK4A_Temp" Id:544 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 544, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK4B_Temp" Id:545 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 545, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK5A_Temp" Id:546 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 546, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK5B_Temp" Id:547 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 547, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK6A_Temp" Id:550 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 550, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK6B_Temp" Id:551 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 551, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK7A_Temp" Id:552 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 552, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK7B_Temp" Id:553 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 553, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK8A_Temp" Id:554 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 554, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK8B_Temp" Id:555 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 555, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK9A_Temp" Id:556 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 556, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK9B_Temp" Id:557 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 557, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK10A_Temp" Id:558 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 558, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK10B_Temp" Id:559 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 559, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Dashboard_Buttons" Id:787 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 787, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "BSPD_Status" Id:770 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 770, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "BOTS_Status" Id:771 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 771, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Dashboard_AUX" Id:786 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 786, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "ES_rear" Id:789 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 789, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_AMS_STATE" Id:368 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 368, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "CANIO_AUX" Id:809 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 5, 809, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Brake_Value" Id:290 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 290, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Sensor_Watertemp" Id:790 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 790, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Throttle" Id:289 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 289, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "RPM_Front" Id:291 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 291, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Steering" Id:416 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 416, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Yaw_Rate" Id:307 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 307, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Sensor_Current" Id:772 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 772, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GLV_AMS_STATe" Id:582 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 582, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK1A" Id:336 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 336, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK1B" Id:337 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 337, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK1C" Id:338 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 338, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK2A" Id:339 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 339, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK2B" Id:340 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 340, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK2C" Id:341 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 341, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK3A" Id:342 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 342, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK3B" Id:343 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 343, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK3C" Id:344 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 344, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK4A" Id:345 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 345, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK4B" Id:346 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 0, 346, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK4C" Id:347 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 347, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK5A" Id:348 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 348, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK5B" Id:349 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 349, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK5C" Id:350 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 350, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK6A" Id:351 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15F] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 351, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK6B" Id:352 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 352, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK6C" Id:353 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 353, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK7A" Id:354 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 354, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK7B" Id:355 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 355, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK7C" Id:356 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 356, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK8A" Id:357 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 357, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK8B" Id:358 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 358, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK8C" Id:359 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 359, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK9A" Id:360 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 360, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK9B" Id:361 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 1, 361, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK9C" Id:362 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 362, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK10A" Id:363 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 363, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK10B" Id:364 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 364, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_STK10C" Id:365 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 365, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Precharge_Status" Id:561 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 561, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "HV_MAXMIN" Id:366 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 2, 366, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "CANIO_Temperature" Id:806 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 5, 806, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GLV_Cells" Id:576 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 576, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GLV Temp_2" Id:580 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 580, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GLV Temp_3" Id:581 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 581, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "GLV_TEMP" Id:579 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 3, 579, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN RX Message Block: "Oiltemperature" Id:792 */
  /* ... Register message */
  can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318] = can_tp1_msg_rx_register
    (can_type1_channel_M2_C1, 4, 792, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M2_C1[CANTP1_M2_C1_Status] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M2_C1[CANTP1_M2_C1_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_AckErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M2_C1[CANTP1_M2_C1_RXLost] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M2_C1[CANTP1_M2_C1_DataLost] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M2_C1[CANTP1_M2_C1_RXOK] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M2_C1[CANTP1_M2_C1_TXOK] = can_tp1_service_register
    (can_type1_channel_M2_C1,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN RX Message Block: "HV_STK1A_Temp" Id:538 */
  DR18E_Testpult_B.SFunction1_o5 = 0;  /* processed - flag */
  DR18E_Testpult_B.SFunction1_o6 = 0;  /* timestamp */
  DR18E_Testpult_B.SFunction1_o7 = 0;  /* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK1B_Temp" Id:539 */
  DR18E_Testpult_B.SFunction1_o2_l = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_n = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_p = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK2A_Temp" Id:540 */
  DR18E_Testpult_B.SFunction1_o5_j = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_p = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_b = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK2B_Temp" Id:541 */
  DR18E_Testpult_B.SFunction1_o2_o = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_l = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_i = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK3A_Temp" Id:542 */
  DR18E_Testpult_B.SFunction1_o5_f = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_pf = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_a = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK3B_Temp" Id:543 */
  DR18E_Testpult_B.SFunction1_o2_h = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_h = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_l = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK4A_Temp" Id:544 */
  DR18E_Testpult_B.SFunction1_o5_m = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_d = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_af = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK4B_Temp" Id:545 */
  DR18E_Testpult_B.SFunction1_o2_a = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_i = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_k = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK5A_Temp" Id:546 */
  DR18E_Testpult_B.SFunction1_o5_g = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_a = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_n = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK5B_Temp" Id:547 */
  DR18E_Testpult_B.SFunction1_o2_e = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_a = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_d = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK6A_Temp" Id:550 */
  DR18E_Testpult_B.SFunction1_o5_mv = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_k = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_bx = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK6B_Temp" Id:551 */
  DR18E_Testpult_B.SFunction1_o2_hl = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_e3 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_a = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK7A_Temp" Id:552 */
  DR18E_Testpult_B.SFunction1_o5_o = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_f = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_n5 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK7B_Temp" Id:553 */
  DR18E_Testpult_B.SFunction1_o2_eo = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_f = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_lz = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK8A_Temp" Id:554 */
  DR18E_Testpult_B.SFunction1_o5_jq = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_kx = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_o = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK8B_Temp" Id:555 */
  DR18E_Testpult_B.SFunction1_o2_e3 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_ea = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_hb = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK9A_Temp" Id:556 */
  DR18E_Testpult_B.SFunction1_o5_l = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_d1 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_m = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK9B_Temp" Id:557 */
  DR18E_Testpult_B.SFunction1_o2_ho = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_lb = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_la = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK10A_Temp" Id:558 */
  DR18E_Testpult_B.SFunction1_o5_js = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_g = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_k = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK10B_Temp" Id:559 */
  DR18E_Testpult_B.SFunction1_o2_ew = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_ht = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_m = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Dashboard_Buttons" Id:787 */
  DR18E_Testpult_B.SFunction1_o2_ay = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_j = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_lu = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "BSPD_Status" Id:770 */
  DR18E_Testpult_B.SFunction1_o2_f5 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_gv = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_cb = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "BOTS_Status" Id:771 */
  DR18E_Testpult_B.SFunction1_o2_pb = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_k = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_f1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Dashboard_AUX" Id:786 */
  DR18E_Testpult_B.SFunction1_o3_ni = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_go = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_f4 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "ES_rear" Id:789 */
  DR18E_Testpult_B.SFunction1_o3_lo = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_e = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_jw = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_AMS_STATE" Id:368 */
  DR18E_Testpult_B.SFunction1_o8 = 0;  /* processed - flag */
  DR18E_Testpult_B.SFunction1_o9 = 0;  /* timestamp */
  DR18E_Testpult_B.SFunction1_o10 = 0; /* deltatime */

  /* dSPACE RTICAN RX Message Block: "CANIO_AUX" Id:809 */
  DR18E_Testpult_B.SFunction1_o5_e = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_o = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ap = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Brake_Value" Id:290 */
  DR18E_Testpult_B.SFunction1_o5_ag = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_j = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ne = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Sensor_Watertemp" Id:790 */
  DR18E_Testpult_B.SFunction1_o3_de3 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_l2 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_p = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Throttle" Id:289 */
  DR18E_Testpult_B.SFunction1_o5_b = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_kr = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_oo = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "RPM_Front" Id:291 */
  DR18E_Testpult_B.SFunction1_o3_ik = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_g2 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_c = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Steering" Id:416 */
  DR18E_Testpult_B.SFunction1_o2_ha = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_nx = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_kt = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Yaw_Rate" Id:307 */
  DR18E_Testpult_B.SFunction1_o3_fx = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_a1 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_f1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Sensor_Current" Id:772 */
  DR18E_Testpult_B.SFunction1_o2_n = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_h1j = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_j3 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GLV_AMS_STATe" Id:582 */
  DR18E_Testpult_B.SFunction1_o4_llh = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o5_l4 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o6_b = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK1A" Id:336 */
  DR18E_Testpult_B.SFunction1_o5_n = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_gp = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_g = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK1B" Id:337 */
  DR18E_Testpult_B.SFunction1_o5_lz = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_km = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_f = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK1C" Id:338 */
  DR18E_Testpult_B.SFunction1_o5_fc = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_p0 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_p = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK2A" Id:339 */
  DR18E_Testpult_B.SFunction1_o5_fb = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_n = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_hc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK2B" Id:340 */
  DR18E_Testpult_B.SFunction1_o5_e5 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_e = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_f1 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK2C" Id:341 */
  DR18E_Testpult_B.SFunction1_o5_na = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_av = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_mh = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK3A" Id:342 */
  DR18E_Testpult_B.SFunction1_o5_h = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_ns = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_nj = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK3B" Id:343 */
  DR18E_Testpult_B.SFunction1_o5_ne = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_c = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_j = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK3C" Id:344 */
  DR18E_Testpult_B.SFunction1_o5_g0 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_an = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ps = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK4A" Id:345 */
  DR18E_Testpult_B.SFunction1_o5_gm = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_l = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_gc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK4B" Id:346 */
  DR18E_Testpult_B.SFunction1_o5_j1 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_j1 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_kr = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK4C" Id:347 */
  DR18E_Testpult_B.SFunction1_o5_nr = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_c5 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_bu = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK5A" Id:348 */
  DR18E_Testpult_B.SFunction1_o5_ms = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_p2 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_e = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK5B" Id:349 */
  DR18E_Testpult_B.SFunction1_o5_es = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_ez = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_i = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK5C" Id:350 */
  DR18E_Testpult_B.SFunction1_o5_d = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_h = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_j5 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK6A" Id:351 */
  DR18E_Testpult_B.SFunction1_o5_ex = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_dj = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_g3 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK6B" Id:352 */
  DR18E_Testpult_B.SFunction1_o5_esb = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_p4 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_c = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK6C" Id:353 */
  DR18E_Testpult_B.SFunction1_o5_mxp = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_kz = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_me = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK7A" Id:354 */
  DR18E_Testpult_B.SFunction1_o5_pq = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_jj = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_jz = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK7B" Id:355 */
  DR18E_Testpult_B.SFunction1_o5_nm = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_m = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ha = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK7C" Id:356 */
  DR18E_Testpult_B.SFunction1_o5_em = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_bd = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_oi = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK8A" Id:357 */
  DR18E_Testpult_B.SFunction1_o5_al = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_oh = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ng = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK8B" Id:358 */
  DR18E_Testpult_B.SFunction1_o5_j3 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_mp = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_cd = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK8C" Id:359 */
  DR18E_Testpult_B.SFunction1_o5_of = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_et = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_l = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK9A" Id:360 */
  DR18E_Testpult_B.SFunction1_o5_jj = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_c0 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_j0 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK9B" Id:361 */
  DR18E_Testpult_B.SFunction1_o5_as = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_a1 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_ou = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK9C" Id:362 */
  DR18E_Testpult_B.SFunction1_o5_cl = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_od = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_cz = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK10A" Id:363 */
  DR18E_Testpult_B.SFunction1_o5_jd = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_lx = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_d = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK10B" Id:364 */
  DR18E_Testpult_B.SFunction1_o5_nrg = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_dr = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_p3 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_STK10C" Id:365 */
  DR18E_Testpult_B.SFunction1_o5_od = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_gf = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_go = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Precharge_Status" Id:561 */
  DR18E_Testpult_B.SFunction1_o2_m0 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_dp = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_od = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "HV_MAXMIN" Id:366 */
  DR18E_Testpult_B.SFunction1_o3_g0 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_nj = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_gg = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "CANIO_Temperature" Id:806 */
  DR18E_Testpult_B.SFunction1_o2_hx = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_mj = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_nb = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GLV_Cells" Id:576 */
  DR18E_Testpult_B.SFunction1_o5_dj = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_ka = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_cr = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GLV Temp_2" Id:580 */
  DR18E_Testpult_B.SFunction1_o5_bw = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_n5 = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_kc = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GLV Temp_3" Id:581 */
  DR18E_Testpult_B.SFunction1_o5_ps = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_gs = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_e4 = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "GLV_TEMP" Id:579 */
  DR18E_Testpult_B.SFunction1_o5_ci = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o6_pum = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o7_db = 0;/* deltatime */

  /* dSPACE RTICAN RX Message Block: "Oiltemperature" Id:792 */
  DR18E_Testpult_B.SFunction1_o2_i4 = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o3_jl = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o4_lg = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "MOTOR_1_Temp" Id:1648 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_dv = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_cb = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_jd = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "MOTOR_2_Temp" Id:1649 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_hz = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_b = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_bt = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "IGBT_1_Temp" Id:1650 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_co = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_fk = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_o = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "IGBT_2_Temp" Id:1651 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_fj = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_j = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_h4 = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "Drive_Torque_Max" Id:819 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_g3 = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_ef = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_ka = 0;/* deltatime */
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Initialization of DS1501 board */
  can_tp1_communication_init(can_tp1_address_table[0].module_addr,
    CAN_TP1_INT_ENABLE);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C1 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 0, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C1,
    CAN_TP1_TERMINATION_OFF);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C1_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C1_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C1, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:257 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C1, 0, 257, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "INV_1_Recieve" Id:273 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C1, 2, 273, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M1_C1[CANTP1_M1_C1_Status] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M1_C1[CANTP1_M1_C1_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_AckErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M1_C1[CANTP1_M1_C1_RXLost] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M1_C1[CANTP1_M1_C1_DataLost] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M1_C1[CANTP1_M1_C1_RXOK] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M1_C1[CANTP1_M1_C1_TXOK] = can_tp1_service_register
    (can_type1_channel_M1_C1,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the CAN communication: 500 kbit/s */
  can_type1_channel_M1_C2 = can_tp1_channel_init(can_tp1_address_table[0].
    module_addr, 1, (500 * 1000), CAN_TP1_STD, CAN_TP1_NO_SUBINT);
  can_tp1_channel_termination_set(can_type1_channel_M1_C2,
    CAN_TP1_TERMINATION_OFF);

  /* ... Initialize TX message structs for custom code  */
  CANTP1_TX_SPMSG_M1_C2_STD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1050, CAN_TP1_STD, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);
  CANTP1_TX_SPMSG_M1_C2_XTD = can_tp1_msg_tx_register(can_type1_channel_M1_C2, 3,
    1100, CAN_TP1_EXT, CAN_TP1_TIMECOUNT_INFO | CAN_TP1_DELAYCOUNT_INFO |
    CAN_TP1_MSG_INFO, CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG,
    CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN MASTER SETUP Block */
  /* ... Initialize the Partial Networking Settings */

  /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:258 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102] = can_tp1_msg_tx_register
    (can_type1_channel_M1_C2, 1, 258, CAN_TP1_STD, (CAN_TP1_TIMECOUNT_INFO|
      CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_DELAYCOUNT_INFO),
     CAN_TP1_NO_SUBINT, 0, CAN_TP1_TRIGGER_MSG, CAN_TP1_TIMEOUT_NORMAL);

  /* dSPACE RTICAN RX Message Block: "INV_2_Recieve" Id:274 */
  /* ... Register message */
  can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112] = can_tp1_msg_rx_register
    (can_type1_channel_M1_C2, 3, 274, CAN_TP1_STD, (CAN_TP1_DATA_INFO|
      CAN_TP1_DATA_INFO|CAN_TP1_TIMECOUNT_INFO|CAN_TP1_TIMECOUNT_INFO),
     CAN_TP1_NO_SUBINT);

  /* dSPACE RTICAN Status block */
  /* ... Register employed functions */
  can_type1_service_M1_C2[CANTP1_M1_C2_Status] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BUSSTATUS);
  can_type1_service_M1_C2[CANTP1_M1_C2_StuffErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_STUFFBIT_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_FormatErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_FORM_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_AckErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_ACK_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_Bit0Errors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BIT0_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_Bit1Errors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_BIT1_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_CRCErrors] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_CRC_ERR);
  can_type1_service_M1_C2[CANTP1_M1_C2_RXLost] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_RX_LOST);
  can_type1_service_M1_C2[CANTP1_M1_C2_DataLost] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_DATA_LOST);
  can_type1_service_M1_C2[CANTP1_M1_C2_RXOK] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_RX_OK);
  can_type1_service_M1_C2[CANTP1_M1_C2_TXOK] = can_tp1_service_register
    (can_type1_channel_M1_C2,CAN_TP1_SERVICE_TX_OK);

  /* dSPACE RTICAN RX Message Block: "INV_1_Recieve" Id:273 */
  DR18E_Testpult_B.SFunction1_o4_dc = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o5_a = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o6_pu = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:257 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp > 0.0) {
  }

  /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:257 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_e5n = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_bs = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_nwq = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:257 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_h2 = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_ai = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_cl = 0;/* deltatime */
    DR18E_Testpult_B.SFunction1_o4_p2 = 0;/* delaytime */
  }

  /* dSPACE RTICAN RX Message Block: "INV_2_Recieve" Id:274 */
  DR18E_Testpult_B.SFunction1_o3_b = 0;/* processed - flag */
  DR18E_Testpult_B.SFunction1_o4_pa = 0;/* timestamp */
  DR18E_Testpult_B.SFunction1_o5_mx = 0;/* deltatime */

  /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:258 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp > 0.0) {
  }

  /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:258 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_cc = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_ae = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_ej = 0;/* deltatime */
  }

  /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:258 */
  /* Messages with timestamp zero have been received in pause/stop state
     and must not be handled.
   */
  if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp > 0.0) {
    DR18E_Testpult_B.SFunction1_o1_pw = 0;/* processed - flag */
    DR18E_Testpult_B.SFunction1_o2_pk = 0;/* timestamp */
    DR18E_Testpult_B.SFunction1_o3_ii = 0;/* deltatime */
    DR18E_Testpult_B.SFunction1_o4_acu = 0;/* delaytime */
  }

  /* dSPACE I/O Board RTICAN_GLOBAL #0 */
}

/* Function rti_mdl_slave_load() is empty */
#define rti_mdl_slave_load()

/* Function rti_mdl_rtk_initialize() is empty */
#define rti_mdl_rtk_initialize()

static void rti_mdl_initialize_io_units(void)
{
  /* dSPACE I/O Board DS1_RTICAN #2 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M2_C1, CAN_TP1_INT_ENABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(1);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[1].module_addr);

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][0] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15F])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][1] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][2] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][5] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][3] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[1][4] = can_tp1_msg_wakeup
              (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C1, CAN_TP1_INT_ENABLE);

  /* Start CAN controller */
  can_tp1_channel_start(can_type1_channel_M1_C2, CAN_TP1_INT_ENABLE);

  /* Set the type1CAN error level */
  rtican_type1_error_level = 0;

  /* ... Reset all taskqueue-specific error variables */
  rtican_type1_tq_err_all_reset(0);

  /* ... Clear all message data buffers */
  can_tp1_all_data_clear(can_tp1_address_table[0].module_addr);

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][0] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][2] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][1] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }

  {
    static UInt32 numInit = 0;
    if (numInit != 0) {
      /* ... Wake message up */
      while ((rtican_type1_tq_error[0][3] = can_tp1_msg_wakeup
              (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112])) ==
             DSMCOM_BUFFER_OVERFLOW) ;
    }

    ++numInit;
  }
}

/* Function rti_mdl_acknowledge_interrupts() is empty */
#define rti_mdl_acknowledge_interrupts()

/* Function rti_mdl_timetables_register() is empty */
#define rti_mdl_timetables_register()

/* Function rti_mdl_timesync_simstate() is empty */
#define rti_mdl_timesync_simstate()

/* Function rti_mdl_timesync_baserate() is empty */
#define rti_mdl_timesync_baserate()

static void rti_mdl_background(void)
{
  /* DsDaq background call */
  DsDaq_Background(0);

  /* dSPACE I/O Board DS1_RTICAN #2 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[1].module_addr, 1);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 2) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
  }

  /* dSPACE I/O Board DS1_RTICAN #1 */
  {
    real_T bg_code_exec_time;
    static real_T bg_code_last_exec_time = 0.0;
    bg_code_exec_time = RTLIB_TIC_READ();
    if ((bg_code_exec_time - bg_code_last_exec_time) > 0.25 ||
        (bg_code_exec_time - bg_code_last_exec_time) < 0) {
      /* ... Check taskqueue-specific error variables */
      rtican_type1_tq_err_all_chk(can_tp1_address_table[0].module_addr, 0);
      bg_code_last_exec_time = bg_code_exec_time;
    }
  }

  /* copy DPMEM - buffers in background */
  {
    /* call update function for CAN Tp1 CAN interface (module number: 1) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);
  }
}

__INLINE void rti_mdl_sample_input(void)
{
  /* Calls for base sample time: [0.001, 0] */
  /* dSPACE I/O Board DS1401STDDIOT3 #1 Unit:BITINCH */
  {
    /* get digital signal state on channel 7 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH7);
    DR18E_Testpult_B.SFunction1_bo = (boolean_T) (inputValue >> (7 - 1));
  }

  {
    /* get digital signal state on channel 1 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH1);
    DR18E_Testpult_B.SFunction1_bk = (boolean_T) (inputValue >> (1 - 1));
  }

  {
    /* get digital signal state on channel 11 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH11);
    DR18E_Testpult_B.SFunction1_by = (boolean_T) (inputValue >> (11 - 1));
  }

  {
    /* get digital signal state on channel 2 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH2);
    DR18E_Testpult_B.SFunction1_is = (boolean_T) (inputValue >> (2 - 1));
  }

  {
    /* get digital signal state on channel 6 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH6);
    DR18E_Testpult_B.SFunction1_ih = (boolean_T) (inputValue >> (6 - 1));
  }

  {
    /* get digital signal state on channel 4 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH4);
    DR18E_Testpult_B.SFunction1_bn = (boolean_T) (inputValue >> (4 - 1));
  }

  {
    /* get digital signal state on channel 5 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH5);
    DR18E_Testpult_B.SFunction1_n = (boolean_T) (inputValue >> (5 - 1));
  }

  {
    /* get digital signal state on channel 8 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH8);
    DR18E_Testpult_B.SFunction1_j = (boolean_T) (inputValue >> (8 - 1));
  }

  {
    /* get digital signal state on channel 9 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH9);
    DR18E_Testpult_B.SFunction1_h = (boolean_T) (inputValue >> (9 - 1));
  }

  {
    /* get digital signal state on channel 10 on port 2 */
    UInt16 inputValue = dio_tp3_digin_read(DIO_TP3_1_MODULE_ADDR, 2,
      DIO_TP3_MASK_CH10);
    DR18E_Testpult_B.SFunction1_c = (boolean_T) (inputValue >> (10 - 1));
  }

  /* dSPACE I/O Board DS1401BASEII #1 Unit:NVRAM */
  {
    /* read from NV_RAM*/
    ds1401_nvram_read(4U, 2, (uint16_T*)&DR18E_Testpult_B.SFunction1_dy);
  }

  {
    /* read from NV_RAM*/
    ds1401_nvram_read(1U, 2, (uint16_T*)&DR18E_Testpult_B.SFunction1_a);
  }

  {
    /* read from NV_RAM*/
    ds1401_nvram_read(10U, 4, (uint32_T*)&DR18E_Testpult_B.SFunction1_k);
  }

  /* dSPACE I/O Board DS1_RTICAN #2 Unit:DEFAULT */
  /* call update function for CAN Tp1 CAN interface (module number: 2) */
  can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);

  /* dSPACE I/O Board DS1_RTICAN #1 Unit:DEFAULT */
  /* call update function for CAN Tp1 CAN interface (module number: 1) */
  can_tp1_msg_copy_all_to_mem(can_tp1_address_table[0].module_addr);

  /* Calls for sample time: [0.05, 0.0] */
  if (dsIsSampleHit(DR18E_Testpult_M, 3)) {
    /* dSPACE I/O Board DS1_RTICAN #2 Unit:DEFAULT */
    /* call update function for CAN Tp1 CAN interface (module number: 2) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
  }

  /* Calls for sample time: [0.1, 0.0] */
  if (dsIsSampleHit(DR18E_Testpult_M, 4)) {
    /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC */

    /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
    adc_tp4_sw_trigger(ADC_TP4_1_MODULE_ADDR, ADC_TP4_CONV_START_5|
                       ADC_TP4_CONV_START_6|ADC_TP4_CONV_START_1|
                       ADC_TP4_CONV_START_2|ADC_TP4_CONV_START_3|
                       ADC_TP4_CONV_START_4|ADC_TP4_CONV_START_7|
                       ADC_TP4_CONV_START_8);
  }

  /* Calls for sample time: [1.0, 0.0] */
  if (dsIsSampleHit(DR18E_Testpult_M, 7)) {
    /* dSPACE I/O Board DS1_RTICAN #2 Unit:DEFAULT */
    /* call update function for CAN Tp1 CAN interface (module number: 2) */
    can_tp1_msg_copy_all_to_mem(can_tp1_address_table[1].module_addr);
  }
}

static void rti_mdl_daq_service()
{
  /* dSPACE Host Service */
  host_service(1, rtk_current_task_absolute_time_ptr_get());
  DsDaq_Service(0, 0, 1, (DsDaqSTimestampStruct *)
                rtk_current_task_absolute_time_ptr_get());
}

#undef __INLINE

/****** [EOF] ****************************************************************/
