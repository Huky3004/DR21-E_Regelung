/*************************************************************************
  FILE:
    ds1401rec_int32.c

  DESCRIPTION:
    Level-2 S-function for the flight recorder of the DS1401. Stores the
    data to be recorded as int32.

    Syntax: [sys, x0] = ds1401rec_int32(t, x, u, ...
                                         VarName, ...
                                         BufferOverrunMode, ...
                                         DataType, ...
                                         SampleTime);


    input variables

        RecData

    parameters:

        VarName                 Name for upload of recorded data
        BufferOverrunMode       Reaction on buffer overrun (Discard new data / FIFO)
        DataType                Type data should be stored in (int8, uint8, int16, uint16, int32, uint32)
        SampleTime              The sample time of the block

  AUTHOR(S):
    G. Aakolk

  Copyright (c) 1999-2000 dSPACE GmbH, GERMANY

  $RCSfile: ds1401rec_int32.c $ $Revision: 2.1 $ $Date: 2010/12/03 10:14:52CET $
  $ProjectName: e:/ARC/Products/ImplSW/RTISW/RTI/Components/RTI1xxxBlocks/DS1401/Base/REC/project.pj $
 *************************************************************************/

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME  ds1401rec_int32

#include "simstruc.h"

#ifndef MATLAB_MEX_FILE
# include <brtenv.h>
# include <rti1401_msg.h>
# include <rti_msg_access.h>
# include <rti_common_msg.h>
#endif

#ifdef MATALB_MEX_FILE
  static char *RCSfile = "$RCSfile: ds1401rec_int32.c $";
  static char *RCSrev  = "$Revision: 2.1 $";
  static char *RCSdate = "$Date: 2010/12/03 10:14:52CET $";
#endif

/* SL/RTI specific defines */
#define NUM_PARAM                       (4)
#define VAR_NAME_NO_IDX                 (0)
#define VAR_NAME_NO_MX_ARRAY            (ssGetSFcnParam(S, VAR_NAME_NO_IDX))
#define BUFFER_OVERRUN_MODE_IDX         (1)
#define BUFFER_OVERRUN_MODE_PTR         (mxGetPr(ssGetSFcnParam(S, BUFFER_OVERRUN_MODE_IDX)))
#define INPUT_PORT_DATA_TYPE_IDX        (2)
#define INPUT_PORT_DATA_TYPE            (ssGetSFcnParam(S, INPUT_PORT_DATA_TYPE_IDX))
#define SAMPLE_TIME_NO_IDX              (3)
#define SAMPLE_TIME_NO_PTR              (mxGetPr(ssGetSFcnParam(S, SAMPLE_TIME_NO_IDX)))

#define PARAM_NOT_TUNABLE_SIZE          (4)
#define PARAM_NOT_TUNABLE               {VAR_NAME_NO_IDX, BUFFER_OVERRUN_MODE_IDX, INPUT_PORT_DATA_TYPE_IDX,\
                                         SAMPLE_TIME_NO_IDX}
#define IDX_IWORK_VARIDX                (0)
#define IDX_IWORK_DATATYPE              (1)

#define NUM_INPUT_PORT                  (1)
#define IDX_INPUT_PORT_POSITION         (0)
#define INPUT_PORT_WIDTH                (1)
#define INPUT_PORT_DIRECT_FEEDTHROUGH   (1)
#define NUM_CONTINOUS_STATE             (0)
#define NUM_DISCRETE_STATE              (0)
#define NUM_OUTPUT_PORT                 (0)
#define OUTPUT_PORT_WIDTH               (0)


#define NUM_RWORK                       (0)
#define NUM_IWORK                       (2)
#define NUM_PWORK                       (0)

/* Parameters which should not be changed */
#define NUM_SAMPLE_TIME                 (1)
#define NUM_MODE                        (0)
#define NUM_NONSAMPLED_ZC               (0)


#ifndef VAR_BUFFERLEN
# define VAR_BUFFERLEN                  (80)
#endif

/* CRT specific parameters */
#ifndef MATLAB_MEX_FILE
# define BUFFER_MODES {DSFLREC_MODE_BLOCKED, DSFLREC_MODE_OVERWRITE}
#endif


/* Prototypes of local functions */
static int_T FcnSetDataType(DTypeId *dtype, const char* strbuffer);
#ifndef MATLAB_MEX_FILE
static int_T FcnGetDataTypeId(uint16_T *dataTypeId, const char* strbuffer);
static int_T FcnCastDataType(int_T dataType, void **indata, UInt32 *outdata);
#endif

static void mdlInitializeSizes(SimStruct *S)
{
#ifdef MATLAB_MEX_FILE
  int_T i;

#  if PARAM_NOT_TUNABLE_SIZE == 0
#  elif PARAM_NOT_TUNABLE_SIZE == 1
    ssSetSFcnParamTunable(S, PARAM_NOT_TUNABLE, SS_PRM_NOT_TUNABLE);
#  else
    const int_T ParamNotTunable[] = PARAM_NOT_TUNABLE;

    for (i = 0; i < PARAM_NOT_TUNABLE_SIZE; i++)
      ssSetSFcnParamTunable(S, ParamNotTunable[i], SS_PRM_NOT_TUNABLE);
#  endif
#endif


  ssSetNumSFcnParams(S, NUM_PARAM);
  if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S))
  {
#   ifndef MATLAB_MEX_FILE
       rti_msg_error_set(RTI_SFUNCTION_PARAM_ERROR);
#   endif
    return;
  }

  ssSetNumContStates(S, NUM_CONTINOUS_STATE);
  ssSetNumDiscStates(S, NUM_DISCRETE_STATE);

  if (!ssSetNumInputPorts(S, NUM_INPUT_PORT))
    return;

#if NUM_INPUT_PORT == 0
#elif NUM_INPUT_PORT == 1
  ssSetInputPortWidth(S, 0, INPUT_PORT_WIDTH);
  ssSetInputPortDirectFeedThrough(S, 0, INPUT_PORT_DIRECT_FEEDTHROUGH);
#else
{
  const int_T InputPortWidth[]              = INPUT_PORT_WIDTH;
  const int_T InputPortDirectFeedthrough[]  = INPUT_PORT_DIRECT_FEEDTHROUGH;
  int_T       i;

  for (i = 0; i < NUM_INPUT_PORT; i++)
  {
    ssSetInputPortWidth(S, i, InputPortWidth[i]);
    ssSetInputPortDirectFeedThrough(S, i, InputPortDirectFeedthrough[i]);
  }
}
#endif

  if (!ssSetNumOutputPorts(S, NUM_OUTPUT_PORT))
    return;

#if NUM_OUTPUT_PORT == 0
#elif (NUM_OUTPUT_PORT == 1)
  ssSetOutputPortWidth(S, 0, OUTPUT_PORT_WIDTH);
#elif (NUM_OUTPUT_PORT > 1)
{
  const int_T OutputPortWidth[] = OUTPUT_PORT_WIDTH;

  for (i = 0; i < NUM_OUTPUT_PORT; i++)
    ssSetOutputPortWidth(S, i, OutputPortWidth[i]);
}
#endif

  ssSetNumSampleTimes(S, NUM_SAMPLE_TIME);
  ssSetNumRWork(S, NUM_RWORK);
  ssSetNumIWork(S, NUM_IWORK);
  ssSetNumPWork(S, NUM_PWORK);
  ssSetNumModes(S, NUM_MODE);
  ssSetNumNonsampledZCs(S, NUM_NONSAMPLED_ZC);
  ssSetOptions(S, SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME);

  /* set input port data type */
  {
    DTypeId dtype;
    char    dtypeName[VAR_BUFFERLEN];

    mxGetString(INPUT_PORT_DATA_TYPE, dtypeName, VAR_BUFFERLEN);
    if (FcnSetDataType(&dtype, dtypeName))
    {
      ssSetErrorStatus(S, "Invalid port data type !");
    }
    else
    {
      ssSetInputPortDataType(S, 0, dtype);
    }
  }

}

static void mdlInitializeSampleTimes(SimStruct *S)
{
  real_T  sampleTime = (real_T) SAMPLE_TIME_NO_PTR[0];

  /* set sample time from parameter list */
  if (sampleTime == -1.0)          /* inherited */
  {
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);
  }
  else if ((sampleTime == 0.0))    /* continuous */
  {
    ssSetSampleTime(S, 0, CONTINUOUS_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);
  }
  else                           /* discrete */
  {
    ssSetSampleTime(S, 0, sampleTime);
    ssSetOffsetTime(S, 0, 0.0);
  }
}


#define MDL_INITIALIZE_CONDITIONS
#if defined(MDL_INITIALIZE_CONDITIONS)
static void mdlInitializeConditions(SimStruct *S)
{
# ifndef MATLAB_MEX_FILE
    Int16  errorCode = DS1401_NO_ERROR;
    char   varName[VAR_BUFFERLEN];
    char   dtypeName[VAR_BUFFERLEN];
    UInt16 varIndex;
    UInt16 dataTypeId;

    mxGetString(VAR_NAME_NO_MX_ARRAY, varName, VAR_BUFFERLEN);
    mxGetString(INPUT_PORT_DATA_TYPE, dtypeName, VAR_BUFFERLEN);

    /* Get Flight recorder data type id */
    if (FcnGetDataTypeId(&dataTypeId, dtypeName))
    {
      rti_msg_error_set(RTI1401_FR_DTYPE_ERROR);
      return;
    }
    /* Store variable type (needed for typecast in mdlOutputs) */
    ssSetIWorkValue(S, IDX_IWORK_DATATYPE, dataTypeId);
    /* Write variable name and store variable index */
    errorCode = dsflrec_add_variable(varName, dataTypeId, &varIndex);
    ssSetIWorkValue(S, IDX_IWORK_VARIDX, varIndex);

#  ifdef DEBUG_INIT
    if (errorCode == DS1401_VAR_ALREADY_EXIST)
      rti_msg_info_set(RTI1401_FR_VARIABLE_ERROR);
#  endif

    if (errorCode == DS1401_INIT_TABLE_FULL)
      rti_msg_error_set(RTI1401_FR_INIT_TABLE_ERROR);

# endif
}
#endif


#define MDL_START
#if defined(MDL_START)
static void mdlStart(SimStruct *S)
{
#ifndef MATLAB_MEX_FILE
  UInt16 bufferModes[] = BUFFER_MODES;
  int_T  bufferMode    = BUFFER_OVERRUN_MODE_PTR[0];

  /* Initialize flight recorder */
  dsflrec_init(bufferModes[bufferMode]);

#endif
}
#endif


static void mdlOutputs(SimStruct *S, int_T tid)
{
#ifndef MATLAB_MEX_FILE
  InputPtrsType       uPtrs = ssGetInputPortSignalPtrs(S,IDX_INPUT_PORT_POSITION);
  UInt32              tempU;

# ifdef DEBUG_POLL
    Int16             errorCode = DS1401_NO_ERROR;

    /* Convert data to type UInt32 */
    FcnCastDataType(ssGetIWorkValue(S, IDX_IWORK_DATATYPE), uPtrs, &tempU);
    errorCode = dsflrec_write_int32(ssGetIWorkValue(S, IDX_IWORK_VARIDX), tempU);
    switch (errorCode)
    {
      case DS1401_DATA_SECTION_FULL:
        rti_msg_error_set(RTI1401_FR_DATA_SECTION_ERROR);
        break;
      case DS1401_FLASH_ERROR:
        rti_msg_error_set(RTI1401_FR_FLASH_ERROR);
        break;
      default:
        break;
    }
# else
    FcnCastDataType(ssGetIWorkValue(S, IDX_IWORK_DATATYPE), (void **)uPtrs, &tempU);
    dsflrec_write_int32(ssGetIWorkValue(S, IDX_IWORK_VARIDX), tempU);
# endif
#endif
}


#undef MDL_UPDATE
#if defined(MDL_UPDATE)
static void mdlUpdate(SimStruct *S, int_T tid)
{
}
#endif


#undef MDL_DERIVATIVES
#if defined(MDL_DERIVATIVES)
static void mdlDerivatives(SimStruct *S)
{
}
#endif


static void mdlTerminate(SimStruct *S)
{
}

#undef MDL_RTW
#if defined(MDL_RTW) && (defined(MATLAB_MEX_FILE) || defined(NRT))
static void mdlRTW(SimStruct *S)
{
}
#endif

/******************************************************************************
*  Function : FcnSetDataType(DTypeId* dtype, const char* strbuffer)           *
*                                                                             *
* Arguments:                                                                  *
*           dtype        : The data type is written to dtype                  *
*           strbuffer    : Name of the data type                              *
* Return:                                                                     *
*           1: Name of data type does not exist                               *
*           0: No error                                                       *
******************************************************************************/
static int_T FcnSetDataType(DTypeId *dtype, const char* strbuffer)
{
  if(!strcmp(strbuffer,"double"))
    *dtype = SS_DOUBLE;
  else if(!strcmp(strbuffer,"single"))
    *dtype = SS_SINGLE;
  else if(!strcmp(strbuffer,"int32"))
    *dtype = SS_INT32;
  else if(!strcmp(strbuffer,"int16"))
    *dtype = SS_INT16;
  else if(!strcmp(strbuffer,"int8"))
    *dtype = SS_INT8;
  else if(!strcmp(strbuffer,"uint32"))
    *dtype = SS_UINT32;
  else if(!strcmp(strbuffer,"uint16"))
    *dtype = SS_UINT16;
  else if(!strcmp(strbuffer,"uint8"))
    *dtype = SS_UINT8;
  else if(!strcmp(strbuffer,"boolean"))
    *dtype = SS_BOOLEAN;
  else if(!strcmp(strbuffer,"dynamicallytyped"))
    *dtype = DYNAMICALLY_TYPED;
  else
    return 1;
  return 0;
}

#ifndef  MATLAB_MEX_FILE
/******************************************************************************
*  Function : FcnGetDataTypeId(uint16_T *dataTypeId, const char* strbuffer)   *
*                                                                             *
* Arguments:                                                                  *
*           dataTypeId   : The data type identifier is written to dataTypeId  *
*           strbuffer    : Name of the data type                              *
* Return:                                                                     *
*           1: No data type identifier for this data type                     *
*           0: No error                                                       *
******************************************************************************/

static int_T FcnGetDataTypeId(uint16_T *dataTypeId, const char* strbuffer)
{
  if(!strcmp(strbuffer,"double"))
    *dataTypeId = FLREC_DATA_TYPE_FLOAT64;
  else if(!strcmp(strbuffer,"single"))
    *dataTypeId = FLREC_DATA_TYPE_FLOAT32;
  else if(!strcmp(strbuffer,"int32"))
    *dataTypeId = FLREC_DATA_TYPE_INT32;
  else if(!strcmp(strbuffer,"int16"))
    *dataTypeId = FLREC_DATA_TYPE_INT16;
  else if(!strcmp(strbuffer,"int8"))
    *dataTypeId = FLREC_DATA_TYPE_INT8;
  else if(!strcmp(strbuffer,"uint32"))
    *dataTypeId = FLREC_DATA_TYPE_UINT32;
  else if(!strcmp(strbuffer,"uint16"))
    *dataTypeId = FLREC_DATA_TYPE_UINT16;
  else if(!strcmp(strbuffer,"uint8"))
    *dataTypeId = FLREC_DATA_TYPE_UINT8;
  else if(!strcmp(strbuffer,"boolean"))
    *dataTypeId = FLREC_DATA_TYPE_UINT8;
  else
    return 1;
  return 0;
}
#endif

#ifndef  MATLAB_MEX_FILE
/**********************************************************************************
* Function : FcnCastDataType(uint16_T dataType, void **indata, UInt32 *outdata)   *
*                                                                                 *
* Convert input data of type void to UInt32                                       *
*                                                                                 *
* Arguments:                                                                      *
*           dataType   : Data type of indata                                      *
*           indata     : Pointer to block input data                              *
*           outdata    : Name of the data type                                    *
* Return:                                                                         *
*           1: Unknown data type                                                  *
*           0: No error                                                           *
**********************************************************************************/
static int_T FcnCastDataType(int_T dataType, void **indata, UInt32 *outdata)
{
  int_T status = 0;

  switch (dataType)
  {
    case FLREC_DATA_TYPE_INT32:
      *outdata = *(Int32 *) indata[0];
      break;
    case FLREC_DATA_TYPE_INT16:
      *outdata = *(Int16 *) indata[0];
      break;
    case FLREC_DATA_TYPE_INT8:
      *outdata = *(Int8 *) indata[0];
      break;
    case FLREC_DATA_TYPE_UINT32:
      *outdata = *(UInt32 *) indata[0];
      break;
    case FLREC_DATA_TYPE_UINT16:
      *outdata = *(UInt16 *) indata[0];
      break;
    case FLREC_DATA_TYPE_UINT8:
      *outdata = *(UInt8 *) indata[0];
      break;
    case FLREC_DATA_TYPE_FLOAT64:
      *outdata = *(Float64 *) indata[0];
      break;
    case FLREC_DATA_TYPE_FLOAT32:
      *outdata = *(Float32 *) indata[0];
      break;
    default:
      status = 1;
      break;
  }
  return status;
}
#endif


#ifdef  MATLAB_MEX_FILE
#include "simulink.c"
#else
#include "cg_sfun.h"
#endif
