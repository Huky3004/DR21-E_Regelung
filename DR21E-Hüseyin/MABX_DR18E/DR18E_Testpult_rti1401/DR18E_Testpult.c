/*
 * DR18E_Testpult.c
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "DR18E_Testpult".
 *
 * Model version              : 1.203
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Wed Aug 01 17:18:50 2018
 *
 * Target selection: rti1401.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DR18E_Testpult_trc_ptr.h"
#include "DR18E_Testpult.h"
#include "DR18E_Testpult_private.h"

/* Named constants for Chart: '<S10>/TX Mode Management' */
#define DR18E_Testpu_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define DR18E_Testpult_IN_Init         ((uint8_T)1U)
#define DR18E_Testpult_IN_Off          ((uint8_T)2U)
#define DR18E_Testpult_IN_Torque       ((uint8_T)3U)
#define DR18E_Testpult_IN_Universal    ((uint8_T)4U)

/* Named constants for Chart: '<S535>/Fahrzeugsteuerung' */
#define DR18E_IN_ClearPowervoltageError ((uint8_T)1U)
#define DR18E_T_IN_Error_In_Flash_Reset ((uint8_T)2U)
#define DR18E_Te_IN_Precharge_TimeError ((uint8_T)11U)
#define DR18E_Tes_IN_Blink_Start_Button ((uint8_T)1U)
#define DR18E_Tes_IN_Safety_Error_Reset ((uint8_T)11U)
#define DR18E_Test_IN_Precharge_Prepare ((uint8_T)9U)
#define DR18E_Testp_IN_AccelerationMode ((uint8_T)1U)
#define DR18E_Testp_IN_PlaySound_Pulse1 ((uint8_T)2U)
#define DR18E_Testp_IN_Shutdown_Message ((uint8_T)3U)
#define DR18E_Testpu_IN_PlaySound_Pulse ((uint8_T)1U)
#define DR18E_Testpu_IN_Precharge_Start ((uint8_T)10U)
#define DR18E_Testpul_IN_CANTimeoutInit ((uint8_T)1U)
#define DR18E_Testpul_IN_Error_In_Flash ((uint8_T)1U)
#define DR18E_Testpul_IN_NormalShutdown ((uint8_T)4U)
#define DR18E_Testpul_IN_Precharge_Done ((uint8_T)8U)
#define DR18E_Testpul_IN_SafetyShutdown ((uint8_T)5U)
#define DR18E_Testpul_IN_TorqueToZero_a ((uint8_T)4U)
#define DR18E_Testpult_IN_AIR_Disable  ((uint8_T)1U)
#define DR18E_Testpult_IN_AIR_Error    ((uint8_T)2U)
#define DR18E_Testpult_IN_AIR_Error1   ((uint8_T)3U)
#define DR18E_Testpult_IN_AIR_Error2   ((uint8_T)4U)
#define DR18E_Testpult_IN_AIR_Error3   ((uint8_T)5U)
#define DR18E_Testpult_IN_AIR_Error4   ((uint8_T)6U)
#define DR18E_Testpult_IN_AIR_Error5   ((uint8_T)7U)
#define DR18E_Testpult_IN_BasicMode    ((uint8_T)2U)
#define DR18E_Testpult_IN_Boards_Init  ((uint8_T)2U)
#define DR18E_Testpult_IN_Check_Safety ((uint8_T)3U)
#define DR18E_Testpult_IN_Check_Safety1 ((uint8_T)1U)
#define DR18E_Testpult_IN_EnduranceMode ((uint8_T)3U)
#define DR18E_Testpult_IN_Idle         ((uint8_T)2U)
#define DR18E_Testpult_IN_Init_l       ((uint8_T)3U)
#define DR18E_Testpult_IN_LockInverters ((uint8_T)1U)
#define DR18E_Testpult_IN_OpenShutdown ((uint8_T)2U)
#define DR18E_Testpult_IN_Precharge    ((uint8_T)2U)
#define DR18E_Testpult_IN_Safety_Error ((uint8_T)3U)
#define DR18E_Testpult_IN_Safety_Error1 ((uint8_T)4U)
#define DR18E_Testpult_IN_Safety_Error2 ((uint8_T)5U)
#define DR18E_Testpult_IN_Safety_Error3 ((uint8_T)6U)
#define DR18E_Testpult_IN_Safety_Error4 ((uint8_T)7U)
#define DR18E_Testpult_IN_Safety_Error5 ((uint8_T)8U)
#define DR18E_Testpult_IN_Safety_Error6 ((uint8_T)9U)
#define DR18E_Testpult_IN_Safety_Error7 ((uint8_T)10U)
#define DR18E_Testpult_IN_SkidpadMode  ((uint8_T)4U)
#define DR18E_Testpult_IN_Sound        ((uint8_T)6U)
#define DR18E_Testpult_IN_TS_active    ((uint8_T)7U)
#define DR18E_Testpult_IN_TS_init      ((uint8_T)8U)
#define DR18E_Testpult_IN_TS_ready     ((uint8_T)9U)
#define DR18E_Testpult_IN_TorqueToZero ((uint8_T)3U)
#define DR18E_Testpult_IN_U_init       ((uint8_T)2U)
#define DR18E_Testpult_IN_UmrichterInit ((uint8_T)4U)
#define DR18E_Testpult_IN_initEntry    ((uint8_T)3U)
#define DR18E_Testpult_IN_wait         ((uint8_T)4U)

/* Block signals (auto storage) */
B_DR18E_Testpult_T DR18E_Testpult_B;

/* Continuous states */
X_DR18E_Testpult_T DR18E_Testpult_X;

/* Block states (auto storage) */
DW_DR18E_Testpult_T DR18E_Testpult_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_DR18E_Testpult_T DR18E_Testpult_PrevZCX;

/* Real-time model */
RT_MODEL_DR18E_Testpult_T DR18E_Testpult_M_;
RT_MODEL_DR18E_Testpult_T *const DR18E_Testpult_M = &DR18E_Testpult_M_;

/* Forward declaration for local functions */
static void DR_enter_internal_Check_Safety1(void);
static void DR18E_Testpult_Check_Safety1(void);
static void DR18E_Testpult_Safety_Error2(void);
static void DR18E_Testpult_Safety_Error3(void);
static void DR18E_Testpult_Safety_Error4(void);
static void DR18E_Testpult_Safety_Error5(void);
static void DR18E_Testpult_Safety_Error6(void);
static void DR18E_Testpult_Safety_Error7(void);
static void DR18E_Testpult_Check_Safety(void);
static void DR18E_Testpult_Init(void);
static void DR18E_Testpult_Precharge(void);
static void DR18E_Tes_exit_internal_TS_init(void);
static void rate_scheduler(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real_T look1_linlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Linear Search */
    for (bpIdx = maxIndex >> 1U; u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[bpIdx + 1U]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[bpIdx + 1U] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[bpIdx + 1U] - table[bpIdx]) * frac + table[bpIdx];
}

void uMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T nj;
  uint32_T u1i;
  uint32_T yk;
  uint32_T a1;
  uint32_T a0;
  uint32_T b1;
  uint32_T w10;
  uint32_T w01;
  uint32_T cb;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    cb = 0U;
    u1i = u1[i];
    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    k = n - i;
    nj = n2 <= k ? n2 : k;
    k = i;
    for (j = 0; j < nj; j++) {
      yk = y[k];
      u1i = u2[j];
      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk += cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }
}

real32_T uMultiWordSingle(const uint32_T u1[], int32_T n1, int32_T e1)
{
  real32_T y;
  int32_T i;
  int32_T exp_0;
  y = 0.0F;
  exp_0 = e1;
  for (i = 0; i < n1; i++) {
    y += (real32_T)ldexp((real32_T)u1[i], exp_0);
    exp_0 += 32;
  }

  return y;
}

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (DR18E_Testpult_M->Timing.TaskCounters.TID[2])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[2]) > 9) {/* Sample time: [0.01s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[2] = 0;
  }

  (DR18E_Testpult_M->Timing.TaskCounters.TID[3])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[3]) > 49) {/* Sample time: [0.05s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[3] = 0;
  }

  (DR18E_Testpult_M->Timing.TaskCounters.TID[4])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[4]) > 99) {/* Sample time: [0.1s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[4] = 0;
  }

  (DR18E_Testpult_M->Timing.TaskCounters.TID[5])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[5]) > 199) {/* Sample time: [0.2s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[5] = 0;
  }

  (DR18E_Testpult_M->Timing.TaskCounters.TID[6])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[6]) > 499) {/* Sample time: [0.5s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[6] = 0;
  }

  (DR18E_Testpult_M->Timing.TaskCounters.TID[7])++;
  if ((DR18E_Testpult_M->Timing.TaskCounters.TID[7]) > 999) {/* Sample time: [1.0s, 0.0s] */
    DR18E_Testpult_M->Timing.TaskCounters.TID[7] = 0;
  }
}

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 26;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  DR18E_Testpult_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; ++i) {
    x[i] += h * f0[i];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/*
 * System initialize for atomic system:
 *    '<S91>/Subsystem'
 *    '<S111>/Subsystem'
 *    '<S112>/Subsystem'
 *    '<S113>/Subsystem'
 *    '<S114>/Subsystem'
 *    '<S115>/Subsystem'
 *    '<S116>/Subsystem'
 *    '<S117>/Subsystem'
 *    '<S118>/Subsystem'
 *    '<S119>/Subsystem'
 *    ...
 */
void DR18E_Testpult_Subsystem_Init(DW_Subsystem_DR18E_Testpult_T *localDW,
  P_Subsystem_DR18E_Testpult_T *localP)
{
  /* InitializeConditions for Delay: '<S100>/Delay' */
  localDW->Delay_DSTATE = localP->Delay_InitialCondition;
}

/*
 * Outputs for atomic system:
 *    '<S91>/Subsystem'
 *    '<S111>/Subsystem'
 *    '<S112>/Subsystem'
 *    '<S113>/Subsystem'
 *    '<S114>/Subsystem'
 *    '<S115>/Subsystem'
 *    '<S116>/Subsystem'
 *    '<S117>/Subsystem'
 *    '<S118>/Subsystem'
 *    '<S119>/Subsystem'
 *    ...
 */
void DR18E_Testpult_Subsystem(real_T rtu_TXStatus, real_T rtu_Timeout,
  B_Subsystem_DR18E_Testpult_T *localB, DW_Subsystem_DR18E_Testpult_T *localDW,
  P_Subsystem_DR18E_Testpult_T *localP)
{
  /* Delay: '<S100>/Delay' */
  localB->Delay = localDW->Delay_DSTATE;

  /* Switch: '<S100>/Switch' incorporates:
   *  Constant: '<S100>/Constant1'
   */
  if (rtu_TXStatus > localP->Switch_Threshold) {
    localB->Switch = localP->Constant1_Value;
  } else {
    /* Sum: '<S100>/Sum' incorporates:
     *  Constant: '<S100>/Constant'
     */
    localB->Sum = localP->Constant_Value + localB->Delay;
    localB->Switch = localB->Sum;
  }

  /* End of Switch: '<S100>/Switch' */

  /* RelationalOperator: '<S100>/Relational Operator' */
  localB->RelationalOperator = (localB->Switch > rtu_Timeout);

  /* Switch: '<S100>/Switch1' incorporates:
   *  Constant: '<S100>/Constant2'
   *  Constant: '<S100>/Constant3'
   */
  if (localB->RelationalOperator) {
    localB->Switch1 = localP->Constant2_Value;
  } else {
    localB->Switch1 = localP->Constant3_Value;
  }

  /* End of Switch: '<S100>/Switch1' */
}

/*
 * Update for atomic system:
 *    '<S91>/Subsystem'
 *    '<S111>/Subsystem'
 *    '<S112>/Subsystem'
 *    '<S113>/Subsystem'
 *    '<S114>/Subsystem'
 *    '<S115>/Subsystem'
 *    '<S116>/Subsystem'
 *    '<S117>/Subsystem'
 *    '<S118>/Subsystem'
 *    '<S119>/Subsystem'
 *    ...
 */
void DR18E_Testpult_Subsystem_Update(B_Subsystem_DR18E_Testpult_T *localB,
  DW_Subsystem_DR18E_Testpult_T *localDW)
{
  /* Update for Delay: '<S100>/Delay' */
  localDW->Delay_DSTATE = localB->Switch;
}

/*
 * Output and update for atomic system:
 *    '<S288>/Skalierung Drehzahl'
 *    '<S368>/Skalierung Drehzahl'
 */
void DR18E_Testpu_SkalierungDrehzahl(real_T rtu_In1,
  B_SkalierungDrehzahl_DR18E_Te_T *localB, P_SkalierungDrehzahl_DR18E_Te_T
  *localP)
{
  /* Gain: '<S303>/Gain' */
  localB->Gain = localP->Gain_Gain * rtu_In1;
}

/*
 * System initialize for action system:
 *    '<S286>/Wirkstrom Iq'
 *    '<S287>/Wirkstrom Iq'
 */
void DR18E_Testpult_WirkstromIq_Init(B_WirkstromIq_DR18E_Testpult_T *localB,
  P_WirkstromIq_DR18E_Testpult_T *localP)
{
  /* SystemInitialize for Outport: '<S301>/Wirkstrom Iq in A U1' */
  localB->Divide2 = localP->WirkstromIqinAU1_Y0;

  /* SystemInitialize for Outport: '<S301>/Drehmoment in Nm aus Iq U1' */
  localB->Product = localP->DrehmomentinNmausIqU1_Y0;
}

/*
 * Output and update for action system:
 *    '<S286>/Wirkstrom Iq'
 *    '<S287>/Wirkstrom Iq'
 */
void DR18E_Testpult_WirkstromIq(real_T rtu_In1, B_WirkstromIq_DR18E_Testpult_T
  *localB, P_WirkstromIq_DR18E_Testpult_T *localP)
{
  real_T tmp;

  /* DataTypeConversion: '<S301>/Data Type Conversion1' */
  tmp = floor(rtu_In1);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  localB->DataTypeConversion1 = (int16_T)(tmp < 0.0 ? (int32_T)(int16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(int16_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S301>/Data Type Conversion1' */

  /* Gain: '<S301>/Gain3' */
  localB->Gain3 = localP->Gain3_Gain * localB->DataTypeConversion1;

  /* Product: '<S301>/Divide2' incorporates:
   *  Constant: '<S301>/Constant2'
   */
  localB->Divide2 = (real_T)localB->Gain3 * 0.0078125 / localP->Constant2_Value;

  /* Product: '<S301>/Product' incorporates:
   *  Constant: '<S301>/Faktor 3//2'
   *  Constant: '<S301>/Polpaarzahl p'
   *  Constant: '<S301>/magnertischer Fluß Psi in Vs'
   */
  localB->Product = localB->Divide2 * localP->Polpaarzahlp_Value *
    localP->Faktor32_Value * localP->magnertischerFluPsiinVs_Value;
}

/*
 * System initialize for action system:
 *    '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 *    '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 */
void RegID0x8FERRORWarningRegis_Init(B_RegID0x8FERRORWarningRegist_T *localB,
  P_RegID0x8FERRORWarningRegist_T *localP)
{
  /* SystemInitialize for Outport: '<S297>/_BADPARAS' */
  localB->Compare = localP->_BADPARAS_Y0;

  /* SystemInitialize for Outport: '<S297>/_POWER FAULT' */
  localB->Compare_p = localP->_POWERFAULT_Y0;

  /* SystemInitialize for Outport: '<S297>/_BUS TIMEOUT' */
  localB->Compare_mj = localP->_BUSTIMEOUT_Y0;

  /* SystemInitialize for Outport: '<S297>/_FEEDBACK' */
  localB->Compare_c = localP->_FEEDBACK_Y0;

  /* SystemInitialize for Outport: '<S297>/_POWERVOLTAGE' */
  localB->Compare_lg = localP->_POWERVOLTAGE_Y0;

  /* SystemInitialize for Outport: '<S297>/_MOTORTEMP' */
  localB->Compare_k = localP->_MOTORTEMP_Y0;

  /* SystemInitialize for Outport: '<S297>/_DEVICETEMP' */
  localB->Compare_kp = localP->_DEVICETEMP_Y0;

  /* SystemInitialize for Outport: '<S297>/_OVERVOLTAGE' */
  localB->Compare_lq = localP->_OVERVOLTAGE_Y0;

  /* SystemInitialize for Outport: '<S297>/_i_peak' */
  localB->Compare_g = localP->_i_peak_Y0;

  /* SystemInitialize for Outport: '<S297>/_RACEAWAY' */
  localB->Compare_d = localP->_RACEAWAY_Y0;

  /* SystemInitialize for Outport: '<S297>/_USER' */
  localB->Compare_dz = localP->_USER_Y0;

  /* SystemInitialize for Outport: '<S297>/_I2R' */
  localB->Compare_m = localP->_I2R_Y0;

  /* SystemInitialize for Outport: '<S297>/_HW_FAIL' */
  localB->Compare_mb = localP->_HW_FAIL_Y0;

  /* SystemInitialize for Outport: '<S297>/_BALLAST' */
  localB->Compare_br = localP->_BALLAST_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnPOWERVOLTAGE' */
  localB->Compare_lz = localP->_WarnPOWERVOLTAGE_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnMOTORTEMP' */
  localB->Compare_n = localP->_WarnMOTORTEMP_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnDEVICETEMP' */
  localB->Compare_ee = localP->_WarnDEVICETEMP_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnOVERVOLTAGE' */
  localB->Compare_lj = localP->_WarnOVERVOLTAGE_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnI_peak' */
  localB->Compare_h = localP->_WarnI_peak_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnI2R' */
  localB->Compare_la = localP->_WarnI2R_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnBALLAST' */
  localB->Compare_e4 = localP->_WarnBALLAST_Y0;

  /* SystemInitialize for Outport: '<S297>/_SAMMEL_ERROR' */
  localB->Compare_i = localP->_SAMMEL_ERROR_Y0;

  /* SystemInitialize for Outport: '<S297>/_SAMMEL_WARNUNG' */
  localB->Compare_o = localP->_SAMMEL_WARNUNG_Y0;

  /* SystemInitialize for Outport: '<S297>/_RFE FAULT' */
  localB->Compare_e = localP->_RFEFAULT_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnWARNING_0' */
  localB->Compare_b = localP->_WarnWARNING_0_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnILLEGAL_STATUS' */
  localB->Compare_l = localP->_WarnILLEGAL_STATUS_Y0;

  /* SystemInitialize for Outport: '<S297>/_WarnWARNING_2' */
  localB->Compare_ph = localP->_WarnWARNING_2_Y0;
}

/*
 * Output and update for action system:
 *    '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 *    '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 */
void RegID0x8FERRORWarningRegisterAu(real_T rtu_Reg143Value0x8F32BitDaten,
  B_RegID0x8FERRORWarningRegist_T *localB, P_RegID0x8FERRORWarningRegist_T
  *localP)
{
  real_T tmp;

  /* DataTypeConversion: '<S297>/Data Type Conversion' */
  tmp = floor(rtu_Reg143Value0x8F32BitDaten);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  localB->DataTypeConversion = tmp < 0.0 ? (uint32_T)-(int32_T)(uint32_T)-tmp :
    (uint32_T)tmp;

  /* End of DataTypeConversion: '<S297>/Data Type Conversion' */

  /* S-Function (sfix_bitop): '<S297>/BADPARAS' */
  localB->BADPARAS = localB->DataTypeConversion & localP->BADPARAS_BitMask;

  /* S-Function (sfix_bitop): '<S297>/BALLAST' */
  localB->BALLAST = localB->DataTypeConversion & localP->BALLAST_BitMask;

  /* S-Function (sfix_bitop): '<S297>/BUS TIMEOUT' */
  localB->BUSTIMEOUT = localB->DataTypeConversion & localP->BUSTIMEOUT_BitMask;

  /* RelationalOperator: '<S341>/Compare' incorporates:
   *  Constant: '<S341>/Constant'
   */
  localB->Compare = (localB->BADPARAS > localP->Constant_Value);

  /* S-Function (sfix_bitop): '<S297>/POWER FAULT' */
  localB->POWERFAULT = localB->DataTypeConversion & localP->POWERFAULT_BitMask;

  /* RelationalOperator: '<S342>/Compare' incorporates:
   *  Constant: '<S342>/Constant'
   */
  localB->Compare_p = (localB->POWERFAULT > localP->Constant_Value_k);

  /* S-Function (sfix_bitop): '<S297>/RACEAWAY' */
  localB->RACEAWAY = localB->DataTypeConversion & localP->RACEAWAY_BitMask;

  /* RelationalOperator: '<S343>/Compare' incorporates:
   *  Constant: '<S343>/Constant'
   */
  localB->Compare_d = (localB->RACEAWAY > localP->Constant_Value_h);

  /* S-Function (sfix_bitop): '<S297>/USER' */
  localB->USER = localB->DataTypeConversion & localP->USER_BitMask;

  /* RelationalOperator: '<S344>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   */
  localB->Compare_dz = (localB->USER > localP->Constant_Value_n);

  /* S-Function (sfix_bitop): '<S297>/I2R' */
  localB->I2R = localB->DataTypeConversion & localP->I2R_BitMask;

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  localB->Compare_m = (localB->I2R > localP->Constant_Value_k2);

  /* S-Function (sfix_bitop): '<S297>/WarnWARNING_0' */
  localB->WarnWARNING_0 = localB->DataTypeConversion &
    localP->WarnWARNING_0_BitMask;

  /* RelationalOperator: '<S346>/Compare' incorporates:
   *  Constant: '<S346>/Constant'
   */
  localB->Compare_b = (localB->WarnWARNING_0 > localP->Constant_Value_e);

  /* S-Function (sfix_bitop): '<S297>/HW_FAIL' */
  localB->HW_FAIL = localB->DataTypeConversion & localP->HW_FAIL_BitMask;

  /* RelationalOperator: '<S347>/Compare' incorporates:
   *  Constant: '<S347>/Constant'
   */
  localB->Compare_mb = (localB->HW_FAIL > localP->Constant_Value_ec);

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  localB->Compare_br = (localB->BALLAST > localP->Constant_Value_c);

  /* S-Function (sfix_bitop): '<S297>/Sammel Warnung' */
  localB->SammelWarnung = localB->DataTypeConversion &
    localP->SammelWarnung_BitMask;

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  localB->Compare_o = (localB->SammelWarnung > localP->Constant_Value_f);

  /* S-Function (sfix_bitop): '<S297>/RFE Fault' */
  localB->RFEFault = localB->DataTypeConversion & localP->RFEFault_BitMask;

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  localB->Compare_e = (localB->RFEFault > localP->Constant_Value_i);

  /* S-Function (sfix_bitop): '<S297>/WarnILLEGAL_STATUS' */
  localB->WarnILLEGAL_STATUS = localB->DataTypeConversion &
    localP->WarnILLEGAL_STATUS_BitMask;

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S351>/Constant'
   */
  localB->Compare_l = (localB->WarnILLEGAL_STATUS > localP->Constant_Value_d);

  /* S-Function (sfix_bitop): '<S297>/WarnWARNING_2' */
  localB->WarnWARNING_2 = localB->DataTypeConversion &
    localP->WarnWARNING_2_BitMask;

  /* RelationalOperator: '<S352>/Compare' incorporates:
   *  Constant: '<S352>/Constant'
   */
  localB->Compare_ph = (localB->WarnWARNING_2 > localP->Constant_Value_ka);

  /* S-Function (sfix_bitop): '<S297>/Sammel Error' */
  localB->SammelError = localB->DataTypeConversion & localP->SammelError_BitMask;

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  localB->Compare_i = (localB->SammelError > localP->Constant_Value_dz);

  /* S-Function (sfix_bitop): '<S297>/WarnPOWERVOLTAGE' */
  localB->WarnPOWERVOLTAGE = localB->DataTypeConversion &
    localP->WarnPOWERVOLTAGE_BitMask;

  /* RelationalOperator: '<S354>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   */
  localB->Compare_lz = (localB->WarnPOWERVOLTAGE > localP->Constant_Value_g);

  /* S-Function (sfix_bitop): '<S297>/WarnMOTORTEMP' */
  localB->WarnMOTORTEMP = localB->DataTypeConversion &
    localP->WarnMOTORTEMP_BitMask;

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  localB->Compare_n = (localB->WarnMOTORTEMP > localP->Constant_Value_m);

  /* S-Function (sfix_bitop): '<S297>/WarnDEVICETEMP' */
  localB->WarnDEVICETEMP = localB->DataTypeConversion &
    localP->WarnDEVICETEMP_BitMask;

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S356>/Constant'
   */
  localB->Compare_ee = (localB->WarnDEVICETEMP > localP->Constant_Value_co);

  /* S-Function (sfix_bitop): '<S297>/WarnOVERVOLTAGE' */
  localB->WarnOVERVOLTAGE = localB->DataTypeConversion &
    localP->WarnOVERVOLTAGE_BitMask;

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  localB->Compare_lj = (localB->WarnOVERVOLTAGE > localP->Constant_Value_mf);

  /* S-Function (sfix_bitop): '<S297>/WarnI_peak' */
  localB->WarnI_peak = localB->DataTypeConversion & localP->WarnI_peak_BitMask;

  /* RelationalOperator: '<S358>/Compare' incorporates:
   *  Constant: '<S358>/Constant'
   */
  localB->Compare_h = (localB->WarnI_peak > localP->Constant_Value_dv);

  /* S-Function (sfix_bitop): '<S297>/WarnI2R' */
  localB->WarnI2R = localB->DataTypeConversion & localP->WarnI2R_BitMask;

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  localB->Compare_la = (localB->WarnI2R > localP->Constant_Value_ce);

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  localB->Compare_mj = (localB->BUSTIMEOUT > localP->Constant_Value_m4);

  /* S-Function (sfix_bitop): '<S297>/WarnBALLAST' */
  localB->WarnBALLAST = localB->DataTypeConversion & localP->WarnBALLAST_BitMask;

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  localB->Compare_e4 = (localB->WarnBALLAST > localP->Constant_Value_cn);

  /* S-Function (sfix_bitop): '<S297>/FEEDBACK' */
  localB->FEEDBACK = localB->DataTypeConversion & localP->FEEDBACK_BitMask;

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S362>/Constant'
   */
  localB->Compare_c = (localB->FEEDBACK > localP->Constant_Value_nq);

  /* S-Function (sfix_bitop): '<S297>/POWERVOLTAGE' */
  localB->POWERVOLTAGE = localB->DataTypeConversion &
    localP->POWERVOLTAGE_BitMask;

  /* RelationalOperator: '<S363>/Compare' incorporates:
   *  Constant: '<S363>/Constant'
   */
  localB->Compare_lg = (localB->POWERVOLTAGE > localP->Constant_Value_j);

  /* S-Function (sfix_bitop): '<S297>/MOTORTEMP' */
  localB->MOTORTEMP = localB->DataTypeConversion & localP->MOTORTEMP_BitMask;

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  localB->Compare_k = (localB->MOTORTEMP > localP->Constant_Value_dn);

  /* S-Function (sfix_bitop): '<S297>/DEVICETEMP' */
  localB->DEVICETEMP = localB->DataTypeConversion & localP->DEVICETEMP_BitMask;

  /* RelationalOperator: '<S365>/Compare' incorporates:
   *  Constant: '<S365>/Constant'
   */
  localB->Compare_kp = (localB->DEVICETEMP > localP->Constant_Value_k5);

  /* S-Function (sfix_bitop): '<S297>/OVERVOLTAGE' */
  localB->OVERVOLTAGE = localB->DataTypeConversion & localP->OVERVOLTAGE_BitMask;

  /* RelationalOperator: '<S366>/Compare' incorporates:
   *  Constant: '<S366>/Constant'
   */
  localB->Compare_lq = (localB->OVERVOLTAGE > localP->Constant_Value_o);

  /* S-Function (sfix_bitop): '<S297>/I_PEAK' */
  localB->I_PEAK = localB->DataTypeConversion & localP->I_PEAK_BitMask;

  /* RelationalOperator: '<S367>/Compare' incorporates:
   *  Constant: '<S367>/Constant'
   */
  localB->Compare_g = (localB->I_PEAK > localP->Constant_Value_b);
}

/*
 * System initialize for action system:
 *    '<S286>/U_DC'
 *    '<S287>/U_DC'
 */
void DR18E_Testpult_U_DC_Init(B_U_DC_DR18E_Testpult_T *localB,
  P_U_DC_DR18E_Testpult_T *localP)
{
  /* SystemInitialize for Outport: '<S300>/U_DC' */
  localB->UmrechnungRegisterSpannungManua = localP->U_DC_Y0;
}

/*
 * Output and update for action system:
 *    '<S286>/U_DC'
 *    '<S287>/U_DC'
 */
void DR18E_Testpult_U_DC(real_T rtu_In1, B_U_DC_DR18E_Testpult_T *localB,
  P_U_DC_DR18E_Testpult_T *localP)
{
  /* Gain: '<S300>/Umrechnung Register--> Spannung Manual BAMOCAR PG D3 S. 47' */
  localB->UmrechnungRegisterSpannungManua =
    localP->UmrechnungRegisterSpannungManua * rtu_In1;
}

/*
 * System initialize for action system:
 *    '<S286>/Inverter_Temp'
 *    '<S287>/Inverter_Temp'
 */
void DR18E_Testpu_Inverter_Temp_Init(B_Inverter_Temp_DR18E_Testpul_T *localB,
  P_Inverter_Temp_DR18E_Testpul_T *localP)
{
  /* SystemInitialize for Outport: '<S294>/Inverter_Temp' */
  localB->BAMOCARPGD3ManualS48 = localP->Inverter_Temp_Y0;
}

/*
 * Output and update for action system:
 *    '<S286>/Inverter_Temp'
 *    '<S287>/Inverter_Temp'
 */
void DR18E_Testpult_Inverter_Temp(real_T rtu_In1,
  B_Inverter_Temp_DR18E_Testpul_T *localB, P_Inverter_Temp_DR18E_Testpul_T
  *localP)
{
  /* Lookup_n-D: '<S294>/BAMOCAR PG D3 Manual S. 48 ' */
  localB->BAMOCARPGD3ManualS48 = look1_binlxpw(rtu_In1,
    localP->BAMOCARPGD3ManualS48_bp01Data,
    localP->BAMOCARPGD3ManualS48_tableData, 20U);
}

/*
 * System initialize for trigger system:
 *    '<S686>/J-K Flip-Flop'
 *    '<S688>/J-K Flip-Flop'
 *    '<S690>/J-K Flip-Flop'
 */
void DR18E_Testpult_JKFlipFlop_Init(B_JKFlipFlop_DR18E_Testpult_T *localB,
  DW_JKFlipFlop_DR18E_Testpult_T *localDW, P_JKFlipFlop_DR18E_Testpult_T *localP)
{
  /* InitializeConditions for Memory: '<S687>/Memory' */
  localDW->Memory_PreviousInput = localP->Memory_X0;

  /* SystemInitialize for Outport: '<S687>/Q' */
  localB->Logic[0] = localP->Q_Y0;

  /* SystemInitialize for Outport: '<S687>/!Q' */
  localB->OutportBufferForQ = localP->Q_Y0_a;
}

/*
 * Output and update for trigger system:
 *    '<S686>/J-K Flip-Flop'
 *    '<S688>/J-K Flip-Flop'
 *    '<S690>/J-K Flip-Flop'
 */
void DR18E_Testpult_JKFlipFlop(RT_MODEL_DR18E_Testpult_T * const
  DR18E_Testpult_M, boolean_T rtu_Trigger, boolean_T rtu_J, boolean_T rtu_K,
  B_JKFlipFlop_DR18E_Testpult_T *localB, DW_JKFlipFlop_DR18E_Testpult_T *localDW,
  P_JKFlipFlop_DR18E_Testpult_T *localP, ZCE_JKFlipFlop_DR18E_Testpult_T
  *localZCE)
{
  int32_T rowIdx;
  boolean_T zcEvent;

  /* Outputs for Triggered SubSystem: '<S686>/J-K Flip-Flop' incorporates:
   *  TriggerPort: '<S687>/Trigger'
   */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
    zcEvent = ((!rtu_Trigger) && (localZCE->JKFlipFlop_Trig_ZCE != ZERO_ZCSIG));
    if (zcEvent) {
      /* Memory: '<S687>/Memory' */
      localB->Memory = localDW->Memory_PreviousInput;

      /* CombinatorialLogic: '<S687>/Logic' */
      zcEvent = localB->Memory;
      rowIdx = zcEvent;
      rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + rtu_J);
      rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + rtu_K);
      localB->Logic[0U] = localP->Logic_table[(uint32_T)rowIdx];
      localB->Logic[1U] = localP->Logic_table[rowIdx + 8U];

      /* SignalConversion: '<S687>/OutportBufferFor!Q' */
      localB->OutportBufferForQ = localB->Logic[1];

      /* Update for Memory: '<S687>/Memory' */
      localDW->Memory_PreviousInput = localB->Logic[0];
    }

    localZCE->JKFlipFlop_Trig_ZCE = rtu_Trigger;
  }

  /* End of Outputs for SubSystem: '<S686>/J-K Flip-Flop' */
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR_enter_internal_Check_Safety1(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;

  /* Entry Internal 'Check_Safety1': '<S697>:616' */
  /* Transition: '<S697>:628' */
  guard1 = false;
  guard2 = false;
  if (!DR18E_Testpult_B.Logic_f[0]) {
    /* Transition: '<S697>:631' */
    if (DR18E_Testpult_B.Logic_fh[0]) {
      /* Transition: '<S697>:632' */
      DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpult_IN_Safety_Error3;

      /* Entry 'Safety_Error3': '<S697>:659' */
      DR18E_Testpult_B.O_ErrorNr = 7.0;
      DR18E_Testpult_B.O_State = 47.8;
    } else if (!DR18E_Testpult_B.Logic_fh[0]) {
      /* Transition: '<S697>:634' */
      if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
        /* Transition: '<S697>:639' */
        if (DR18E_Testpult_B.A_BSPD) {
          /* Transition: '<S697>:640' */
          DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpult_IN_Safety_Error1;

          /* Entry 'Safety_Error1': '<S697>:661' */
          DR18E_Testpult_B.O_ErrorNr = 1.0;
          DR18E_Testpult_B.O_State = 47.2;
        } else if (!DR18E_Testpult_B.A_BSPD) {
          /* Transition: '<S697>:642' */
          if (DR18E_Testpult_B.A_NOT_COCKPIT) {
            /* Transition: '<S697>:643' */
            DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpult_IN_Safety_Error4;

            /* Entry 'Safety_Error4': '<S697>:662' */
            DR18E_Testpult_B.O_ErrorNr = 3.0;
            DR18E_Testpult_B.O_State = 47.3;
          } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
            /* Transition: '<S697>:644' */
            if (DR18E_Testpult_B.A_NOT_LINKS) {
              /* Transition: '<S697>:646' */
              DR18E_Testpult_DW.is_Check_Safety1 =
                DR18E_Testpult_IN_Safety_Error5;

              /* Entry 'Safety_Error5': '<S697>:663' */
              DR18E_Testpult_B.O_ErrorNr = 4.0;
              DR18E_Testpult_B.O_State = 47.4;
            } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
              /* Transition: '<S697>:648' */
              if (DR18E_Testpult_B.A_NOT_RECHTS) {
                /* Transition: '<S697>:649' */
                DR18E_Testpult_DW.is_Check_Safety1 =
                  DR18E_Testpult_IN_Safety_Error6;

                /* Entry 'Safety_Error6': '<S697>:664' */
                DR18E_Testpult_B.O_ErrorNr = 5.0;
                DR18E_Testpult_B.O_State = 47.5;
              } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                /* Transition: '<S697>:650' */
                if (DR18E_Testpult_B.A_HVD) {
                  /* Transition: '<S697>:652' */
                  DR18E_Testpult_DW.is_Check_Safety1 =
                    DR18E_Testpult_IN_Safety_Error7;

                  /* Entry 'Safety_Error7': '<S697>:665' */
                  DR18E_Testpult_B.O_ErrorNr = 8.0;
                  DR18E_Testpult_B.O_State = 47.6;
                } else if (!DR18E_Testpult_B.A_HVD) {
                  /* Transition: '<S697>:654' */
                  DR18E_Testpult_DW.is_Check_Safety1 =
                    DR18E_Tes_IN_Safety_Error_Reset;

                  /* Entry 'Safety_Error_Reset': '<S697>:666' */
                  DR18E_Testpult_B.O_ErrorNr = 0.0;
                  DR18E_Testpult_B.O_State = 49.0;
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard2) {
    if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
      /* Transition: '<S697>:637' */
      DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpult_IN_Safety_Error;

      /* Entry 'Safety_Error': '<S697>:660' */
      DR18E_Testpult_B.O_ErrorNr = 2.0;
      DR18E_Testpult_B.O_State = 47.1;
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:630' */
      DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpult_IN_Safety_Error2;

      /* Entry 'Safety_Error2': '<S697>:657' */
      DR18E_Testpult_B.O_ErrorNr = 6.0;
      DR18E_Testpult_B.O_State = 47.7;
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Check_Safety1(void)
{
  /* During 'Check_Safety1': '<S697>:616' */
  switch (DR18E_Testpult_DW.is_Check_Safety1) {
   case DR18E_Testpul_IN_Error_In_Flash:
    /* During 'Error_In_Flash': '<S697>:656' */
    /* Transition: '<S697>:636' */
    /* [I_AMS_IMD_Reset] */
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_T_IN_Error_In_Flash_Reset;

    /* Entry 'Error_In_Flash_Reset': '<S697>:658' */
    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
    DR18E_Testpult_B.O_State = 48.2;
    break;

   case DR18E_T_IN_Error_In_Flash_Reset:
    DR18E_Testpult_B.O_AMSIMDFlash = 0U;

    /* During 'Error_In_Flash_Reset': '<S697>:658' */
    /* Transition: '<S697>:635' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error:
    DR18E_Testpult_B.O_ErrorNr = 2.0;

    /* During 'Safety_Error': '<S697>:660' */
    /* Transition: '<S697>:638' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error': '<S697>:660' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error1:
    DR18E_Testpult_B.O_ErrorNr = 1.0;

    /* During 'Safety_Error1': '<S697>:661' */
    /* Transition: '<S697>:641' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error1': '<S697>:661' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error2:
    DR18E_Testpult_B.O_ErrorNr = 6.0;

    /* During 'Safety_Error2': '<S697>:657' */
    /* Transition: '<S697>:629' */
    /* Exit 'Safety_Error2': '<S697>:657' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpul_IN_Error_In_Flash;

    /* Entry 'Error_In_Flash': '<S697>:656' */
    DR18E_Testpult_B.O_AMSIMDFlash = 1U;
    DR18E_Testpult_B.O_State = 48.1;
    break;

   case DR18E_Testpult_IN_Safety_Error3:
    DR18E_Testpult_B.O_ErrorNr = 7.0;

    /* During 'Safety_Error3': '<S697>:659' */
    /* Transition: '<S697>:633' */
    /* Exit 'Safety_Error3': '<S697>:659' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpul_IN_Error_In_Flash;

    /* Entry 'Error_In_Flash': '<S697>:656' */
    DR18E_Testpult_B.O_AMSIMDFlash = 1U;
    DR18E_Testpult_B.O_State = 48.1;
    break;

   case DR18E_Testpult_IN_Safety_Error4:
    DR18E_Testpult_B.O_ErrorNr = 3.0;

    /* During 'Safety_Error4': '<S697>:662' */
    /* Transition: '<S697>:645' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error4': '<S697>:662' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error5:
    DR18E_Testpult_B.O_ErrorNr = 4.0;

    /* During 'Safety_Error5': '<S697>:663' */
    /* Transition: '<S697>:647' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error5': '<S697>:663' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error6:
    DR18E_Testpult_B.O_ErrorNr = 5.0;

    /* During 'Safety_Error6': '<S697>:664' */
    /* Transition: '<S697>:651' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error6': '<S697>:664' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   case DR18E_Testpult_IN_Safety_Error7:
    DR18E_Testpult_B.O_ErrorNr = 8.0;

    /* During 'Safety_Error7': '<S697>:665' */
    /* Transition: '<S697>:653' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error7': '<S697>:665' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;

   default:
    DR18E_Testpult_B.O_ErrorNr = 0.0;

    /* During 'Safety_Error_Reset': '<S697>:666' */
    /* Transition: '<S697>:655' */
    /* Transition: '<S697>:627' */
    /* Fehlerquelle gefunden und gemeldet */
    /* Exit 'Safety_Error_Reset': '<S697>:666' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

    /* Entry 'Idle': '<S697>:3' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_State = 21.0;
    DR18E_Testpult_B.O_fBlink_Start = 2.0;
    break;
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error2(void)
{
  DR18E_Testpult_B.O_ErrorNr = 6.0;

  /* During 'Safety_Error2': '<S697>:711' */
  /* Transition: '<S697>:682' */
  /* Exit 'Safety_Error2': '<S697>:711' */
  /* Event: '<S697>:309' */
  DR18E_Testpult_DW.e_ErrorEventCounter++;
  DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpul_IN_Error_In_Flash;

  /* Entry 'Error_In_Flash': '<S697>:710' */
  DR18E_Testpult_B.O_AMSIMDFlash = 1U;
  DR18E_Testpult_B.O_State = 18.1;
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error3(void)
{
  DR18E_Testpult_B.O_ErrorNr = 7.0;

  /* During 'Safety_Error3': '<S697>:713' */
  /* Transition: '<S697>:686' */
  /* Exit 'Safety_Error3': '<S697>:713' */
  /* Event: '<S697>:309' */
  DR18E_Testpult_DW.e_ErrorEventCounter++;
  DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpul_IN_Error_In_Flash;

  /* Entry 'Error_In_Flash': '<S697>:710' */
  DR18E_Testpult_B.O_AMSIMDFlash = 1U;
  DR18E_Testpult_B.O_State = 18.1;
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error4(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  DR18E_Testpult_B.O_State = 17.3;
  DR18E_Testpult_B.O_ErrorNr = 3.0;

  /* During 'Safety_Error4': '<S697>:717' */
  /* Transition: '<S697>:690' */
  if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
    /* Transition: '<S697>:680' */
    guard1 = false;
    guard2 = false;
    if (!DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:684' */
      if (DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:685' */
        /* Exit 'Safety_Error4': '<S697>:717' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

        /* Entry 'Safety_Error3': '<S697>:713' */
        DR18E_Testpult_B.O_ErrorNr = 7.0;
        DR18E_Testpult_B.O_State = 17.8;
      } else if (!DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:687' */
        if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
          /* Transition: '<S697>:697' */
          if (DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:698' */
            /* Exit 'Safety_Error4': '<S697>:717' */
            /* Event: '<S697>:309' */
            DR18E_Testpult_DW.e_ErrorEventCounter++;
            DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'Safety_Error1': '<S697>:716' */
            DR18E_Testpult_B.O_ErrorNr = 1.0;
            DR18E_Testpult_B.O_State = 17.2;
          } else if (!DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:699' */
            if (DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:700' */
              /* Exit 'Safety_Error4': '<S697>:717' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error4;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error4': '<S697>:717' */
              DR18E_Testpult_B.O_ErrorNr = 3.0;
              DR18E_Testpult_B.O_State = 17.3;
            } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:701' */
              if (DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:702' */
                /* Exit 'Safety_Error4': '<S697>:717' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error5;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error5': '<S697>:718' */
                DR18E_Testpult_B.O_ErrorNr = 4.0;
                DR18E_Testpult_B.O_State = 17.4;
              } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:703' */
                if (DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:704' */
                  /* Exit 'Safety_Error4': '<S697>:717' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error6;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error6': '<S697>:719' */
                  DR18E_Testpult_B.O_ErrorNr = 5.0;
                  DR18E_Testpult_B.O_State = 17.5;
                } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:705' */
                  if (DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:706' */
                    /* Exit 'Safety_Error4': '<S697>:717' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error7;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error7': '<S697>:720' */
                    DR18E_Testpult_B.O_ErrorNr = 8.0;
                    DR18E_Testpult_B.O_State = 17.6;
                  } else if (!DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:707' */
                    /* Exit 'Safety_Error4': '<S697>:717' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Tes_IN_Safety_Error_Reset;

                    /* Entry 'Safety_Error_Reset': '<S697>:721' */
                    DR18E_Testpult_B.O_ErrorNr = 0.0;
                    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                    DR18E_Testpult_B.O_State = 19.0;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard2) {
      if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
        /* Transition: '<S697>:696' */
        /* Exit 'Safety_Error4': '<S697>:717' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
        DR18E_Testpult_DW.temporalCounter_i1 = 0U;

        /* Entry 'Safety_Error': '<S697>:715' */
        DR18E_Testpult_B.O_ErrorNr = 2.0;
        DR18E_Testpult_B.O_State = 17.1;
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      if (DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:683' */
        /* Exit 'Safety_Error4': '<S697>:717' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

        /* Entry 'Safety_Error2': '<S697>:711' */
        DR18E_Testpult_B.O_ErrorNr = 6.0;
        DR18E_Testpult_B.O_State = 17.7;
      }
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error5(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  DR18E_Testpult_B.O_State = 17.4;
  DR18E_Testpult_B.O_ErrorNr = 4.0;

  /* During 'Safety_Error5': '<S697>:718' */
  /* Transition: '<S697>:693' */
  if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
    /* Transition: '<S697>:680' */
    guard1 = false;
    guard2 = false;
    if (!DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:684' */
      if (DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:685' */
        /* Exit 'Safety_Error5': '<S697>:718' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

        /* Entry 'Safety_Error3': '<S697>:713' */
        DR18E_Testpult_B.O_ErrorNr = 7.0;
        DR18E_Testpult_B.O_State = 17.8;
      } else if (!DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:687' */
        if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
          /* Transition: '<S697>:697' */
          if (DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:698' */
            /* Exit 'Safety_Error5': '<S697>:718' */
            /* Event: '<S697>:309' */
            DR18E_Testpult_DW.e_ErrorEventCounter++;
            DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'Safety_Error1': '<S697>:716' */
            DR18E_Testpult_B.O_ErrorNr = 1.0;
            DR18E_Testpult_B.O_State = 17.2;
          } else if (!DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:699' */
            if (DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:700' */
              /* Exit 'Safety_Error5': '<S697>:718' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error4;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error4': '<S697>:717' */
              DR18E_Testpult_B.O_ErrorNr = 3.0;
              DR18E_Testpult_B.O_State = 17.3;
            } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:701' */
              if (DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:702' */
                /* Exit 'Safety_Error5': '<S697>:718' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error5;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error5': '<S697>:718' */
                DR18E_Testpult_B.O_ErrorNr = 4.0;
                DR18E_Testpult_B.O_State = 17.4;
              } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:703' */
                if (DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:704' */
                  /* Exit 'Safety_Error5': '<S697>:718' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error6;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error6': '<S697>:719' */
                  DR18E_Testpult_B.O_ErrorNr = 5.0;
                  DR18E_Testpult_B.O_State = 17.5;
                } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:705' */
                  if (DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:706' */
                    /* Exit 'Safety_Error5': '<S697>:718' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error7;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error7': '<S697>:720' */
                    DR18E_Testpult_B.O_ErrorNr = 8.0;
                    DR18E_Testpult_B.O_State = 17.6;
                  } else if (!DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:707' */
                    /* Exit 'Safety_Error5': '<S697>:718' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Tes_IN_Safety_Error_Reset;

                    /* Entry 'Safety_Error_Reset': '<S697>:721' */
                    DR18E_Testpult_B.O_ErrorNr = 0.0;
                    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                    DR18E_Testpult_B.O_State = 19.0;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard2) {
      if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
        /* Transition: '<S697>:696' */
        /* Exit 'Safety_Error5': '<S697>:718' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
        DR18E_Testpult_DW.temporalCounter_i1 = 0U;

        /* Entry 'Safety_Error': '<S697>:715' */
        DR18E_Testpult_B.O_ErrorNr = 2.0;
        DR18E_Testpult_B.O_State = 17.1;
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      if (DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:683' */
        /* Exit 'Safety_Error5': '<S697>:718' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

        /* Entry 'Safety_Error2': '<S697>:711' */
        DR18E_Testpult_B.O_ErrorNr = 6.0;
        DR18E_Testpult_B.O_State = 17.7;
      }
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error6(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  DR18E_Testpult_B.O_State = 17.5;
  DR18E_Testpult_B.O_ErrorNr = 5.0;

  /* During 'Safety_Error6': '<S697>:719' */
  /* Transition: '<S697>:692' */
  if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
    /* Transition: '<S697>:680' */
    guard1 = false;
    guard2 = false;
    if (!DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:684' */
      if (DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:685' */
        /* Exit 'Safety_Error6': '<S697>:719' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

        /* Entry 'Safety_Error3': '<S697>:713' */
        DR18E_Testpult_B.O_ErrorNr = 7.0;
        DR18E_Testpult_B.O_State = 17.8;
      } else if (!DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:687' */
        if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
          /* Transition: '<S697>:697' */
          if (DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:698' */
            /* Exit 'Safety_Error6': '<S697>:719' */
            /* Event: '<S697>:309' */
            DR18E_Testpult_DW.e_ErrorEventCounter++;
            DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'Safety_Error1': '<S697>:716' */
            DR18E_Testpult_B.O_ErrorNr = 1.0;
            DR18E_Testpult_B.O_State = 17.2;
          } else if (!DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:699' */
            if (DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:700' */
              /* Exit 'Safety_Error6': '<S697>:719' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error4;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error4': '<S697>:717' */
              DR18E_Testpult_B.O_ErrorNr = 3.0;
              DR18E_Testpult_B.O_State = 17.3;
            } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:701' */
              if (DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:702' */
                /* Exit 'Safety_Error6': '<S697>:719' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error5;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error5': '<S697>:718' */
                DR18E_Testpult_B.O_ErrorNr = 4.0;
                DR18E_Testpult_B.O_State = 17.4;
              } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:703' */
                if (DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:704' */
                  /* Exit 'Safety_Error6': '<S697>:719' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error6;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error6': '<S697>:719' */
                  DR18E_Testpult_B.O_ErrorNr = 5.0;
                  DR18E_Testpult_B.O_State = 17.5;
                } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:705' */
                  if (DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:706' */
                    /* Exit 'Safety_Error6': '<S697>:719' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error7;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error7': '<S697>:720' */
                    DR18E_Testpult_B.O_ErrorNr = 8.0;
                    DR18E_Testpult_B.O_State = 17.6;
                  } else if (!DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:707' */
                    /* Exit 'Safety_Error6': '<S697>:719' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Tes_IN_Safety_Error_Reset;

                    /* Entry 'Safety_Error_Reset': '<S697>:721' */
                    DR18E_Testpult_B.O_ErrorNr = 0.0;
                    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                    DR18E_Testpult_B.O_State = 19.0;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard2) {
      if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
        /* Transition: '<S697>:696' */
        /* Exit 'Safety_Error6': '<S697>:719' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
        DR18E_Testpult_DW.temporalCounter_i1 = 0U;

        /* Entry 'Safety_Error': '<S697>:715' */
        DR18E_Testpult_B.O_ErrorNr = 2.0;
        DR18E_Testpult_B.O_State = 17.1;
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      if (DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:683' */
        /* Exit 'Safety_Error6': '<S697>:719' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

        /* Entry 'Safety_Error2': '<S697>:711' */
        DR18E_Testpult_B.O_ErrorNr = 6.0;
        DR18E_Testpult_B.O_State = 17.7;
      }
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Safety_Error7(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  DR18E_Testpult_B.O_State = 17.6;
  DR18E_Testpult_B.O_ErrorNr = 8.0;

  /* During 'Safety_Error7': '<S697>:720' */
  /* Transition: '<S697>:691' */
  if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
    /* Transition: '<S697>:680' */
    guard1 = false;
    guard2 = false;
    if (!DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:684' */
      if (DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:685' */
        /* Exit 'Safety_Error7': '<S697>:720' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

        /* Entry 'Safety_Error3': '<S697>:713' */
        DR18E_Testpult_B.O_ErrorNr = 7.0;
        DR18E_Testpult_B.O_State = 17.8;
      } else if (!DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:687' */
        if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
          /* Transition: '<S697>:697' */
          if (DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:698' */
            /* Exit 'Safety_Error7': '<S697>:720' */
            /* Event: '<S697>:309' */
            DR18E_Testpult_DW.e_ErrorEventCounter++;
            DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'Safety_Error1': '<S697>:716' */
            DR18E_Testpult_B.O_ErrorNr = 1.0;
            DR18E_Testpult_B.O_State = 17.2;
          } else if (!DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:699' */
            if (DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:700' */
              /* Exit 'Safety_Error7': '<S697>:720' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error4;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error4': '<S697>:717' */
              DR18E_Testpult_B.O_ErrorNr = 3.0;
              DR18E_Testpult_B.O_State = 17.3;
            } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:701' */
              if (DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:702' */
                /* Exit 'Safety_Error7': '<S697>:720' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error5;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error5': '<S697>:718' */
                DR18E_Testpult_B.O_ErrorNr = 4.0;
                DR18E_Testpult_B.O_State = 17.4;
              } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:703' */
                if (DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:704' */
                  /* Exit 'Safety_Error7': '<S697>:720' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error6;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error6': '<S697>:719' */
                  DR18E_Testpult_B.O_ErrorNr = 5.0;
                  DR18E_Testpult_B.O_State = 17.5;
                } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:705' */
                  if (DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:706' */
                    /* Exit 'Safety_Error7': '<S697>:720' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error7;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error7': '<S697>:720' */
                    DR18E_Testpult_B.O_ErrorNr = 8.0;
                    DR18E_Testpult_B.O_State = 17.6;
                  } else if (!DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:707' */
                    /* Exit 'Safety_Error7': '<S697>:720' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Tes_IN_Safety_Error_Reset;

                    /* Entry 'Safety_Error_Reset': '<S697>:721' */
                    DR18E_Testpult_B.O_ErrorNr = 0.0;
                    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                    DR18E_Testpult_B.O_State = 19.0;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard2) {
      if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
        /* Transition: '<S697>:696' */
        /* Exit 'Safety_Error7': '<S697>:720' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
        DR18E_Testpult_DW.temporalCounter_i1 = 0U;

        /* Entry 'Safety_Error': '<S697>:715' */
        DR18E_Testpult_B.O_ErrorNr = 2.0;
        DR18E_Testpult_B.O_State = 17.1;
      } else {
        guard1 = true;
      }
    }

    if (guard1) {
      if (DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:683' */
        /* Exit 'Safety_Error7': '<S697>:720' */
        /* Event: '<S697>:309' */
        DR18E_Testpult_DW.e_ErrorEventCounter++;
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

        /* Entry 'Safety_Error2': '<S697>:711' */
        DR18E_Testpult_B.O_ErrorNr = 6.0;
        DR18E_Testpult_B.O_State = 17.7;
      }
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Check_Safety(void)
{
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  boolean_T guard4 = false;
  boolean_T guard5 = false;
  boolean_T guard6 = false;

  /* During 'Check_Safety': '<S697>:670' */
  guard1 = false;
  guard2 = false;
  guard3 = false;
  guard4 = false;
  guard5 = false;
  guard6 = false;
  switch (DR18E_Testpult_DW.is_Check_Safety) {
   case DR18E_Testpul_IN_Error_In_Flash:
    DR18E_Testpult_B.O_AMSIMDFlash = 1U;
    DR18E_Testpult_B.O_State = 18.1;

    /* During 'Error_In_Flash': '<S697>:710' */
    if (DR18E_Testpult_B.LogicalOperator4) {
      /* Transition: '<S697>:695' */
      DR18E_Testpult_DW.is_Check_Safety = DR18E_T_IN_Error_In_Flash_Reset;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Error_In_Flash_Reset': '<S697>:712' */
      DR18E_Testpult_B.O_AMSIMDFlash = 0U;
      DR18E_Testpult_B.O_State = 18.2;
    }
    break;

   case DR18E_T_IN_Error_In_Flash_Reset:
    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
    DR18E_Testpult_B.O_State = 18.2;

    /* During 'Error_In_Flash_Reset': '<S697>:712' */
    /* Transition: '<S697>:688' */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
      /* Transition: '<S697>:680' */
      if (!DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:684' */
        if (DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:685' */
          DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

          /* Entry 'Safety_Error3': '<S697>:713' */
          DR18E_Testpult_B.O_ErrorNr = 7.0;
          DR18E_Testpult_B.O_State = 17.8;
        } else if (!DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:687' */
          if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
            /* Transition: '<S697>:697' */
            if (DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:698' */
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error1;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error1': '<S697>:716' */
              DR18E_Testpult_B.O_ErrorNr = 1.0;
              DR18E_Testpult_B.O_State = 17.2;
            } else if (!DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:699' */
              if (DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:700' */
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error4;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error4': '<S697>:717' */
                DR18E_Testpult_B.O_ErrorNr = 3.0;
                DR18E_Testpult_B.O_State = 17.3;
              } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:701' */
                if (DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:702' */
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error5;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error5': '<S697>:718' */
                  DR18E_Testpult_B.O_ErrorNr = 4.0;
                  DR18E_Testpult_B.O_State = 17.4;
                } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:703' */
                  if (DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:704' */
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error6;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error6': '<S697>:719' */
                    DR18E_Testpult_B.O_ErrorNr = 5.0;
                    DR18E_Testpult_B.O_State = 17.5;
                  } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:705' */
                    if (DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:706' */
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Testpult_IN_Safety_Error7;
                      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                      /* Entry 'Safety_Error7': '<S697>:720' */
                      DR18E_Testpult_B.O_ErrorNr = 8.0;
                      DR18E_Testpult_B.O_State = 17.6;
                    } else if (!DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:707' */
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Tes_IN_Safety_Error_Reset;

                      /* Entry 'Safety_Error_Reset': '<S697>:721' */
                      DR18E_Testpult_B.O_ErrorNr = 0.0;
                      DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                      DR18E_Testpult_B.O_State = 19.0;
                    } else {
                      guard4 = true;
                    }
                  } else {
                    guard4 = true;
                  }
                } else {
                  guard4 = true;
                }
              } else {
                guard4 = true;
              }
            } else {
              guard4 = true;
            }
          } else {
            guard4 = true;
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    }
    break;

   case DR18E_Testpult_IN_Safety_Error:
    DR18E_Testpult_B.O_State = 17.1;
    DR18E_Testpult_B.O_ErrorNr = 2.0;

    /* During 'Safety_Error': '<S697>:715' */
    /* Transition: '<S697>:689' */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
      /* Transition: '<S697>:680' */
      if (!DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:684' */
        if (DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:685' */
          /* Exit 'Safety_Error': '<S697>:715' */
          /* Event: '<S697>:309' */
          DR18E_Testpult_DW.e_ErrorEventCounter++;
          DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

          /* Entry 'Safety_Error3': '<S697>:713' */
          DR18E_Testpult_B.O_ErrorNr = 7.0;
          DR18E_Testpult_B.O_State = 17.8;
        } else if (!DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:687' */
          if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
            /* Transition: '<S697>:697' */
            if (DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:698' */
              /* Exit 'Safety_Error': '<S697>:715' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error1;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error1': '<S697>:716' */
              DR18E_Testpult_B.O_ErrorNr = 1.0;
              DR18E_Testpult_B.O_State = 17.2;
            } else if (!DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:699' */
              if (DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:700' */
                /* Exit 'Safety_Error': '<S697>:715' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error4;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error4': '<S697>:717' */
                DR18E_Testpult_B.O_ErrorNr = 3.0;
                DR18E_Testpult_B.O_State = 17.3;
              } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:701' */
                if (DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:702' */
                  /* Exit 'Safety_Error': '<S697>:715' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error5;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error5': '<S697>:718' */
                  DR18E_Testpult_B.O_ErrorNr = 4.0;
                  DR18E_Testpult_B.O_State = 17.4;
                } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:703' */
                  if (DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:704' */
                    /* Exit 'Safety_Error': '<S697>:715' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error6;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error6': '<S697>:719' */
                    DR18E_Testpult_B.O_ErrorNr = 5.0;
                    DR18E_Testpult_B.O_State = 17.5;
                  } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:705' */
                    if (DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:706' */
                      /* Exit 'Safety_Error': '<S697>:715' */
                      /* Event: '<S697>:309' */
                      DR18E_Testpult_DW.e_ErrorEventCounter++;
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Testpult_IN_Safety_Error7;
                      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                      /* Entry 'Safety_Error7': '<S697>:720' */
                      DR18E_Testpult_B.O_ErrorNr = 8.0;
                      DR18E_Testpult_B.O_State = 17.6;
                    } else if (!DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:707' */
                      /* Exit 'Safety_Error': '<S697>:715' */
                      /* Event: '<S697>:309' */
                      DR18E_Testpult_DW.e_ErrorEventCounter++;
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Tes_IN_Safety_Error_Reset;

                      /* Entry 'Safety_Error_Reset': '<S697>:721' */
                      DR18E_Testpult_B.O_ErrorNr = 0.0;
                      DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                      DR18E_Testpult_B.O_State = 19.0;
                    } else {
                      guard5 = true;
                    }
                  } else {
                    guard5 = true;
                  }
                } else {
                  guard5 = true;
                }
              } else {
                guard5 = true;
              }
            } else {
              guard5 = true;
            }
          } else {
            guard5 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }
    }
    break;

   case DR18E_Testpult_IN_Safety_Error1:
    DR18E_Testpult_B.O_State = 17.2;
    DR18E_Testpult_B.O_ErrorNr = 1.0;

    /* During 'Safety_Error1': '<S697>:716' */
    /* Transition: '<S697>:694' */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 200U) {
      /* Transition: '<S697>:680' */
      if (!DR18E_Testpult_B.Logic_f[0]) {
        /* Transition: '<S697>:684' */
        if (DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:685' */
          /* Exit 'Safety_Error1': '<S697>:716' */
          /* Event: '<S697>:309' */
          DR18E_Testpult_DW.e_ErrorEventCounter++;
          DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

          /* Entry 'Safety_Error3': '<S697>:713' */
          DR18E_Testpult_B.O_ErrorNr = 7.0;
          DR18E_Testpult_B.O_State = 17.8;
        } else if (!DR18E_Testpult_B.Logic_fh[0]) {
          /* Transition: '<S697>:687' */
          if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
            /* Transition: '<S697>:697' */
            if (DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:698' */
              /* Exit 'Safety_Error1': '<S697>:716' */
              /* Event: '<S697>:309' */
              DR18E_Testpult_DW.e_ErrorEventCounter++;
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error1;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error1': '<S697>:716' */
              DR18E_Testpult_B.O_ErrorNr = 1.0;
              DR18E_Testpult_B.O_State = 17.2;
            } else if (!DR18E_Testpult_B.A_BSPD) {
              /* Transition: '<S697>:699' */
              if (DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:700' */
                /* Exit 'Safety_Error1': '<S697>:716' */
                /* Event: '<S697>:309' */
                DR18E_Testpult_DW.e_ErrorEventCounter++;
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error4;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error4': '<S697>:717' */
                DR18E_Testpult_B.O_ErrorNr = 3.0;
                DR18E_Testpult_B.O_State = 17.3;
              } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
                /* Transition: '<S697>:701' */
                if (DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:702' */
                  /* Exit 'Safety_Error1': '<S697>:716' */
                  /* Event: '<S697>:309' */
                  DR18E_Testpult_DW.e_ErrorEventCounter++;
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error5;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error5': '<S697>:718' */
                  DR18E_Testpult_B.O_ErrorNr = 4.0;
                  DR18E_Testpult_B.O_State = 17.4;
                } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                  /* Transition: '<S697>:703' */
                  if (DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:704' */
                    /* Exit 'Safety_Error1': '<S697>:716' */
                    /* Event: '<S697>:309' */
                    DR18E_Testpult_DW.e_ErrorEventCounter++;
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error6;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error6': '<S697>:719' */
                    DR18E_Testpult_B.O_ErrorNr = 5.0;
                    DR18E_Testpult_B.O_State = 17.5;
                  } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                    /* Transition: '<S697>:705' */
                    if (DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:706' */
                      /* Exit 'Safety_Error1': '<S697>:716' */
                      /* Event: '<S697>:309' */
                      DR18E_Testpult_DW.e_ErrorEventCounter++;
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Testpult_IN_Safety_Error7;
                      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                      /* Entry 'Safety_Error7': '<S697>:720' */
                      DR18E_Testpult_B.O_ErrorNr = 8.0;
                      DR18E_Testpult_B.O_State = 17.6;
                    } else if (!DR18E_Testpult_B.A_HVD) {
                      /* Transition: '<S697>:707' */
                      /* Exit 'Safety_Error1': '<S697>:716' */
                      /* Event: '<S697>:309' */
                      DR18E_Testpult_DW.e_ErrorEventCounter++;
                      DR18E_Testpult_DW.is_Check_Safety =
                        DR18E_Tes_IN_Safety_Error_Reset;

                      /* Entry 'Safety_Error_Reset': '<S697>:721' */
                      DR18E_Testpult_B.O_ErrorNr = 0.0;
                      DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                      DR18E_Testpult_B.O_State = 19.0;
                    } else {
                      guard6 = true;
                    }
                  } else {
                    guard6 = true;
                  }
                } else {
                  guard6 = true;
                }
              } else {
                guard6 = true;
              }
            } else {
              guard6 = true;
            }
          } else {
            guard6 = true;
          }
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }
    }
    break;

   case DR18E_Testpult_IN_Safety_Error2:
    DR18E_Testpult_Safety_Error2();
    break;

   case DR18E_Testpult_IN_Safety_Error3:
    DR18E_Testpult_Safety_Error3();
    break;

   case DR18E_Testpult_IN_Safety_Error4:
    DR18E_Testpult_Safety_Error4();
    break;

   case DR18E_Testpult_IN_Safety_Error5:
    DR18E_Testpult_Safety_Error5();
    break;

   case DR18E_Testpult_IN_Safety_Error6:
    DR18E_Testpult_Safety_Error6();
    break;

   case DR18E_Testpult_IN_Safety_Error7:
    DR18E_Testpult_Safety_Error7();
    break;

   default:
    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
    DR18E_Testpult_B.O_ErrorNr = 0.0;

    /* During 'Safety_Error_Reset': '<S697>:721' */
    /* Transition: '<S697>:709' */
    /* Exit 'Safety_Error_Reset': '<S697>:721' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_Init = DR18E_Tes_IN_Blink_Start_Button;

    /* Entry 'Blink_Start_Button': '<S697>:58' */
    DR18E_Testpult_B.O_State = 20.0;
    DR18E_Testpult_DW.Init_complete = true;
    break;
  }

  if (guard6) {
    if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
      /* Transition: '<S697>:696' */
      /* Exit 'Safety_Error1': '<S697>:716' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Safety_Error': '<S697>:715' */
      DR18E_Testpult_B.O_ErrorNr = 2.0;
      DR18E_Testpult_B.O_State = 17.1;
    } else {
      guard3 = true;
    }
  }

  if (guard5) {
    if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
      /* Transition: '<S697>:696' */
      /* Exit 'Safety_Error': '<S697>:715' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Safety_Error': '<S697>:715' */
      DR18E_Testpult_B.O_ErrorNr = 2.0;
      DR18E_Testpult_B.O_State = 17.1;
    } else {
      guard2 = true;
    }
  }

  if (guard4) {
    if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
      /* Transition: '<S697>:696' */
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Safety_Error': '<S697>:715' */
      DR18E_Testpult_B.O_ErrorNr = 2.0;
      DR18E_Testpult_B.O_State = 17.1;
    } else {
      guard1 = true;
    }
  }

  if (guard3) {
    if (DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:683' */
      /* Exit 'Safety_Error1': '<S697>:716' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

      /* Entry 'Safety_Error2': '<S697>:711' */
      DR18E_Testpult_B.O_ErrorNr = 6.0;
      DR18E_Testpult_B.O_State = 17.7;
    }
  }

  if (guard2) {
    if (DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:683' */
      /* Exit 'Safety_Error': '<S697>:715' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

      /* Entry 'Safety_Error2': '<S697>:711' */
      DR18E_Testpult_B.O_ErrorNr = 6.0;
      DR18E_Testpult_B.O_State = 17.7;
    }
  }

  if (guard1) {
    if (DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:683' */
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

      /* Entry 'Safety_Error2': '<S697>:711' */
      DR18E_Testpult_B.O_ErrorNr = 6.0;
      DR18E_Testpult_B.O_State = 17.7;
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Init(void)
{
  int32_T tmp;
  boolean_T guard1 = false;
  boolean_T guard2 = false;

  /* During 'Init': '<S697>:1' */
  guard1 = false;
  guard2 = false;
  switch (DR18E_Testpult_DW.is_Init) {
   case DR18E_Tes_IN_Blink_Start_Button:
    DR18E_Testpult_B.O_State = 20.0;

    /* During 'Blink_Start_Button': '<S697>:58' */
    if (DR18E_Testpult_DW.Init_complete) {
      /* Transition: '<S697>:33' */
      DR18E_Testpult_DW.is_Init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

      /* Entry 'Idle': '<S697>:3' */
      DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
      DR18E_Testpult_B.O_State = 21.0;
      DR18E_Testpult_B.O_fBlink_Start = 2.0;
    }
    break;

   case DR18E_Testpult_IN_Boards_Init:
    DR18E_Testpult_B.O_InvertersTXActive = 1.0;
    DR18E_Testpult_B.O_State = 16.0;

    /* During 'Boards_Init': '<S697>:39' */
    /* Transition: '<S697>:722' */
    DR18E_Testpult_DW.is_Init = DR18E_Testpult_IN_Check_Safety;

    /* Entry Internal 'Check_Safety': '<S697>:670' */
    /* Transition: '<S697>:681' */
    if (!DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:684' */
      if (DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:685' */
        DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error3;

        /* Entry 'Safety_Error3': '<S697>:713' */
        DR18E_Testpult_B.O_ErrorNr = 7.0;
        DR18E_Testpult_B.O_State = 17.8;
      } else if (!DR18E_Testpult_B.Logic_fh[0]) {
        /* Transition: '<S697>:687' */
        if (!DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
          /* Transition: '<S697>:697' */
          if (DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:698' */
            DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'Safety_Error1': '<S697>:716' */
            DR18E_Testpult_B.O_ErrorNr = 1.0;
            DR18E_Testpult_B.O_State = 17.2;
          } else if (!DR18E_Testpult_B.A_BSPD) {
            /* Transition: '<S697>:699' */
            if (DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:700' */
              DR18E_Testpult_DW.is_Check_Safety =
                DR18E_Testpult_IN_Safety_Error4;
              DR18E_Testpult_DW.temporalCounter_i1 = 0U;

              /* Entry 'Safety_Error4': '<S697>:717' */
              DR18E_Testpult_B.O_ErrorNr = 3.0;
              DR18E_Testpult_B.O_State = 17.3;
            } else if (!DR18E_Testpult_B.A_NOT_COCKPIT) {
              /* Transition: '<S697>:701' */
              if (DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:702' */
                DR18E_Testpult_DW.is_Check_Safety =
                  DR18E_Testpult_IN_Safety_Error5;
                DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                /* Entry 'Safety_Error5': '<S697>:718' */
                DR18E_Testpult_B.O_ErrorNr = 4.0;
                DR18E_Testpult_B.O_State = 17.4;
              } else if (!DR18E_Testpult_B.A_NOT_LINKS) {
                /* Transition: '<S697>:703' */
                if (DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:704' */
                  DR18E_Testpult_DW.is_Check_Safety =
                    DR18E_Testpult_IN_Safety_Error6;
                  DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                  /* Entry 'Safety_Error6': '<S697>:719' */
                  DR18E_Testpult_B.O_ErrorNr = 5.0;
                  DR18E_Testpult_B.O_State = 17.5;
                } else if (!DR18E_Testpult_B.A_NOT_RECHTS) {
                  /* Transition: '<S697>:705' */
                  if (DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:706' */
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Testpult_IN_Safety_Error7;
                    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

                    /* Entry 'Safety_Error7': '<S697>:720' */
                    DR18E_Testpult_B.O_ErrorNr = 8.0;
                    DR18E_Testpult_B.O_State = 17.6;
                  } else if (!DR18E_Testpult_B.A_HVD) {
                    /* Transition: '<S697>:707' */
                    DR18E_Testpult_DW.is_Check_Safety =
                      DR18E_Tes_IN_Safety_Error_Reset;

                    /* Entry 'Safety_Error_Reset': '<S697>:721' */
                    DR18E_Testpult_B.O_ErrorNr = 0.0;
                    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
                    DR18E_Testpult_B.O_State = 19.0;
                  } else {
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else {
              guard2 = true;
            }
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    break;

   case DR18E_Testpult_IN_Check_Safety:
    DR18E_Testpult_Check_Safety();
    break;

   default:
    /* During 'UmrichterInit': '<S697>:187' */
    switch (DR18E_Testpult_DW.is_UmrichterInit) {
     case DR18E_Testpul_IN_CANTimeoutInit:
      /* During 'CANTimeoutInit': '<S697>:732' */
      if (DR18E_Testpult_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S697>:213' */
        /* Umrichter Init Complete */
        /* Exit 'CANTimeoutInit': '<S697>:732' */
        /* Universal TX Mode */
        DR18E_Testpult_B.O_U1_RegID = 0.0;
        DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
        DR18E_Testpult_DW.is_Init = DR18E_Testpult_IN_Boards_Init;

        /* Entry 'Boards_Init': '<S697>:39' */
        DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;

        /* Universal TX Mode */
        DR18E_Testpult_B.O_InvertersTXActive = 1.0;
        DR18E_Testpult_B.O_State = 16.0;
        DR18E_Testpult_B.O_coolingEnable = 0.0;
      }
      break;

     case DR18E_Testpult_IN_U_init:
      DR18E_Testpult_B.O_State = 11.0;

      /* During 'U_init': '<S697>:188' */
      if (DR18E_Testpult_DW.temporalCounter_i1 >= 10U) {
        /* Transition: '<S697>:221' */
        DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpult_IN_wait;
        DR18E_Testpult_DW.temporalCounter_i1 = 0U;

        /* Entry 'wait': '<S697>:202' */
        DR18E_Testpult_B.O_State = 12.0;
      }
      break;

     case DR18E_Testpult_IN_initEntry:
      DR18E_Testpult_B.O_State = 10.0;

      /* During 'initEntry': '<S697>:255' */
      if (DR18E_Testpult_DW.temporalCounter_i1 >= 5000U) {
        /* Transition: '<S697>:760' */
        /* Transition: '<S697>:218' */
        DR18E_Testpult_DW.i = 0;
        if (DR18E_Testpult_DW.i < 8) {
          /* Transition: '<S697>:215' */
          DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpult_IN_U_init;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'U_init': '<S697>:188' */
          DR18E_Testpult_B.O_State = 11.0;
          DR18E_Testpult_B.O_U1Init_Reg =
            DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U1Init_Zeit =
            DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U2Init_Reg =
            DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U2Init_Zeit =
            DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[DR18E_Testpult_DW.i];
        } else {
          /* Transition: '<S697>:735' */
          DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpul_IN_CANTimeoutInit;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'CANTimeoutInit': '<S697>:732' */
          /* en: O_U1_RegID = 208; //0xD0
             en: O_U2_RegID = 208; //0xD0
             en: O_U1_Value32 = 1000; //Timeout in ms
             en: O_U2_Value32 = 1000; //Timeout in ms */
          DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;
        }
      }
      break;

     default:
      DR18E_Testpult_B.O_State = 12.0;

      /* During 'wait': '<S697>:202' */
      if (DR18E_Testpult_DW.temporalCounter_i1 >= 100U) {
        /* Transition: '<S697>:223' */
        /* Transition: '<S697>:214' */
        tmp = DR18E_Testpult_DW.i + 1;
        if (tmp > 127) {
          tmp = 127;
        }

        DR18E_Testpult_DW.i = (int8_T)tmp;
        if (DR18E_Testpult_DW.i < 8) {
          /* Transition: '<S697>:215' */
          DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpult_IN_U_init;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'U_init': '<S697>:188' */
          DR18E_Testpult_B.O_State = 11.0;
          DR18E_Testpult_B.O_U1Init_Reg =
            DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U1Init_Zeit =
            DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U2Init_Reg =
            DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[DR18E_Testpult_DW.i];
          DR18E_Testpult_B.O_U2Init_Zeit =
            DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[DR18E_Testpult_DW.i];
        } else {
          /* Transition: '<S697>:735' */
          DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpul_IN_CANTimeoutInit;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'CANTimeoutInit': '<S697>:732' */
          /* en: O_U1_RegID = 208; //0xD0
             en: O_U2_RegID = 208; //0xD0
             en: O_U1_Value32 = 1000; //Timeout in ms
             en: O_U2_Value32 = 1000; //Timeout in ms */
          DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;
        }
      }
      break;
    }
    break;
  }

  if (guard2) {
    if (DR18E_Testpult_B.A_BRAKE_OVERTRAVEL) {
      /* Transition: '<S697>:696' */
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Safety_Error': '<S697>:715' */
      DR18E_Testpult_B.O_ErrorNr = 2.0;
      DR18E_Testpult_B.O_State = 17.1;
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (DR18E_Testpult_B.Logic_f[0]) {
      /* Transition: '<S697>:683' */
      DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpult_IN_Safety_Error2;

      /* Entry 'Safety_Error2': '<S697>:711' */
      DR18E_Testpult_B.O_ErrorNr = 6.0;
      DR18E_Testpult_B.O_State = 17.7;
    }
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Testpult_Precharge(void)
{
  /* During 'Precharge': '<S697>:76' */
  DR18E_Testpult_B.O_fBlink_Start = 0.0;
  switch (DR18E_Testpult_DW.is_Precharge) {
   case DR18E_Testpult_IN_AIR_Disable:
    DR18E_Testpult_B.O_State = 24.4;

    /* During 'AIR_Disable': '<S697>:548' */
    /* Precharge Error */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 100U) {
      /* Transition: '<S697>:302' */
      /* Transition: '<S697>:668' */
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      DR18E_Testpult_DW.is_TS_init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Check_Safety1;

      /* Entry 'Check_Safety1': '<S697>:616' */
      DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
      DR18E_Testpult_B.O_Precharge_Enable = false;
      DR18E_Testpult_B.O_fBlink_Start = 0.0;
      DR_enter_internal_Check_Safety1();
    }
    break;

   case DR18E_Testpult_IN_AIR_Error:
    DR18E_Testpult_B.O_ErrorNr = 31.0;

    /* During 'AIR_Error': '<S697>:295' */
    /* Transition: '<S697>:300' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error': '<S697>:295' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpult_IN_AIR_Error1:
    DR18E_Testpult_B.O_ErrorNr = 32.0;

    /* During 'AIR_Error1': '<S697>:304' */
    /* Transition: '<S697>:307' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error1': '<S697>:304' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpult_IN_AIR_Error2:
    DR18E_Testpult_B.O_ErrorNr = 34.0;

    /* During 'AIR_Error2': '<S697>:381' */
    /* Transition: '<S697>:380' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error2': '<S697>:381' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpult_IN_AIR_Error3:
    DR18E_Testpult_B.O_ErrorNr = 35.0;

    /* During 'AIR_Error3': '<S697>:384' */
    /* Transition: '<S697>:388' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error3': '<S697>:384' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpult_IN_AIR_Error4:
    DR18E_Testpult_B.O_ErrorNr = 36.0;

    /* During 'AIR_Error4': '<S697>:399' */
    /* Transition: '<S697>:401' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error4': '<S697>:399' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpult_IN_AIR_Error5:
    DR18E_Testpult_B.O_ErrorNr = 37.0;

    /* During 'AIR_Error5': '<S697>:402' */
    /* Transition: '<S697>:404' */
    /* Transition: '<S697>:550' */
    /* Exit 'AIR_Error5': '<S697>:402' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;

   case DR18E_Testpul_IN_Precharge_Done:
    DR18E_Testpult_B.O_State = 26.0;
    DR18E_Testpult_B.O_ErrorNr = 0.0;

    /* During 'Precharge_Done': '<S697>:93' */
    /* Precharge OK */
    if (DR18E_Testpult_B.SFunction1_o7_h != 0.0) {
      /* Transition: '<S697>:95' */
      /* Exit 'Precharge_Done': '<S697>:93' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      DR18E_Testpult_DW.is_TS_init = DR18E_IN_ClearPowervoltageError;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'ClearPowervoltageError': '<S697>:75' */
      /* en: O_U1_RegID = 143; //0x8F
         en: O_U2_RegID = 143; //0x8F
         en: O_U1_Value32 = 0;
         en: O_U2_Value32 = 0;
         en: O_Inverter_TX_Mode = 2; //Universal TX Mode
         ex: O_U1_RegID = 0;
         ex: O_U1_RegID = 0; */
    }
    break;

   case DR18E_Test_IN_Precharge_Prepare:
    DR18E_Testpult_B.O_State = 22.0;

    /* During 'Precharge_Prepare': '<S697>:85' */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 100U) {
      /* Transition: '<S697>:283' */
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_Precharge_Start;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'Precharge_Start': '<S697>:282' */
      DR18E_Testpult_B.O_Sicherheitskreis_Enable = true;
      DR18E_Testpult_B.O_State = 23.0;

      /* du: e_clearPowervoltage; */
    }
    break;

   case DR18E_Testpu_IN_Precharge_Start:
    DR18E_Testpult_B.O_State = 23.0;

    /* During 'Precharge_Start': '<S697>:282' */
    /* Transition: '<S697>:293' */
    /* [AIR_L & AIR_Rminus] */
    /* Zu lange PrechargeZeit */
    if (DR18E_Testpult_DW.temporalCounter_i1 >= 15000U) {
      /* Transition: '<S697>:90' */
      DR18E_Testpult_DW.is_Precharge = DR18E_Te_IN_Precharge_TimeError;

      /* Entry 'Precharge_TimeError': '<S697>:97' */
      DR18E_Testpult_B.O_ErrorNr = 33.0;
      DR18E_Testpult_B.O_State = 25.0;
    } else {
      /* EV4.12.1 */
      if (DR18E_Testpult_B.UDCcorr >= 0.90 * DR18E_Testpult_B.SFunction1_o1_mi)
      {
        /* Transition: '<S697>:279' */
        DR18E_Testpult_DW.is_Precharge = DR18E_Testpul_IN_Precharge_Done;

        /* Entry 'Precharge_Done': '<S697>:93' */
        DR18E_Testpult_B.O_Precharge_Enable = false;
        DR18E_Testpult_B.O_ErrorNr = 0.0;
        DR18E_Testpult_B.O_State = 26.0;
      }
    }
    break;

   default:
    DR18E_Testpult_B.O_ErrorNr = 33.0;

    /* During 'Precharge_TimeError': '<S697>:97' */
    /* Transition: '<S697>:301' */
    /* Transition: '<S697>:550' */
    /* Exit 'Precharge_TimeError': '<S697>:97' */
    /* Event: '<S697>:309' */
    DR18E_Testpult_DW.e_ErrorEventCounter++;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpult_IN_AIR_Disable;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;

    /* Entry 'AIR_Disable': '<S697>:548' */
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_State = 24.4;
    break;
  }
}

/* Function for Chart: '<S535>/Fahrzeugsteuerung' */
static void DR18E_Tes_exit_internal_TS_init(void)
{
  /* Exit Internal 'TS_init': '<S697>:8' */
  if (DR18E_Testpult_DW.is_TS_init == DR18E_Testpult_IN_Precharge) {
    /* Exit Internal 'Precharge': '<S697>:76' */
    switch (DR18E_Testpult_DW.is_Precharge) {
     case DR18E_Testpult_IN_AIR_Error:
      /* Exit 'AIR_Error': '<S697>:295' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpult_IN_AIR_Error1:
      /* Exit 'AIR_Error1': '<S697>:304' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpult_IN_AIR_Error2:
      /* Exit 'AIR_Error2': '<S697>:381' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpult_IN_AIR_Error3:
      /* Exit 'AIR_Error3': '<S697>:384' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpult_IN_AIR_Error4:
      /* Exit 'AIR_Error4': '<S697>:399' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpult_IN_AIR_Error5:
      /* Exit 'AIR_Error5': '<S697>:402' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Testpul_IN_Precharge_Done:
      /* Exit 'Precharge_Done': '<S697>:93' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     case DR18E_Te_IN_Precharge_TimeError:
      /* Exit 'Precharge_TimeError': '<S697>:97' */
      /* Event: '<S697>:309' */
      DR18E_Testpult_DW.e_ErrorEventCounter++;
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;

     default:
      DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
      break;
    }

    DR18E_Testpult_DW.is_TS_init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
  } else {
    DR18E_Testpult_DW.is_TS_init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
  }
}

/* Model output function */
void DR18E_Testpult_output(void)
{
  real_T *lastU;
  int32_T maxV;
  boolean_T tmpForInput[8];
  int8_T rtAction;
  boolean_T zcEvent;
  ZCEventType zcEvent_0;
  boolean_T tmpForInput_0[27];
  int32_T i;
  uint32_T tmp;
  uint32_T tmp_0;
  uint64m_T tmp_1;
  uint64m_T tmp_2;
  real_T u2;
  real_T u0;
  real_T u1;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
    /* set solver stop time */
    if (!(DR18E_Testpult_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&DR18E_Testpult_M->solverInfo,
                            ((DR18E_Testpult_M->Timing.clockTickH0 + 1) *
        DR18E_Testpult_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&DR18E_Testpult_M->solverInfo,
                            ((DR18E_Testpult_M->Timing.clockTick0 + 1) *
        DR18E_Testpult_M->Timing.stepSize0 +
        DR18E_Testpult_M->Timing.clockTickH0 *
        DR18E_Testpult_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(DR18E_Testpult_M)) {
    DR18E_Testpult_M->Timing.t[0] = rtsiGetT(&DR18E_Testpult_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* S-Function (rti_commonblock): '<S101>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK1A_Temp" Id:538 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->processed) {
          DR18E_Testpult_B.SFunction1_o5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->processed;
          DR18E_Testpult_B.SFunction1_o6 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->timestamp;
          DR18E_Testpult_B.SFunction1_o7 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK1_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK1_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK1_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK1_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5 = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S102>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK1B_Temp" Id:539 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->processed) {
          DR18E_Testpult_B.SFunction1_o2_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->processed;
          DR18E_Testpult_B.SFunction1_o3_n = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_p = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK1_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_a = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_l = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S103>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK2A_Temp" Id:540 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->processed) {
          DR18E_Testpult_B.SFunction1_o5_j = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->processed;
          DR18E_Testpult_B.SFunction1_o6_p = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_b = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK2_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_d = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK2_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_f = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK2_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_m = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK2_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_h = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_j = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S104>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK2B_Temp" Id:541 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->processed) {
          DR18E_Testpult_B.SFunction1_o2_o = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->processed;
          DR18E_Testpult_B.SFunction1_o3_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_i = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK2_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_e = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_o = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S105>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK3A_Temp" Id:542 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->processed) {
          DR18E_Testpult_B.SFunction1_o5_f = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->processed;
          DR18E_Testpult_B.SFunction1_o6_pf = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_a = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK3_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_al = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK3_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_p = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK3_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_ns = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK3_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_c = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_f = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S106>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK3B_Temp" Id:543 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->processed) {
          DR18E_Testpult_B.SFunction1_o2_h = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->processed;
          DR18E_Testpult_B.SFunction1_o3_h = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK3_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_m = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_h = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S107>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK4A_Temp" Id:544 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->processed) {
          DR18E_Testpult_B.SFunction1_o5_m = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->processed;
          DR18E_Testpult_B.SFunction1_o6_d = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_af = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK4_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_p = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK4_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_g = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK4_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_nm = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK4_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_l4 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_m = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S108>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK4B_Temp" Id:545 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->processed) {
          DR18E_Testpult_B.SFunction1_o2_a = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->processed;
          DR18E_Testpult_B.SFunction1_o3_i = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_k = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK4_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_ez = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_a = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S109>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK5A_Temp" Id:546 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->processed) {
          DR18E_Testpult_B.SFunction1_o5_g = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->processed;
          DR18E_Testpult_B.SFunction1_o6_a = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_n = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK5_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_dl = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK5_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_oa = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK5_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_d = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK5_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_f = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_g = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S110>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK5B_Temp" Id:547 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->processed) {
          DR18E_Testpult_B.SFunction1_o2_e = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->processed;
          DR18E_Testpult_B.SFunction1_o3_a = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_d = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK5_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_j = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_e = 0.0;
      }
    }

    /* MinMax: '<S675>/MinMax' */
    u0 = DR18E_Testpult_B.SFunction1_o1;
    u2 = DR18E_Testpult_B.SFunction1_o2;
    if ((u0 > u2) || rtIsNaN(u2)) {
      u2 = u0;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_a;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_d;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_f;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_m;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_h;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_e;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_al;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_p;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_ns;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_c;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_m;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_p;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_g;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_nm;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_l4;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_ez;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_dl;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_oa;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_d;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_f;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_j;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    DR18E_Testpult_B.MinMax = u2;

    /* End of MinMax: '<S675>/MinMax' */

    /* S-Function (rti_commonblock): '<S133>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK6A_Temp" Id:550 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->processed) {
          DR18E_Testpult_B.SFunction1_o5_mv = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->processed;
          DR18E_Testpult_B.SFunction1_o6_k = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_bx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK6_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_c = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK6_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_c = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK6_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_e = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK6_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_n = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_mv = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S134>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK6B_Temp" Id:551 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->processed) {
          DR18E_Testpult_B.SFunction1_o2_hl = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->processed;
          DR18E_Testpult_B.SFunction1_o3_e3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_a = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK6_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_da = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_hl = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S135>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK7A_Temp" Id:552 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->processed) {
          DR18E_Testpult_B.SFunction1_o5_o = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->processed;
          DR18E_Testpult_B.SFunction1_o6_f = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_n5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK7_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_g = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK7_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_d = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK7_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_h1 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK7_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_fc = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_o = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S136>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK7B_Temp" Id:553 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->processed) {
          DR18E_Testpult_B.SFunction1_o2_eo = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->processed;
          DR18E_Testpult_B.SFunction1_o3_f = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_lz = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK7_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_h = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_eo = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S137>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK8A_Temp" Id:554 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->processed) {
          DR18E_Testpult_B.SFunction1_o5_jq = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->processed;
          DR18E_Testpult_B.SFunction1_o6_kx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_o = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK8_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_o = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK8_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_l3 = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK8_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_g = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK8_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_j = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_jq = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S138>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK8B_Temp" Id:555 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->processed) {
          DR18E_Testpult_B.SFunction1_o2_e3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->processed;
          DR18E_Testpult_B.SFunction1_o3_ea = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_hb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK8_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_b = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_e3 = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S139>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK9A_Temp" Id:556 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->processed) {
          DR18E_Testpult_B.SFunction1_o5_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->processed;
          DR18E_Testpult_B.SFunction1_o6_d1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_m = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK9_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_l = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK9_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_k = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK9_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_de = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK9_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_g = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_l = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S140>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK9B_Temp" Id:557 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->processed) {
          DR18E_Testpult_B.SFunction1_o2_ho = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->processed;
          DR18E_Testpult_B.SFunction1_o3_lb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_la = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK9_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_n = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_ho = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S131>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK10A_Temp" Id:558 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->processed) {
          DR18E_Testpult_B.SFunction1_o5_js = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->processed;
          DR18E_Testpult_B.SFunction1_o6_g = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_k = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK10_Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_i = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK10_Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_dz = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK10_Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_gs = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "STK10_Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_as = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_js = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S132>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK10B_Temp" Id:559 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->processed) {
          DR18E_Testpult_B.SFunction1_o2_ew = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->processed;
          DR18E_Testpult_B.SFunction1_o3_ht = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_m = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "STK10_Temp5" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_f = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_ew = 0.0;
      }
    }

    /* MinMax: '<S675>/MinMax1' */
    u0 = DR18E_Testpult_B.SFunction1_o1_c;
    u2 = DR18E_Testpult_B.SFunction1_o2_c;
    if ((u0 > u2) || rtIsNaN(u2)) {
      u2 = u0;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_e;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_n;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_da;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_g;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_d;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_h1;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_fc;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_h;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_o;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_l3;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_g;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_j;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_b;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_l;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_k;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_de;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_g;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_n;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_i;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o2_dz;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o3_gs;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o4_as;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    u1 = DR18E_Testpult_B.SFunction1_o1_f;
    if (!((u2 > u1) || rtIsNaN(u1))) {
      u2 = u1;
    }

    DR18E_Testpult_B.MinMax1 = u2;

    /* End of MinMax: '<S675>/MinMax1' */

    /* MinMax: '<S675>/MinMax2' */
    u0 = DR18E_Testpult_B.MinMax;
    u2 = DR18E_Testpult_B.MinMax1;
    if ((u0 > u2) || rtIsNaN(u2)) {
      u2 = u0;
    }

    DR18E_Testpult_B.MinMax2 = u2;

    /* End of MinMax: '<S675>/MinMax2' */

    /* RelationalOperator: '<S674>/Compare' incorporates:
     *  Constant: '<S674>/Constant'
     */
    DR18E_Testpult_B.Compare_k2 = (DR18E_Testpult_B.MinMax2 >=
      DR18E_Testpult_P.CompareToConstant1_const);

    /* Switch: '<S533>/Switch1' incorporates:
     *  Constant: '<S533>/Volle Lüfterleistung1'
     *  Constant: '<S533>/Volle Lüfterleistung2'
     */
    if (DR18E_Testpult_B.Compare_k2) {
      DR18E_Testpult_B.Switch1 = DR18E_Testpult_P.VolleLfterleistung1_Value;
    } else {
      DR18E_Testpult_B.Switch1 = DR18E_Testpult_P.VolleLfterleistung2_Value;
    }

    /* End of Switch: '<S533>/Switch1' */

    /* DataTypeConversion: '<S6>/Data Type Conversion4' */
    DR18E_Testpult_B.DataTypeConversion4 = DR18E_Testpult_B.Switch1;

    /* UnitDelay: '<S12>/Delay Input1' */
    DR18E_Testpult_B.Uk1 = DR18E_Testpult_DW.DelayInput1_DSTATE;

    /* RelationalOperator: '<S12>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator =
      (DR18E_Testpult_B.DataTypeConversion4 != DR18E_Testpult_B.Uk1);

    /* Gain: '<S6>/Gain' */
    DR18E_Testpult_B.Gain = DR18E_Testpult_P.Gain_Gain_l *
      DR18E_Testpult_B.DataTypeConversion4;

    /* Outputs for Enabled SubSystem: '<S6>/SIG_FAN_HVBATTERY' incorporates:
     *  EnablePort: '<S13>/Enable'
     */
    if (DR18E_Testpult_B.FixPtRelationalOperator) {
      /* S-Function (rti_commonblock): '<S13>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "SIG_FAN_HVBATTERY" Id:822 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_n4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->processed;
          DR18E_Testpult_B.SFunction1_o2_kh = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_ic = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "SIG_FAN_HVBATTERY" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336], 1,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    /* End of Outputs for SubSystem: '<S6>/SIG_FAN_HVBATTERY' */

    /* RelationalOperator: '<S14>/Delta time limit exceeded' incorporates:
     *  Constant: '<S14>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded = (DR18E_Testpult_B.SFunction1_o3_ic
      >= DR18E_Testpult_P.Deltatimelimit_Value_k);

    /* RelationalOperator: '<S14>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S14>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent = (DR18E_Testpult_B.SFunction1_o1_n4 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_ov);

    /* Logic: '<S14>/OR' */
    DR18E_Testpult_B.OR = (DR18E_Testpult_B.Prevmsgnotsent ||
      DR18E_Testpult_B.Deltatimelimitexceeded);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S14>/Mem1' */
    DR18E_Testpult_B.Mem1 = DR18E_Testpult_DW.Mem1_PreviousInput;

    /* Memory: '<S14>/Mem2' */
    DR18E_Testpult_B.Mem2 = DR18E_Testpult_DW.Mem2_PreviousInput;

    /* Memory: '<S14>/Mem3' */
    DR18E_Testpult_B.Mem3 = DR18E_Testpult_DW.Mem3_PreviousInput;

    /* Memory: '<S14>/Mem4' */
    DR18E_Testpult_B.Mem4 = DR18E_Testpult_DW.Mem4_PreviousInput;

    /* Logic: '<S14>/Warn' */
    DR18E_Testpult_B.Warn = (DR18E_Testpult_B.OR && DR18E_Testpult_B.Mem1 &&
      DR18E_Testpult_B.Mem2 && DR18E_Testpult_B.Mem3 && DR18E_Testpult_B.Mem4);

    /* S-Function (rti_commonblock): '<S494>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Dashboard_Buttons" Id:787 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->processed) {
          DR18E_Testpult_B.SFunction1_o2_ay = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->processed;
          DR18E_Testpult_B.SFunction1_o3_j = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_lu = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Starttaster" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_av = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_ay = 0.0;
      }
    }

    /* Gain: '<S85>/Gain2' */
    DR18E_Testpult_B.Starttaster = DR18E_Testpult_P.Gain2_Gain *
      DR18E_Testpult_B.SFunction1_o1_av;

    /* RelationalOperator: '<S700>/Compare' incorporates:
     *  Constant: '<S700>/Constant'
     */
    DR18E_Testpult_B.Compare_l = (DR18E_Testpult_B.Starttaster >
      DR18E_Testpult_P.Constant_Value_af);

    /* UnitDelay: '<S696>/Delay Input1' */
    DR18E_Testpult_B.Uk1_dl = DR18E_Testpult_DW.DelayInput1_DSTATE_p;

    /* RelationalOperator: '<S696>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_e = ((int32_T)
      DR18E_Testpult_B.Compare_l > (int32_T)DR18E_Testpult_B.Uk1_dl);

    /* S-Function (rti_commonblock): '<S482>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "BSPD_Status" Id:770 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->processed) {
          DR18E_Testpult_B.SFunction1_o2_f5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->processed;
          DR18E_Testpult_B.SFunction1_o3_gv = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_cb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "BSPD" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_fs = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_f5 = 0.0;
      }
    }

    /* Gain: '<S84>/Gain1' */
    DR18E_Testpult_B.Gain1 = DR18E_Testpult_P.Gain1_Gain *
      DR18E_Testpult_B.SFunction1_o1_fs;

    /* Logic: '<S84>/Logical Operator' */
    DR18E_Testpult_B.BSPD = !(DR18E_Testpult_B.Gain1 != 0.0);

    /* DataTypeConversion: '<S523>/DT_BPD' */
    DR18E_Testpult_B.A_BSPD = DR18E_Testpult_B.BSPD;

    /* S-Function (rti_commonblock): '<S481>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "BOTS_Status" Id:771 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->processed) {
          DR18E_Testpult_B.SFunction1_o2_pb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->processed;
          DR18E_Testpult_B.SFunction1_o3_k = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_f1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "BOTS" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_id = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_pb = 0.0;
      }
    }

    /* Gain: '<S84>/Gain' */
    DR18E_Testpult_B.BOTS = DR18E_Testpult_P.Gain_Gain_d *
      DR18E_Testpult_B.SFunction1_o1_id;

    /* DataTypeConversion: '<S523>/DT_BRAKEOVERTRAVEL' */
    DR18E_Testpult_B.A_BRAKE_OVERTRAVEL = (DR18E_Testpult_B.BOTS != 0.0);

    /* S-Function (rti_commonblock): '<S493>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Dashboard_AUX" Id:786 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->processed) {
          DR18E_Testpult_B.SFunction1_o3_ni = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->processed;
          DR18E_Testpult_B.SFunction1_o4_go = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_f4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Notaus_Cockpit" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_ib = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Crashsensor" (8|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o2_c1 = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_ni = 0.0;
      }
    }

    /* Gain: '<S85>/Gain' */
    DR18E_Testpult_B.Notaus_Cockpit = DR18E_Testpult_P.Gain_Gain_df *
      DR18E_Testpult_B.SFunction1_o1_ib;

    /* DataTypeConversion: '<S523>/DT_NOTCOCKPIT' */
    DR18E_Testpult_B.A_NOT_COCKPIT = (DR18E_Testpult_B.Notaus_Cockpit != 0.0);

    /* S-Function (rti_commonblock): '<S500>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "ES_rear" Id:789 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->processed) {
          DR18E_Testpult_B.SFunction1_o3_lo = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->processed;
          DR18E_Testpult_B.SFunction1_o4_e = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_jw = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Notaus_links" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_ds = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Notaus_rechts" (8|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o2_ed = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_lo = 0.0;
      }
    }

    /* Gain: '<S86>/Gain' */
    DR18E_Testpult_B.Notaus_links = DR18E_Testpult_P.Gain_Gain_dq *
      DR18E_Testpult_B.SFunction1_o1_ds;

    /* DataTypeConversion: '<S523>/DT_NOTLINKS' */
    DR18E_Testpult_B.A_NOT_LINKS = (DR18E_Testpult_B.Notaus_links != 0.0);

    /* Gain: '<S86>/Gain1' */
    DR18E_Testpult_B.Notaus_rechts = DR18E_Testpult_P.Gain1_Gain_j *
      DR18E_Testpult_B.SFunction1_o2_ed;

    /* DataTypeConversion: '<S523>/DT_NOTRECHTS' */
    DR18E_Testpult_B.A_NOT_RECHTS = (DR18E_Testpult_B.Notaus_rechts != 0.0);

    /* S-Function (rti_commonblock): '<S88>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_AMS_STATE" Id:368 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->processed) {
          DR18E_Testpult_B.SFunction1_o8 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->processed;
          DR18E_Testpult_B.SFunction1_o9 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->timestamp;
          DR18E_Testpult_B.SFunction1_o10 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "HV_Voltage_total" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_mi = 0.01 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "AMS_Relay_Status" (16|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o2_ci = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Error_component_number" (24|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o3_p = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Error_strang_number" (32|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o4_j5 = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "HV_Errorbyte" (40|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o5_mp = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "AIR_minus_Status" (48|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o6_i = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "AIR_plus_Status" (56|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o7_h = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o8 = 0.0;
      }
    }

    /* DataTypeConversion: '<S77>/Data Type Conversion1' */
    DR18E_Testpult_B.AMS_RelayState = DR18E_Testpult_B.SFunction1_o2_ci;

    /* DataTypeConversion: '<S523>/DT_AMS' */
    DR18E_Testpult_B.A_AMS = (DR18E_Testpult_B.AMS_RelayState != 0.0);

    /* S-Function (rti_commonblock): '<S261>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "CANIO_AUX" Id:809 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->processed) {
          DR18E_Testpult_B.SFunction1_o5_e = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->processed;
          DR18E_Testpult_B.SFunction1_o6_o = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ap = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Safetycircuit_State" (24|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_gb = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "IMD_State" (32|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o2_i = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Inv_1_State" (40|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o3_jz = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Inv_2_State" (48|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o4_as5 = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_e = 0.0;
      }
    }

    /* Gain: '<S78>/Gain4' */
    DR18E_Testpult_B.IMD_State = DR18E_Testpult_P.Gain4_Gain *
      DR18E_Testpult_B.SFunction1_o2_i;

    /* DataTypeConversion: '<S523>/DT_IMD' */
    DR18E_Testpult_B.DT_IMD = (DR18E_Testpult_B.IMD_State != 0.0);

    /* Logic: '<S523>/Logical Operator2' */
    DR18E_Testpult_B.A_IMD = !DR18E_Testpult_B.DT_IMD;

    /* Logic: '<S523>/Logical Operator' incorporates:
     *  Constant: '<S523>/Constant1'
     */
    DR18E_Testpult_B.LogicalOperator = !DR18E_Testpult_P.Constant1_Value_l2;
  }

  /* Step: '<S523>/Step' */
  u2 = DR18E_Testpult_M->Timing.t[0];
  if (u2 < DR18E_Testpult_P.Step_Time) {
    DR18E_Testpult_B.Step = DR18E_Testpult_P.Step_Y0;
  } else {
    DR18E_Testpult_B.Step = DR18E_Testpult_P.Step_YFinal;
  }

  /* End of Step: '<S523>/Step' */

  /* Outputs for Enabled SubSystem: '<S523>/AMSIMD_Latching' incorporates:
   *  EnablePort: '<S536>/Enable'
   */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
    if (DR18E_Testpult_B.Step > 0.0) {
      if (!DR18E_Testpult_DW.AMSIMD_Latching_MODE) {
        DR18E_Testpult_DW.AMSIMD_Latching_MODE = true;
      }
    } else {
      if (DR18E_Testpult_DW.AMSIMD_Latching_MODE) {
        DR18E_Testpult_DW.AMSIMD_Latching_MODE = false;
      }
    }
  }

  if (DR18E_Testpult_DW.AMSIMD_Latching_MODE && (rtmIsMajorTimeStep
       (DR18E_Testpult_M) &&
       DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0)) {
    /* Memory: '<S539>/Memory' */
    DR18E_Testpult_B.Memory_i = DR18E_Testpult_DW.Memory_PreviousInput_eq;

    /* CombinatorialLogic: '<S539>/Logic' */
    zcEvent = DR18E_Testpult_B.A_AMS;
    i = zcEvent;
    zcEvent = DR18E_Testpult_B.LogicalOperator;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    zcEvent = DR18E_Testpult_B.Memory_i;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    DR18E_Testpult_B.Logic_f[0U] = DR18E_Testpult_P.Logic_table[(uint32_T)i];
    DR18E_Testpult_B.Logic_f[1U] = DR18E_Testpult_P.Logic_table[i + 8U];

    /* Memory: '<S540>/Memory' */
    DR18E_Testpult_B.Memory_a = DR18E_Testpult_DW.Memory_PreviousInput_oa;

    /* CombinatorialLogic: '<S540>/Logic' */
    zcEvent = DR18E_Testpult_B.A_IMD;
    i = zcEvent;
    zcEvent = DR18E_Testpult_B.LogicalOperator;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    zcEvent = DR18E_Testpult_B.Memory_a;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    DR18E_Testpult_B.Logic_fh[0U] = DR18E_Testpult_P.Logic_table_k[(uint32_T)i];
    DR18E_Testpult_B.Logic_fh[1U] = DR18E_Testpult_P.Logic_table_k[i + 8U];
  }

  /* End of Outputs for SubSystem: '<S523>/AMSIMD_Latching' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* DataTypeConversion: '<S523>/DT_HVD' incorporates:
     *  Constant: '<S523>/Constant14'
     */
    DR18E_Testpult_B.A_HVD = DR18E_Testpult_P.Constant14_Value;

    /* Logic: '<S523>/OR Sicherheitskreis' */
    tmpForInput[0] = DR18E_Testpult_B.A_BSPD;
    tmpForInput[1] = DR18E_Testpult_B.A_BRAKE_OVERTRAVEL;
    tmpForInput[2] = DR18E_Testpult_B.A_NOT_COCKPIT;
    tmpForInput[3] = DR18E_Testpult_B.A_NOT_LINKS;
    tmpForInput[4] = DR18E_Testpult_B.A_NOT_RECHTS;
    tmpForInput[5] = DR18E_Testpult_B.Logic_f[0];
    tmpForInput[6] = DR18E_Testpult_B.Logic_fh[0];
    tmpForInput[7] = DR18E_Testpult_B.A_HVD;
    zcEvent = tmpForInput[0];
    for (i = 0; i < 7; i++) {
      zcEvent = (zcEvent || tmpForInput[i + 1]);
    }

    DR18E_Testpult_B.ORSicherheitskreis = zcEvent;

    /* End of Logic: '<S523>/OR Sicherheitskreis' */

    /* S-Function (rti_commonblock): '<S293>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "INV_1_Recieve" Id:273 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->processed) {
        can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->timestamp > 0.0) {
        if (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->processed) {
          DR18E_Testpult_B.SFunction1_o4_dc = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->processed;
          DR18E_Testpult_B.SFunction1_o5_a = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->timestamp;
          DR18E_Testpult_B.SFunction1_o6_pu = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->deltatime;
          CAN_Msg = can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "INV_1_RX_REGID" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_ft = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "INV_1_RX_Value" (8|32, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte2 = CAN_Msg[3];
            CAN_Sgn.SgnBytes.Byte3 = CAN_Msg[4];
            DR18E_Testpult_B.SFunction1_o2_ao = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "muell" (40|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o3_lz = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o4_dc = 0.0;
      }
    }

    /* SwitchCase: '<S286>/Switch Case' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      u0 = DR18E_Testpult_B.SFunction1_o1_ft;
      if (u0 < 0.0) {
        u0 = ceil(u0);
      } else {
        u0 = floor(u0);
      }

      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 4.294967296E+9);
      }

      switch (u0 < 0.0 ? -(int32_T)(uint32_T)-u0 : (int32_T)(uint32_T)u0) {
       case 73:
        rtAction = 0;
        break;

       case 48:
        rtAction = 1;
        break;

       case 95:
        rtAction = 2;
        break;

       case 39:
        rtAction = 3;
        break;

       case 64:
        rtAction = 4;
        break;

       case 143:
        rtAction = 5;
        break;

       case 235:
        rtAction = 6;
        break;

       case 74:
        rtAction = 7;
        break;

       default:
        rtAction = 8;
        break;
      }

      DR18E_Testpult_DW.SwitchCase_ActiveSubsystem = rtAction;
    } else {
      rtAction = DR18E_Testpult_DW.SwitchCase_ActiveSubsystem;
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S286>/Motortemperatur' incorporates:
       *  ActionPort: '<S295>/Action Port'
       */
      /* Gain: '<S295>/Gain' */
      DR18E_Testpult_B.Gain_dh = DR18E_Testpult_P.Gain_Gain *
        DR18E_Testpult_B.SFunction1_o2_ao;

      /* Sum: '<S295>/Subtract' incorporates:
       *  Constant: '<S295>/Constant2'
       */
      DR18E_Testpult_B.RawWert2_Motor1 = DR18E_Testpult_P.Constant2_Value -
        DR18E_Testpult_B.SFunction1_o2_ao;

      /* Product: '<S295>/Divide' */
      DR18E_Testpult_B.Divide_aa = DR18E_Testpult_B.Gain_dh /
        DR18E_Testpult_B.RawWert2_Motor1;

      /* Lookup_n-D: '<S295>/Temp. corresponding  resistance' */
      DR18E_Testpult_B.Tempcorrespondingresistance_i = look1_linlxpw
        (DR18E_Testpult_B.Divide_aa,
         DR18E_Testpult_P.Tempcorrespondingresistance_bp0,
         DR18E_Testpult_P.Tempcorrespondingresistance_tab, 22U);

      /* End of Outputs for SubSystem: '<S286>/Motortemperatur' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S286>/Drehzahl' incorporates:
       *  ActionPort: '<S288>/Action Port'
       */
      /* SampleTimeMath: '<S304>/Weighted Sample Time'
       *
       * About '<S304>/Weighted Sample Time':
       *  y = K where K = ( w * Ts )
       */
      DR18E_Testpult_B.WeightedSampleTime_n =
        DR18E_Testpult_P.WeightedSampleTime_WtEt;

      /* Product: '<S304>/Divide1' incorporates:
       *  Constant: '<S288>/TFilterDrehzahl'
       */
      DR18E_Testpult_B.Divide1_pv = DR18E_Testpult_P.TFilterDrehzahl_Value /
        DR18E_Testpult_B.WeightedSampleTime_n;

      /* Sum: '<S304>/Sum' incorporates:
       *  Constant: '<S304>/Constant2'
       */
      DR18E_Testpult_B.Sum_d1 = DR18E_Testpult_B.Divide1_pv +
        DR18E_Testpult_P.Constant2_Value_i;

      /* Product: '<S304>/Divide' incorporates:
       *  Constant: '<S304>/Constant'
       */
      DR18E_Testpult_B.Divide_az = DR18E_Testpult_P.Constant_Value_e /
        DR18E_Testpult_B.Sum_d1;

      /* DataTypeConversion: '<S288>/Data Type Conversion' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_ao);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 65536.0);
      }

      DR18E_Testpult_B.DataTypeConversion_ov = (int16_T)(u0 < 0.0 ? (int32_T)
        (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

      /* End of DataTypeConversion: '<S288>/Data Type Conversion' */

      /* DataTypeConversion: '<S288>/Data Type Conversion1' */
      DR18E_Testpult_B.DataTypeConversion1_d =
        DR18E_Testpult_B.DataTypeConversion_ov;

      /* Outputs for Atomic SubSystem: '<S288>/Skalierung Drehzahl' */
      DR18E_Testpu_SkalierungDrehzahl(DR18E_Testpult_B.DataTypeConversion1_d,
        &DR18E_Testpult_B.SkalierungDrehzahl, (P_SkalierungDrehzahl_DR18E_Te_T *)
        &DR18E_Testpult_P.SkalierungDrehzahl);

      /* End of Outputs for SubSystem: '<S288>/Skalierung Drehzahl' */

      /* Product: '<S302>/Product' incorporates:
       *  Constant: '<S288>/Constant1'
       */
      DR18E_Testpult_B.Product_kp = DR18E_Testpult_P.Constant1_Value_h *
        DR18E_Testpult_B.SkalierungDrehzahl.Gain;

      /* Memory: '<S302>/Memory' */
      DR18E_Testpult_B.Memory_j = DR18E_Testpult_DW.Memory_PreviousInput_nz;

      /* Sum: '<S302>/Sum' */
      DR18E_Testpult_B.Sum_h4 = DR18E_Testpult_B.Product_kp -
        DR18E_Testpult_B.Memory_j;

      /* Product: '<S302>/Product1' */
      DR18E_Testpult_B.Product1_gg = DR18E_Testpult_B.Divide_az *
        DR18E_Testpult_B.Sum_h4;

      /* Sum: '<S302>/Sum1' */
      DR18E_Testpult_B.Sum1_ps = DR18E_Testpult_B.Product1_gg +
        DR18E_Testpult_B.Memory_j;

      /* Product: '<S288>/Product' */
      DR18E_Testpult_B.Product_p = DR18E_Testpult_B.Sum1_ps *
        DR18E_Testpult_B.WirkstromIq.Product;

      /* Gain: '<S288>/2*pi // 60' */
      DR18E_Testpult_B.upi60 = DR18E_Testpult_P.upi60_Gain *
        DR18E_Testpult_B.Product_p;

      /* End of Outputs for SubSystem: '<S286>/Drehzahl' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S286>/Strom' incorporates:
       *  ActionPort: '<S299>/Action Port'
       */
      /* DataTypeConversion: '<S299>/Data Type Conversion4' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_ao);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 65536.0);
      }

      DR18E_Testpult_B.DataTypeConversion4_a = (int16_T)(u0 < 0.0 ? (int32_T)
        (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

      /* End of DataTypeConversion: '<S299>/Data Type Conversion4' */

      /* Gain: '<S299>/Gain2' */
      DR18E_Testpult_B.Gain2_ii = DR18E_Testpult_P.Gain2_Gain_p *
        DR18E_Testpult_B.DataTypeConversion4_a;

      /* Product: '<S299>/Divide2' incorporates:
       *  Constant: '<S299>/Constant2'
       */
      DR18E_Testpult_B.Divide2_b = (real_T)DR18E_Testpult_B.Gain2_ii * 0.0078125
        / DR18E_Testpult_P.Constant2_Value_p;

      /* Gain: '<S299>/Drehmoment // Strangstrom in Nm//Arms' */
      DR18E_Testpult_B.DrehmomentStrangstrominNmArms_d =
        DR18E_Testpult_P.DrehmomentStrangstrominNmArms_G *
        DR18E_Testpult_B.Divide2_b;

      /* End of Outputs for SubSystem: '<S286>/Strom' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S286>/Wirkstrom Iq' incorporates:
       *  ActionPort: '<S301>/Action Port'
       */
      DR18E_Testpult_WirkstromIq(DR18E_Testpult_B.SFunction1_o2_ao,
        &DR18E_Testpult_B.WirkstromIq, (P_WirkstromIq_DR18E_Testpult_T *)
        &DR18E_Testpult_P.WirkstromIq);

      /* End of Outputs for SubSystem: '<S286>/Wirkstrom Iq' */
      break;

     case 4:
      /* Outputs for IfAction SubSystem: '<S286>/Red ID 64:  Status Register Auswertung' incorporates:
       *  ActionPort: '<S296>/Action Port'
       */
      /* DataTypeConversion: '<S296>/Data Type Conversion' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_ao);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 4.294967296E+9);
      }

      DR18E_Testpult_B.DataTypeConversion_ot = u0 < 0.0 ? (uint32_T)-(int32_T)
        (uint32_T)-u0 : (uint32_T)u0;

      /* End of DataTypeConversion: '<S296>/Data Type Conversion' */

      /* S-Function (sfix_bitop): '<S296>/2Hz' */
      DR18E_Testpult_B.uHz_c = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.uHz_BitMask;

      /* S-Function (sfix_bitop): '<S296>/Brk' */
      DR18E_Testpult_B.Brk_d = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Brk_BitMask;

      /* S-Function (sfix_bitop): '<S296>/Cal' */
      DR18E_Testpult_B.Cal_b = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Cal_BitMask;

      /* S-Function (sfix_bitop): '<S296>/Cal0' */
      DR18E_Testpult_B.Cal0_i = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Cal0_BitMask;

      /* S-Function (sfix_bitop): '<S296>/Ena' */
      DR18E_Testpult_B.Ena_l = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Ena_BitMask;

      /* RelationalOperator: '<S309>/Compare' incorporates:
       *  Constant: '<S309>/Constant'
       */
      DR18E_Testpult_B.Compare_i2 = (DR18E_Testpult_B.Ena_l >
        DR18E_Testpult_P.Constant_Value_fe);

      /* S-Function (sfix_bitop): '<S296>/NCR0' */
      DR18E_Testpult_B.NCR0_i = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.NCR0_BitMask;

      /* RelationalOperator: '<S310>/Compare' incorporates:
       *  Constant: '<S310>/Constant'
       */
      DR18E_Testpult_B.Compare_bq = (DR18E_Testpult_B.NCR0_i >
        DR18E_Testpult_P.Constant_Value_cc);

      /* S-Function (sfix_bitop): '<S296>/Rsw' */
      DR18E_Testpult_B.Rsw_o = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Rsw_BitMask;

      /* RelationalOperator: '<S311>/Compare' incorporates:
       *  Constant: '<S311>/Constant'
       */
      DR18E_Testpult_B.Compare_bk = (DR18E_Testpult_B.Rsw_o >
        DR18E_Testpult_P.Constant_Value_d);

      /* RelationalOperator: '<S312>/Compare' incorporates:
       *  Constant: '<S312>/Constant'
       */
      DR18E_Testpult_B.Compare_it = (DR18E_Testpult_B.Cal0_i >
        DR18E_Testpult_P.Constant_Value_fw);

      /* RelationalOperator: '<S313>/Compare' incorporates:
       *  Constant: '<S313>/Constant'
       */
      DR18E_Testpult_B.Compare_gl = (DR18E_Testpult_B.Cal_b >
        DR18E_Testpult_P.Constant_Value_f5);

      /* S-Function (sfix_bitop): '<S296>/Tol' */
      DR18E_Testpult_B.Tol_e = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Tol_BitMask;

      /* RelationalOperator: '<S314>/Compare' incorporates:
       *  Constant: '<S314>/Constant'
       */
      DR18E_Testpult_B.Compare_er = (DR18E_Testpult_B.Tol_e >
        DR18E_Testpult_P.Constant_Value_ce);

      /* S-Function (sfix_bitop): '<S296>/Rdy' */
      DR18E_Testpult_B.Rdy_o = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Rdy_BitMask;

      /* RelationalOperator: '<S315>/Compare' incorporates:
       *  Constant: '<S315>/Constant'
       */
      DR18E_Testpult_B.Compare_jl = (DR18E_Testpult_B.Rdy_o >
        DR18E_Testpult_P.Constant_Value_ij);

      /* RelationalOperator: '<S316>/Compare' incorporates:
       *  Constant: '<S316>/Constant'
       */
      DR18E_Testpult_B.Compare_hb3 = (DR18E_Testpult_B.Brk_d >
        DR18E_Testpult_P.Constant_Value_a1);

      /* S-Function (sfix_bitop): '<S296>/SIGNMAG' */
      DR18E_Testpult_B.SIGNMAG_j = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.SIGNMAG_BitMask;

      /* RelationalOperator: '<S317>/Compare' incorporates:
       *  Constant: '<S317>/Constant'
       */
      DR18E_Testpult_B.Compare_om = (DR18E_Testpult_B.SIGNMAG_j >
        DR18E_Testpult_P.Constant_Value_aw);

      /* S-Function (sfix_bitop): '<S296>/Nclip' */
      DR18E_Testpult_B.Nclip_d = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Nclip_BitMask;

      /* RelationalOperator: '<S318>/Compare' incorporates:
       *  Constant: '<S318>/Constant'
       */
      DR18E_Testpult_B.Compare_gx = (DR18E_Testpult_B.Nclip_d >
        DR18E_Testpult_P.Constant_Value_ed);

      /* S-Function (sfix_bitop): '<S296>/Nclip+' */
      DR18E_Testpult_B.Nclip_k = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Nclip_BitMask_j;

      /* RelationalOperator: '<S319>/Compare' incorporates:
       *  Constant: '<S319>/Constant'
       */
      DR18E_Testpult_B.Compare_lc = (DR18E_Testpult_B.Nclip_k >
        DR18E_Testpult_P.Constant_Value_mn);

      /* S-Function (sfix_bitop): '<S296>/Nclip-' */
      DR18E_Testpult_B.Nclip_c = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Nclip_BitMask_h;

      /* RelationalOperator: '<S320>/Compare' incorporates:
       *  Constant: '<S320>/Constant'
       */
      DR18E_Testpult_B.Compare_cc = (DR18E_Testpult_B.Nclip_c >
        DR18E_Testpult_P.Constant_Value_ln);

      /* S-Function (sfix_bitop): '<S296>/Lim+' */
      DR18E_Testpult_B.Lim_f = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Lim_BitMask;

      /* RelationalOperator: '<S321>/Compare' incorporates:
       *  Constant: '<S321>/Constant'
       */
      DR18E_Testpult_B.Compare_mb = (DR18E_Testpult_B.Lim_f >
        DR18E_Testpult_P.Constant_Value_in);

      /* S-Function (sfix_bitop): '<S296>/Ird-Dig' */
      DR18E_Testpult_B.IrdDig_m = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.IrdDig_BitMask;

      /* RelationalOperator: '<S322>/Compare' incorporates:
       *  Constant: '<S322>/Constant'
       */
      DR18E_Testpult_B.Compare_ar = (DR18E_Testpult_B.IrdDig_m >
        DR18E_Testpult_P.Constant_Value_b3);

      /* S-Function (sfix_bitop): '<S296>/Iuse-rchd' */
      DR18E_Testpult_B.Iuserchd_e = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Iuserchd_BitMask;

      /* RelationalOperator: '<S323>/Compare' incorporates:
       *  Constant: '<S323>/Constant'
       */
      DR18E_Testpult_B.Compare_pq = (DR18E_Testpult_B.Iuserchd_e >
        DR18E_Testpult_P.Constant_Value_pf);

      /* S-Function (sfix_bitop): '<S296>/Ird-N' */
      DR18E_Testpult_B.IrdN_g = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.IrdN_BitMask;

      /* RelationalOperator: '<S324>/Compare' incorporates:
       *  Constant: '<S324>/Constant'
       */
      DR18E_Testpult_B.Compare_ef = (DR18E_Testpult_B.IrdN_g >
        DR18E_Testpult_P.Constant_Value_ie);

      /* S-Function (sfix_bitop): '<S296>/Ird_TI' */
      DR18E_Testpult_B.Ird_TI_h = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Ird_TI_BitMask;

      /* RelationalOperator: '<S325>/Compare' incorporates:
       *  Constant: '<S325>/Constant'
       */
      DR18E_Testpult_B.Compare_ex = (DR18E_Testpult_B.Ird_TI_h >
        DR18E_Testpult_P.Constant_Value_awf);

      /* S-Function (sfix_bitop): '<S296>/Ird_TIR' */
      DR18E_Testpult_B.Ird_TIR_j = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Ird_TIR_BitMask;

      /* RelationalOperator: '<S326>/Compare' incorporates:
       *  Constant: '<S326>/Constant'
       */
      DR18E_Testpult_B.Compare_dp = (DR18E_Testpult_B.Ird_TIR_j >
        DR18E_Testpult_P.Constant_Value_fz);

      /* RelationalOperator: '<S327>/Compare' incorporates:
       *  Constant: '<S327>/Constant'
       */
      DR18E_Testpult_B.Compare_bf = (DR18E_Testpult_B.uHz_c >
        DR18E_Testpult_P.Constant_Value_mo);

      /* S-Function (sfix_bitop): '<S296>/Ird-TM' */
      DR18E_Testpult_B.IrdTM_a = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.IrdTM_BitMask;

      /* RelationalOperator: '<S328>/Compare' incorporates:
       *  Constant: '<S328>/Constant'
       */
      DR18E_Testpult_B.Compare_bs = (DR18E_Testpult_B.IrdTM_a >
        DR18E_Testpult_P.Constant_Value_ir);

      /* S-Function (sfix_bitop): '<S296>/Ird-ANA' */
      DR18E_Testpult_B.IrdANA_d = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.IrdANA_BitMask;

      /* RelationalOperator: '<S329>/Compare' incorporates:
       *  Constant: '<S329>/Constant'
       */
      DR18E_Testpult_B.Compare_jw = (DR18E_Testpult_B.IrdANA_d >
        DR18E_Testpult_P.Constant_Value_ct);

      /* S-Function (sfix_bitop): '<S296>/Iwcns' */
      DR18E_Testpult_B.Iwcns_n = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Iwcns_BitMask;

      /* RelationalOperator: '<S330>/Compare' incorporates:
       *  Constant: '<S330>/Constant'
       */
      DR18E_Testpult_B.Compare_f3 = (DR18E_Testpult_B.Iwcns_n >
        DR18E_Testpult_P.Constant_Value_hk);

      /* S-Function (sfix_bitop): '<S296>/RFE_plus' */
      DR18E_Testpult_B.RFE_plus_j = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.RFE_plus_BitMask;

      /* RelationalOperator: '<S331>/Compare' incorporates:
       *  Constant: '<S331>/Constant'
       */
      DR18E_Testpult_B.Compare_di = (DR18E_Testpult_B.RFE_plus_j >
        DR18E_Testpult_P.Constant_Value_g);

      /* S-Function (sfix_bitop): '<S296>/Lim-' */
      DR18E_Testpult_B.Lim_d = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Lim_BitMask_e;

      /* RelationalOperator: '<S332>/Compare' incorporates:
       *  Constant: '<S332>/Constant'
       */
      DR18E_Testpult_B.Compare_jwf = (DR18E_Testpult_B.Lim_d >
        DR18E_Testpult_P.Constant_Value_jv);

      /* S-Function (sfix_bitop): '<S296>/frei' */
      DR18E_Testpult_B.frei_k = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.frei_BitMask;

      /* RelationalOperator: '<S333>/Compare' incorporates:
       *  Constant: '<S333>/Constant'
       */
      DR18E_Testpult_B.Compare_oa = (DR18E_Testpult_B.frei_k >
        DR18E_Testpult_P.Constant_Value_ax);

      /* S-Function (sfix_bitop): '<S296>/Handrad' */
      DR18E_Testpult_B.Handrad_a = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Handrad_BitMask;

      /* RelationalOperator: '<S334>/Compare' incorporates:
       *  Constant: '<S334>/Constant'
       */
      DR18E_Testpult_B.Compare_ns = (DR18E_Testpult_B.Handrad_a >
        DR18E_Testpult_P.Constant_Value_es);

      /* S-Function (sfix_bitop): '<S296>/OK' */
      DR18E_Testpult_B.OK_c = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.OK_BitMask;

      /* RelationalOperator: '<S335>/Compare' incorporates:
       *  Constant: '<S335>/Constant'
       */
      DR18E_Testpult_B.Compare_bv = (DR18E_Testpult_B.OK_c >
        DR18E_Testpult_P.Constant_Value_nc);

      /* S-Function (sfix_bitop): '<S296>/Icns' */
      DR18E_Testpult_B.Icns_m = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.Icns_BitMask;

      /* RelationalOperator: '<S336>/Compare' incorporates:
       *  Constant: '<S336>/Constant'
       */
      DR18E_Testpult_B.Compare_ok = (DR18E_Testpult_B.Icns_m >
        DR18E_Testpult_P.Constant_Value_aa);

      /* S-Function (sfix_bitop): '<S296>/T-Nlim' */
      DR18E_Testpult_B.TNlim_e = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.TNlim_BitMask;

      /* RelationalOperator: '<S337>/Compare' incorporates:
       *  Constant: '<S337>/Constant'
       */
      DR18E_Testpult_B.Compare_bvf = (DR18E_Testpult_B.TNlim_e >
        DR18E_Testpult_P.Constant_Value_ih);

      /* S-Function (sfix_bitop): '<S296>/P-N' */
      DR18E_Testpult_B.PN_d = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.PN_BitMask;

      /* RelationalOperator: '<S338>/Compare' incorporates:
       *  Constant: '<S338>/Constant'
       */
      DR18E_Testpult_B.Compare_a2 = (DR18E_Testpult_B.PN_d >
        DR18E_Testpult_P.Constant_Value_ni);

      /* S-Function (sfix_bitop): '<S296>/N-I' */
      DR18E_Testpult_B.NI_j = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.NI_BitMask;

      /* RelationalOperator: '<S339>/Compare' incorporates:
       *  Constant: '<S339>/Constant'
       */
      DR18E_Testpult_B.Compare_gg = (DR18E_Testpult_B.NI_j >
        DR18E_Testpult_P.Constant_Value_ef);

      /* S-Function (sfix_bitop): '<S296>/N0' */
      DR18E_Testpult_B.N0_p = DR18E_Testpult_B.DataTypeConversion_ot &
        DR18E_Testpult_P.N0_BitMask;

      /* RelationalOperator: '<S340>/Compare' incorporates:
       *  Constant: '<S340>/Constant'
       */
      DR18E_Testpult_B.Compare_i4 = (DR18E_Testpult_B.N0_p >
        DR18E_Testpult_P.Constant_Value_le);

      /* End of Outputs for SubSystem: '<S286>/Red ID 64:  Status Register Auswertung' */
      break;

     case 5:
      /* Outputs for IfAction SubSystem: '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' incorporates:
       *  ActionPort: '<S297>/Action Port'
       */
      RegID0x8FERRORWarningRegisterAu(DR18E_Testpult_B.SFunction1_o2_ao,
        &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_f,
        (P_RegID0x8FERRORWarningRegist_T *)
        &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_f);

      /* End of Outputs for SubSystem: '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
      break;

     case 6:
      /* Outputs for IfAction SubSystem: '<S286>/U_DC' incorporates:
       *  ActionPort: '<S300>/Action Port'
       */
      DR18E_Testpult_U_DC(DR18E_Testpult_B.SFunction1_o2_ao,
                          &DR18E_Testpult_B.U_DC, (P_U_DC_DR18E_Testpult_T *)
                          &DR18E_Testpult_P.U_DC);

      /* End of Outputs for SubSystem: '<S286>/U_DC' */
      break;

     case 7:
      /* Outputs for IfAction SubSystem: '<S286>/Inverter_Temp' incorporates:
       *  ActionPort: '<S294>/Action Port'
       */
      DR18E_Testpult_Inverter_Temp(DR18E_Testpult_B.SFunction1_o2_ao,
        &DR18E_Testpult_B.Inverter_Temp, (P_Inverter_Temp_DR18E_Testpul_T *)
        &DR18E_Testpult_P.Inverter_Temp);

      /* End of Outputs for SubSystem: '<S286>/Inverter_Temp' */
      break;

     case 8:
      break;
    }

    /* End of SwitchCase: '<S286>/Switch Case' */

    /* Gain: '<S286>/InvCorrection' */
    DR18E_Testpult_B.UDCcorr = DR18E_Testpult_P.InvCorrection_Gain *
      DR18E_Testpult_B.U_DC.UmrechnungRegisterSpannungManua;

    /* S-Function (rti_commonblock): '<S480>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Logic: '<S535>/Logical Operator4' */
    DR18E_Testpult_B.LogicalOperator4 = !DR18E_Testpult_B.SFunction1_bo;

    /* SampleTimeMath: '<S550>/Weighted Sample Time'
     *
     * About '<S550>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_pu;

    /* Product: '<S550>/Divide1' incorporates:
     *  Constant: '<S524>/TFilterGas1'
     */
    DR18E_Testpult_B.Divide1 = DR18E_Testpult_P.TFilterGas1_Value /
      DR18E_Testpult_B.WeightedSampleTime;

    /* Sum: '<S550>/Sum' incorporates:
     *  Constant: '<S550>/Constant2'
     */
    DR18E_Testpult_B.Sum = DR18E_Testpult_B.Divide1 +
      DR18E_Testpult_P.Constant2_Value_d;

    /* Product: '<S550>/Divide' incorporates:
     *  Constant: '<S550>/Constant'
     */
    DR18E_Testpult_B.Divide = DR18E_Testpult_P.Constant_Value_h /
      DR18E_Testpult_B.Sum;

    /* S-Function (rti_commonblock): '<S483>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Brake_Value" Id:290 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ag = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->processed;
          DR18E_Testpult_B.SFunction1_o6_j = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ne = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Brake_vorne_1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_mm = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Brake_rear_2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_o3 = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Brake_vorne_1_Status" (40|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o3_lop = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Brake_rear_2_Status" (48|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o4_ll = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ag = 0.0;
      }
    }

    /* Product: '<S545>/Product' incorporates:
     *  Constant: '<S524>/Constant1'
     */
    DR18E_Testpult_B.Product[0] = DR18E_Testpult_P.Constant1_Value_fr *
      DR18E_Testpult_B.SFunction1_o1_mm;
    DR18E_Testpult_B.Product[1] = DR18E_Testpult_P.Constant1_Value_fr *
      DR18E_Testpult_B.SFunction1_o2_o3;

    /* Memory: '<S545>/Memory' */
    DR18E_Testpult_B.Memory[0] = DR18E_Testpult_DW.Memory_PreviousInput[0];

    /* Sum: '<S545>/Sum' */
    DR18E_Testpult_B.Sum_j[0] = DR18E_Testpult_B.Product[0] -
      DR18E_Testpult_B.Memory[0];

    /* Product: '<S545>/Product1' */
    DR18E_Testpult_B.Product1[0] = DR18E_Testpult_B.Divide *
      DR18E_Testpult_B.Sum_j[0];

    /* Sum: '<S545>/Sum1' */
    DR18E_Testpult_B.Sum1[0] = DR18E_Testpult_B.Product1[0] +
      DR18E_Testpult_B.Memory[0];

    /* RelationalOperator: '<S541>/Compare' incorporates:
     *  Constant: '<S541>/Constant'
     */
    DR18E_Testpult_B.Compare_n[0] = (DR18E_Testpult_B.Sum1[0] >
      DR18E_Testpult_P.CompareToConstant_const);

    /* Memory: '<S545>/Memory' */
    DR18E_Testpult_B.Memory[1] = DR18E_Testpult_DW.Memory_PreviousInput[1];

    /* Sum: '<S545>/Sum' */
    DR18E_Testpult_B.Sum_j[1] = DR18E_Testpult_B.Product[1] -
      DR18E_Testpult_B.Memory[1];

    /* Product: '<S545>/Product1' */
    DR18E_Testpult_B.Product1[1] = DR18E_Testpult_B.Divide *
      DR18E_Testpult_B.Sum_j[1];

    /* Sum: '<S545>/Sum1' */
    DR18E_Testpult_B.Sum1[1] = DR18E_Testpult_B.Product1[1] +
      DR18E_Testpult_B.Memory[1];

    /* RelationalOperator: '<S541>/Compare' incorporates:
     *  Constant: '<S541>/Constant'
     */
    DR18E_Testpult_B.Compare_n[1] = (DR18E_Testpult_B.Sum1[1] >
      DR18E_Testpult_P.CompareToConstant_const);

    /* Logic: '<S524>/Logical Operator' */
    DR18E_Testpult_B.Bremse_bin = (DR18E_Testpult_B.Compare_n[0] ||
      DR18E_Testpult_B.Compare_n[1]);

    /* SignalConversion: '<S697>/TmpSignal ConversionAt SFunction Inport5' incorporates:
     *  Chart: '<S535>/Fahrzeugsteuerung'
     *  Constant: '<S694>/TXReg1'
     *  Constant: '<S694>/TXReg2'
     *  Constant: '<S694>/TXReg3'
     *  Constant: '<S694>/TXReg4'
     *  Constant: '<S694>/TXReg5'
     *  Constant: '<S694>/TXReg6'
     *  Constant: '<S694>/TXReg7'
     *  Constant: '<S694>/TXReg8'
     */
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[0] =
      DR18E_Testpult_P.TXReg1_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[1] =
      DR18E_Testpult_P.TXReg2_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[2] =
      DR18E_Testpult_P.TXReg3_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[3] =
      DR18E_Testpult_P.TXReg4_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[4] =
      DR18E_Testpult_P.TXReg5_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[5] =
      DR18E_Testpult_P.TXReg6_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[6] =
      DR18E_Testpult_P.TXReg7_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctionI[7] =
      DR18E_Testpult_P.TXReg8_Value;

    /* SignalConversion: '<S697>/TmpSignal ConversionAt SFunction Inport6' incorporates:
     *  Chart: '<S535>/Fahrzeugsteuerung'
     *  Constant: '<S694>/TXZeit1'
     *  Constant: '<S694>/TXZeit2'
     *  Constant: '<S694>/TXZeit3'
     *  Constant: '<S694>/TXZeit4'
     *  Constant: '<S694>/TXZeit5'
     *  Constant: '<S694>/TXZeit6'
     *  Constant: '<S694>/TXZeit7'
     *  Constant: '<S694>/TXZeit8'
     */
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[0] =
      DR18E_Testpult_P.TXZeit1_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[1] =
      DR18E_Testpult_P.TXZeit2_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[2] =
      DR18E_Testpult_P.TXZeit3_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[3] =
      DR18E_Testpult_P.TXZeit4_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[4] =
      DR18E_Testpult_P.TXZeit5_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[5] =
      DR18E_Testpult_P.TXZeit6_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[6] =
      DR18E_Testpult_P.TXZeit7_Value;
    DR18E_Testpult_B.TmpSignalConversionAtSFunctio_j[7] =
      DR18E_Testpult_P.TXZeit8_Value;

    /* SignalConversion: '<S697>/TmpSignal ConversionAt SFunction Inport7' incorporates:
     *  Chart: '<S535>/Fahrzeugsteuerung'
     *  Constant: '<S695>/TXReg1'
     *  Constant: '<S695>/TXReg2'
     *  Constant: '<S695>/TXReg3'
     *  Constant: '<S695>/TXReg4'
     *  Constant: '<S695>/TXReg5'
     *  Constant: '<S695>/TXReg6'
     *  Constant: '<S695>/TXReg7'
     *  Constant: '<S695>/TXReg8'
     */
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[0] =
      DR18E_Testpult_P.TXReg1_Value_h;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[1] =
      DR18E_Testpult_P.TXReg2_Value_i;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[2] =
      DR18E_Testpult_P.TXReg3_Value_d;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[3] =
      DR18E_Testpult_P.TXReg4_Value_b;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[4] =
      DR18E_Testpult_P.TXReg5_Value_k;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[5] =
      DR18E_Testpult_P.TXReg6_Value_k;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[6] =
      DR18E_Testpult_P.TXReg7_Value_h;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_jl[7] =
      DR18E_Testpult_P.TXReg8_Value_k;

    /* SignalConversion: '<S697>/TmpSignal ConversionAt SFunction Inport8' incorporates:
     *  Chart: '<S535>/Fahrzeugsteuerung'
     *  Constant: '<S695>/TXZeit1'
     *  Constant: '<S695>/TXZeit2'
     *  Constant: '<S695>/TXZeit3'
     *  Constant: '<S695>/TXZeit4'
     *  Constant: '<S695>/TXZeit5'
     *  Constant: '<S695>/TXZeit6'
     *  Constant: '<S695>/TXZeit7'
     *  Constant: '<S695>/TXZeit8'
     */
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[0] =
      DR18E_Testpult_P.TXZeit1_Value_n;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[1] =
      DR18E_Testpult_P.TXZeit2_Value_d;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[2] =
      DR18E_Testpult_P.TXZeit3_Value_e;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[3] =
      DR18E_Testpult_P.TXZeit4_Value_e;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[4] =
      DR18E_Testpult_P.TXZeit5_Value_p;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[5] =
      DR18E_Testpult_P.TXZeit6_Value_g;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[6] =
      DR18E_Testpult_P.TXZeit7_Value_p;
    DR18E_Testpult_B.TmpSignalConversionAtSFuncti_ji[7] =
      DR18E_Testpult_P.TXZeit8_Value_h;

    /* Chart: '<S535>/Fahrzeugsteuerung' incorporates:
     *  Constant: '<S535>/Drive_Mode'
     */
    if (DR18E_Testpult_DW.temporalCounter_i1 < 16383U) {
      DR18E_Testpult_DW.temporalCounter_i1++;
    }

    /* Gateway: Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung */
    /* During: Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung */
    if (DR18E_Testpult_DW.is_active_c3_DR18E_Testpult == 0U) {
      /* Entry: Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung */
      DR18E_Testpult_DW.is_active_c3_DR18E_Testpult = 1U;

      /* Entry Internal: Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung */
      /* Transition: '<S697>:2' */
      DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Init_l;

      /* Entry 'Init': '<S697>:1' */
      DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;

      /* Entry Internal 'Init': '<S697>:1' */
      /* Transition: '<S697>:262' */
      DR18E_Testpult_DW.is_Init = DR18E_Testpult_IN_UmrichterInit;

      /* Entry 'UmrichterInit': '<S697>:187' */
      DR18E_Testpult_DW.i = 1;
      DR18E_Testpult_B.O_Inverter_TX_Mode = 1U;

      /* TX Modus: Initialisierung */
      /* Entry Internal 'UmrichterInit': '<S697>:187' */
      /* Transition: '<S697>:263' */
      DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpult_IN_initEntry;
      DR18E_Testpult_DW.temporalCounter_i1 = 0U;

      /* Entry 'initEntry': '<S697>:255' */
      DR18E_Testpult_B.O_State = 10.0;
    } else {
      switch (DR18E_Testpult_DW.is_c3_DR18E_Testpult) {
       case DR18E_Testpult_IN_Check_Safety1:
        DR18E_Testpult_Check_Safety1();
        break;

       case DR18E_Testpult_IN_Idle:
        DR18E_Testpult_B.O_State = 21.0;

        /* During 'Idle': '<S697>:3' */
        if (DR18E_Testpult_B.FixPtRelationalOperator_e &&
            (!DR18E_Testpult_B.ORSicherheitskreis) &&
            DR18E_Testpult_B.Bremse_bin) {
          /* Transition: '<S697>:408' */
          DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_TS_init;

          /* Entry Internal 'TS_init': '<S697>:8' */
          /* Transition: '<S697>:391' */
          DR18E_Testpult_DW.is_TS_init = DR18E_Testpult_IN_Precharge;

          /* Entry Internal 'Precharge': '<S697>:76' */
          /* Transition: '<S697>:86' */
          DR18E_Testpult_DW.is_Precharge = DR18E_Test_IN_Precharge_Prepare;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'Precharge_Prepare': '<S697>:85' */
          DR18E_Testpult_B.O_Precharge_Enable = true;
          DR18E_Testpult_B.O_State = 22.0;
        }
        break;

       case DR18E_Testpult_IN_Init_l:
        DR18E_Testpult_Init();
        break;

       case DR18E_Testpul_IN_NormalShutdown:
        /* During 'NormalShutdown': '<S697>:582' */
        switch (DR18E_Testpult_DW.is_NormalShutdown) {
         case DR18E_Testpult_IN_LockInverters:
          DR18E_Testpult_B.O_InverterFRE = 0.0;
          DR18E_Testpult_B.O_State = 70.2;

          /* During 'LockInverters': '<S697>:589' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 50U) {
            /* Transition: '<S697>:593' */
            DR18E_Testpult_DW.is_NormalShutdown = DR18E_Testpult_IN_OpenShutdown;

            /* Entry 'OpenShutdown': '<S697>:592' */
            DR18E_Testpult_B.O_State = 70.3;
            DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          }
          break;

         case DR18E_Testpult_IN_OpenShutdown:
          /* During 'OpenShutdown': '<S697>:592' */
          /* Transition: '<S697>:594' */
          DR18E_Testpult_DW.is_NormalShutdown = DR18E_Testp_IN_Shutdown_Message;

          /* Entry 'Shutdown_Message': '<S697>:591' */
          DR18E_Testpult_B.O_ErrorNr = 81.0;
          DR18E_Testpult_B.O_State = 70.4;
          break;

         case DR18E_Testp_IN_Shutdown_Message:
          DR18E_Testpult_B.O_ErrorNr = 81.0;

          /* During 'Shutdown_Message': '<S697>:591' */
          /* Transition: '<S697>:595' */
          /* Exit 'Shutdown_Message': '<S697>:591' */
          /* Event: '<S697>:309' */
          DR18E_Testpult_DW.e_ErrorEventCounter++;
          DR18E_Testpult_DW.is_NormalShutdown = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Idle;

          /* Entry 'Idle': '<S697>:3' */
          DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          DR18E_Testpult_B.O_State = 21.0;
          DR18E_Testpult_B.O_fBlink_Start = 2.0;
          break;

         default:
          DR18E_Testpult_B.O_U2_Value32 = 0.0;
          DR18E_Testpult_B.O_U1_Value32 = 0.0;
          DR18E_Testpult_B.O_U2_RegID = 144.0;
          DR18E_Testpult_B.O_State = 70.1;

          /* During 'TorqueToZero': '<S697>:586' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 50U) {
            /* Transition: '<S697>:590' */
            /* Exit 'TorqueToZero': '<S697>:586' */
            /* Universal TX Mode */
            DR18E_Testpult_B.O_U1_RegID = 0.0;
            DR18E_Testpult_DW.is_NormalShutdown =
              DR18E_Testpult_IN_LockInverters;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'LockInverters': '<S697>:589' */
            DR18E_Testpult_B.O_State = 70.2;
            DR18E_Testpult_B.O_InverterFRE = 0.0;
          }
          break;
        }
        break;

       case DR18E_Testpul_IN_SafetyShutdown:
        /* During 'SafetyShutdown': '<S697>:24' */
        switch (DR18E_Testpult_DW.is_SafetyShutdown) {
         case DR18E_Testpult_IN_LockInverters:
          DR18E_Testpult_B.O_InverterFRE = 0.0;
          DR18E_Testpult_B.O_State = 70.2;

          /* During 'LockInverters': '<S697>:755' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 50U) {
            /* Transition: '<S697>:751' */
            DR18E_Testpult_DW.is_SafetyShutdown = DR18E_Testpult_IN_OpenShutdown;

            /* Entry 'OpenShutdown': '<S697>:748' */
            DR18E_Testpult_B.O_State = 70.3;
            DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          }
          break;

         case DR18E_Testpult_IN_OpenShutdown:
          DR18E_Testpult_B.O_State = 70.3;

          /* During 'OpenShutdown': '<S697>:748' */
          /* Transition: '<S697>:756' */
          /* Transition: '<S697>:668' */
          DR18E_Testpult_DW.is_SafetyShutdown = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpult_IN_Check_Safety1;

          /* Entry 'Check_Safety1': '<S697>:616' */
          DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          DR18E_Testpult_B.O_Precharge_Enable = false;
          DR18E_Testpult_B.O_fBlink_Start = 0.0;
          DR_enter_internal_Check_Safety1();
          break;

         default:
          DR18E_Testpult_B.O_U2_Value32 = 0.0;
          DR18E_Testpult_B.O_U1_Value32 = 0.0;
          DR18E_Testpult_B.O_U2_RegID = 144.0;
          DR18E_Testpult_B.O_State = 70.1;

          /* During 'TorqueToZero': '<S697>:754' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 50U) {
            /* Transition: '<S697>:749' */
            /* Exit 'TorqueToZero': '<S697>:754' */
            /* Universal TX Mode */
            DR18E_Testpult_B.O_U1_RegID = 0.0;
            DR18E_Testpult_DW.is_SafetyShutdown =
              DR18E_Testpult_IN_LockInverters;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'LockInverters': '<S697>:755' */
            DR18E_Testpult_B.O_State = 70.2;
            DR18E_Testpult_B.O_InverterFRE = 0.0;
          }
          break;
        }
        break;

       case DR18E_Testpult_IN_Sound:
        DR18E_Testpult_B.O_State = 41.0;

        /* During 'Sound': '<S697>:114' */
        if (DR18E_Testpult_B.ORSicherheitskreis) {
          /* Transition: '<S697>:552' */
          /* Exit Internal 'Sound': '<S697>:114' */
          DR18E_Testpult_DW.is_Sound = DR18E_Testpu_IN_NO_ACTIVE_CHILD;

          /* Exit 'Sound': '<S697>:114' */
          DR18E_Testpult_B.O_SpeakerEnable = 0.0;
          DR18E_Testpult_B.O_coolingEnable = 1.0;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpul_IN_SafetyShutdown;

          /* Entry Internal 'SafetyShutdown': '<S697>:24' */
          /* Transition: '<S697>:750' */
          DR18E_Testpult_DW.is_SafetyShutdown = DR18E_Testpult_IN_TorqueToZero;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'TorqueToZero': '<S697>:754' */
          DR18E_Testpult_B.O_State = 70.1;
          DR18E_Testpult_B.O_U1_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U2_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U1_Value32 = 0.0;
          DR18E_Testpult_B.O_U2_Value32 = 0.0;
          DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;
        } else if (DR18E_Testpult_DW.is_Sound == DR18E_Testpu_IN_PlaySound_Pulse)
        {
          DR18E_Testpult_B.O_SoundPlayChannel = 1.0;

          /* During 'PlaySound_Pulse': '<S697>:739' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 500U) {
            /* Transition: '<S697>:742' */
            DR18E_Testpult_DW.is_Sound = DR18E_Testp_IN_PlaySound_Pulse1;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'PlaySound_Pulse1': '<S697>:741' */
            DR18E_Testpult_B.O_SoundPlayChannel = 0.0;
          }
        } else {
          DR18E_Testpult_B.O_SoundPlayChannel = 0.0;

          /* During 'PlaySound_Pulse1': '<S697>:741' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 1000U) {
            /* Transition: '<S697>:745' */
            DR18E_Testpult_DW.is_Sound = DR18E_Testpu_IN_NO_ACTIVE_CHILD;

            /* Exit 'Sound': '<S697>:114' */
            DR18E_Testpult_B.O_SpeakerEnable = 0.0;
            DR18E_Testpult_B.O_coolingEnable = 1.0;
            DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_TS_active;

            /* Entry 'TS_active': '<S697>:775' */
            DR18E_Testpult_B.O_fBlink_Start = 0.0;
            DR18E_Testpult_B.O_State = 50.0;

            /* en: O_Inverter_TX_Mode = 3; //TX Mode: Torque */
            DR18E_Testpult_B.O_InverterFRE = 1.0;

            /* Inverter Freigabe */
            /* Entry Internal 'TS_active': '<S697>:775' */
            /* Transition: '<S697>:776' */
            /* Default: Basic */
            DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_BasicMode;
          }
        }
        break;

       case DR18E_Testpult_IN_TS_active:
        DR18E_Testpult_B.O_InverterFRE = 1.0;
        DR18E_Testpult_B.O_State = 50.0;

        /* During 'TS_active': '<S697>:775' */
        if (DR18E_Testpult_B.FixPtRelationalOperator_e) {
          /* Transition: '<S697>:583' */
          /* Exit Internal 'TS_active': '<S697>:775' */
          DR18E_Testpult_DW.is_TS_active = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpul_IN_NormalShutdown;

          /* Entry Internal 'NormalShutdown': '<S697>:582' */
          /* Transition: '<S697>:587' */
          DR18E_Testpult_DW.is_NormalShutdown = DR18E_Testpul_IN_TorqueToZero_a;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'TorqueToZero': '<S697>:586' */
          DR18E_Testpult_B.O_State = 70.1;
          DR18E_Testpult_B.O_U1_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U2_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U1_Value32 = 0.0;
          DR18E_Testpult_B.O_U2_Value32 = 0.0;
          DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;
        } else if (DR18E_Testpult_B.ORSicherheitskreis ||
                   (!(DR18E_Testpult_B.SFunction1_o6_i != 0.0)) ||
                   (!(DR18E_Testpult_B.SFunction1_o7_h != 0.0))) {
          /* Transition: '<S697>:25' */
          /* Exit Internal 'TS_active': '<S697>:775' */
          DR18E_Testpult_DW.is_TS_active = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpul_IN_SafetyShutdown;

          /* Entry Internal 'SafetyShutdown': '<S697>:24' */
          /* Transition: '<S697>:750' */
          DR18E_Testpult_DW.is_SafetyShutdown = DR18E_Testpult_IN_TorqueToZero;
          DR18E_Testpult_DW.temporalCounter_i1 = 0U;

          /* Entry 'TorqueToZero': '<S697>:754' */
          DR18E_Testpult_B.O_State = 70.1;
          DR18E_Testpult_B.O_U1_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U2_RegID = 144.0;

          /* 0x90 */
          DR18E_Testpult_B.O_U1_Value32 = 0.0;
          DR18E_Testpult_B.O_U2_Value32 = 0.0;
          DR18E_Testpult_B.O_Inverter_TX_Mode = 2U;
        } else {
          switch (DR18E_Testpult_DW.is_TS_active) {
           case DR18E_Testp_IN_AccelerationMode:
            /* During 'AccelerationMode': '<S697>:787' */
            if (DR18E_Testpult_P.Drive_Mode_Value == 2.0) {
              /* Transition: '<S697>:788' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_SkidpadMode;
            } else if (DR18E_Testpult_P.Drive_Mode_Value == 3.0) {
              /* Transition: '<S697>:792' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_EnduranceMode;
            } else {
              if (DR18E_Testpult_P.Drive_Mode_Value == 0.0) {
                /* Transition: '<S697>:797' */
                DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_BasicMode;
              }
            }
            break;

           case DR18E_Testpult_IN_BasicMode:
            /* During 'BasicMode': '<S697>:777' */
            if (DR18E_Testpult_P.Drive_Mode_Value == 2.0) {
              /* Transition: '<S697>:798' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_SkidpadMode;
            } else if (DR18E_Testpult_P.Drive_Mode_Value == 1.0) {
              /* Transition: '<S697>:796' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testp_IN_AccelerationMode;
            } else if (DR18E_Testpult_P.Drive_Mode_Value == 3.0) {
              /* Transition: '<S697>:800' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_EnduranceMode;
            } else {
              /* Torque Vectoring nicht aktiv */
              DR18E_Testpult_B.O_enableTorqueVectoring = 0U;

              /* Schlupfregelung nicht aktiv */
              DR18E_Testpult_B.O_enableTractionControl = 0U;

              /* Gaspedalstellung = Drehmomentsollwert, rechts und links gleich
                 Pmax per Fernzugriff begrenzbar */
            }
            break;

           case DR18E_Testpult_IN_EnduranceMode:
            /* During 'EnduranceMode': '<S697>:786' */
            if (DR18E_Testpult_P.Drive_Mode_Value == 2.0) {
              /* Transition: '<S697>:795' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_SkidpadMode;
            } else if (DR18E_Testpult_P.Drive_Mode_Value == 0.0) {
              /* Transition: '<S697>:801' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_BasicMode;
            } else {
              if (DR18E_Testpult_P.Drive_Mode_Value == 1.0) {
                /* Transition: '<S697>:793' */
                DR18E_Testpult_DW.is_TS_active = DR18E_Testp_IN_AccelerationMode;
              }
            }
            break;

           default:
            /* During 'SkidpadMode': '<S697>:785' */
            if (DR18E_Testpult_P.Drive_Mode_Value == 0.0) {
              /* Transition: '<S697>:799' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_BasicMode;
            } else if (DR18E_Testpult_P.Drive_Mode_Value == 1.0) {
              /* Transition: '<S697>:791' */
              DR18E_Testpult_DW.is_TS_active = DR18E_Testp_IN_AccelerationMode;
            } else {
              if (DR18E_Testpult_P.Drive_Mode_Value == 3.0) {
                /* Transition: '<S697>:794' */
                DR18E_Testpult_DW.is_TS_active = DR18E_Testpult_IN_EnduranceMode;
              }
            }
            break;
          }
        }
        break;

       case DR18E_Testpult_IN_TS_init:
        /* During 'TS_init': '<S697>:8' */
        if (DR18E_Testpult_B.ORSicherheitskreis) {
          /* Transition: '<S697>:767' */
          /* Transition: '<S697>:668' */
          DR18E_Tes_exit_internal_TS_init();
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpult_IN_Check_Safety1;

          /* Entry 'Check_Safety1': '<S697>:616' */
          DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          DR18E_Testpult_B.O_Precharge_Enable = false;
          DR18E_Testpult_B.O_fBlink_Start = 0.0;
          DR_enter_internal_Check_Safety1();
        } else if (DR18E_Testpult_DW.is_TS_init ==
                   DR18E_IN_ClearPowervoltageError) {
          /* During 'ClearPowervoltageError': '<S697>:75' */
          if (DR18E_Testpult_DW.temporalCounter_i1 >= 100U) {
            /* Transition: '<S697>:81' */
            DR18E_Testpult_DW.is_TS_init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
            DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_TS_ready;

            /* Entry 'TS_ready': '<S697>:14' */
            DR18E_Testpult_B.O_fBlink_Start = 10.0;
            DR18E_Testpult_B.O_State = 40.0;
            DR18E_Testpult_B.O_SoundEnable = 1U;

            /* TX Mode: Torque */
          }
        } else {
          DR18E_Testpult_Precharge();
        }
        break;

       default:
        DR18E_Testpult_B.O_State = 40.0;
        DR18E_Testpult_B.O_SoundEnable = 1U;

        /* During 'TS_ready': '<S697>:14' */
        if (DR18E_Testpult_B.ORSicherheitskreis ||
            (!(DR18E_Testpult_B.SFunction1_o6_i != 0.0)) ||
            (!(DR18E_Testpult_B.SFunction1_o7_h != 0.0))) {
          /* Transition: '<S697>:20' */
          /* Transition: '<S697>:668' */
          /* Exit 'TS_ready': '<S697>:14' */
          DR18E_Testpult_B.O_Inverter_TX_Mode = 3U;
          DR18E_Testpult_DW.is_c3_DR18E_Testpult =
            DR18E_Testpult_IN_Check_Safety1;

          /* Entry 'Check_Safety1': '<S697>:616' */
          DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
          DR18E_Testpult_B.O_Precharge_Enable = false;
          DR18E_Testpult_B.O_fBlink_Start = 0.0;
          DR_enter_internal_Check_Safety1();
        } else {
          if (DR18E_Testpult_B.FixPtRelationalOperator_e &&
              DR18E_Testpult_B.Bremse_bin) {
            /* Transition: '<S697>:22' */
            /* Exit 'TS_ready': '<S697>:14' */
            DR18E_Testpult_B.O_Inverter_TX_Mode = 3U;
            DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpult_IN_Sound;

            /* Entry 'Sound': '<S697>:114' */
            DR18E_Testpult_B.O_fBlink_Start = 0.0;
            DR18E_Testpult_B.O_State = 41.0;
            DR18E_Testpult_B.O_SpeakerEnable = 1.0;

            /* Entry Internal 'Sound': '<S697>:114' */
            /* Transition: '<S697>:740' */
            DR18E_Testpult_DW.is_Sound = DR18E_Testpu_IN_PlaySound_Pulse;
            DR18E_Testpult_DW.temporalCounter_i1 = 0U;

            /* Entry 'PlaySound_Pulse': '<S697>:739' */
            DR18E_Testpult_B.O_SoundPlayChannel = 1.0;
          }
        }
        break;
      }
    }

    if (DR18E_Testpult_DW.e_ErrorEventCounter > 0U) {
      DR18E_Testpult_B.e_Error = !DR18E_Testpult_B.e_Error;
      DR18E_Testpult_DW.e_ErrorEventCounter--;
    }

    if (DR18E_Testpult_DW.e_ACTIVEEventCounter > 0U) {
      DR18E_Testpult_B.e_ACTIVE = !DR18E_Testpult_B.e_ACTIVE;
      DR18E_Testpult_DW.e_ACTIVEEventCounter--;
    }

    if (DR18E_Testpult_DW.e_clearPowervoltageEventCounter > 0U) {
      DR18E_Testpult_B.e_clearPowervoltage =
        !DR18E_Testpult_B.e_clearPowervoltage;
      DR18E_Testpult_DW.e_clearPowervoltageEventCounter--;
    }

    /* RateTransition: '<S7>/Rate Transition' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      DR18E_Testpult_B.RateTransition_ef =
        DR18E_Testpult_B.O_Sicherheitskreis_Enable;
    }

    /* End of RateTransition: '<S7>/Rate Transition' */

    /* DataTypeConversion: '<S7>/Data Type Conversion1' */
    DR18E_Testpult_B.DataTypeConversion1 = DR18E_Testpult_B.RateTransition_ef;

    /* Gain: '<S7>/Gain2' */
    DR18E_Testpult_B.Gain2 = DR18E_Testpult_P.Gain2_Gain_j *
      DR18E_Testpult_B.DataTypeConversion1;

    /* Outputs for Triggered SubSystem: '<S7>/SIG_SHUTDOWN' incorporates:
     *  TriggerPort: '<S23>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      zcEvent = (((DR18E_Testpult_PrevZCX.SIG_SHUTDOWN_Trig_ZCE == POS_ZCSIG) !=
                  (int32_T)DR18E_Testpult_B.RateTransition_ef) &&
                 (DR18E_Testpult_PrevZCX.SIG_SHUTDOWN_Trig_ZCE !=
                  UNINITIALIZED_ZCSIG));
      if (zcEvent) {
        /* S-Function (rti_commonblock): '<S23>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN TX Message Block: "SIG_SHUTDOWN" Id:817 */
        {
          UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

          Float32 delayTime = 0.0;

          /* ... Read status and timestamp info (previous message) */
          can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]);

          /* Convert timestamp */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->processed) {
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->timestamp =
              rtk_dsts_time_to_simtime_convert
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->timestamp);
          }

          /* Messages with timestamp zero have been received in pause/stop state
             and must not be handled.
           */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->timestamp > 0.0) {
            DR18E_Testpult_B.SFunction1_o1_l0 = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->processed;
            DR18E_Testpult_B.SFunction1_o2_ph = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->timestamp;
            DR18E_Testpult_B.SFunction1_o3_n2 = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331]->deltatime;
          }

          /* ... Encode Simulink signals of TX and RM blocks*/
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "SIG_Shutdown" (0|8, standard signal, unsigned int, little endian) */
            /* Add or substract 0.5 in order to round to nearest integer */
            CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain2 ) + 0.5);
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          }

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331], 1,
                           &(CAN_Msg[0]), delayTime);
        }
      }

      DR18E_Testpult_PrevZCX.SIG_SHUTDOWN_Trig_ZCE =
        DR18E_Testpult_B.RateTransition_ef;
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_SHUTDOWN' */

    /* RelationalOperator: '<S24>/Delta time limit exceeded' incorporates:
     *  Constant: '<S24>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_m =
      (DR18E_Testpult_B.SFunction1_o3_n2 >=
       DR18E_Testpult_P.Deltatimelimit_Value_nx);

    /* Memory: '<S24>/Mem1' */
    DR18E_Testpult_B.Mem1_c = DR18E_Testpult_DW.Mem1_PreviousInput_p;

    /* Memory: '<S24>/Mem2' */
    DR18E_Testpult_B.Mem2_f = DR18E_Testpult_DW.Mem2_PreviousInput_b;

    /* Memory: '<S24>/Mem3' */
    DR18E_Testpult_B.Mem3_n = DR18E_Testpult_DW.Mem3_PreviousInput_a;

    /* Memory: '<S24>/Mem4' */
    DR18E_Testpult_B.Mem4_p = DR18E_Testpult_DW.Mem4_PreviousInput_h;

    /* RelationalOperator: '<S24>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S24>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_b = (DR18E_Testpult_B.SFunction1_o1_l0 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_om);

    /* Logic: '<S24>/OR' */
    DR18E_Testpult_B.OR_h = (DR18E_Testpult_B.Prevmsgnotsent_b ||
      DR18E_Testpult_B.Deltatimelimitexceeded_m);

    /* Logic: '<S24>/Warn' */
    DR18E_Testpult_B.Warn_a = (DR18E_Testpult_B.OR_h && DR18E_Testpult_B.Mem1_c &&
      DR18E_Testpult_B.Mem2_f && DR18E_Testpult_B.Mem3_n &&
      DR18E_Testpult_B.Mem4_p);

    /* DataTypeConversion: '<S7>/Data Type Conversion2' */
    DR18E_Testpult_B.DataTypeConversion2 = DR18E_Testpult_B.Bremse_bin;

    /* Gain: '<S7>/Gain3' */
    DR18E_Testpult_B.Gain3 = DR18E_Testpult_P.Gain3_Gain *
      DR18E_Testpult_B.DataTypeConversion2;

    /* Outputs for Triggered SubSystem: '<S7>/SIG_Brakelight' incorporates:
     *  TriggerPort: '<S17>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      zcEvent = (((DR18E_Testpult_PrevZCX.SIG_Brakelight_Trig_ZCE == POS_ZCSIG)
                  != (int32_T)DR18E_Testpult_B.Bremse_bin) &&
                 (DR18E_Testpult_PrevZCX.SIG_Brakelight_Trig_ZCE !=
                  UNINITIALIZED_ZCSIG));
      if (zcEvent) {
        /* S-Function (rti_commonblock): '<S17>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN TX Message Block: "SIG_Brakelight" Id:805 */
        {
          UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

          Float32 delayTime = 0.0;

          /* ... Read status and timestamp info (previous message) */
          can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]);

          /* Convert timestamp */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->processed) {
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->timestamp =
              rtk_dsts_time_to_simtime_convert
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->timestamp);
          }

          /* Messages with timestamp zero have been received in pause/stop state
             and must not be handled.
           */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->timestamp > 0.0) {
            DR18E_Testpult_B.SFunction1_o1_ku = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->processed;
            DR18E_Testpult_B.SFunction1_o2_ga = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->timestamp;
            DR18E_Testpult_B.SFunction1_o3_ak = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325]->deltatime;
          }

          /* ... Encode Simulink signals of TX and RM blocks*/
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "SIG_Brakelight" (0|8, standard signal, unsigned int, little endian) */
            /* Add or substract 0.5 in order to round to nearest integer */
            CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain3 ) + 0.5);
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          }

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325], 1,
                           &(CAN_Msg[0]), delayTime);
        }
      }

      DR18E_Testpult_PrevZCX.SIG_Brakelight_Trig_ZCE =
        DR18E_Testpult_B.Bremse_bin;
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_Brakelight' */

    /* RelationalOperator: '<S25>/Delta time limit exceeded' incorporates:
     *  Constant: '<S25>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_j =
      (DR18E_Testpult_B.SFunction1_o3_ak >=
       DR18E_Testpult_P.Deltatimelimit_Value_m);

    /* Memory: '<S25>/Mem1' */
    DR18E_Testpult_B.Mem1_a = DR18E_Testpult_DW.Mem1_PreviousInput_k;

    /* Memory: '<S25>/Mem2' */
    DR18E_Testpult_B.Mem2_k = DR18E_Testpult_DW.Mem2_PreviousInput_c;

    /* Memory: '<S25>/Mem3' */
    DR18E_Testpult_B.Mem3_d = DR18E_Testpult_DW.Mem3_PreviousInput_c;

    /* Memory: '<S25>/Mem4' */
    DR18E_Testpult_B.Mem4_i = DR18E_Testpult_DW.Mem4_PreviousInput_d;

    /* RelationalOperator: '<S25>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S25>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_e = (DR18E_Testpult_B.SFunction1_o1_ku !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_mx);

    /* Logic: '<S25>/OR' */
    DR18E_Testpult_B.OR_n = (DR18E_Testpult_B.Prevmsgnotsent_e ||
      DR18E_Testpult_B.Deltatimelimitexceeded_j);

    /* Logic: '<S25>/Warn' */
    DR18E_Testpult_B.Warn_k = (DR18E_Testpult_B.OR_n && DR18E_Testpult_B.Mem1_a &&
      DR18E_Testpult_B.Mem2_k && DR18E_Testpult_B.Mem3_d &&
      DR18E_Testpult_B.Mem4_i);

    /* DataTypeConversion: '<S7>/Data Type Conversion3' */
    DR18E_Testpult_B.DataTypeConversion3 = DR18E_Testpult_B.O_SpeakerEnable;

    /* Gain: '<S7>/Gain4' */
    DR18E_Testpult_B.Gain4 = DR18E_Testpult_P.Gain4_Gain_d *
      DR18E_Testpult_B.DataTypeConversion3;

    /* Outputs for Triggered SubSystem: '<S7>/SIG_Buzzer' incorporates:
     *  TriggerPort: '<S18>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                           &DR18E_Testpult_PrevZCX.SIG_Buzzer_Trig_ZCE,
                           (DR18E_Testpult_B.O_SpeakerEnable));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S18>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN TX Message Block: "SIG_Buzzer" Id:803 */
        {
          UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

          Float32 delayTime = 0.0;

          /* ... Read status and timestamp info (previous message) */
          can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]);

          /* Convert timestamp */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->processed) {
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->timestamp =
              rtk_dsts_time_to_simtime_convert
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->timestamp);
          }

          /* Messages with timestamp zero have been received in pause/stop state
             and must not be handled.
           */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->timestamp > 0.0) {
            DR18E_Testpult_B.SFunction1_o1_do = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->processed;
            DR18E_Testpult_B.SFunction1_o2_kf = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->timestamp;
            DR18E_Testpult_B.SFunction1_o3_iil = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323]->deltatime;
          }

          /* ... Encode Simulink signals of TX and RM blocks*/
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "SIG_Buzzer" (0|8, standard signal, unsigned int, little endian) */
            /* Add or substract 0.5 in order to round to nearest integer */
            CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain4 ) + 0.5);
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          }

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323], 1,
                           &(CAN_Msg[0]), delayTime);
        }
      }
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_Buzzer' */

    /* RelationalOperator: '<S26>/Delta time limit exceeded' incorporates:
     *  Constant: '<S26>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_h =
      (DR18E_Testpult_B.SFunction1_o3_iil >=
       DR18E_Testpult_P.Deltatimelimit_Value_nm);

    /* Memory: '<S26>/Mem1' */
    DR18E_Testpult_B.Mem1_o = DR18E_Testpult_DW.Mem1_PreviousInput_e;

    /* Memory: '<S26>/Mem2' */
    DR18E_Testpult_B.Mem2_c = DR18E_Testpult_DW.Mem2_PreviousInput_h;

    /* Memory: '<S26>/Mem3' */
    DR18E_Testpult_B.Mem3_a = DR18E_Testpult_DW.Mem3_PreviousInput_a0;

    /* Memory: '<S26>/Mem4' */
    DR18E_Testpult_B.Mem4_m = DR18E_Testpult_DW.Mem4_PreviousInput_e;

    /* RelationalOperator: '<S26>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S26>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_l = (DR18E_Testpult_B.SFunction1_o1_do !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_j);

    /* Logic: '<S26>/OR' */
    DR18E_Testpult_B.OR_hi = (DR18E_Testpult_B.Prevmsgnotsent_l ||
      DR18E_Testpult_B.Deltatimelimitexceeded_h);

    /* Logic: '<S26>/Warn' */
    DR18E_Testpult_B.Warn_m = (DR18E_Testpult_B.OR_hi && DR18E_Testpult_B.Mem1_o
      && DR18E_Testpult_B.Mem2_c && DR18E_Testpult_B.Mem3_a &&
      DR18E_Testpult_B.Mem4_m);

    /* SampleTimeMath: '<S693>/Weighted Sample Time'
     *
     * About '<S693>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_g =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_j;

    /* Product: '<S693>/Divide1' incorporates:
     *  Constant: '<S533>/TPumpe'
     */
    DR18E_Testpult_B.Divide1_d = DR18E_Testpult_P.TPumpe_Value /
      DR18E_Testpult_B.WeightedSampleTime_g;

    /* Sum: '<S693>/Sum' incorporates:
     *  Constant: '<S693>/Constant2'
     */
    DR18E_Testpult_B.Sum_b = DR18E_Testpult_B.Divide1_d +
      DR18E_Testpult_P.Constant2_Value_g;

    /* Product: '<S693>/Divide' incorporates:
     *  Constant: '<S693>/Constant'
     */
    DR18E_Testpult_B.Divide_i = DR18E_Testpult_P.Constant_Value_fs /
      DR18E_Testpult_B.Sum_b;

    /* Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1 =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_Pre;

    /* Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2 =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_Pre;

    /* DataTypeConversion: '<S678>/Data Type Conversion' incorporates:
     *  Constant: '<S533>/PumpeMan//Entlueften'
     */
    DR18E_Testpult_B.DataTypeConversion_ma =
      (DR18E_Testpult_P.PumpeManEntlueften_Value != 0.0);

    /* Outputs for Triggered SubSystem: '<S690>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop(DR18E_Testpult_M,
      DR18E_Testpult_B.DataTypeConversion_ma,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2, &DR18E_Testpult_B.JKFlipFlop,
      &DR18E_Testpult_DW.JKFlipFlop, (P_JKFlipFlop_DR18E_Testpult_T *)
      &DR18E_Testpult_P.JKFlipFlop, &DR18E_Testpult_PrevZCX.JKFlipFlop);

    /* End of Outputs for SubSystem: '<S690>/J-K Flip-Flop' */

    /* DiscretePulseGenerator: '<S533>/Pulse Generator' */
    DR18E_Testpult_B.PulseGenerator = (DR18E_Testpult_DW.clockTickCounter <
      DR18E_Testpult_P.PulseGenerator_Duty) &&
      (DR18E_Testpult_DW.clockTickCounter >= 0) ?
      DR18E_Testpult_P.PulseGenerator_Amp : 0.0;
    if (DR18E_Testpult_DW.clockTickCounter >=
        DR18E_Testpult_P.PulseGenerator_Period - 1.0) {
      DR18E_Testpult_DW.clockTickCounter = 0;
    } else {
      DR18E_Testpult_DW.clockTickCounter++;
    }

    /* End of DiscretePulseGenerator: '<S533>/Pulse Generator' */

    /* Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1_p =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_d;

    /* Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2_m =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_f;

    /* DataTypeConversion: '<S677>/Data Type Conversion' incorporates:
     *  Constant: '<S533>/PumpeMan//Aut'
     */
    DR18E_Testpult_B.DataTypeConversion_gx = (DR18E_Testpult_P.PumpeManAut_Value
      != 0.0);

    /* Outputs for Triggered SubSystem: '<S688>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop(DR18E_Testpult_M,
      DR18E_Testpult_B.DataTypeConversion_gx,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1_p,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2_m,
      &DR18E_Testpult_B.JKFlipFlop_l, &DR18E_Testpult_DW.JKFlipFlop_l,
      (P_JKFlipFlop_DR18E_Testpult_T *)&DR18E_Testpult_P.JKFlipFlop_l,
      &DR18E_Testpult_PrevZCX.JKFlipFlop_l);

    /* End of Outputs for SubSystem: '<S688>/J-K Flip-Flop' */

    /* S-Function (rti_commonblock): '<S505>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Sensor_Watertemp" Id:790 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->processed) {
          DR18E_Testpult_B.SFunction1_o3_de3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->processed;
          DR18E_Testpult_B.SFunction1_o4_l2 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_p = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Water_Temperature_Pump" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_ae = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Water_Temperature_Cooler" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_k2 = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_de3 = 0.0;
      }
    }

    /* Switch: '<S677>/Switch' */
    if (DR18E_Testpult_B.JKFlipFlop_l.Logic[0]) {
      /* Switch: '<S678>/Switch' incorporates:
       *  Constant: '<S533>/CP1Ch3 Wasserpumpe'
       */
      if (DR18E_Testpult_B.JKFlipFlop.Logic[0]) {
        DR18E_Testpult_B.Switch_c = DR18E_Testpult_P.CP1Ch3Wasserpumpe_Value;
      } else {
        DR18E_Testpult_B.Switch_c = DR18E_Testpult_B.PulseGenerator;
      }

      /* End of Switch: '<S678>/Switch' */
      DR18E_Testpult_B.Switch = DR18E_Testpult_B.Switch_c;
    } else {
      /* Lookup_n-D: '<S533>/1-D Lookup Table' */
      DR18E_Testpult_B.uDLookupTable = look1_binlxpw
        (DR18E_Testpult_B.SFunction1_o2_k2,
         DR18E_Testpult_P.uDLookupTable_bp01Data,
         DR18E_Testpult_P.uDLookupTable_tableData, 7U);
      DR18E_Testpult_B.Switch = DR18E_Testpult_B.uDLookupTable;
    }

    /* End of Switch: '<S677>/Switch' */

    /* Product: '<S681>/Product' incorporates:
     *  Constant: '<S533>/KPumpe'
     */
    DR18E_Testpult_B.Product_b = DR18E_Testpult_P.KPumpe_Value *
      DR18E_Testpult_B.Switch;

    /* Memory: '<S681>/Memory' */
    DR18E_Testpult_B.Memory_g = DR18E_Testpult_DW.Memory_PreviousInput_k;

    /* Sum: '<S681>/Sum' */
    DR18E_Testpult_B.Sum_n = DR18E_Testpult_B.Product_b -
      DR18E_Testpult_B.Memory_g;

    /* Product: '<S681>/Product1' */
    DR18E_Testpult_B.Product1_p = DR18E_Testpult_B.Divide_i *
      DR18E_Testpult_B.Sum_n;

    /* Sum: '<S681>/Sum1' */
    DR18E_Testpult_B.Sum1_g = DR18E_Testpult_B.Product1_p +
      DR18E_Testpult_B.Memory_g;

    /* Product: '<S533>/Product2' */
    DR18E_Testpult_B.Product2 = DR18E_Testpult_B.O_coolingEnable *
      DR18E_Testpult_B.Sum1_g;

    /* Saturate: '<S533>/Saturation2' */
    u0 = DR18E_Testpult_B.Product2;
    u1 = DR18E_Testpult_P.Saturation2_LowerSat;
    u2 = DR18E_Testpult_P.Saturation2_UpperSat;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation2 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation2 = u1;
    } else {
      DR18E_Testpult_B.Saturation2 = u0;
    }

    /* End of Saturate: '<S533>/Saturation2' */

    /* DataTypeConversion: '<S7>/Data Type Conversion4' */
    DR18E_Testpult_B.DataTypeConversion4_m = DR18E_Testpult_B.Saturation2;

    /* UnitDelay: '<S15>/Delay Input1' */
    DR18E_Testpult_B.Uk1_i = DR18E_Testpult_DW.DelayInput1_DSTATE_o;

    /* RelationalOperator: '<S15>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_n =
      (DR18E_Testpult_B.DataTypeConversion4_m != DR18E_Testpult_B.Uk1_i);

    /* Gain: '<S7>/Gain' */
    DR18E_Testpult_B.Gain_p = DR18E_Testpult_P.Gain_Gain_k *
      DR18E_Testpult_B.DataTypeConversion4_m;

    /* Outputs for Enabled SubSystem: '<S7>/SIG_PUMP' incorporates:
     *  EnablePort: '<S22>/Enable'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      if (DR18E_Testpult_B.FixPtRelationalOperator_n) {
        if (!DR18E_Testpult_DW.SIG_PUMP_MODE) {
          DR18E_Testpult_DW.SIG_PUMP_MODE = true;
        }
      } else {
        if (DR18E_Testpult_DW.SIG_PUMP_MODE) {
          DR18E_Testpult_DW.SIG_PUMP_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_PUMP' */
  }

  /* Outputs for Enabled SubSystem: '<S7>/SIG_PUMP' incorporates:
   *  EnablePort: '<S22>/Enable'
   */
  if (DR18E_Testpult_DW.SIG_PUMP_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* S-Function (rti_commonblock): '<S22>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "SIG_PUMP" Id:808 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_dg = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->processed;
          DR18E_Testpult_B.SFunction1_o2_gu = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_dd = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "SIG_Pump" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain_p ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328], 1,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }
  }

  /* End of Outputs for SubSystem: '<S7>/SIG_PUMP' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* RelationalOperator: '<S27>/Delta time limit exceeded' incorporates:
     *  Constant: '<S27>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_a =
      (DR18E_Testpult_B.SFunction1_o3_dd >=
       DR18E_Testpult_P.Deltatimelimit_Value_l);

    /* RelationalOperator: '<S27>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S27>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_g = (DR18E_Testpult_B.SFunction1_o1_dg !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_je);

    /* Logic: '<S27>/OR' */
    DR18E_Testpult_B.OR_g = (DR18E_Testpult_B.Prevmsgnotsent_g ||
      DR18E_Testpult_B.Deltatimelimitexceeded_a);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S27>/Mem1' */
    DR18E_Testpult_B.Mem1_m = DR18E_Testpult_DW.Mem1_PreviousInput_h;

    /* Memory: '<S27>/Mem2' */
    DR18E_Testpult_B.Mem2_g = DR18E_Testpult_DW.Mem2_PreviousInput_k;

    /* Memory: '<S27>/Mem3' */
    DR18E_Testpult_B.Mem3_di = DR18E_Testpult_DW.Mem3_PreviousInput_n;

    /* Memory: '<S27>/Mem4' */
    DR18E_Testpult_B.Mem4_mb = DR18E_Testpult_DW.Mem4_PreviousInput_n;

    /* Logic: '<S27>/Warn' */
    DR18E_Testpult_B.Warn_f = (DR18E_Testpult_B.OR_g && DR18E_Testpult_B.Mem1_m &&
      DR18E_Testpult_B.Mem2_g && DR18E_Testpult_B.Mem3_di &&
      DR18E_Testpult_B.Mem4_mb);

    /* SampleTimeMath: '<S692>/Weighted Sample Time'
     *
     * About '<S692>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_a =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_a;

    /* Product: '<S692>/Divide1' incorporates:
     *  Constant: '<S533>/Tluefter'
     */
    DR18E_Testpult_B.Divide1_g = DR18E_Testpult_P.Tluefter_Value /
      DR18E_Testpult_B.WeightedSampleTime_a;

    /* Sum: '<S692>/Sum' incorporates:
     *  Constant: '<S692>/Constant2'
     */
    DR18E_Testpult_B.Sum_k = DR18E_Testpult_B.Divide1_g +
      DR18E_Testpult_P.Constant2_Value_b;

    /* Product: '<S692>/Divide' incorporates:
     *  Constant: '<S692>/Constant'
     */
    DR18E_Testpult_B.Divide_g = DR18E_Testpult_P.Constant_Value_bj /
      DR18E_Testpult_B.Sum_k;

    /* Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1_j =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_b;

    /* Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2_k =
      DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_k;

    /* DataTypeConversion: '<S676>/Data Type Conversion' incorporates:
     *  Constant: '<S533>/LüfterMan//Aut'
     */
    DR18E_Testpult_B.DataTypeConversion_a1 = (DR18E_Testpult_P.LfterManAut_Value
      != 0.0);

    /* Outputs for Triggered SubSystem: '<S686>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop(DR18E_Testpult_M,
      DR18E_Testpult_B.DataTypeConversion_a1,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport1_j,
      DR18E_Testpult_B.TmpLatchAtJKFlipFlopInport2_k,
      &DR18E_Testpult_B.JKFlipFlop_n, &DR18E_Testpult_DW.JKFlipFlop_n,
      (P_JKFlipFlop_DR18E_Testpult_T *)&DR18E_Testpult_P.JKFlipFlop_n,
      &DR18E_Testpult_PrevZCX.JKFlipFlop_n);

    /* End of Outputs for SubSystem: '<S686>/J-K Flip-Flop' */

    /* S-Function (rti_commonblock): '<S370>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "INV_2_Recieve" Id:274 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]);

      /* Convert timestamp */
      if (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->processed) {
        can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->timestamp > 0.0) {
        if (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->processed) {
          DR18E_Testpult_B.SFunction1_o3_b = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->processed;
          DR18E_Testpult_B.SFunction1_o4_pa = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_mx = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->deltatime;
          CAN_Msg = can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "INV_2_RX_REGID" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_eb = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "INV_2_RX_Value" (8|32, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte2 = CAN_Msg[3];
            CAN_Sgn.SgnBytes.Byte3 = CAN_Msg[4];
            DR18E_Testpult_B.SFunction1_o2_a0 = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_b = 0.0;
      }
    }

    /* SwitchCase: '<S287>/Switch Case' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      u0 = DR18E_Testpult_B.SFunction1_o1_eb;
      if (u0 < 0.0) {
        u0 = ceil(u0);
      } else {
        u0 = floor(u0);
      }

      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 4.294967296E+9);
      }

      switch (u0 < 0.0 ? -(int32_T)(uint32_T)-u0 : (int32_T)(uint32_T)u0) {
       case 73:
        rtAction = 0;
        break;

       case 48:
        rtAction = 1;
        break;

       case 95:
        rtAction = 2;
        break;

       case 39:
        rtAction = 3;
        break;

       case 64:
        rtAction = 4;
        break;

       case 143:
        rtAction = 5;
        break;

       case 235:
        rtAction = 6;
        break;

       case 74:
        rtAction = 7;
        break;

       default:
        rtAction = 8;
        break;
      }

      DR18E_Testpult_DW.SwitchCase_ActiveSubsystem_p = rtAction;
    } else {
      rtAction = DR18E_Testpult_DW.SwitchCase_ActiveSubsystem_p;
    }

    switch (rtAction) {
     case 0:
      /* Outputs for IfAction SubSystem: '<S287>/Motortemperatur' incorporates:
       *  ActionPort: '<S372>/Action Port'
       */
      /* Gain: '<S372>/Gain' */
      DR18E_Testpult_B.Gain_mi = DR18E_Testpult_P.Gain_Gain_f *
        DR18E_Testpult_B.SFunction1_o2_a0;

      /* Sum: '<S372>/Subtract' incorporates:
       *  Constant: '<S372>/Constant2'
       */
      DR18E_Testpult_B.Subtract_p = DR18E_Testpult_P.Constant2_Value_e -
        DR18E_Testpult_B.SFunction1_o2_a0;

      /* Product: '<S372>/Divide' */
      DR18E_Testpult_B.Divide_dg = DR18E_Testpult_B.Gain_mi /
        DR18E_Testpult_B.Subtract_p;

      /* Lookup_n-D: '<S372>/Temp. corresponding  resistance' */
      DR18E_Testpult_B.Tempcorrespondingresistance = look1_linlxpw
        (DR18E_Testpult_B.Divide_dg,
         DR18E_Testpult_P.Tempcorrespondingresistance_b_f,
         DR18E_Testpult_P.Tempcorrespondingresistance_t_h, 22U);

      /* End of Outputs for SubSystem: '<S287>/Motortemperatur' */
      break;

     case 1:
      /* Outputs for IfAction SubSystem: '<S287>/Drehzahl' incorporates:
       *  ActionPort: '<S368>/Action Port'
       */
      /* SampleTimeMath: '<S381>/Weighted Sample Time'
       *
       * About '<S381>/Weighted Sample Time':
       *  y = K where K = ( w * Ts )
       */
      DR18E_Testpult_B.WeightedSampleTime_le =
        DR18E_Testpult_P.WeightedSampleTime_WtEt_p;

      /* Product: '<S381>/Divide1' incorporates:
       *  Constant: '<S368>/TFilterDrehzahl'
       */
      DR18E_Testpult_B.Divide1_k = DR18E_Testpult_P.TFilterDrehzahl_Value_n /
        DR18E_Testpult_B.WeightedSampleTime_le;

      /* Sum: '<S381>/Sum' incorporates:
       *  Constant: '<S381>/Constant2'
       */
      DR18E_Testpult_B.Sum_gl = DR18E_Testpult_B.Divide1_k +
        DR18E_Testpult_P.Constant2_Value_j;

      /* Product: '<S381>/Divide' incorporates:
       *  Constant: '<S381>/Constant'
       */
      DR18E_Testpult_B.Divide_el = DR18E_Testpult_P.Constant_Value_j /
        DR18E_Testpult_B.Sum_gl;

      /* DataTypeConversion: '<S368>/Data Type Conversion' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_a0);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 65536.0);
      }

      DR18E_Testpult_B.DataTypeConversion_ob = (int16_T)(u0 < 0.0 ? (int32_T)
        (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

      /* End of DataTypeConversion: '<S368>/Data Type Conversion' */

      /* DataTypeConversion: '<S368>/Data Type Conversion1' */
      DR18E_Testpult_B.DataTypeConversion1_g =
        DR18E_Testpult_B.DataTypeConversion_ob;

      /* Outputs for Atomic SubSystem: '<S368>/Skalierung Drehzahl' */
      DR18E_Testpu_SkalierungDrehzahl(DR18E_Testpult_B.DataTypeConversion1_g,
        &DR18E_Testpult_B.SkalierungDrehzahl_k, (P_SkalierungDrehzahl_DR18E_Te_T
        *)&DR18E_Testpult_P.SkalierungDrehzahl_k);

      /* End of Outputs for SubSystem: '<S368>/Skalierung Drehzahl' */

      /* Product: '<S379>/Product' incorporates:
       *  Constant: '<S368>/Constant1'
       */
      DR18E_Testpult_B.Product_n0 = DR18E_Testpult_P.Constant1_Value_f *
        DR18E_Testpult_B.SkalierungDrehzahl_k.Gain;

      /* Memory: '<S379>/Memory' */
      DR18E_Testpult_B.Memory_c2 = DR18E_Testpult_DW.Memory_PreviousInput_oz;

      /* Sum: '<S379>/Sum' */
      DR18E_Testpult_B.Sum_ih = DR18E_Testpult_B.Product_n0 -
        DR18E_Testpult_B.Memory_c2;

      /* Product: '<S379>/Product1' */
      DR18E_Testpult_B.Product1_jw = DR18E_Testpult_B.Divide_el *
        DR18E_Testpult_B.Sum_ih;

      /* Sum: '<S379>/Sum1' */
      DR18E_Testpult_B.Sum1_l3 = DR18E_Testpult_B.Product1_jw +
        DR18E_Testpult_B.Memory_c2;

      /* Product: '<S368>/Product' */
      DR18E_Testpult_B.Product_a = DR18E_Testpult_B.Sum1_l3 *
        DR18E_Testpult_B.WirkstromIq_e.Product;

      /* Gain: '<S368>/2*p // 60i' */
      DR18E_Testpult_B.up60i = DR18E_Testpult_P.up60i_Gain *
        DR18E_Testpult_B.Product_a;

      /* End of Outputs for SubSystem: '<S287>/Drehzahl' */
      break;

     case 2:
      /* Outputs for IfAction SubSystem: '<S287>/Strom' incorporates:
       *  ActionPort: '<S376>/Action Port'
       */
      /* DataTypeConversion: '<S376>/Data Type Conversion3' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_a0);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 65536.0);
      }

      DR18E_Testpult_B.DataTypeConversion3_b = (int16_T)(u0 < 0.0 ? (int32_T)
        (int16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(int16_T)(uint16_T)u0);

      /* End of DataTypeConversion: '<S376>/Data Type Conversion3' */

      /* Gain: '<S376>/Gain2' */
      DR18E_Testpult_B.Gain2_i = DR18E_Testpult_P.Gain2_Gain_dr *
        DR18E_Testpult_B.DataTypeConversion3_b;

      /* Product: '<S376>/Divide2' incorporates:
       *  Constant: '<S376>/Constant2'
       */
      DR18E_Testpult_B.Divide2_h = (real_T)DR18E_Testpult_B.Gain2_i * 0.0078125 /
        DR18E_Testpult_P.Constant2_Value_l;

      /* Gain: '<S376>/Drehmoment // Strangstrom in Nm//Arms' */
      DR18E_Testpult_B.DrehmomentStrangstrominNmArms =
        DR18E_Testpult_P.DrehmomentStrangstrominNmArms_c *
        DR18E_Testpult_B.Divide2_h;

      /* End of Outputs for SubSystem: '<S287>/Strom' */
      break;

     case 3:
      /* Outputs for IfAction SubSystem: '<S287>/Wirkstrom Iq' incorporates:
       *  ActionPort: '<S378>/Action Port'
       */
      DR18E_Testpult_WirkstromIq(DR18E_Testpult_B.SFunction1_o2_a0,
        &DR18E_Testpult_B.WirkstromIq_e, (P_WirkstromIq_DR18E_Testpult_T *)
        &DR18E_Testpult_P.WirkstromIq_e);

      /* End of Outputs for SubSystem: '<S287>/Wirkstrom Iq' */
      break;

     case 4:
      /* Outputs for IfAction SubSystem: '<S287>/Red ID 64:  Status Register Auswertung' incorporates:
       *  ActionPort: '<S373>/Action Port'
       */
      /* DataTypeConversion: '<S373>/Data Type Conversion1' */
      u0 = floor(DR18E_Testpult_B.SFunction1_o2_a0);
      if (rtIsNaN(u0) || rtIsInf(u0)) {
        u0 = 0.0;
      } else {
        u0 = fmod(u0, 4.294967296E+9);
      }

      DR18E_Testpult_B.DataTypeConversion1_p = u0 < 0.0 ? (uint32_T)-(int32_T)
        (uint32_T)-u0 : (uint32_T)u0;

      /* End of DataTypeConversion: '<S373>/Data Type Conversion1' */

      /* S-Function (sfix_bitop): '<S373>/2Hz' */
      DR18E_Testpult_B.uHz = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.uHz_BitMask_i;

      /* S-Function (sfix_bitop): '<S373>/Brk' */
      DR18E_Testpult_B.Brk = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Brk_BitMask_n;

      /* S-Function (sfix_bitop): '<S373>/Cal' */
      DR18E_Testpult_B.Cal = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Cal_BitMask_h;

      /* S-Function (sfix_bitop): '<S373>/Cal0' */
      DR18E_Testpult_B.Cal0 = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Cal0_BitMask_a;

      /* S-Function (sfix_bitop): '<S373>/Ena' */
      DR18E_Testpult_B.Ena = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Ena_BitMask_b;

      /* RelationalOperator: '<S383>/Compare' incorporates:
       *  Constant: '<S383>/Constant'
       */
      DR18E_Testpult_B.Compare_e = (DR18E_Testpult_B.Ena >
        DR18E_Testpult_P.Constant_Value_pu);

      /* S-Function (sfix_bitop): '<S373>/NCR0' */
      DR18E_Testpult_B.NCR0 = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.NCR0_BitMask_h;

      /* RelationalOperator: '<S384>/Compare' incorporates:
       *  Constant: '<S384>/Constant'
       */
      DR18E_Testpult_B.Compare_fu = (DR18E_Testpult_B.NCR0 >
        DR18E_Testpult_P.Constant_Value_ih0);

      /* S-Function (sfix_bitop): '<S373>/Rsw' */
      DR18E_Testpult_B.Rsw = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Rsw_BitMask_d;

      /* RelationalOperator: '<S385>/Compare' incorporates:
       *  Constant: '<S385>/Constant'
       */
      DR18E_Testpult_B.Compare_nw = (DR18E_Testpult_B.Rsw >
        DR18E_Testpult_P.Constant_Value_be);

      /* RelationalOperator: '<S386>/Compare' incorporates:
       *  Constant: '<S386>/Constant'
       */
      DR18E_Testpult_B.Compare_h = (DR18E_Testpult_B.Cal0 >
        DR18E_Testpult_P.Constant_Value_ph);

      /* RelationalOperator: '<S387>/Compare' incorporates:
       *  Constant: '<S387>/Constant'
       */
      DR18E_Testpult_B.Compare_du = (DR18E_Testpult_B.Cal >
        DR18E_Testpult_P.Constant_Value_jl);

      /* S-Function (sfix_bitop): '<S373>/Tol' */
      DR18E_Testpult_B.Tol = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Tol_BitMask_l;

      /* RelationalOperator: '<S388>/Compare' incorporates:
       *  Constant: '<S388>/Constant'
       */
      DR18E_Testpult_B.Compare_b = (DR18E_Testpult_B.Tol >
        DR18E_Testpult_P.Constant_Value_dm);

      /* S-Function (sfix_bitop): '<S373>/Rdy' */
      DR18E_Testpult_B.Rdy = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Rdy_BitMask_d;

      /* RelationalOperator: '<S389>/Compare' incorporates:
       *  Constant: '<S389>/Constant'
       */
      DR18E_Testpult_B.Compare_g = (DR18E_Testpult_B.Rdy >
        DR18E_Testpult_P.Constant_Value_au);

      /* RelationalOperator: '<S390>/Compare' incorporates:
       *  Constant: '<S390>/Constant'
       */
      DR18E_Testpult_B.Compare_kl = (DR18E_Testpult_B.Brk >
        DR18E_Testpult_P.Constant_Value_fu);

      /* S-Function (sfix_bitop): '<S373>/SIGNMAG' */
      DR18E_Testpult_B.SIGNMAG = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.SIGNMAG_BitMask_h;

      /* RelationalOperator: '<S391>/Compare' incorporates:
       *  Constant: '<S391>/Constant'
       */
      DR18E_Testpult_B.Compare_cw = (DR18E_Testpult_B.SIGNMAG >
        DR18E_Testpult_P.Constant_Value_dt);

      /* S-Function (sfix_bitop): '<S373>/Nclip' */
      DR18E_Testpult_B.Nclip = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Nclip_BitMask_m;

      /* RelationalOperator: '<S392>/Compare' incorporates:
       *  Constant: '<S392>/Constant'
       */
      DR18E_Testpult_B.Compare_cz0 = (DR18E_Testpult_B.Nclip >
        DR18E_Testpult_P.Constant_Value_o);

      /* S-Function (sfix_bitop): '<S373>/Nclip+' */
      DR18E_Testpult_B.Nclip_o = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Nclip_BitMask_g;

      /* RelationalOperator: '<S393>/Compare' incorporates:
       *  Constant: '<S393>/Constant'
       */
      DR18E_Testpult_B.Compare_dx = (DR18E_Testpult_B.Nclip_o >
        DR18E_Testpult_P.Constant_Value_lnh);

      /* S-Function (sfix_bitop): '<S373>/Nclip-' */
      DR18E_Testpult_B.Nclip_g = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Nclip_BitMask_e;

      /* RelationalOperator: '<S394>/Compare' incorporates:
       *  Constant: '<S394>/Constant'
       */
      DR18E_Testpult_B.Compare_j = (DR18E_Testpult_B.Nclip_g >
        DR18E_Testpult_P.Constant_Value_bo);

      /* S-Function (sfix_bitop): '<S373>/Lim+' */
      DR18E_Testpult_B.Lim = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Lim_BitMask_a;

      /* RelationalOperator: '<S395>/Compare' incorporates:
       *  Constant: '<S395>/Constant'
       */
      DR18E_Testpult_B.Compare_cx = (DR18E_Testpult_B.Lim >
        DR18E_Testpult_P.Constant_Value_bx);

      /* S-Function (sfix_bitop): '<S373>/Ird-Dig' */
      DR18E_Testpult_B.IrdDig = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.IrdDig_BitMask_e;

      /* RelationalOperator: '<S396>/Compare' incorporates:
       *  Constant: '<S396>/Constant'
       */
      DR18E_Testpult_B.Compare_ak = (DR18E_Testpult_B.IrdDig >
        DR18E_Testpult_P.Constant_Value_hy);

      /* S-Function (sfix_bitop): '<S373>/Iuse-rchd' */
      DR18E_Testpult_B.Iuserchd = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Iuserchd_BitMask_c;

      /* RelationalOperator: '<S397>/Compare' incorporates:
       *  Constant: '<S397>/Constant'
       */
      DR18E_Testpult_B.Compare_i = (DR18E_Testpult_B.Iuserchd >
        DR18E_Testpult_P.Constant_Value_jwe);

      /* S-Function (sfix_bitop): '<S373>/Ird-N' */
      DR18E_Testpult_B.IrdN = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.IrdN_BitMask_p;

      /* RelationalOperator: '<S398>/Compare' incorporates:
       *  Constant: '<S398>/Constant'
       */
      DR18E_Testpult_B.Compare_bl = (DR18E_Testpult_B.IrdN >
        DR18E_Testpult_P.Constant_Value_al);

      /* S-Function (sfix_bitop): '<S373>/Ird_TI' */
      DR18E_Testpult_B.Ird_TI = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Ird_TI_BitMask_n;

      /* RelationalOperator: '<S399>/Compare' incorporates:
       *  Constant: '<S399>/Constant'
       */
      DR18E_Testpult_B.Compare_k0 = (DR18E_Testpult_B.Ird_TI >
        DR18E_Testpult_P.Constant_Value_hf);

      /* S-Function (sfix_bitop): '<S373>/Ird_TIR' */
      DR18E_Testpult_B.Ird_TIR = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Ird_TIR_BitMask_k;

      /* RelationalOperator: '<S400>/Compare' incorporates:
       *  Constant: '<S400>/Constant'
       */
      DR18E_Testpult_B.Compare_o = (DR18E_Testpult_B.Ird_TIR >
        DR18E_Testpult_P.Constant_Value_il);

      /* RelationalOperator: '<S401>/Compare' incorporates:
       *  Constant: '<S401>/Constant'
       */
      DR18E_Testpult_B.Compare_np = (DR18E_Testpult_B.uHz >
        DR18E_Testpult_P.Constant_Value_ky);

      /* S-Function (sfix_bitop): '<S373>/Ird-TM' */
      DR18E_Testpult_B.IrdTM = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.IrdTM_BitMask_i;

      /* RelationalOperator: '<S402>/Compare' incorporates:
       *  Constant: '<S402>/Constant'
       */
      DR18E_Testpult_B.Compare_dc = (DR18E_Testpult_B.IrdTM >
        DR18E_Testpult_P.Constant_Value_cs);

      /* S-Function (sfix_bitop): '<S373>/Ird-ANA' */
      DR18E_Testpult_B.IrdANA = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.IrdANA_BitMask_d;

      /* RelationalOperator: '<S403>/Compare' incorporates:
       *  Constant: '<S403>/Constant'
       */
      DR18E_Testpult_B.Compare_ds = (DR18E_Testpult_B.IrdANA >
        DR18E_Testpult_P.Constant_Value_hv);

      /* S-Function (sfix_bitop): '<S373>/Iwcns' */
      DR18E_Testpult_B.Iwcns = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Iwcns_BitMask_a;

      /* RelationalOperator: '<S404>/Compare' incorporates:
       *  Constant: '<S404>/Constant'
       */
      DR18E_Testpult_B.Compare_ey = (DR18E_Testpult_B.Iwcns >
        DR18E_Testpult_P.Constant_Value_jr);

      /* S-Function (sfix_bitop): '<S373>/RFE_plus' */
      DR18E_Testpult_B.RFE_plus = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.RFE_plus_BitMask_g;

      /* RelationalOperator: '<S405>/Compare' incorporates:
       *  Constant: '<S405>/Constant'
       */
      DR18E_Testpult_B.Compare_gq = (DR18E_Testpult_B.RFE_plus >
        DR18E_Testpult_P.Constant_Value_k5);

      /* S-Function (sfix_bitop): '<S373>/Lim-' */
      DR18E_Testpult_B.Lim_m = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Lim_BitMask_ee;

      /* RelationalOperator: '<S406>/Compare' incorporates:
       *  Constant: '<S406>/Constant'
       */
      DR18E_Testpult_B.Compare_ij = (DR18E_Testpult_B.Lim_m >
        DR18E_Testpult_P.Constant_Value_p1);

      /* S-Function (sfix_bitop): '<S373>/frei' */
      DR18E_Testpult_B.frei = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.frei_BitMask_e;

      /* RelationalOperator: '<S407>/Compare' incorporates:
       *  Constant: '<S407>/Constant'
       */
      DR18E_Testpult_B.Compare_d3 = (DR18E_Testpult_B.frei >
        DR18E_Testpult_P.Constant_Value_da);

      /* S-Function (sfix_bitop): '<S373>/Handrad' */
      DR18E_Testpult_B.Handrad = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Handrad_BitMask_a;

      /* RelationalOperator: '<S408>/Compare' incorporates:
       *  Constant: '<S408>/Constant'
       */
      DR18E_Testpult_B.Compare_pzp = (DR18E_Testpult_B.Handrad >
        DR18E_Testpult_P.Constant_Value_kt);

      /* S-Function (sfix_bitop): '<S373>/OK' */
      DR18E_Testpult_B.OK = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.OK_BitMask_k;

      /* RelationalOperator: '<S409>/Compare' incorporates:
       *  Constant: '<S409>/Constant'
       */
      DR18E_Testpult_B.Compare_fp = (DR18E_Testpult_B.OK >
        DR18E_Testpult_P.Constant_Value_ay);

      /* S-Function (sfix_bitop): '<S373>/Icns' */
      DR18E_Testpult_B.Icns = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.Icns_BitMask_i;

      /* RelationalOperator: '<S410>/Compare' incorporates:
       *  Constant: '<S410>/Constant'
       */
      DR18E_Testpult_B.Compare_dv = (DR18E_Testpult_B.Icns >
        DR18E_Testpult_P.Constant_Value_md);

      /* S-Function (sfix_bitop): '<S373>/T-Nlim' */
      DR18E_Testpult_B.TNlim = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.TNlim_BitMask_d;

      /* RelationalOperator: '<S411>/Compare' incorporates:
       *  Constant: '<S411>/Constant'
       */
      DR18E_Testpult_B.Compare_ml = (DR18E_Testpult_B.TNlim >
        DR18E_Testpult_P.Constant_Value_oe);

      /* S-Function (sfix_bitop): '<S373>/P-N' */
      DR18E_Testpult_B.PN = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.PN_BitMask_d;

      /* RelationalOperator: '<S412>/Compare' incorporates:
       *  Constant: '<S412>/Constant'
       */
      DR18E_Testpult_B.Compare_nc = (DR18E_Testpult_B.PN >
        DR18E_Testpult_P.Constant_Value_kw);

      /* S-Function (sfix_bitop): '<S373>/N-I' */
      DR18E_Testpult_B.NI = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.NI_BitMask_g;

      /* RelationalOperator: '<S413>/Compare' incorporates:
       *  Constant: '<S413>/Constant'
       */
      DR18E_Testpult_B.Compare_av = (DR18E_Testpult_B.NI >
        DR18E_Testpult_P.Constant_Value_it);

      /* S-Function (sfix_bitop): '<S373>/N0' */
      DR18E_Testpult_B.N0 = DR18E_Testpult_B.DataTypeConversion1_p &
        DR18E_Testpult_P.N0_BitMask_a;

      /* RelationalOperator: '<S414>/Compare' incorporates:
       *  Constant: '<S414>/Constant'
       */
      DR18E_Testpult_B.Compare_hb = (DR18E_Testpult_B.N0 >
        DR18E_Testpult_P.Constant_Value_ba);

      /* End of Outputs for SubSystem: '<S287>/Red ID 64:  Status Register Auswertung' */
      break;

     case 5:
      /* Outputs for IfAction SubSystem: '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' incorporates:
       *  ActionPort: '<S374>/Action Port'
       */
      RegID0x8FERRORWarningRegisterAu(DR18E_Testpult_B.SFunction1_o2_a0,
        &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_c,
        (P_RegID0x8FERRORWarningRegist_T *)
        &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_c);

      /* End of Outputs for SubSystem: '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
      break;

     case 6:
      /* Outputs for IfAction SubSystem: '<S287>/U_DC' incorporates:
       *  ActionPort: '<S377>/Action Port'
       */
      DR18E_Testpult_U_DC(DR18E_Testpult_B.SFunction1_o2_a0,
                          &DR18E_Testpult_B.U_DC_o, (P_U_DC_DR18E_Testpult_T *)
                          &DR18E_Testpult_P.U_DC_o);

      /* End of Outputs for SubSystem: '<S287>/U_DC' */
      break;

     case 7:
      /* Outputs for IfAction SubSystem: '<S287>/Inverter_Temp' incorporates:
       *  ActionPort: '<S371>/Action Port'
       */
      DR18E_Testpult_Inverter_Temp(DR18E_Testpult_B.SFunction1_o2_a0,
        &DR18E_Testpult_B.Inverter_Temp_e, (P_Inverter_Temp_DR18E_Testpul_T *)
        &DR18E_Testpult_P.Inverter_Temp_e);

      /* End of Outputs for SubSystem: '<S287>/Inverter_Temp' */
      break;

     case 8:
      break;
    }

    /* End of SwitchCase: '<S287>/Switch Case' */

    /* Sum: '<S533>/Sum' incorporates:
     *  Constant: '<S533>/T_SOLL'
     */
    DR18E_Testpult_B.Sum_h = DR18E_Testpult_P.T_SOLL_Value -
      DR18E_Testpult_B.SFunction1_o2_k2;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[5] == 0) {
    /* Gain: '<S679>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain = DR18E_Testpult_P.PIController_P *
      DR18E_Testpult_B.Sum_h;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* RelationalOperator: '<S673>/Compare' incorporates:
     *  Constant: '<S673>/Constant'
     */
    DR18E_Testpult_B.Compare_ko = (DR18E_Testpult_B.Sum_h >=
      DR18E_Testpult_P.CompareToConstant_const_o);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[5] == 0) {
    /* DiscreteIntegrator: '<S679>/Integrator' */
    if (DR18E_Testpult_B.Compare_ko ||
        (DR18E_Testpult_DW.Integrator_PrevResetState != 0)) {
      DR18E_Testpult_DW.Integrator_DSTATE = DR18E_Testpult_P.Integrator_IC;
    }

    DR18E_Testpult_B.Integrator = DR18E_Testpult_DW.Integrator_DSTATE;

    /* End of DiscreteIntegrator: '<S679>/Integrator' */

    /* Sum: '<S679>/Sum' */
    DR18E_Testpult_B.Sum_o = DR18E_Testpult_B.ProportionalGain +
      DR18E_Testpult_B.Integrator;

    /* Saturate: '<S533>/Saturation' */
    u0 = DR18E_Testpult_B.Sum_o;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_j;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_o;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation = u1;
    } else {
      DR18E_Testpult_B.Saturation = u0;
    }

    /* End of Saturate: '<S533>/Saturation' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Switch: '<S676>/Switch' incorporates:
     *  Constant: '<S533>/CP1Ch4 Lüfter'
     */
    if (DR18E_Testpult_B.JKFlipFlop_n.Logic[0]) {
      DR18E_Testpult_B.Switch_h = DR18E_Testpult_P.CP1Ch4Lfter_Value;
    } else {
      /* RelationalOperator: '<S685>/Compare' incorporates:
       *  Constant: '<S685>/Constant'
       */
      DR18E_Testpult_B.Compare_f = (DR18E_Testpult_B.Tempcorrespondingresistance
        >= DR18E_Testpult_P.VergleichmitGrenzTemp3_const);

      /* RelationalOperator: '<S684>/Compare' incorporates:
       *  Constant: '<S684>/Constant'
       */
      DR18E_Testpult_B.Compare_cu =
        (DR18E_Testpult_B.Tempcorrespondingresistance_i >=
         DR18E_Testpult_P.VergleichmitGrenzTemp2_const);

      /* RelationalOperator: '<S683>/Compare' incorporates:
       *  Constant: '<S683>/Constant'
       */
      DR18E_Testpult_B.Compare_dr =
        (DR18E_Testpult_B.Inverter_Temp_e.BAMOCARPGD3ManualS48 >=
         DR18E_Testpult_P.VergleichmitGrenzTemp1_const);

      /* RelationalOperator: '<S682>/Compare' incorporates:
       *  Constant: '<S682>/Constant'
       */
      DR18E_Testpult_B.Compare_li =
        (DR18E_Testpult_B.Inverter_Temp.BAMOCARPGD3ManualS48 >=
         DR18E_Testpult_P.VergleichmitGrenzTemp_const);

      /* Logic: '<S533>/Logical Operator' */
      DR18E_Testpult_B.LogicalOperator_ju = (DR18E_Testpult_B.Compare_li ||
        DR18E_Testpult_B.Compare_dr || DR18E_Testpult_B.Compare_cu ||
        DR18E_Testpult_B.Compare_f);

      /* Switch: '<S533>/Switch' incorporates:
       *  Constant: '<S533>/Volle Lüfterleistung'
       */
      if (DR18E_Testpult_B.LogicalOperator_ju) {
        DR18E_Testpult_B.Switch_j = DR18E_Testpult_P.VolleLfterleistung_Value;
      } else {
        DR18E_Testpult_B.Switch_j = DR18E_Testpult_B.Saturation;
      }

      /* End of Switch: '<S533>/Switch' */
      DR18E_Testpult_B.Switch_h = DR18E_Testpult_B.Switch_j;
    }

    /* End of Switch: '<S676>/Switch' */

    /* Product: '<S680>/Product' incorporates:
     *  Constant: '<S533>/KLuefter'
     */
    DR18E_Testpult_B.Product_l = DR18E_Testpult_P.KLuefter_Value *
      DR18E_Testpult_B.Switch_h;

    /* Memory: '<S680>/Memory' */
    DR18E_Testpult_B.Memory_e = DR18E_Testpult_DW.Memory_PreviousInput_j;

    /* Sum: '<S680>/Sum' */
    DR18E_Testpult_B.Sum_f = DR18E_Testpult_B.Product_l -
      DR18E_Testpult_B.Memory_e;

    /* Product: '<S680>/Product1' */
    DR18E_Testpult_B.Product1_g = DR18E_Testpult_B.Divide_g *
      DR18E_Testpult_B.Sum_f;

    /* Sum: '<S680>/Sum1' */
    DR18E_Testpult_B.Sum1_i = DR18E_Testpult_B.Product1_g +
      DR18E_Testpult_B.Memory_e;

    /* Product: '<S533>/Product1' */
    DR18E_Testpult_B.Product1_n = DR18E_Testpult_B.Sum1_i *
      DR18E_Testpult_B.O_coolingEnable;

    /* Saturate: '<S533>/Saturation1' */
    u0 = DR18E_Testpult_B.Product1_n;
    u1 = DR18E_Testpult_P.Saturation1_LowerSat_c;
    u2 = DR18E_Testpult_P.Saturation1_UpperSat_i;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation1 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation1 = u1;
    } else {
      DR18E_Testpult_B.Saturation1 = u0;
    }

    /* End of Saturate: '<S533>/Saturation1' */

    /* DataTypeConversion: '<S7>/Data Type Conversion5' */
    DR18E_Testpult_B.DataTypeConversion5 = DR18E_Testpult_B.Saturation1;

    /* UnitDelay: '<S16>/Delay Input1' */
    DR18E_Testpult_B.Uk1_p = DR18E_Testpult_DW.DelayInput1_DSTATE_f;

    /* RelationalOperator: '<S16>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_nr =
      (DR18E_Testpult_B.DataTypeConversion5 != DR18E_Testpult_B.Uk1_p);

    /* Gain: '<S7>/Gain1' */
    DR18E_Testpult_B.Gain1_m = DR18E_Testpult_P.Gain1_Gain_g *
      DR18E_Testpult_B.DataTypeConversion5;

    /* Outputs for Enabled SubSystem: '<S7>/SIG_FAN' incorporates:
     *  EnablePort: '<S19>/Enable'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      if (DR18E_Testpult_B.FixPtRelationalOperator_nr) {
        if (!DR18E_Testpult_DW.SIG_FAN_MODE) {
          DR18E_Testpult_DW.SIG_FAN_MODE = true;
        }
      } else {
        if (DR18E_Testpult_DW.SIG_FAN_MODE) {
          DR18E_Testpult_DW.SIG_FAN_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_FAN' */
  }

  /* Outputs for Enabled SubSystem: '<S7>/SIG_FAN' incorporates:
   *  EnablePort: '<S19>/Enable'
   */
  if (DR18E_Testpult_DW.SIG_FAN_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
      /* S-Function (rti_commonblock): '<S19>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "SIG_FAN" Id:807 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_nc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->processed;
          DR18E_Testpult_B.SFunction1_o2_os0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_bp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "SIG_Fan" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain1_m ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327], 1,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }
  }

  /* End of Outputs for SubSystem: '<S7>/SIG_FAN' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* RelationalOperator: '<S28>/Delta time limit exceeded' incorporates:
     *  Constant: '<S28>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_i =
      (DR18E_Testpult_B.SFunction1_o3_bp >=
       DR18E_Testpult_P.Deltatimelimit_Value_m5);

    /* RelationalOperator: '<S28>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S28>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_n = (DR18E_Testpult_B.SFunction1_o1_nc !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_jej);

    /* Logic: '<S28>/OR' */
    DR18E_Testpult_B.OR_d = (DR18E_Testpult_B.Prevmsgnotsent_n ||
      DR18E_Testpult_B.Deltatimelimitexceeded_i);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S28>/Mem1' */
    DR18E_Testpult_B.Mem1_k = DR18E_Testpult_DW.Mem1_PreviousInput_m;

    /* Memory: '<S28>/Mem2' */
    DR18E_Testpult_B.Mem2_ge = DR18E_Testpult_DW.Mem2_PreviousInput_n;

    /* Memory: '<S28>/Mem3' */
    DR18E_Testpult_B.Mem3_o = DR18E_Testpult_DW.Mem3_PreviousInput_e;

    /* Memory: '<S28>/Mem4' */
    DR18E_Testpult_B.Mem4_pj = DR18E_Testpult_DW.Mem4_PreviousInput_c;

    /* Logic: '<S28>/Warn' */
    DR18E_Testpult_B.Warn_g = (DR18E_Testpult_B.OR_d && DR18E_Testpult_B.Mem1_k &&
      DR18E_Testpult_B.Mem2_ge && DR18E_Testpult_B.Mem3_o &&
      DR18E_Testpult_B.Mem4_pj);

    /* DataTypeConversion: '<S7>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion = DR18E_Testpult_B.O_Precharge_Enable;

    /* Gain: '<S7>/Gain5' */
    DR18E_Testpult_B.Gain5 = DR18E_Testpult_P.Gain5_Gain *
      DR18E_Testpult_B.DataTypeConversion;

    /* Outputs for Triggered SubSystem: '<S7>/SIG_PRECHARGE' incorporates:
     *  TriggerPort: '<S21>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      zcEvent = (((DR18E_Testpult_PrevZCX.SIG_PRECHARGE_Trig_ZCE == POS_ZCSIG)
                  != (int32_T)DR18E_Testpult_B.O_Precharge_Enable) &&
                 (DR18E_Testpult_PrevZCX.SIG_PRECHARGE_Trig_ZCE !=
                  UNINITIALIZED_ZCSIG));
      if (zcEvent) {
        /* S-Function (rti_commonblock): '<S21>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN TX Message Block: "SIG_PRECHARGE" Id:818 */
        {
          UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

          Float32 delayTime = 0.0;

          /* ... Read status and timestamp info (previous message) */
          can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]);

          /* Convert timestamp */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->processed) {
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->timestamp =
              rtk_dsts_time_to_simtime_convert
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->timestamp);
          }

          /* Messages with timestamp zero have been received in pause/stop state
             and must not be handled.
           */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->timestamp > 0.0) {
            DR18E_Testpult_B.SFunction1_o1_e1 = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->processed;
            DR18E_Testpult_B.SFunction1_o2_azh = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->timestamp;
            DR18E_Testpult_B.SFunction1_o3_gw = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332]->deltatime;
          }

          /* ... Encode Simulink signals of TX and RM blocks*/
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "SIG_Precharge" (0|8, standard signal, unsigned int, little endian) */
            /* Add or substract 0.5 in order to round to nearest integer */
            CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain5 ) + 0.5);
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          }

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332], 8,
                           &(CAN_Msg[0]), delayTime);
        }
      }

      DR18E_Testpult_PrevZCX.SIG_PRECHARGE_Trig_ZCE =
        DR18E_Testpult_B.O_Precharge_Enable;
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_PRECHARGE' */

    /* RelationalOperator: '<S29>/Delta time limit exceeded' incorporates:
     *  Constant: '<S29>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_e =
      (DR18E_Testpult_B.SFunction1_o3_gw >=
       DR18E_Testpult_P.Deltatimelimit_Value_o);

    /* Memory: '<S29>/Mem1' */
    DR18E_Testpult_B.Mem1_h = DR18E_Testpult_DW.Mem1_PreviousInput_d;

    /* Memory: '<S29>/Mem2' */
    DR18E_Testpult_B.Mem2_e = DR18E_Testpult_DW.Mem2_PreviousInput_hu;

    /* Memory: '<S29>/Mem3' */
    DR18E_Testpult_B.Mem3_l = DR18E_Testpult_DW.Mem3_PreviousInput_f;

    /* Memory: '<S29>/Mem4' */
    DR18E_Testpult_B.Mem4_f = DR18E_Testpult_DW.Mem4_PreviousInput_dp;

    /* RelationalOperator: '<S29>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S29>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_m = (DR18E_Testpult_B.SFunction1_o1_e1 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_mxc);

    /* Logic: '<S29>/OR' */
    DR18E_Testpult_B.OR_b = (DR18E_Testpult_B.Prevmsgnotsent_m ||
      DR18E_Testpult_B.Deltatimelimitexceeded_e);

    /* Logic: '<S29>/Warn' */
    DR18E_Testpult_B.Warn_gl = (DR18E_Testpult_B.OR_b && DR18E_Testpult_B.Mem1_h
      && DR18E_Testpult_B.Mem2_e && DR18E_Testpult_B.Mem3_l &&
      DR18E_Testpult_B.Mem4_f);

    /* DataTypeConversion: '<S7>/Data Type Conversion6' */
    DR18E_Testpult_B.DataTypeConversion6 = DR18E_Testpult_B.O_InverterFRE;

    /* Gain: '<S7>/Gain6' */
    DR18E_Testpult_B.Gain6 = DR18E_Testpult_P.Gain6_Gain *
      DR18E_Testpult_B.DataTypeConversion6;

    /* Outputs for Triggered SubSystem: '<S7>/SIG_Inverter_Enable' incorporates:
     *  TriggerPort: '<S20>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      zcEvent_0 = rt_ZCFcn(ANY_ZERO_CROSSING,
                           &DR18E_Testpult_PrevZCX.SIG_Inverter_Enable_Trig_ZCE,
                           (DR18E_Testpult_B.O_InverterFRE));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S20>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN TX Message Block: "SIG_Inverter_Enable" Id:804 */
        {
          UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

          Float32 delayTime = 0.0;

          /* ... Read status and timestamp info (previous message) */
          can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]);

          /* Convert timestamp */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->processed) {
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->timestamp =
              rtk_dsts_time_to_simtime_convert
              (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->timestamp);
          }

          /* Messages with timestamp zero have been received in pause/stop state
             and must not be handled.
           */
          if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->timestamp > 0.0) {
            DR18E_Testpult_B.SFunction1_o1_p1 = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->processed;
            DR18E_Testpult_B.SFunction1_o2_ey = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->timestamp;
            DR18E_Testpult_B.SFunction1_o3_duc = (real_T)
              can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324]->deltatime;
          }

          /* ... Encode Simulink signals of TX and RM blocks*/
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "SIG_Inverter_Enable" (0|8, standard signal, unsigned int, little endian) */
            /* Add or substract 0.5 in order to round to nearest integer */
            CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.Gain6 ) + 0.5);
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
          }

          /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
          can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324], 8,
                           &(CAN_Msg[0]), delayTime);
        }
      }
    }

    /* End of Outputs for SubSystem: '<S7>/SIG_Inverter_Enable' */

    /* RelationalOperator: '<S30>/Delta time limit exceeded' incorporates:
     *  Constant: '<S30>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_mk =
      (DR18E_Testpult_B.SFunction1_o3_duc >=
       DR18E_Testpult_P.Deltatimelimit_Value_oc);

    /* Memory: '<S30>/Mem1' */
    DR18E_Testpult_B.Mem1_ce = DR18E_Testpult_DW.Mem1_PreviousInput_l;

    /* Memory: '<S30>/Mem2' */
    DR18E_Testpult_B.Mem2_n = DR18E_Testpult_DW.Mem2_PreviousInput_j;

    /* Memory: '<S30>/Mem3' */
    DR18E_Testpult_B.Mem3_f = DR18E_Testpult_DW.Mem3_PreviousInput_o;

    /* Memory: '<S30>/Mem4' */
    DR18E_Testpult_B.Mem4_d = DR18E_Testpult_DW.Mem4_PreviousInput_n1;

    /* RelationalOperator: '<S30>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S30>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_a = (DR18E_Testpult_B.SFunction1_o1_p1 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_g);

    /* Logic: '<S30>/OR' */
    DR18E_Testpult_B.OR_f = (DR18E_Testpult_B.Prevmsgnotsent_a ||
      DR18E_Testpult_B.Deltatimelimitexceeded_mk);

    /* Logic: '<S30>/Warn' */
    DR18E_Testpult_B.Warn_b = (DR18E_Testpult_B.OR_f && DR18E_Testpult_B.Mem1_ce
      && DR18E_Testpult_B.Mem2_n && DR18E_Testpult_B.Mem3_f &&
      DR18E_Testpult_B.Mem4_d);

    /* DataTypeConversion: '<S8>/Data Type Conversion4' */
    DR18E_Testpult_B.DataTypeConversion4_e =
      DR18E_Testpult_B.Tempcorrespondingresistance_i;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* S-Function (rti_commonblock): '<S33>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "MOTOR_1_Temp" Id:1648 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->timestamp > 0.0) {
        DR18E_Testpult_B.SFunction1_o1_dv = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->processed;
        DR18E_Testpult_B.SFunction1_o2_cb = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->timestamp;
        DR18E_Testpult_B.SFunction1_o3_jd = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670]->deltatime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "Motor_1_Temperatur" (0|16, standard signal, signed int, little endian) */
        /* Add or substract 0.5 in order to round to nearest integer */
        if (( DR18E_Testpult_B.DataTypeConversion4_e ) < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion4_e )
            - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion4_e )
            + 0.5);
        CAN_Sgn.SignedSgn &= 0x0000FFFF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670], 2,
                       &(CAN_Msg[0]), delayTime);
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S37>/Mem1' */
    DR18E_Testpult_B.Mem1_b = DR18E_Testpult_DW.Mem1_PreviousInput_i;

    /* Memory: '<S37>/Mem2' */
    DR18E_Testpult_B.Mem2_d = DR18E_Testpult_DW.Mem2_PreviousInput_o;

    /* Memory: '<S37>/Mem3' */
    DR18E_Testpult_B.Mem3_lm = DR18E_Testpult_DW.Mem3_PreviousInput_g;

    /* Memory: '<S37>/Mem4' */
    DR18E_Testpult_B.Mem4_o = DR18E_Testpult_DW.Mem4_PreviousInput_f;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* RelationalOperator: '<S37>/Delta time limit exceeded' incorporates:
     *  Constant: '<S37>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_h3 =
      (DR18E_Testpult_B.SFunction1_o3_jd >=
       DR18E_Testpult_P.Deltatimelimit_Value_i);

    /* RelationalOperator: '<S37>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S37>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_d = (DR18E_Testpult_B.SFunction1_o1_dv !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_p);

    /* Logic: '<S37>/OR' */
    DR18E_Testpult_B.OR_k = (DR18E_Testpult_B.Prevmsgnotsent_d ||
      DR18E_Testpult_B.Deltatimelimitexceeded_h3);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S37>/Warn' */
    DR18E_Testpult_B.Warn_mm = (DR18E_Testpult_B.OR_k && DR18E_Testpult_B.Mem1_b
      && DR18E_Testpult_B.Mem2_d && DR18E_Testpult_B.Mem3_lm &&
      DR18E_Testpult_B.Mem4_o);

    /* DataTypeConversion: '<S8>/Data Type Conversion1' */
    DR18E_Testpult_B.DataTypeConversion1_k =
      DR18E_Testpult_B.Tempcorrespondingresistance;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* S-Function (rti_commonblock): '<S34>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "MOTOR_2_Temp" Id:1649 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->timestamp > 0.0) {
        DR18E_Testpult_B.SFunction1_o1_hz = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->processed;
        DR18E_Testpult_B.SFunction1_o2_b = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->timestamp;
        DR18E_Testpult_B.SFunction1_o3_bt = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671]->deltatime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "Motor_2_Temperatur" (0|16, standard signal, signed int, little endian) */
        /* Add or substract 0.5 in order to round to nearest integer */
        if (( DR18E_Testpult_B.DataTypeConversion1_k ) < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion1_k )
            - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion1_k )
            + 0.5);
        CAN_Sgn.SignedSgn &= 0x0000FFFF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671], 2,
                       &(CAN_Msg[0]), delayTime);
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S35>/Mem1' */
    DR18E_Testpult_B.Mem1_b2 = DR18E_Testpult_DW.Mem1_PreviousInput_ia;

    /* Memory: '<S35>/Mem2' */
    DR18E_Testpult_B.Mem2_gb = DR18E_Testpult_DW.Mem2_PreviousInput_e;

    /* Memory: '<S35>/Mem3' */
    DR18E_Testpult_B.Mem3_c = DR18E_Testpult_DW.Mem3_PreviousInput_nc;

    /* Memory: '<S35>/Mem4' */
    DR18E_Testpult_B.Mem4_n = DR18E_Testpult_DW.Mem4_PreviousInput_cj;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* RelationalOperator: '<S35>/Delta time limit exceeded' incorporates:
     *  Constant: '<S35>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_d =
      (DR18E_Testpult_B.SFunction1_o3_bt >=
       DR18E_Testpult_P.Deltatimelimit_Value_e);

    /* RelationalOperator: '<S35>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S35>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_db = (DR18E_Testpult_B.SFunction1_o1_hz !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_mb);

    /* Logic: '<S35>/OR' */
    DR18E_Testpult_B.OR_m = (DR18E_Testpult_B.Prevmsgnotsent_db ||
      DR18E_Testpult_B.Deltatimelimitexceeded_d);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S35>/Warn' */
    DR18E_Testpult_B.Warn_d = (DR18E_Testpult_B.OR_m && DR18E_Testpult_B.Mem1_b2
      && DR18E_Testpult_B.Mem2_gb && DR18E_Testpult_B.Mem3_c &&
      DR18E_Testpult_B.Mem4_n);

    /* DataTypeConversion: '<S8>/Data Type Conversion2' */
    DR18E_Testpult_B.DataTypeConversion2_a =
      DR18E_Testpult_B.Inverter_Temp.BAMOCARPGD3ManualS48;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* S-Function (rti_commonblock): '<S31>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "IGBT_1_Temp" Id:1650 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->timestamp > 0.0) {
        DR18E_Testpult_B.SFunction1_o1_co = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->processed;
        DR18E_Testpult_B.SFunction1_o2_fk = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->timestamp;
        DR18E_Testpult_B.SFunction1_o3_o = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672]->deltatime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "IGBT_1_Temperatur" (0|16, standard signal, signed int, little endian) */
        /* Add or substract 0.5 in order to round to nearest integer */
        if (( DR18E_Testpult_B.DataTypeConversion2_a ) < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion2_a )
            - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion2_a )
            + 0.5);
        CAN_Sgn.SignedSgn &= 0x0000FFFF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672], 2,
                       &(CAN_Msg[0]), delayTime);
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S36>/Mem1' */
    DR18E_Testpult_B.Mem1_mr = DR18E_Testpult_DW.Mem1_PreviousInput_b;

    /* Memory: '<S36>/Mem2' */
    DR18E_Testpult_B.Mem2_ek = DR18E_Testpult_DW.Mem2_PreviousInput_k4;

    /* Memory: '<S36>/Mem3' */
    DR18E_Testpult_B.Mem3_p = DR18E_Testpult_DW.Mem3_PreviousInput_b;

    /* Memory: '<S36>/Mem4' */
    DR18E_Testpult_B.Mem4_b = DR18E_Testpult_DW.Mem4_PreviousInput_fb;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* RelationalOperator: '<S36>/Delta time limit exceeded' incorporates:
     *  Constant: '<S36>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_g =
      (DR18E_Testpult_B.SFunction1_o3_o >=
       DR18E_Testpult_P.Deltatimelimit_Value_f);

    /* RelationalOperator: '<S36>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S36>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_ao = (DR18E_Testpult_B.SFunction1_o1_co !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_ky);

    /* Logic: '<S36>/OR' */
    DR18E_Testpult_B.OR_p = (DR18E_Testpult_B.Prevmsgnotsent_ao ||
      DR18E_Testpult_B.Deltatimelimitexceeded_g);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S36>/Warn' */
    DR18E_Testpult_B.Warn_fn = (DR18E_Testpult_B.OR_p &&
      DR18E_Testpult_B.Mem1_mr && DR18E_Testpult_B.Mem2_ek &&
      DR18E_Testpult_B.Mem3_p && DR18E_Testpult_B.Mem4_b);

    /* DataTypeConversion: '<S8>/Data Type Conversion3' */
    DR18E_Testpult_B.DataTypeConversion3_i =
      DR18E_Testpult_B.Inverter_Temp_e.BAMOCARPGD3ManualS48;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* S-Function (rti_commonblock): '<S32>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "IGBT_2_Temp" Id:1651 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->timestamp > 0.0) {
        DR18E_Testpult_B.SFunction1_o1_fj = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->processed;
        DR18E_Testpult_B.SFunction1_o2_j = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->timestamp;
        DR18E_Testpult_B.SFunction1_o3_h4 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673]->deltatime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "IGBT_2_Temperatur" (0|16, standard signal, signed int, little endian) */
        /* Add or substract 0.5 in order to round to nearest integer */
        if (( DR18E_Testpult_B.DataTypeConversion3_i ) < -0.5)
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion3_i )
            - 0.5);
        else
          CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.DataTypeConversion3_i )
            + 0.5);
        CAN_Sgn.SignedSgn &= 0x0000FFFF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte1;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673], 2,
                       &(CAN_Msg[0]), delayTime);
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S38>/Mem1' */
    DR18E_Testpult_B.Mem1_l = DR18E_Testpult_DW.Mem1_PreviousInput_dg;

    /* Memory: '<S38>/Mem2' */
    DR18E_Testpult_B.Mem2_nv = DR18E_Testpult_DW.Mem2_PreviousInput_l;

    /* Memory: '<S38>/Mem3' */
    DR18E_Testpult_B.Mem3_h = DR18E_Testpult_DW.Mem3_PreviousInput_go;

    /* Memory: '<S38>/Mem4' */
    DR18E_Testpult_B.Mem4_oq = DR18E_Testpult_DW.Mem4_PreviousInput_l;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* RelationalOperator: '<S38>/Delta time limit exceeded' incorporates:
     *  Constant: '<S38>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_b =
      (DR18E_Testpult_B.SFunction1_o3_h4 >=
       DR18E_Testpult_P.Deltatimelimit_Value_p);

    /* RelationalOperator: '<S38>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S38>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_nj = (DR18E_Testpult_B.SFunction1_o1_fj !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_ka);

    /* Logic: '<S38>/OR' */
    DR18E_Testpult_B.OR_e = (DR18E_Testpult_B.Prevmsgnotsent_nj ||
      DR18E_Testpult_B.Deltatimelimitexceeded_b);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S38>/Warn' */
    DR18E_Testpult_B.Warn_ge = (DR18E_Testpult_B.OR_e && DR18E_Testpult_B.Mem1_l
      && DR18E_Testpult_B.Mem2_nv && DR18E_Testpult_B.Mem3_h &&
      DR18E_Testpult_B.Mem4_oq);

    /* UnitDelay: '<S41>/Delay Input1' */
    DR18E_Testpult_B.Uk1_k = DR18E_Testpult_DW.DelayInput1_DSTATE_j;

    /* RelationalOperator: '<S41>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_l = (DR18E_Testpult_B.O_ErrorNr !=
      DR18E_Testpult_B.Uk1_k);

    /* Outputs for Enabled SubSystem: '<S9>/DISP_Error_Code' incorporates:
     *  EnablePort: '<S40>/Enable'
     */
    if (DR18E_Testpult_B.FixPtRelationalOperator_l) {
      /* S-Function (rti_commonblock): '<S40>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "DISP_Error_Code" Id:1638 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_jp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->processed;
          DR18E_Testpult_B.SFunction1_o2_kd = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_hk = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "DISP_Error_Code" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.O_ErrorNr ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    /* End of Outputs for SubSystem: '<S9>/DISP_Error_Code' */

    /* RelationalOperator: '<S46>/Delta time limit exceeded' incorporates:
     *  Constant: '<S46>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_ba =
      (DR18E_Testpult_B.SFunction1_o3_hk >=
       DR18E_Testpult_P.Deltatimelimit_Value_c);

    /* Memory: '<S46>/Mem1' */
    DR18E_Testpult_B.Mem1_g = DR18E_Testpult_DW.Mem1_PreviousInput_is;

    /* Memory: '<S46>/Mem2' */
    DR18E_Testpult_B.Mem2_nk = DR18E_Testpult_DW.Mem2_PreviousInput_nj;

    /* Memory: '<S46>/Mem3' */
    DR18E_Testpult_B.Mem3_lk = DR18E_Testpult_DW.Mem3_PreviousInput_bm;

    /* Memory: '<S46>/Mem4' */
    DR18E_Testpult_B.Mem4_bq = DR18E_Testpult_DW.Mem4_PreviousInput_p;

    /* RelationalOperator: '<S46>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S46>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_nz = (DR18E_Testpult_B.SFunction1_o1_jp !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_a);

    /* Logic: '<S46>/OR' */
    DR18E_Testpult_B.OR_fz = (DR18E_Testpult_B.Prevmsgnotsent_nz ||
      DR18E_Testpult_B.Deltatimelimitexceeded_ba);

    /* Logic: '<S46>/Warn' */
    DR18E_Testpult_B.Warn_c = (DR18E_Testpult_B.OR_fz && DR18E_Testpult_B.Mem1_g
      && DR18E_Testpult_B.Mem2_nk && DR18E_Testpult_B.Mem3_lk &&
      DR18E_Testpult_B.Mem4_bq);

    /* UnitDelay: '<S42>/Delay Input1' */
    DR18E_Testpult_B.Uk1_n = DR18E_Testpult_DW.DelayInput1_DSTATE_n;

    /* RelationalOperator: '<S42>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_i = (DR18E_Testpult_B.O_State !=
      DR18E_Testpult_B.Uk1_n);

    /* Outputs for Enabled SubSystem: '<S9>/Car_State' incorporates:
     *  EnablePort: '<S39>/Enable'
     */
    if (DR18E_Testpult_B.FixPtRelationalOperator_i) {
      /* S-Function (rti_commonblock): '<S39>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "Car_State" Id:1637 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_ji = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->processed;
          DR18E_Testpult_B.SFunction1_o2_kt = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_kw = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "Car_State" (0|8, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.O_State ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_State ) - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_State ) + 0.5);
          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    /* End of Outputs for SubSystem: '<S9>/Car_State' */

    /* RelationalOperator: '<S47>/Delta time limit exceeded' incorporates:
     *  Constant: '<S47>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_c =
      (DR18E_Testpult_B.SFunction1_o3_kw >=
       DR18E_Testpult_P.Deltatimelimit_Value_d);

    /* Memory: '<S47>/Mem1' */
    DR18E_Testpult_B.Mem1_j = DR18E_Testpult_DW.Mem1_PreviousInput_m4;

    /* Memory: '<S47>/Mem2' */
    DR18E_Testpult_B.Mem2_d3 = DR18E_Testpult_DW.Mem2_PreviousInput_m;

    /* Memory: '<S47>/Mem3' */
    DR18E_Testpult_B.Mem3_fd = DR18E_Testpult_DW.Mem3_PreviousInput_oq;

    /* Memory: '<S47>/Mem4' */
    DR18E_Testpult_B.Mem4_nw = DR18E_Testpult_DW.Mem4_PreviousInput_m;

    /* RelationalOperator: '<S47>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S47>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_g0 = (DR18E_Testpult_B.SFunction1_o1_ji !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_c);

    /* Logic: '<S47>/OR' */
    DR18E_Testpult_B.OR_j = (DR18E_Testpult_B.Prevmsgnotsent_g0 ||
      DR18E_Testpult_B.Deltatimelimitexceeded_c);

    /* Logic: '<S47>/Warn' */
    DR18E_Testpult_B.Warn_h = (DR18E_Testpult_B.OR_j && DR18E_Testpult_B.Mem1_j &&
      DR18E_Testpult_B.Mem2_d3 && DR18E_Testpult_B.Mem3_fd &&
      DR18E_Testpult_B.Mem4_nw);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S44>/S-Function1' incorporates:
     *  Constant: '<S526>/Constant1'
     */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN TX Message Block: "Drive_Torque_Max" Id:819 */
    {
      UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

      Float32 delayTime = 0.0;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->timestamp > 0.0) {
        DR18E_Testpult_B.SFunction1_o1_g3 = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->processed;
        DR18E_Testpult_B.SFunction1_o2_ef = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->timestamp;
        DR18E_Testpult_B.SFunction1_o3_ka = (real_T)
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333]->deltatime;
      }

      /* ... Encode Simulink signals of TX and RM blocks*/
      {
        rtican_Signal_t CAN_Sgn;

        /* ...... "Drive_Torque_Max" (0|8, standard signal, unsigned int, little endian) */
        /* Add or substract 0.5 in order to round to nearest integer */
        CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_P.Constant1_Value_c ) +
          0.5);
        CAN_Sgn.UnsignedSgn &= 0x000000FF;
        CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;
      }

      /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
      can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333], 8,
                       &(CAN_Msg[0]), delayTime);
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S48>/Mem1' */
    DR18E_Testpult_B.Mem1_p = DR18E_Testpult_DW.Mem1_PreviousInput_f;

    /* Memory: '<S48>/Mem2' */
    DR18E_Testpult_B.Mem2_ed = DR18E_Testpult_DW.Mem2_PreviousInput_g;

    /* Memory: '<S48>/Mem3' */
    DR18E_Testpult_B.Mem3_ox = DR18E_Testpult_DW.Mem3_PreviousInput_i;

    /* Memory: '<S48>/Mem4' */
    DR18E_Testpult_B.Mem4_j = DR18E_Testpult_DW.Mem4_PreviousInput_ne;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* RelationalOperator: '<S48>/Delta time limit exceeded' incorporates:
     *  Constant: '<S48>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_iq =
      (DR18E_Testpult_B.SFunction1_o3_ka >=
       DR18E_Testpult_P.Deltatimelimit_Value_ly);

    /* RelationalOperator: '<S48>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S48>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_l1 = (DR18E_Testpult_B.SFunction1_o1_g3 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_l);

    /* Logic: '<S48>/OR' */
    DR18E_Testpult_B.OR_l = (DR18E_Testpult_B.Prevmsgnotsent_l1 ||
      DR18E_Testpult_B.Deltatimelimitexceeded_iq);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S48>/Warn' */
    DR18E_Testpult_B.Warn_bj = (DR18E_Testpult_B.OR_l && DR18E_Testpult_B.Mem1_p
      && DR18E_Testpult_B.Mem2_ed && DR18E_Testpult_B.Mem3_ox &&
      DR18E_Testpult_B.Mem4_j);

    /* UnitDelay: '<S43>/Delay Input1' */
    memcpy(&DR18E_Testpult_B.Uk1_ib[0], &DR18E_Testpult_DW.DelayInput1_DSTATE_e
           [0], sizeof(real_T) << 3U);

    /* DiscretePulseGenerator: '<S562>/Pulse Generator' */
    DR18E_Testpult_B.PulseGenerator_g = (DR18E_Testpult_DW.clockTickCounter_j <
      DR18E_Testpult_P.PulseGenerator_Duty_p) &&
      (DR18E_Testpult_DW.clockTickCounter_j >= 0) ?
      DR18E_Testpult_P.PulseGenerator_Amp_p : 0.0;
    if (DR18E_Testpult_DW.clockTickCounter_j >=
        DR18E_Testpult_P.PulseGenerator_Period_i - 1.0) {
      DR18E_Testpult_DW.clockTickCounter_j = 0;
    } else {
      DR18E_Testpult_DW.clockTickCounter_j++;
    }

    /* End of DiscretePulseGenerator: '<S562>/Pulse Generator' */

    /* MultiPortSwitch: '<S525>/Multiport Switch' incorporates:
     *  Constant: '<S525>/LED Bar Mode'
     */
    switch ((int32_T)DR18E_Testpult_P.LEDBarMode_Value) {
     case 1:
      /* MultiPortSwitch: '<S562>/Multiport Switch' incorporates:
       *  Constant: '<S525>/LED Farbe'
       *  Constant: '<S562>/LED aus'
       *  Constant: '<S562>/LED gelb'
       *  Constant: '<S562>/LED gruen'
       *  Constant: '<S562>/LED rot'
       */
      switch ((int32_T)DR18E_Testpult_P.LEDFarbe_Value) {
       case 1:
        DR18E_Testpult_B.LED_BAR_2 = DR18E_Testpult_P.LEDaus_Value;
        break;

       case 2:
        DR18E_Testpult_B.LED_BAR_2 = DR18E_Testpult_P.LEDrot_Value;
        break;

       case 3:
        DR18E_Testpult_B.LED_BAR_2 = DR18E_Testpult_P.LEDgruen_Value;
        break;

       default:
        DR18E_Testpult_B.LED_BAR_2 = DR18E_Testpult_P.LEDgelb_Value;
        break;
      }

      /* End of MultiPortSwitch: '<S562>/Multiport Switch' */

      /* Switch: '<S562>/Switch' incorporates:
       *  Constant: '<S525>/LED Bar blinken'
       *  Constant: '<S562>/Constant '
       */
      if (DR18E_Testpult_P.LEDBarblinken_Value) {
        DR18E_Testpult_B.Switch_i = DR18E_Testpult_B.PulseGenerator_g;
      } else {
        DR18E_Testpult_B.Switch_i = DR18E_Testpult_P.Constant_Value_m2;
      }

      /* End of Switch: '<S562>/Switch' */

      /* Product: '<S562>/Product' */
      DR18E_Testpult_B.Product_lz = DR18E_Testpult_B.Switch_i *
        DR18E_Testpult_B.LED_BAR_2;
      DR18E_Testpult_B.LEDBarVektor[0] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[1] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[2] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[3] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[4] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[5] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[6] = DR18E_Testpult_B.Product_lz;
      DR18E_Testpult_B.LEDBarVektor[7] = DR18E_Testpult_B.Product_lz;
      break;

     case 2:
      memset(&DR18E_Testpult_B.LEDBarVektor[0], 0, sizeof(real_T) << 3U);
      break;

     default:
      memset(&DR18E_Testpult_B.LEDBarVektor[0], 0, sizeof(real_T) << 3U);
      break;
    }

    /* End of MultiPortSwitch: '<S525>/Multiport Switch' */

    /* RelationalOperator: '<S43>/FixPt Relational Operator' */
    for (i = 0; i < 8; i++) {
      DR18E_Testpult_B.FixPtRelationalOperator_k[i] =
        (DR18E_Testpult_B.LEDBarVektor[i] != DR18E_Testpult_B.Uk1_ib[i]);
    }

    /* End of RelationalOperator: '<S43>/FixPt Relational Operator' */

    /* Outputs for Enabled SubSystem: '<S9>/LED_BAR' incorporates:
     *  EnablePort: '<S45>/Enable'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      if (DR18E_Testpult_B.FixPtRelationalOperator_k[0] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[1] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[2] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[3] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[4] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[5] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[6] ||
          DR18E_Testpult_B.FixPtRelationalOperator_k[7]) {
        if (!DR18E_Testpult_DW.LED_BAR_MODE) {
          DR18E_Testpult_DW.LED_BAR_MODE = true;
        }
      } else {
        if (DR18E_Testpult_DW.LED_BAR_MODE) {
          DR18E_Testpult_DW.LED_BAR_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<S9>/LED_BAR' */
  }

  /* Outputs for Enabled SubSystem: '<S9>/LED_BAR' incorporates:
   *  EnablePort: '<S45>/Enable'
   */
  if (DR18E_Testpult_DW.LED_BAR_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* S-Function (rti_commonblock): '<S45>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "LED_BAR" Id:1636 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_pp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->processed;
          DR18E_Testpult_B.SFunction1_o2_jc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_li = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "LED_BAR_1" (0|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[0] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_2" (2|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[1] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_3" (4|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[2] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_4" (6|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[3] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_5" (8|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[4] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_6" (10|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[5] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 2;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_7" (12|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[6] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 4;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "LED_BAR_8" (14|2, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.LEDBarVektor[7] ) +
            0.5);
          CAN_Sgn.UnsignedSgn &= 0x00000003;
          CAN_Sgn.UnsignedSgn = ((UInt32)CAN_Sgn.UnsignedSgn) << 6;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664], 2,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }
  }

  /* End of Outputs for SubSystem: '<S9>/LED_BAR' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* RelationalOperator: '<S49>/Delta time limit exceeded' incorporates:
     *  Constant: '<S49>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_c2 =
      (DR18E_Testpult_B.SFunction1_o3_li >=
       DR18E_Testpult_P.Deltatimelimit_Value_mc);

    /* RelationalOperator: '<S49>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S49>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_dd = (DR18E_Testpult_B.SFunction1_o1_pp !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_b);

    /* Logic: '<S49>/OR' */
    DR18E_Testpult_B.OR_k5 = (DR18E_Testpult_B.Prevmsgnotsent_dd ||
      DR18E_Testpult_B.Deltatimelimitexceeded_c2);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S49>/Mem1' */
    DR18E_Testpult_B.Mem1_f = DR18E_Testpult_DW.Mem1_PreviousInput_ig;

    /* Memory: '<S49>/Mem2' */
    DR18E_Testpult_B.Mem2_fu = DR18E_Testpult_DW.Mem2_PreviousInput_hk;

    /* Memory: '<S49>/Mem3' */
    DR18E_Testpult_B.Mem3_g = DR18E_Testpult_DW.Mem3_PreviousInput_if;

    /* Memory: '<S49>/Mem4' */
    DR18E_Testpult_B.Mem4_bf = DR18E_Testpult_DW.Mem4_PreviousInput_la;

    /* Logic: '<S49>/Warn' */
    DR18E_Testpult_B.Warn_c5 = (DR18E_Testpult_B.OR_k5 &&
      DR18E_Testpult_B.Mem1_f && DR18E_Testpult_B.Mem2_fu &&
      DR18E_Testpult_B.Mem3_g && DR18E_Testpult_B.Mem4_bf);

    /* SampleTimeMath: '<S561>/Weighted Sample Time'
     *
     * About '<S561>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_h =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_b;

    /* Product: '<S561>/Divide1' incorporates:
     *  Constant: '<S546>/TPlaus'
     */
    DR18E_Testpult_B.Divide1_p = DR18E_Testpult_P.TPlaus_Value /
      DR18E_Testpult_B.WeightedSampleTime_h;

    /* Sum: '<S561>/Sum' incorporates:
     *  Constant: '<S561>/Constant2'
     */
    DR18E_Testpult_B.Sum_p = DR18E_Testpult_B.Divide1_p +
      DR18E_Testpult_P.Constant2_Value_c;

    /* Product: '<S561>/Divide' incorporates:
     *  Constant: '<S561>/Constant'
     */
    DR18E_Testpult_B.Divide_c = DR18E_Testpult_P.Constant_Value_e4 /
      DR18E_Testpult_B.Sum_p;

    /* RelationalOperator: '<S551>/Compare' incorporates:
     *  Constant: '<S551>/Constant'
     */
    DR18E_Testpult_B.Compare_kz = (DR18E_Testpult_B.SFunction1_o1_mm >=
      DR18E_Testpult_P.CompareToConstant_const_f);

    /* RelationalOperator: '<S552>/Compare' incorporates:
     *  Constant: '<S552>/Constant'
     */
    DR18E_Testpult_B.Compare_p = (DR18E_Testpult_B.SFunction1_o2_o3 <=
      DR18E_Testpult_P.CompareToConstant1_const_i);

    /* Logic: '<S546>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_g = (DR18E_Testpult_B.Compare_kz &&
      DR18E_Testpult_B.Compare_p);

    /* RelationalOperator: '<S553>/Compare' incorporates:
     *  Constant: '<S553>/Constant'
     */
    DR18E_Testpult_B.Compare_pz = (DR18E_Testpult_B.SFunction1_o1_mm <=
      DR18E_Testpult_P.CompareToConstant2_const);

    /* RelationalOperator: '<S554>/Compare' incorporates:
     *  Constant: '<S554>/Constant'
     */
    DR18E_Testpult_B.Compare_p4 = (DR18E_Testpult_B.SFunction1_o2_o3 >=
      DR18E_Testpult_P.CompareToConstant3_const);

    /* Logic: '<S546>/Logical Operator1' */
    DR18E_Testpult_B.LogicalOperator1 = (DR18E_Testpult_B.Compare_pz &&
      DR18E_Testpult_B.Compare_p4);

    /* MinMax: '<S546>/MinMax' */
    u0 = DR18E_Testpult_B.SFunction1_o1_mm;
    u2 = DR18E_Testpult_B.SFunction1_o2_o3;
    if ((u0 > u2) || rtIsNaN(u2)) {
      u2 = u0;
    }

    DR18E_Testpult_B.MinMax_a = u2;

    /* End of MinMax: '<S546>/MinMax' */

    /* RelationalOperator: '<S555>/Compare' incorporates:
     *  Constant: '<S555>/Constant'
     */
    DR18E_Testpult_B.Compare_d = (DR18E_Testpult_B.MinMax_a >=
      DR18E_Testpult_P.CompareToConstant4_const);

    /* S-Function (rti_commonblock): '<S490>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Throttle" Id:289 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->processed) {
          DR18E_Testpult_B.SFunction1_o5_b = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->processed;
          DR18E_Testpult_B.SFunction1_o6_kr = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_oo = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Throttle_1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_hb = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Throttle_2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_ij = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Throttle_1_Status" (40|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o3_jr = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "Throttle_2_Status" (48|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o4_pw = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_b = 0.0;
      }
    }

    /* MinMax: '<S546>/MinMax1' */
    u0 = DR18E_Testpult_B.SFunction1_o1_hb;
    u2 = DR18E_Testpult_B.SFunction1_o2_ij;
    if ((u0 > u2) || rtIsNaN(u2)) {
      u2 = u0;
    }

    DR18E_Testpult_B.MinMax1_e = u2;

    /* End of MinMax: '<S546>/MinMax1' */

    /* RelationalOperator: '<S556>/Compare' incorporates:
     *  Constant: '<S556>/Constant'
     */
    DR18E_Testpult_B.Compare_c = (DR18E_Testpult_B.MinMax1_e >=
      DR18E_Testpult_P.CompareToConstant5_const);

    /* Logic: '<S546>/Logical Operator3' */
    DR18E_Testpult_B.LogicalOperator3 = (DR18E_Testpult_B.Compare_d &&
      DR18E_Testpult_B.Compare_c);

    /* RelationalOperator: '<S558>/Compare' incorporates:
     *  Constant: '<S558>/Constant'
     */
    DR18E_Testpult_B.Compare_m = (DR18E_Testpult_B.MinMax1_e <
      DR18E_Testpult_P.CompareToConstant7_const);

    /* Memory: '<S560>/Memory' */
    DR18E_Testpult_B.Memory_ee = DR18E_Testpult_DW.Memory_PreviousInput_op;

    /* CombinatorialLogic: '<S560>/Logic' */
    zcEvent = DR18E_Testpult_B.LogicalOperator3;
    i = zcEvent;
    zcEvent = DR18E_Testpult_B.Compare_m;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    zcEvent = DR18E_Testpult_B.Memory_ee;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    DR18E_Testpult_B.Logic[0U] = DR18E_Testpult_P.Logic_table_m[(uint32_T)i];
    DR18E_Testpult_B.Logic[1U] = DR18E_Testpult_P.Logic_table_m[i + 8U];

    /* Logic: '<S546>/Logical Operator2' */
    DR18E_Testpult_B.LogicalOperator2 = (DR18E_Testpult_B.LogicalOperator_g ||
      DR18E_Testpult_B.LogicalOperator1 || DR18E_Testpult_B.Logic[0]);

    /* DataTypeConversion: '<S546>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_h = DR18E_Testpult_B.LogicalOperator2;

    /* Product: '<S559>/Product' incorporates:
     *  Constant: '<S546>/KPlaus'
     */
    DR18E_Testpult_B.Product_e = DR18E_Testpult_P.KPlaus_Value *
      DR18E_Testpult_B.DataTypeConversion_h;

    /* Memory: '<S559>/Memory' */
    DR18E_Testpult_B.Memory_p = DR18E_Testpult_DW.Memory_PreviousInput_i;

    /* Sum: '<S559>/Sum' */
    DR18E_Testpult_B.Sum_l = DR18E_Testpult_B.Product_e -
      DR18E_Testpult_B.Memory_p;

    /* Product: '<S559>/Product1' */
    DR18E_Testpult_B.Product1_c = DR18E_Testpult_B.Divide_c *
      DR18E_Testpult_B.Sum_l;

    /* Sum: '<S559>/Sum1' */
    DR18E_Testpult_B.Sum1_d = DR18E_Testpult_B.Product1_c +
      DR18E_Testpult_B.Memory_p;

    /* RelationalOperator: '<S557>/Compare' incorporates:
     *  Constant: '<S557>/Constant'
     */
    DR18E_Testpult_B.Compare_nq = (DR18E_Testpult_B.Sum1_d >=
      DR18E_Testpult_P.CompareToConstant6_const);

    /* DataTypeConversion: '<S523>/DT_BRAKEINPLAUSIBLE' */
    DR18E_Testpult_B.BRInplausible = DR18E_Testpult_B.Compare_nq;

    /* Outputs for Atomic SubSystem: '<S487>/Triggered Subsystem' */

    /* Constant: '<S84>/GasTimeout' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_b,
      DR18E_Testpult_P.GasTimeout_Value, &DR18E_Testpult_B.TriggeredSubsystem,
      &DR18E_Testpult_DW.TriggeredSubsystem, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.TriggeredSubsystem);

    /* End of Outputs for SubSystem: '<S487>/Triggered Subsystem' */

    /* DataTypeConversion: '<S523>/DT_GASTIMEOUT' */
    DR18E_Testpult_B.GasTimeout = (DR18E_Testpult_B.TriggeredSubsystem.Switch1
      != 0.0);

    /* Outputs for Atomic SubSystem: '<S488>/Triggered Subsystem' */

    /* Constant: '<S84>/BremseTimeout' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_ag,
      DR18E_Testpult_P.BremseTimeout_Value,
      &DR18E_Testpult_B.TriggeredSubsystem_i,
      &DR18E_Testpult_DW.TriggeredSubsystem_i, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.TriggeredSubsystem_i);

    /* End of Outputs for SubSystem: '<S488>/Triggered Subsystem' */

    /* DataTypeConversion: '<S523>/DT_BRAKETIMEOUT' */
    DR18E_Testpult_B.BremseTimeout =
      (DR18E_Testpult_B.TriggeredSubsystem_i.Switch1 != 0.0);

    /* DataTypeConversion: '<S523>/DT_GAS1STATUS' */
    DR18E_Testpult_B.Gas1Status = (DR18E_Testpult_B.SFunction1_o3_jr != 0.0);

    /* DataTypeConversion: '<S523>/DT_GAS2STATUS' */
    DR18E_Testpult_B.Gas2Status = (DR18E_Testpult_B.SFunction1_o4_pw != 0.0);

    /* DataTypeConversion: '<S523>/DT_BRFRONTSTATUS' */
    DR18E_Testpult_B.BremseVorneStatus = (DR18E_Testpult_B.SFunction1_o3_lop !=
      0.0);

    /* DataTypeConversion: '<S523>/DT_BRREARSTATUS' */
    DR18E_Testpult_B.BremseHintenStatus = (DR18E_Testpult_B.SFunction1_o4_ll !=
      0.0);

    /* S-Function (rti_commonblock): '<S495>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "RPM_Front" Id:291 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->processed) {
          DR18E_Testpult_B.SFunction1_o3_ik = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->processed;
          DR18E_Testpult_B.SFunction1_o4_g2 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_c = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "RPM_Left" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_b3 = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "RPM_Right" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_it = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_ik = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S496>/Triggered Subsystem' */

    /* Constant: '<S85>/DrehzahlTimeout' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_ik,
      DR18E_Testpult_P.DrehzahlTimeout_Value,
      &DR18E_Testpult_B.TriggeredSubsystem_f,
      &DR18E_Testpult_DW.TriggeredSubsystem_f, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.TriggeredSubsystem_f);

    /* End of Outputs for SubSystem: '<S496>/Triggered Subsystem' */

    /* DataTypeConversion: '<S523>/DT_DrehzahlTIMEOUT' */
    DR18E_Testpult_B.DrehzahlTimeout =
      (DR18E_Testpult_B.TriggeredSubsystem_f.Switch1 != 0.0);

    /* S-Function (rti_commonblock): '<S444>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Steering" Id:416 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->processed) {
          DR18E_Testpult_B.SFunction1_o2_ha = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->processed;
          DR18E_Testpult_B.SFunction1_o3_nx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_kt = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Steering" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_ey = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_ha = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S443>/Triggered Subsystem' */

    /* Constant: '<S82>/Gyro Timeout' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o2_ha,
      DR18E_Testpult_P.GyroTimeout_Value, &DR18E_Testpult_B.TriggeredSubsystem_k,
      &DR18E_Testpult_DW.TriggeredSubsystem_k, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.TriggeredSubsystem_k);

    /* End of Outputs for SubSystem: '<S443>/Triggered Subsystem' */

    /* DataTypeConversion: '<S523>/DT_LENKWINKELTIMEOUT' */
    DR18E_Testpult_B.LenkwinkelTimeout =
      (DR18E_Testpult_B.TriggeredSubsystem_k.Switch1 != 0.0);

    /* RelationalOperator: '<S537>/Compare' incorporates:
     *  Constant: '<S537>/Constant'
     */
    DR18E_Testpult_B.Compare_dh = (DR18E_Testpult_B.SFunction1_o1_ae >=
      DR18E_Testpult_P.CompareToConstant_const_k);

    /* Logic: '<S523>/Logical Operator1' incorporates:
     *  Constant: '<S523>/Constant10'
     *  Constant: '<S523>/Constant11'
     *  Constant: '<S523>/Constant12'
     *  Constant: '<S523>/Constant4'
     *  Constant: '<S523>/Constant5'
     *  Constant: '<S523>/Constant6'
     *  Constant: '<S523>/Constant7'
     *  Constant: '<S523>/Constant8'
     *  Constant: '<S523>/Constant9'
     */
    tmpForInput_0[0] = DR18E_Testpult_B.A_BSPD;
    tmpForInput_0[1] = DR18E_Testpult_B.A_BRAKE_OVERTRAVEL;
    tmpForInput_0[2] = DR18E_Testpult_B.A_NOT_COCKPIT;
    tmpForInput_0[3] = DR18E_Testpult_B.A_NOT_LINKS;
    tmpForInput_0[4] = DR18E_Testpult_B.A_NOT_RECHTS;
    tmpForInput_0[5] = DR18E_Testpult_B.Logic_f[0];
    tmpForInput_0[6] = DR18E_Testpult_B.Logic_fh[0];
    tmpForInput_0[7] = DR18E_Testpult_B.A_HVD;
    tmpForInput_0[8] = DR18E_Testpult_B.BRInplausible;
    tmpForInput_0[9] = DR18E_Testpult_B.GasTimeout;
    tmpForInput_0[10] = DR18E_Testpult_B.BremseTimeout;
    tmpForInput_0[11] = DR18E_Testpult_B.Gas1Status;
    tmpForInput_0[12] = DR18E_Testpult_B.Gas2Status;
    tmpForInput_0[13] = DR18E_Testpult_B.BremseVorneStatus;
    tmpForInput_0[14] = DR18E_Testpult_B.BremseHintenStatus;
    tmpForInput_0[15] = DR18E_Testpult_B.DrehzahlTimeout;
    tmpForInput_0[16] = DR18E_Testpult_B.LenkwinkelTimeout;
    tmpForInput_0[17] = DR18E_Testpult_B.Compare_dh;
    tmpForInput_0[18] = DR18E_Testpult_P.Constant4_Value_j;
    tmpForInput_0[19] = DR18E_Testpult_P.Constant5_Value;
    tmpForInput_0[20] = DR18E_Testpult_P.Constant6_Value;
    tmpForInput_0[21] = DR18E_Testpult_P.Constant7_Value;
    tmpForInput_0[22] = DR18E_Testpult_P.Constant8_Value;
    tmpForInput_0[23] = DR18E_Testpult_P.Constant9_Value;
    tmpForInput_0[24] = DR18E_Testpult_P.Constant10_Value;
    tmpForInput_0[25] = DR18E_Testpult_P.Constant11_Value;
    tmpForInput_0[26] = DR18E_Testpult_P.Constant12_Value;
    zcEvent = tmpForInput_0[0];
    for (i = 0; i < 26; i++) {
      zcEvent = (zcEvent || tmpForInput_0[i + 1]);
    }

    DR18E_Testpult_B.LogicalOperator1_m = zcEvent;

    /* End of Logic: '<S523>/Logical Operator1' */

    /* Logic: '<S617>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_gt = true;

    /* Gain: '<S530>/Gain' */
    DR18E_Testpult_B.Gain_m = DR18E_Testpult_P.Gain_Gain_lc *
      DR18E_Testpult_B.Sum1_ps;

    /* Fcn: '<S530>/Wheelslip Calculation Left' */
    DR18E_Testpult_B.WheelslipCalculationLeft =
      -(DR18E_Testpult_B.SFunction1_o1_b3 - DR18E_Testpult_B.Gain_m) / (fabs
      (DR18E_Testpult_B.Gain_m) + 0.1);

    /* Saturate: '<S530>/Saturation' */
    u0 = DR18E_Testpult_B.WheelslipCalculationLeft;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_p;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_h;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_p = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_p = u1;
    } else {
      DR18E_Testpult_B.Saturation_p = u0;
    }

    /* End of Saturate: '<S530>/Saturation' */

    /* Relay: '<S576>/Relay' */
    if (DR18E_Testpult_B.Saturation_p >= DR18E_Testpult_P.Relay_OnVal) {
      DR18E_Testpult_DW.Relay_Mode = true;
    } else {
      if (DR18E_Testpult_B.Saturation_p <= DR18E_Testpult_P.Relay_OffVal) {
        DR18E_Testpult_DW.Relay_Mode = false;
      }
    }

    if (DR18E_Testpult_DW.Relay_Mode) {
      DR18E_Testpult_B.Relay = DR18E_Testpult_P.Relay_YOn;
    } else {
      DR18E_Testpult_B.Relay = DR18E_Testpult_P.Relay_YOff;
    }

    /* End of Relay: '<S576>/Relay' */
  }

  /* DataTypeConversion: '<S617>/Data Type Conversion' */
  DR18E_Testpult_B.DataTypeConversion_h2 = DR18E_Testpult_B.LogicalOperator_gt;

  /* Derivative: '<S576>/Derivative' */
  if ((DR18E_Testpult_DW.TimeStampA >= DR18E_Testpult_M->Timing.t[0]) &&
      (DR18E_Testpult_DW.TimeStampB >= DR18E_Testpult_M->Timing.t[0])) {
    DR18E_Testpult_B.Derivative = 0.0;
  } else {
    u2 = DR18E_Testpult_DW.TimeStampA;
    lastU = &DR18E_Testpult_DW.LastUAtTimeA;
    if (DR18E_Testpult_DW.TimeStampA < DR18E_Testpult_DW.TimeStampB) {
      if (DR18E_Testpult_DW.TimeStampB < DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB;
      }
    } else {
      if (DR18E_Testpult_DW.TimeStampA >= DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB;
      }
    }

    u2 = DR18E_Testpult_M->Timing.t[0] - u2;
    DR18E_Testpult_B.Derivative = (DR18E_Testpult_B.Saturation_p - *lastU) / u2;
  }

  /* End of Derivative: '<S576>/Derivative' */

  /* RelationalOperator: '<S577>/Compare' incorporates:
   *  Constant: '<S577>/Constant'
   */
  DR18E_Testpult_B.Compare = (uint8_T)(DR18E_Testpult_B.Derivative >
    DR18E_Testpult_P.CompareToConstant_const_a);

  /* Sum: '<S576>/Add' */
  DR18E_Testpult_B.Add = DR18E_Testpult_B.Relay + (real_T)
    DR18E_Testpult_B.Compare;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Delay: '<S576>/Delay' */
    DR18E_Testpult_B.Delay = DR18E_Testpult_DW.Delay_DSTATE;

    /* Fcn: '<S576>/Fcn' */
    DR18E_Testpult_B.Fcn = (DR18E_Testpult_B.Saturation_p > 0.05);

    /* DataTypeConversion: '<S576>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bo = (DR18E_Testpult_B.Fcn != 0.0);

    /* SampleTimeMath: '<S633>/Weighted Sample Time'
     *
     * About '<S633>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_hg =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_f;

    /* Product: '<S633>/Divide1' incorporates:
     *  Constant: '<S626>/TFilterGas1'
     */
    DR18E_Testpult_B.Divide1_p0 = DR18E_Testpult_P.TFilterGas1_Value_f /
      DR18E_Testpult_B.WeightedSampleTime_hg;

    /* Sum: '<S633>/Sum' incorporates:
     *  Constant: '<S633>/Constant2'
     */
    DR18E_Testpult_B.Sum_bz = DR18E_Testpult_B.Divide1_p0 +
      DR18E_Testpult_P.Constant2_Value_f;

    /* Product: '<S633>/Divide' incorporates:
     *  Constant: '<S633>/Constant'
     */
    DR18E_Testpult_B.Divide_n = DR18E_Testpult_P.Constant_Value_nb /
      DR18E_Testpult_B.Sum_bz;

    /* Saturate: '<S626>/Saturation' */
    u0 = DR18E_Testpult_B.SFunction1_o1_hb;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_d;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_o1;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_g = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_g = u1;
    } else {
      DR18E_Testpult_B.Saturation_g = u0;
    }

    /* End of Saturate: '<S626>/Saturation' */

    /* Product: '<S630>/Product' incorporates:
     *  Constant: '<S626>/Constant1'
     */
    DR18E_Testpult_B.Product_m = DR18E_Testpult_P.Constant1_Value_b *
      DR18E_Testpult_B.Saturation_g;

    /* Memory: '<S630>/Memory' */
    DR18E_Testpult_B.Memory_k = DR18E_Testpult_DW.Memory_PreviousInput_i0;

    /* Sum: '<S630>/Sum' */
    DR18E_Testpult_B.Sum_ls = DR18E_Testpult_B.Product_m -
      DR18E_Testpult_B.Memory_k;

    /* Product: '<S630>/Product1' */
    DR18E_Testpult_B.Product1_k = DR18E_Testpult_B.Divide_n *
      DR18E_Testpult_B.Sum_ls;

    /* Sum: '<S630>/Sum1' */
    DR18E_Testpult_B.Sum1_b = DR18E_Testpult_B.Product1_k +
      DR18E_Testpult_B.Memory_k;

    /* SampleTimeMath: '<S634>/Weighted Sample Time'
     *
     * About '<S634>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_ap =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_m;

    /* Product: '<S634>/Divide1' incorporates:
     *  Constant: '<S626>/TFilterGas2'
     */
    DR18E_Testpult_B.Divide1_n = DR18E_Testpult_P.TFilterGas2_Value /
      DR18E_Testpult_B.WeightedSampleTime_ap;

    /* Sum: '<S634>/Sum' incorporates:
     *  Constant: '<S634>/Constant2'
     */
    DR18E_Testpult_B.Sum_nv = DR18E_Testpult_B.Divide1_n +
      DR18E_Testpult_P.Constant2_Value_ly;

    /* Product: '<S634>/Divide' incorporates:
     *  Constant: '<S634>/Constant'
     */
    DR18E_Testpult_B.Divide_m = DR18E_Testpult_P.Constant_Value_cr /
      DR18E_Testpult_B.Sum_nv;

    /* Saturate: '<S626>/Saturation1' */
    u0 = DR18E_Testpult_B.SFunction1_o2_ij;
    u1 = DR18E_Testpult_P.Saturation1_LowerSat_a;
    u2 = DR18E_Testpult_P.Saturation1_UpperSat_g;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation1_n = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation1_n = u1;
    } else {
      DR18E_Testpult_B.Saturation1_n = u0;
    }

    /* End of Saturate: '<S626>/Saturation1' */

    /* Product: '<S631>/Product' incorporates:
     *  Constant: '<S626>/Constant2'
     */
    DR18E_Testpult_B.Product_d = DR18E_Testpult_P.Constant2_Value_a *
      DR18E_Testpult_B.Saturation1_n;

    /* Memory: '<S631>/Memory' */
    DR18E_Testpult_B.Memory_ky = DR18E_Testpult_DW.Memory_PreviousInput_o;

    /* Sum: '<S631>/Sum' */
    DR18E_Testpult_B.Sum_fn = DR18E_Testpult_B.Product_d -
      DR18E_Testpult_B.Memory_ky;

    /* Product: '<S631>/Product1' */
    DR18E_Testpult_B.Product1_i = DR18E_Testpult_B.Divide_m *
      DR18E_Testpult_B.Sum_fn;

    /* Sum: '<S631>/Sum1' */
    DR18E_Testpult_B.Sum1_bz = DR18E_Testpult_B.Product1_i +
      DR18E_Testpult_B.Memory_ky;

    /* Sum: '<S626>/Sum' */
    DR18E_Testpult_B.Sum_g = DR18E_Testpult_B.Sum1_b - DR18E_Testpult_B.Sum1_bz;

    /* Abs: '<S626>/Abs1' */
    DR18E_Testpult_B.PlausAbs = fabs(DR18E_Testpult_B.Sum_g);

    /* RelationalOperator: '<S632>/Compare' incorporates:
     *  Constant: '<S632>/Constant'
     */
    DR18E_Testpult_B.Compare_k3 = (DR18E_Testpult_B.PlausAbs >
      DR18E_Testpult_P.RuleT1039_const);

    /* Switch: '<S626>/Switch' incorporates:
     *  Constant: '<S626>/Constant'
     */
    if (DR18E_Testpult_B.Compare_k3) {
      DR18E_Testpult_B.Switch_p = DR18E_Testpult_P.Constant_Value_l;
    } else {
      /* Sum: '<S626>/Sum1' */
      DR18E_Testpult_B.Sum1_lx = DR18E_Testpult_B.Saturation_g +
        DR18E_Testpult_B.Saturation1_n;

      /* Product: '<S626>/Divide' incorporates:
       *  Constant: '<S626>/Constant3'
       */
      DR18E_Testpult_B.ThrottleMean = DR18E_Testpult_B.Sum1_lx /
        DR18E_Testpult_P.Constant3_Value;

      /* Gain: '<S626>/Gain' */
      DR18E_Testpult_B.Gain_hg = DR18E_Testpult_P.Gain_Gain_h *
        DR18E_Testpult_B.ThrottleMean;
      DR18E_Testpult_B.Switch_p = DR18E_Testpult_B.Gain_hg;
    }

    /* End of Switch: '<S626>/Switch' */

    /* Saturate: '<S528>/Saturation 0-1' */
    u0 = DR18E_Testpult_B.Switch_p;
    u1 = DR18E_Testpult_P.Saturation01_LowerSat;
    u2 = DR18E_Testpult_P.Saturation01_UpperSat;
    if (u0 > u2) {
      DR18E_Testpult_B.Gas_01 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Gas_01 = u1;
    } else {
      DR18E_Testpult_B.Gas_01 = u0;
    }

    /* End of Saturate: '<S528>/Saturation 0-1' */

    /* RelationalOperator: '<S576>/Relational Operator' */
    DR18E_Testpult_B.RelationalOperator = (DR18E_Testpult_B.Gas_01 <=
      DR18E_Testpult_B.Delay);

    /* Memory: '<S578>/Memory' */
    DR18E_Testpult_B.Memory_ba = DR18E_Testpult_DW.Memory_PreviousInput_a;

    /* CombinatorialLogic: '<S578>/Logic' */
    zcEvent = DR18E_Testpult_B.DataTypeConversion_bo;
    i = zcEvent;
    zcEvent = DR18E_Testpult_B.RelationalOperator;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    zcEvent = DR18E_Testpult_B.Memory_ba;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    DR18E_Testpult_B.Logic_j[0U] = DR18E_Testpult_P.Logic_table_p[(uint32_T)i];
    DR18E_Testpult_B.Logic_j[1U] = DR18E_Testpult_P.Logic_table_p[i + 8U];

    /* Switch: '<S576>/Switch' */
    if (DR18E_Testpult_B.Logic_j[0]) {
      /* Fcn: '<S576>/Fcn1' */
      DR18E_Testpult_B.Fcn1_b = DR18E_Testpult_B.Delay + 0.005;

      /* Saturate: '<S576>/Saturation1' */
      u0 = DR18E_Testpult_B.Fcn1_b;
      u1 = DR18E_Testpult_P.Saturation1_LowerSat;
      u2 = DR18E_Testpult_P.Saturation1_UpperSat;
      if (u0 > u2) {
        DR18E_Testpult_B.Saturation1_b = u2;
      } else if (u0 < u1) {
        DR18E_Testpult_B.Saturation1_b = u1;
      } else {
        DR18E_Testpult_B.Saturation1_b = u0;
      }

      /* End of Saturate: '<S576>/Saturation1' */
      DR18E_Testpult_B.Switch_l = DR18E_Testpult_B.Saturation1_b;
    } else {
      DR18E_Testpult_B.Switch_l = DR18E_Testpult_B.Gas_01;
    }

    /* End of Switch: '<S576>/Switch' */

    /* Fcn: '<S576>/Fcn2' */
    DR18E_Testpult_B.Fcn2 = DR18E_Testpult_B.Delay - 5.0e-5;

    /* Saturate: '<S576>/Saturation' */
    u0 = DR18E_Testpult_B.Fcn2;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_ji;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_p;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_e = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_e = u1;
    } else {
      DR18E_Testpult_B.Saturation_e = u0;
    }

    /* End of Saturate: '<S576>/Saturation' */
  }

  /* MultiPortSwitch: '<S576>/Multiport Switch' */
  switch ((int32_T)DR18E_Testpult_B.Add) {
   case 0:
    DR18E_Testpult_B.MultiportSwitch = DR18E_Testpult_B.Switch_l;
    break;

   case 1:
    DR18E_Testpult_B.MultiportSwitch = DR18E_Testpult_B.Delay;
    break;

   default:
    DR18E_Testpult_B.MultiportSwitch = DR18E_Testpult_B.Saturation_e;
    break;
  }

  /* End of MultiPortSwitch: '<S576>/Multiport Switch' */

  /* Switch: '<S566>/Switch' incorporates:
   *  Constant: '<S526>/Constant2'
   */
  if (DR18E_Testpult_P.Constant2_Value_gz > DR18E_Testpult_P.Switch_Threshold) {
    DR18E_Testpult_B.Switch_e = DR18E_Testpult_B.MultiportSwitch;
  } else {
    DR18E_Testpult_B.Switch_e = DR18E_Testpult_B.Gas_01;
  }

  /* End of Switch: '<S566>/Switch' */

  /* Product: '<S526>/Product' incorporates:
   *  Constant: '<S526>/Constant1'
   */
  DR18E_Testpult_B.Product_ec = DR18E_Testpult_P.Constant1_Value_c *
    DR18E_Testpult_B.Switch_e;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S586>/Gravity' incorporates:
     *  Constant: '<S586>/muRoad'
     */
    DR18E_Testpult_B.Gravity = DR18E_Testpult_P.Gravity_Gain *
      DR18E_Testpult_P.muRoad_Value;

    /* Gain: '<S586>/Override' */
    DR18E_Testpult_B.Override = DR18E_Testpult_P.Override_Gain *
      DR18E_Testpult_B.Gravity;

    /* Sum: '<S530>/Sum' */
    DR18E_Testpult_B.Sum_c = DR18E_Testpult_B.SFunction1_o1_b3 +
      DR18E_Testpult_B.SFunction1_o2_it;

    /* Gain: '<S530>/v = omega*r' */
    DR18E_Testpult_B.vomegar = DR18E_Testpult_P.vomegar_Gain *
      DR18E_Testpult_B.Sum_c;

    /* Gain: '<S530>/m//s -> km//h' */
    DR18E_Testpult_B.mskmh = DR18E_Testpult_P.mskmh_Gain *
      DR18E_Testpult_B.vomegar;

    /* Gain: '<S568>/kmh-ms' */
    DR18E_Testpult_B.kmhms = DR18E_Testpult_P.kmhms_Gain *
      DR18E_Testpult_B.mskmh;

    /* Switch: '<S586>/Switch' incorporates:
     *  Constant: '<S586>/Constant'
     */
    if (DR18E_Testpult_B.kmhms > DR18E_Testpult_P.Switch_Threshold_c) {
      DR18E_Testpult_B.Switch_pe = DR18E_Testpult_B.kmhms;
    } else {
      DR18E_Testpult_B.Switch_pe = DR18E_Testpult_P.Constant_Value_i;
    }

    /* End of Switch: '<S586>/Switch' */

    /* Abs: '<S586>/Abs' */
    DR18E_Testpult_B.Abs = fabs(DR18E_Testpult_B.Switch_pe);

    /* Product: '<S586>/Divide' */
    DR18E_Testpult_B.Divide_d = DR18E_Testpult_B.Override / DR18E_Testpult_B.Abs;

    /* S-Function (rti_commonblock): '<S283>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Yaw_Rate" Id:307 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->processed) {
          DR18E_Testpult_B.SFunction1_o3_fx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->processed;
          DR18E_Testpult_B.SFunction1_o4_a1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->timestamp;
          DR18E_Testpult_B.SFunction1_o5_f1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Yaw_Z" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_ln = 0.00875 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "Yaw_Z_Error" (16|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o2_az = ((real_T) CAN_Sgn.SignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o3_fx = 0.0;
      }
    }

    /* Gain: '<S80>/Bit-->deg//s' */
    DR18E_Testpult_B.Bitdegs = DR18E_Testpult_P.Bitdegs_Gain *
      DR18E_Testpult_B.SFunction1_o1_ln;

    /* Sum: '<S80>/Sum' incorporates:
     *  Constant: '<S80>/Gyro Zero Offset'
     */
    DR18E_Testpult_B.Yaw_Z = DR18E_Testpult_B.Bitdegs -
      DR18E_Testpult_P.GyroZeroOffset_Value;

    /* Gain: '<S568>/deg-rad' */
    DR18E_Testpult_B.degrad = DR18E_Testpult_P.degrad_Gain *
      DR18E_Testpult_B.Yaw_Z;

    /* Abs: '<S586>/Abs2' */
    DR18E_Testpult_B.Abs2 = fabs(DR18E_Testpult_B.degrad);

    /* Sum: '<S586>/Subtract' */
    DR18E_Testpult_B.Subtract = DR18E_Testpult_B.Divide_d -
      DR18E_Testpult_B.Abs2;

    /* Gain: '<S586>/Gain' */
    DR18E_Testpult_B.Gain_j = DR18E_Testpult_P.Gain_Gain_b * 0.0;

    /* Lookup: '<S586>/Lookup Table' */
    DR18E_Testpult_B.LookupTable = rt_Lookup(DR18E_Testpult_P.LookupTable_XData,
      13, DR18E_Testpult_B.Gain_j, DR18E_Testpult_P.LookupTable_YData);

    /* Product: '<S586>/Product' */
    DR18E_Testpult_B.Product_lf = DR18E_Testpult_B.Subtract *
      DR18E_Testpult_B.LookupTable;

    /* Gain: '<S586>/Gain1' */
    DR18E_Testpult_B.Torque_AC_OLD_RL = DR18E_Testpult_P.Gain1_Gain_j5 *
      DR18E_Testpult_B.Product_lf;

    /* Gain: '<S568>/Lenkwinkel-->Radeinschlagwinkel' */
    DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel =
      DR18E_Testpult_P.LenkwinkelRadeinschlagwinkel_Ga *
      DR18E_Testpult_B.SFunction1_o1_ey;

    /* Gain: '<S568>/deg-rad1' */
    DR18E_Testpult_B.degrad1 = DR18E_Testpult_P.degrad1_Gain *
      DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel;

    /* Product: '<S587>/Product' */
    DR18E_Testpult_B.Product_i = DR18E_Testpult_B.degrad1 *
      DR18E_Testpult_B.kmhms;

    /* Math: '<S587>/sqr2' */
    DR18E_Testpult_B.sqr2 = DR18E_Testpult_B.kmhms * DR18E_Testpult_B.kmhms;

    /* Product: '<S587>/Divide2' incorporates:
     *  Constant: '<S587>/Eigenlenkgradient'
     *  Constant: '<S587>/Radstand'
     */
    DR18E_Testpult_B.Divide2 = DR18E_Testpult_P.Radstand_Value /
      DR18E_Testpult_P.Eigenlenkgradient_Value;

    /* Product: '<S587>/Divide1' */
    DR18E_Testpult_B.Divide1_l = DR18E_Testpult_B.sqr2 /
      DR18E_Testpult_B.Divide2;

    /* Sum: '<S587>/Sum' incorporates:
     *  Constant: '<S587>/Faktor'
     */
    DR18E_Testpult_B.Sum_n5 = DR18E_Testpult_B.Divide1_l +
      DR18E_Testpult_P.Faktor_Value;

    /* Product: '<S587>/Product1' incorporates:
     *  Constant: '<S587>/Radstand'
     */
    DR18E_Testpult_B.Product1_b = DR18E_Testpult_B.Sum_n5 *
      DR18E_Testpult_P.Radstand_Value;

    /* Product: '<S587>/Divide' */
    DR18E_Testpult_B.Divide_e = DR18E_Testpult_B.Product_i /
      DR18E_Testpult_B.Product1_b;

    /* Gain: '<S568>/Gravity2' */
    DR18E_Testpult_B.Gravity2 = DR18E_Testpult_P.Gravity2_Gain *
      DR18E_Testpult_B.Divide_e;
  }

  /* TransferFcn: '<S582>/em*GM' */
  DR18E_Testpult_B.emGM = 0.0;
  DR18E_Testpult_B.emGM += DR18E_Testpult_P.emGM_C *
    DR18E_Testpult_X.emGM_CSTATE;

  /* TransferFcn: '<S582>/em*GM*X²' */
  DR18E_Testpult_B.emGMX = 0.0;
  DR18E_Testpult_B.emGMX += DR18E_Testpult_P.emGMX_C *
    DR18E_Testpult_X.emGMX_CSTATE;

  /* TransferFcn: '<S584>/ModelReference4' */
  DR18E_Testpult_B.ModelReference4 = 0.0;
  DR18E_Testpult_B.ModelReference4 += DR18E_Testpult_P.ModelReference4_C *
    DR18E_Testpult_X.ModelReference4_CSTATE;

  /* TransferFcn: '<S584>/ModelReference2' */
  DR18E_Testpult_B.ModelReference2 = 0.0;
  DR18E_Testpult_B.ModelReference2 += DR18E_Testpult_P.ModelReference2_C *
    DR18E_Testpult_X.ModelReference2_CSTATE;

  /* TransferFcn: '<S583>/ModelReference4' */
  DR18E_Testpult_B.ModelReference4_n = 0.0;
  DR18E_Testpult_B.ModelReference4_n += DR18E_Testpult_P.ModelReference4_C_e *
    DR18E_Testpult_X.ModelReference4_CSTATE_b;

  /* TransferFcn: '<S583>/ModelReference2' */
  DR18E_Testpult_B.ModelReference2_e = 0.0;
  DR18E_Testpult_B.ModelReference2_e += DR18E_Testpult_P.ModelReference2_C_l *
    DR18E_Testpult_X.ModelReference2_CSTATE_o;

  /* Derivative: '<S583>/Derivative' */
  if ((DR18E_Testpult_DW.TimeStampA_o >= DR18E_Testpult_M->Timing.t[0]) &&
      (DR18E_Testpult_DW.TimeStampB_h >= DR18E_Testpult_M->Timing.t[0])) {
    DR18E_Testpult_B.Derivative_e = 0.0;
  } else {
    u2 = DR18E_Testpult_DW.TimeStampA_o;
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_m;
    if (DR18E_Testpult_DW.TimeStampA_o < DR18E_Testpult_DW.TimeStampB_h) {
      if (DR18E_Testpult_DW.TimeStampB_h < DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_h;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_h;
      }
    } else {
      if (DR18E_Testpult_DW.TimeStampA_o >= DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_h;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_h;
      }
    }

    u2 = DR18E_Testpult_M->Timing.t[0] - u2;
    DR18E_Testpult_B.Derivative_e = (DR18E_Testpult_B.degrad - *lastU) / u2;
  }

  /* End of Derivative: '<S583>/Derivative' */

  /* TransferFcn: '<S583>/ModelReference1' */
  DR18E_Testpult_B.ModelReference1 = 0.0;
  DR18E_Testpult_B.ModelReference1 += DR18E_Testpult_P.ModelReference1_C *
    DR18E_Testpult_X.ModelReference1_CSTATE;

  /* RateTransition: '<S591>/Rate Transition1' incorporates:
   *  Constant: '<S80>/Gyro Timeout'
   */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition1 =
        DR18E_Testpult_DW.RateTransition1_Buffer0;
    }

    /* Saturate: '<S585>/Saturation' */
    u0 = DR18E_Testpult_B.RateTransition1;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_a;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_ol;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_o = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_o = u1;
    } else {
      DR18E_Testpult_B.Saturation_o = u0;
    }

    /* End of Saturate: '<S585>/Saturation' */

    /* Gain: '<S588>/Gain links' */
    DR18E_Testpult_B.Gainlinks = DR18E_Testpult_P.Gainlinks_Gain *
      DR18E_Testpult_B.Saturation_o;

    /* Saturate: '<S585>/Saturation1' */
    u0 = DR18E_Testpult_B.Gainlinks;
    u1 = DR18E_Testpult_P.Saturation1_LowerSat_ar;
    u2 = DR18E_Testpult_P.Saturation1_UpperSat_o;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation1_p = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation1_p = u1;
    } else {
      DR18E_Testpult_B.Saturation1_p = u0;
    }

    /* End of Saturate: '<S585>/Saturation1' */

    /* Outputs for Atomic SubSystem: '<S282>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_fx,
      DR18E_Testpult_P.GyroTimeout_Value_e,
      &DR18E_Testpult_B.TriggeredSubsystem_a,
      &DR18E_Testpult_DW.TriggeredSubsystem_a, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.TriggeredSubsystem_a);

    /* End of Outputs for SubSystem: '<S282>/Triggered Subsystem' */

    /* Logic: '<S568>/Safety TV off' incorporates:
     *  Constant: '<S80>/Gyro Timeout'
     */
    DR18E_Testpult_B.SafetyTVoff =
      !((DR18E_Testpult_B.TriggeredSubsystem_k.Switch1 != 0.0) ||
        (DR18E_Testpult_B.TriggeredSubsystem_a.Switch1 != 0.0));

    /* Logic: '<S568>/Logical Operator1' incorporates:
     *  Constant: '<S568>/Constant4'
     */
    DR18E_Testpult_B.LogicalOperator1_a = ((DR18E_Testpult_P.Constant4_Value !=
      0.0) && DR18E_Testpult_B.SafetyTVoff);
  }

  /* End of RateTransition: '<S591>/Rate Transition1' */

  /* Switch: '<S568>/Switch' incorporates:
   *  Constant: '<S568>/Constant1'
   */
  if (DR18E_Testpult_B.LogicalOperator1_a) {
    /* MultiPortSwitch: '<S568>/Multiport Switch TV' incorporates:
     *  Constant: '<S568>/Constant2'
     *  Constant: '<S568>/Constant3'
     */
    switch ((int32_T)DR18E_Testpult_P.Constant2_Value_m) {
     case 1:
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_B.Torque_AC_OLD_RL;
      break;

     case 2:
      /* Product: '<S582>/Product2' */
      DR18E_Testpult_B.Product2_er = DR18E_Testpult_B.emGMX *
        DR18E_Testpult_B.degrad;

      /* Product: '<S582>/Product' */
      DR18E_Testpult_B.Product_k = DR18E_Testpult_B.Gravity2 *
        DR18E_Testpult_B.emGM;

      /* Sum: '<S582>/Sum1' */
      DR18E_Testpult_B.Sum1_ml = DR18E_Testpult_B.Product_k -
        DR18E_Testpult_B.Product2_er;
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_B.Sum1_ml;
      break;

     case 3:
      /* Product: '<S584>/Product4' */
      DR18E_Testpult_B.Product4_g = DR18E_Testpult_B.degrad *
        DR18E_Testpult_B.ModelReference2;

      /* Product: '<S584>/Product' */
      DR18E_Testpult_B.Product_ba = DR18E_Testpult_B.Gravity2 *
        DR18E_Testpult_B.ModelReference4;

      /* Sum: '<S584>/Sum1' */
      DR18E_Testpult_B.Sum1_p5 = DR18E_Testpult_B.Product_ba -
        DR18E_Testpult_B.Product4_g;
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_B.Sum1_p5;
      break;

     case 4:
      /* Product: '<S583>/Product1' */
      DR18E_Testpult_B.Product1_gs = DR18E_Testpult_B.Derivative_e *
        DR18E_Testpult_B.ModelReference1;

      /* Product: '<S583>/Product4' */
      DR18E_Testpult_B.Product4_n = DR18E_Testpult_B.degrad *
        DR18E_Testpult_B.ModelReference2_e;

      /* Product: '<S583>/Product' */
      DR18E_Testpult_B.Product_ey = DR18E_Testpult_B.Gravity2 *
        DR18E_Testpult_B.ModelReference4_n;

      /* Sum: '<S583>/Sum1' */
      DR18E_Testpult_B.Sum1_j = DR18E_Testpult_B.Product_ey -
        DR18E_Testpult_B.Product4_n;

      /* Sum: '<S583>/Sum3' */
      DR18E_Testpult_B.Sum3_a = DR18E_Testpult_B.Sum1_j -
        DR18E_Testpult_B.Product1_gs;
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_B.Sum3_a;
      break;

     case 5:
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_B.Saturation1_p;
      break;

     default:
      DR18E_Testpult_B.DeltaMNm_f = DR18E_Testpult_P.Constant3_Value_p;
      break;
    }

    /* End of MultiPortSwitch: '<S568>/Multiport Switch TV' */
    DR18E_Testpult_B.Switch_b = DR18E_Testpult_B.DeltaMNm_f;
  } else {
    DR18E_Testpult_B.Switch_b = DR18E_Testpult_P.Constant1_Value_a;
  }

  /* End of Switch: '<S568>/Switch' */

  /* Gain: '<S526>/Gain2' */
  DR18E_Testpult_B.Torque_RL = DR18E_Testpult_P.Gain2_Gain_d *
    DR18E_Testpult_B.Switch_b;

  /* Saturate: '<S526>/Saturation' */
  u0 = DR18E_Testpult_B.Torque_RL;
  u1 = DR18E_Testpult_P.Saturation_LowerSat_e;
  u2 = DR18E_Testpult_P.Saturation_UpperSat_j;
  if (u0 > u2) {
    DR18E_Testpult_B.Saturation_h = u2;
  } else if (u0 < u1) {
    DR18E_Testpult_B.Saturation_h = u1;
  } else {
    DR18E_Testpult_B.Saturation_h = u0;
  }

  /* End of Saturate: '<S526>/Saturation' */

  /* Sum: '<S526>/Add' */
  DR18E_Testpult_B.Add_i = DR18E_Testpult_B.Product_ec +
    DR18E_Testpult_B.Saturation_h;

  /* Saturate: '<S526>/Saturation1' */
  u0 = DR18E_Testpult_B.Add_i;
  u1 = DR18E_Testpult_P.Saturation1_LowerSat_n;
  u2 = DR18E_Testpult_P.Saturation1_UpperSat_f;
  if (u0 > u2) {
    DR18E_Testpult_B.Saturation1_h = u2;
  } else if (u0 < u1) {
    DR18E_Testpult_B.Saturation1_h = u1;
  } else {
    DR18E_Testpult_B.Saturation1_h = u0;
  }

  /* End of Saturate: '<S526>/Saturation1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S530>/Gain1' */
    DR18E_Testpult_B.Gain1_o = DR18E_Testpult_P.Gain1_Gain_m *
      DR18E_Testpult_B.Sum1_l3;

    /* Fcn: '<S530>/Wheelslip Calulation Right' */
    DR18E_Testpult_B.WheelslipCalulationRight =
      -(DR18E_Testpult_B.SFunction1_o2_it - DR18E_Testpult_B.Gain1_o) / (fabs
      (DR18E_Testpult_B.Gain1_o) + 0.1);

    /* Saturate: '<S530>/Saturation1' */
    u0 = DR18E_Testpult_B.WheelslipCalulationRight;
    u1 = DR18E_Testpult_P.Saturation1_LowerSat_e;
    u2 = DR18E_Testpult_P.Saturation1_UpperSat_b4;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation1_hx = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation1_hx = u1;
    } else {
      DR18E_Testpult_B.Saturation1_hx = u0;
    }

    /* End of Saturate: '<S530>/Saturation1' */

    /* Relay: '<S579>/Relay' */
    if (DR18E_Testpult_B.Saturation1_hx >= DR18E_Testpult_P.Relay_OnVal_c) {
      DR18E_Testpult_DW.Relay_Mode_f = true;
    } else {
      if (DR18E_Testpult_B.Saturation1_hx <= DR18E_Testpult_P.Relay_OffVal_g) {
        DR18E_Testpult_DW.Relay_Mode_f = false;
      }
    }

    if (DR18E_Testpult_DW.Relay_Mode_f) {
      DR18E_Testpult_B.Relay_o = DR18E_Testpult_P.Relay_YOn_p;
    } else {
      DR18E_Testpult_B.Relay_o = DR18E_Testpult_P.Relay_YOff_i;
    }

    /* End of Relay: '<S579>/Relay' */
  }

  /* Derivative: '<S579>/Derivative' */
  if ((DR18E_Testpult_DW.TimeStampA_os >= DR18E_Testpult_M->Timing.t[0]) &&
      (DR18E_Testpult_DW.TimeStampB_j >= DR18E_Testpult_M->Timing.t[0])) {
    DR18E_Testpult_B.Derivative_o = 0.0;
  } else {
    u2 = DR18E_Testpult_DW.TimeStampA_os;
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_n;
    if (DR18E_Testpult_DW.TimeStampA_os < DR18E_Testpult_DW.TimeStampB_j) {
      if (DR18E_Testpult_DW.TimeStampB_j < DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_j;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_c;
      }
    } else {
      if (DR18E_Testpult_DW.TimeStampA_os >= DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_j;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_c;
      }
    }

    u2 = DR18E_Testpult_M->Timing.t[0] - u2;
    DR18E_Testpult_B.Derivative_o = (DR18E_Testpult_B.Saturation1_hx - *lastU) /
      u2;
  }

  /* End of Derivative: '<S579>/Derivative' */

  /* RelationalOperator: '<S580>/Compare' incorporates:
   *  Constant: '<S580>/Constant'
   */
  DR18E_Testpult_B.Compare_k = (uint8_T)(DR18E_Testpult_B.Derivative_o >
    DR18E_Testpult_P.CompareToConstant_const_n);

  /* Sum: '<S579>/Add' */
  DR18E_Testpult_B.Add_n = DR18E_Testpult_B.Relay_o + (real_T)
    DR18E_Testpult_B.Compare_k;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Delay: '<S579>/Delay' */
    DR18E_Testpult_B.Delay_c = DR18E_Testpult_DW.Delay_DSTATE_k;

    /* Fcn: '<S579>/Fcn' */
    DR18E_Testpult_B.Fcn_h = (DR18E_Testpult_B.Saturation1_hx > 0.05);

    /* DataTypeConversion: '<S579>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_jv = (DR18E_Testpult_B.Fcn_h != 0.0);

    /* RelationalOperator: '<S579>/Relational Operator' */
    DR18E_Testpult_B.RelationalOperator_h = (DR18E_Testpult_B.Gas_01 <=
      DR18E_Testpult_B.Delay_c);

    /* Memory: '<S581>/Memory' */
    DR18E_Testpult_B.Memory_et = DR18E_Testpult_DW.Memory_PreviousInput_aa;

    /* CombinatorialLogic: '<S581>/Logic' */
    zcEvent = DR18E_Testpult_B.DataTypeConversion_jv;
    i = zcEvent;
    zcEvent = DR18E_Testpult_B.RelationalOperator_h;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    zcEvent = DR18E_Testpult_B.Memory_et;
    i = (int32_T)(((uint32_T)i << 1) + zcEvent);
    DR18E_Testpult_B.Logic_e[0U] = DR18E_Testpult_P.Logic_table_c[(uint32_T)i];
    DR18E_Testpult_B.Logic_e[1U] = DR18E_Testpult_P.Logic_table_c[i + 8U];

    /* Switch: '<S579>/Switch' */
    if (DR18E_Testpult_B.Logic_e[0]) {
      /* Fcn: '<S579>/Fcn1' */
      DR18E_Testpult_B.Fcn1 = DR18E_Testpult_B.Delay_c + 0.005;

      /* Saturate: '<S579>/Saturation1' */
      u0 = DR18E_Testpult_B.Fcn1;
      u1 = DR18E_Testpult_P.Saturation1_LowerSat_l;
      u2 = DR18E_Testpult_P.Saturation1_UpperSat_b;
      if (u0 > u2) {
        DR18E_Testpult_B.Saturation1_e = u2;
      } else if (u0 < u1) {
        DR18E_Testpult_B.Saturation1_e = u1;
      } else {
        DR18E_Testpult_B.Saturation1_e = u0;
      }

      /* End of Saturate: '<S579>/Saturation1' */
      DR18E_Testpult_B.Switch_g = DR18E_Testpult_B.Saturation1_e;
    } else {
      DR18E_Testpult_B.Switch_g = DR18E_Testpult_B.Gas_01;
    }

    /* End of Switch: '<S579>/Switch' */

    /* Fcn: '<S579>/Fcn2' */
    DR18E_Testpult_B.Fcn2_k = DR18E_Testpult_B.Delay_c - 5.0e-5;

    /* Saturate: '<S579>/Saturation' */
    u0 = DR18E_Testpult_B.Fcn2_k;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_ax;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_m;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_c = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_c = u1;
    } else {
      DR18E_Testpult_B.Saturation_c = u0;
    }

    /* End of Saturate: '<S579>/Saturation' */
  }

  /* MultiPortSwitch: '<S579>/Multiport Switch' */
  switch ((int32_T)DR18E_Testpult_B.Add_n) {
   case 0:
    DR18E_Testpult_B.MultiportSwitch_c = DR18E_Testpult_B.Switch_g;
    break;

   case 1:
    DR18E_Testpult_B.MultiportSwitch_c = DR18E_Testpult_B.Delay_c;
    break;

   default:
    DR18E_Testpult_B.MultiportSwitch_c = DR18E_Testpult_B.Saturation_c;
    break;
  }

  /* End of MultiPortSwitch: '<S579>/Multiport Switch' */

  /* Switch: '<S567>/Switch' incorporates:
   *  Constant: '<S526>/Constant2'
   */
  if (DR18E_Testpult_P.Constant2_Value_gz > DR18E_Testpult_P.Switch_Threshold_d)
  {
    DR18E_Testpult_B.Switch_d = DR18E_Testpult_B.MultiportSwitch_c;
  } else {
    DR18E_Testpult_B.Switch_d = DR18E_Testpult_B.Gas_01;
  }

  /* End of Switch: '<S567>/Switch' */

  /* Product: '<S526>/Product1' incorporates:
   *  Constant: '<S526>/Constant1'
   */
  DR18E_Testpult_B.Product1_be = DR18E_Testpult_P.Constant1_Value_c *
    DR18E_Testpult_B.Switch_d;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S601>/Gravity' incorporates:
     *  Constant: '<S601>/muRoad'
     */
    DR18E_Testpult_B.Gravity_o = DR18E_Testpult_P.Gravity_Gain_i *
      DR18E_Testpult_P.muRoad_Value_e;

    /* Gain: '<S601>/Override' */
    DR18E_Testpult_B.Override_i = DR18E_Testpult_P.Override_Gain_i *
      DR18E_Testpult_B.Gravity_o;

    /* Gain: '<S569>/kmh-ms' */
    DR18E_Testpult_B.kmhms_e = DR18E_Testpult_P.kmhms_Gain_a *
      DR18E_Testpult_B.mskmh;

    /* Switch: '<S601>/Switch' incorporates:
     *  Constant: '<S601>/Constant'
     */
    if (DR18E_Testpult_B.kmhms_e > DR18E_Testpult_P.Switch_Threshold_i) {
      DR18E_Testpult_B.Switch_h4 = DR18E_Testpult_B.kmhms_e;
    } else {
      DR18E_Testpult_B.Switch_h4 = DR18E_Testpult_P.Constant_Value_m;
    }

    /* End of Switch: '<S601>/Switch' */

    /* Abs: '<S601>/Abs' */
    DR18E_Testpult_B.Abs_o = fabs(DR18E_Testpult_B.Switch_h4);

    /* Product: '<S601>/Divide' */
    DR18E_Testpult_B.Divide_k = DR18E_Testpult_B.Override_i /
      DR18E_Testpult_B.Abs_o;

    /* Gain: '<S569>/deg-rad' */
    DR18E_Testpult_B.degrad_f = DR18E_Testpult_P.degrad_Gain_n *
      DR18E_Testpult_B.Yaw_Z;

    /* Abs: '<S601>/Abs2' */
    DR18E_Testpult_B.Abs2_g = fabs(DR18E_Testpult_B.degrad_f);

    /* Sum: '<S601>/Subtract' */
    DR18E_Testpult_B.Subtract_d = DR18E_Testpult_B.Divide_k -
      DR18E_Testpult_B.Abs2_g;

    /* Gain: '<S601>/Gain' */
    DR18E_Testpult_B.Gain_jv = DR18E_Testpult_P.Gain_Gain_c * 0.0;

    /* Lookup: '<S601>/Lookup Table' */
    DR18E_Testpult_B.LookupTable_c = rt_Lookup
      (DR18E_Testpult_P.LookupTable_XData_m, 13, DR18E_Testpult_B.Gain_jv,
       DR18E_Testpult_P.LookupTable_YData_a);

    /* Product: '<S601>/Product' */
    DR18E_Testpult_B.Product_f = DR18E_Testpult_B.Subtract_d *
      DR18E_Testpult_B.LookupTable_c;

    /* Gain: '<S601>/Gain1' */
    DR18E_Testpult_B.Torque_AC_OLD_RL_d = DR18E_Testpult_P.Gain1_Gain_o *
      DR18E_Testpult_B.Product_f;

    /* Gain: '<S569>/Lenkwinkel-->Radeinschlagwinkel' */
    DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel_d =
      DR18E_Testpult_P.LenkwinkelRadeinschlagwinkel__j *
      DR18E_Testpult_B.SFunction1_o1_ey;

    /* Gain: '<S569>/deg-rad1' */
    DR18E_Testpult_B.degrad1_a = DR18E_Testpult_P.degrad1_Gain_c *
      DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel_d;

    /* Product: '<S602>/Product' */
    DR18E_Testpult_B.Product_mj = DR18E_Testpult_B.degrad1_a *
      DR18E_Testpult_B.kmhms_e;

    /* Math: '<S602>/sqr2' */
    DR18E_Testpult_B.sqr2_j = DR18E_Testpult_B.kmhms_e *
      DR18E_Testpult_B.kmhms_e;

    /* Product: '<S602>/Divide2' incorporates:
     *  Constant: '<S602>/Eigenlenkgradient'
     *  Constant: '<S602>/Radstand'
     */
    DR18E_Testpult_B.Divide2_k = DR18E_Testpult_P.Radstand_Value_n /
      DR18E_Testpult_P.Eigenlenkgradient_Value_m;

    /* Product: '<S602>/Divide1' */
    DR18E_Testpult_B.Divide1_da = DR18E_Testpult_B.sqr2_j /
      DR18E_Testpult_B.Divide2_k;

    /* Sum: '<S602>/Sum' incorporates:
     *  Constant: '<S602>/Faktor'
     */
    DR18E_Testpult_B.Sum_a = DR18E_Testpult_B.Divide1_da +
      DR18E_Testpult_P.Faktor_Value_n;

    /* Product: '<S602>/Product1' incorporates:
     *  Constant: '<S602>/Radstand'
     */
    DR18E_Testpult_B.Product1_gm = DR18E_Testpult_B.Sum_a *
      DR18E_Testpult_P.Radstand_Value_n;

    /* Product: '<S602>/Divide' */
    DR18E_Testpult_B.Divide_cc = DR18E_Testpult_B.Product_mj /
      DR18E_Testpult_B.Product1_gm;

    /* Gain: '<S569>/Gravity2' */
    DR18E_Testpult_B.Gravity2_p = DR18E_Testpult_P.Gravity2_Gain_e *
      DR18E_Testpult_B.Divide_cc;
  }

  /* TransferFcn: '<S597>/em*GM' */
  DR18E_Testpult_B.emGM_c = 0.0;
  DR18E_Testpult_B.emGM_c += DR18E_Testpult_P.emGM_C_i *
    DR18E_Testpult_X.emGM_CSTATE_d;

  /* TransferFcn: '<S597>/em*GM*X²' */
  DR18E_Testpult_B.emGMX_i = 0.0;
  DR18E_Testpult_B.emGMX_i += DR18E_Testpult_P.emGMX_C_m *
    DR18E_Testpult_X.emGMX_CSTATE_a;

  /* TransferFcn: '<S599>/ModelReference4' */
  DR18E_Testpult_B.ModelReference4_e = 0.0;
  DR18E_Testpult_B.ModelReference4_e += DR18E_Testpult_P.ModelReference4_C_m *
    DR18E_Testpult_X.ModelReference4_CSTATE_l;

  /* TransferFcn: '<S599>/ModelReference2' */
  DR18E_Testpult_B.ModelReference2_c = 0.0;
  DR18E_Testpult_B.ModelReference2_c += DR18E_Testpult_P.ModelReference2_C_g *
    DR18E_Testpult_X.ModelReference2_CSTATE_a;

  /* TransferFcn: '<S598>/ModelReference4' */
  DR18E_Testpult_B.ModelReference4_o = 0.0;
  DR18E_Testpult_B.ModelReference4_o += DR18E_Testpult_P.ModelReference4_C_c *
    DR18E_Testpult_X.ModelReference4_CSTATE_d;

  /* TransferFcn: '<S598>/ModelReference2' */
  DR18E_Testpult_B.ModelReference2_f = 0.0;
  DR18E_Testpult_B.ModelReference2_f += DR18E_Testpult_P.ModelReference2_C_a *
    DR18E_Testpult_X.ModelReference2_CSTATE_m;

  /* Derivative: '<S598>/Derivative' */
  if ((DR18E_Testpult_DW.TimeStampA_o0 >= DR18E_Testpult_M->Timing.t[0]) &&
      (DR18E_Testpult_DW.TimeStampB_p >= DR18E_Testpult_M->Timing.t[0])) {
    DR18E_Testpult_B.Derivative_h = 0.0;
  } else {
    u2 = DR18E_Testpult_DW.TimeStampA_o0;
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_p;
    if (DR18E_Testpult_DW.TimeStampA_o0 < DR18E_Testpult_DW.TimeStampB_p) {
      if (DR18E_Testpult_DW.TimeStampB_p < DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_p;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_f;
      }
    } else {
      if (DR18E_Testpult_DW.TimeStampA_o0 >= DR18E_Testpult_M->Timing.t[0]) {
        u2 = DR18E_Testpult_DW.TimeStampB_p;
        lastU = &DR18E_Testpult_DW.LastUAtTimeB_f;
      }
    }

    u2 = DR18E_Testpult_M->Timing.t[0] - u2;
    DR18E_Testpult_B.Derivative_h = (DR18E_Testpult_B.degrad_f - *lastU) / u2;
  }

  /* End of Derivative: '<S598>/Derivative' */

  /* TransferFcn: '<S598>/ModelReference1' */
  DR18E_Testpult_B.ModelReference1_o = 0.0;
  DR18E_Testpult_B.ModelReference1_o += DR18E_Testpult_P.ModelReference1_C_a *
    DR18E_Testpult_X.ModelReference1_CSTATE_k;

  /* RateTransition: '<S606>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition1_f =
        DR18E_Testpult_DW.RateTransition1_Buffer0_k;
    }

    /* Saturate: '<S600>/Saturation' */
    u0 = DR18E_Testpult_B.RateTransition1_f;
    u1 = DR18E_Testpult_P.Saturation_LowerSat_f;
    u2 = DR18E_Testpult_P.Saturation_UpperSat_f;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation_pz = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation_pz = u1;
    } else {
      DR18E_Testpult_B.Saturation_pz = u0;
    }

    /* End of Saturate: '<S600>/Saturation' */

    /* Gain: '<S603>/Gain rechts' */
    DR18E_Testpult_B.Gainrechts = DR18E_Testpult_P.Gainrechts_Gain *
      DR18E_Testpult_B.Saturation_pz;

    /* Saturate: '<S600>/Saturation1' */
    u0 = DR18E_Testpult_B.Gainrechts;
    u1 = DR18E_Testpult_P.Saturation1_LowerSat_a1;
    u2 = DR18E_Testpult_P.Saturation1_UpperSat_i4;
    if (u0 > u2) {
      DR18E_Testpult_B.Saturation1_f = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.Saturation1_f = u1;
    } else {
      DR18E_Testpult_B.Saturation1_f = u0;
    }

    /* End of Saturate: '<S600>/Saturation1' */

    /* Logic: '<S569>/Safety TV off' */
    DR18E_Testpult_B.SafetyTVoff_k =
      !((DR18E_Testpult_B.TriggeredSubsystem_a.Switch1 != 0.0) ||
        (DR18E_Testpult_B.TriggeredSubsystem_k.Switch1 != 0.0));

    /* Logic: '<S569>/Logical Operator1' incorporates:
     *  Constant: '<S569>/Constant4'
     */
    DR18E_Testpult_B.LogicalOperator1_mr = ((DR18E_Testpult_P.Constant4_Value_b
      != 0.0) && DR18E_Testpult_B.SafetyTVoff_k);
  }

  /* End of RateTransition: '<S606>/Rate Transition1' */

  /* Switch: '<S569>/Switch' incorporates:
   *  Constant: '<S569>/Constant1'
   */
  if (DR18E_Testpult_B.LogicalOperator1_mr) {
    /* MultiPortSwitch: '<S569>/Multiport Switch TV' incorporates:
     *  Constant: '<S569>/Constant2'
     *  Constant: '<S569>/Constant3'
     */
    switch ((int32_T)DR18E_Testpult_P.Constant2_Value_k) {
     case 1:
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_B.Torque_AC_OLD_RL_d;
      break;

     case 2:
      /* Product: '<S597>/Product2' */
      DR18E_Testpult_B.Product2_c = DR18E_Testpult_B.emGMX_i *
        DR18E_Testpult_B.degrad_f;

      /* Product: '<S597>/Product' */
      DR18E_Testpult_B.Product_c = DR18E_Testpult_B.Gravity2_p *
        DR18E_Testpult_B.emGM_c;

      /* Sum: '<S597>/Sum1' */
      DR18E_Testpult_B.Sum1_mk = DR18E_Testpult_B.Product_c -
        DR18E_Testpult_B.Product2_c;
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_B.Sum1_mk;
      break;

     case 3:
      /* Product: '<S599>/Product4' */
      DR18E_Testpult_B.Product4 = DR18E_Testpult_B.degrad_f *
        DR18E_Testpult_B.ModelReference2_c;

      /* Product: '<S599>/Product' */
      DR18E_Testpult_B.Product_n = DR18E_Testpult_B.Gravity2_p *
        DR18E_Testpult_B.ModelReference4_e;

      /* Sum: '<S599>/Sum1' */
      DR18E_Testpult_B.Sum1_it = DR18E_Testpult_B.Product_n -
        DR18E_Testpult_B.Product4;
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_B.Sum1_it;
      break;

     case 4:
      /* Product: '<S598>/Product1' */
      DR18E_Testpult_B.Product1_ky = DR18E_Testpult_B.Derivative_h *
        DR18E_Testpult_B.ModelReference1_o;

      /* Product: '<S598>/Product4' */
      DR18E_Testpult_B.Product4_o = DR18E_Testpult_B.degrad_f *
        DR18E_Testpult_B.ModelReference2_f;

      /* Product: '<S598>/Product' */
      DR18E_Testpult_B.Product_bp = DR18E_Testpult_B.Gravity2_p *
        DR18E_Testpult_B.ModelReference4_o;

      /* Sum: '<S598>/Sum1' */
      DR18E_Testpult_B.Sum1_hk = DR18E_Testpult_B.Product_bp -
        DR18E_Testpult_B.Product4_o;

      /* Sum: '<S598>/Sum3' */
      DR18E_Testpult_B.Sum3_o = DR18E_Testpult_B.Sum1_hk -
        DR18E_Testpult_B.Product1_ky;
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_B.Sum3_o;
      break;

     case 5:
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_B.Saturation1_f;
      break;

     default:
      DR18E_Testpult_B.DeltaMNm = DR18E_Testpult_P.Constant3_Value_d;
      break;
    }

    /* End of MultiPortSwitch: '<S569>/Multiport Switch TV' */
    DR18E_Testpult_B.Switch_d4 = DR18E_Testpult_B.DeltaMNm;
  } else {
    DR18E_Testpult_B.Switch_d4 = DR18E_Testpult_P.Constant1_Value_l;
  }

  /* End of Switch: '<S569>/Switch' */

  /* Gain: '<S526>/Gain4' */
  DR18E_Testpult_B.Gain4_i = DR18E_Testpult_P.Gain4_Gain_i *
    DR18E_Testpult_B.Switch_d4;

  /* Saturate: '<S526>/Saturation2' */
  u0 = DR18E_Testpult_B.Gain4_i;
  u1 = DR18E_Testpult_P.Saturation2_LowerSat_c;
  u2 = DR18E_Testpult_P.Saturation2_UpperSat_f;
  if (u0 > u2) {
    DR18E_Testpult_B.Saturation2_a = u2;
  } else if (u0 < u1) {
    DR18E_Testpult_B.Saturation2_a = u1;
  } else {
    DR18E_Testpult_B.Saturation2_a = u0;
  }

  /* End of Saturate: '<S526>/Saturation2' */

  /* Sum: '<S526>/Add1' */
  DR18E_Testpult_B.Add1 = DR18E_Testpult_B.Product1_be +
    DR18E_Testpult_B.Saturation2_a;

  /* Saturate: '<S526>/Saturation3' */
  u0 = DR18E_Testpult_B.Add1;
  u1 = DR18E_Testpult_P.Saturation3_LowerSat;
  u2 = DR18E_Testpult_P.Saturation3_UpperSat;
  if (u0 > u2) {
    DR18E_Testpult_B.Saturation3 = u2;
  } else if (u0 < u1) {
    DR18E_Testpult_B.Saturation3 = u1;
  } else {
    DR18E_Testpult_B.Saturation3 = u0;
  }

  /* End of Saturate: '<S526>/Saturation3' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S489>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Sensor_Current" Id:772 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->processed) {
          DR18E_Testpult_B.SFunction1_o2_n = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->processed;
          DR18E_Testpult_B.SFunction1_o3_h1j = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_j3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "HV_Current" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_cv = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_n = 0.0;
      }
    }

    /* Gain: '<S84>/0,1 A//bit' */
    DR18E_Testpult_B.HVCurrent = DR18E_Testpult_P.u1Abit_Gain *
      DR18E_Testpult_B.SFunction1_o1_cv;

    /* Product: '<S532>/Product' */
    DR18E_Testpult_B.HV_Power_Watt = DR18E_Testpult_B.SFunction1_o1_mi *
      DR18E_Testpult_B.HVCurrent;

    /* Saturate: '<S563>/0-80' incorporates:
     *  Constant: '<S563>/Constant2'
     */
    u0 = DR18E_Testpult_P.Constant2_Value_n;
    u1 = DR18E_Testpult_P.u80_LowerSat;
    u2 = DR18E_Testpult_P.u80_UpperSat;
    if (u0 > u2) {
      DR18E_Testpult_B.u80 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.u80 = u1;
    } else {
      DR18E_Testpult_B.u80 = u0;
    }

    /* End of Saturate: '<S563>/0-80' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* DiscreteIntegrator: '<S532>/Discrete-Time Integrator1' */
    DR18E_Testpult_B.HV_energy_con_Ws =
      DR18E_Testpult_DW.DiscreteTimeIntegrator1_DSTATE;

    /* Gain: '<S532>/Ws->Wh' */
    DR18E_Testpult_B.WsWh = DR18E_Testpult_P.WsWh_Gain *
      DR18E_Testpult_B.HV_energy_con_Ws;

    /* DataTypeConversion: '<S529>/Data Type Conversion2' */
    u0 = floor(DR18E_Testpult_B.WsWh);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 65536.0);
    }

    DR18E_Testpult_B.DataTypeConversion2_ap = (uint16_T)(u0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

    /* End of DataTypeConversion: '<S529>/Data Type Conversion2' */

    /* UnitDelay: '<S637>/UD' */
    DR18E_Testpult_B.Uk1_d2 = DR18E_Testpult_DW.UD_DSTATE_h;

    /* Sum: '<S637>/Diff' */
    DR18E_Testpult_B.Diff_n = (uint16_T)(DR18E_Testpult_B.DataTypeConversion2_ap
      - DR18E_Testpult_B.Uk1_d2);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S641>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Switch: '<S529>/Switch1' incorporates:
     *  Constant: '<S529>/Reset Tageswerte'
     *  Constant: '<S529>/Reset Value1'
     */
    if (DR18E_Testpult_P.ResetTageswerte_Value >
        DR18E_Testpult_P.Switch1_Threshold) {
      DR18E_Testpult_B.TagesenergieMABX_Wh = DR18E_Testpult_P.ResetValue1_Value;
    } else {
      /* Sum: '<S529>/Add2' */
      DR18E_Testpult_B.Add2 = (uint16_T)((uint32_T)DR18E_Testpult_B.Diff_n +
        DR18E_Testpult_B.SFunction1_dy);
      DR18E_Testpult_B.TagesenergieMABX_Wh = DR18E_Testpult_B.Add2;
    }

    /* End of Switch: '<S529>/Switch1' */

    /* DiscreteIntegrator: '<S653>/Discrete-Time Integrator' */
    DR18E_Testpult_B.DiscreteTimeIntegrator =
      DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE;

    /* Gain: '<S653>/s_m' */
    DR18E_Testpult_B.Tagesmeter_fluechtig_s_m = DR18E_Testpult_P.s_m_Gain *
      DR18E_Testpult_B.DiscreteTimeIntegrator;

    /* DataTypeConversion: '<S529>/Data Type Conversion' */
    u0 = floor(DR18E_Testpult_B.Tagesmeter_fluechtig_s_m);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 65536.0);
    }

    DR18E_Testpult_B.DataTypeConversion_h1 = (uint16_T)(u0 < 0.0 ? (int32_T)
      (uint16_T)-(int16_T)(uint16_T)-u0 : (int32_T)(uint16_T)u0);

    /* End of DataTypeConversion: '<S529>/Data Type Conversion' */

    /* UnitDelay: '<S636>/UD' */
    DR18E_Testpult_B.Uk1_iw = DR18E_Testpult_DW.UD_DSTATE_hj;

    /* S-Function (rti_commonblock): '<S639>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Switch: '<S529>/Switch' incorporates:
     *  Constant: '<S529>/Reset Tageswerte'
     *  Constant: '<S529>/Reset Value'
     */
    if (DR18E_Testpult_P.ResetTageswerte_Value >
        DR18E_Testpult_P.Switch_Threshold_m) {
      DR18E_Testpult_B.TagesmeterMABX_m = DR18E_Testpult_P.ResetValue_Value;
    } else {
      /* Sum: '<S636>/Diff' */
      DR18E_Testpult_B.Diff_nj = (uint16_T)
        (DR18E_Testpult_B.DataTypeConversion_h1 - DR18E_Testpult_B.Uk1_iw);

      /* Sum: '<S529>/Add1' */
      DR18E_Testpult_B.Add1_o = (uint16_T)((uint32_T)DR18E_Testpult_B.Diff_nj +
        DR18E_Testpult_B.SFunction1_a);
      DR18E_Testpult_B.TagesmeterMABX_m = DR18E_Testpult_B.Add1_o;
    }

    /* End of Switch: '<S529>/Switch' */

    /* Gain: '<S571>/m->km' */
    DR18E_Testpult_B.mkm = (uint32_T)DR18E_Testpult_P.mkm_Gain *
      DR18E_Testpult_B.TagesmeterMABX_m;

    /* Product: '<S571>/Divide' */
    tmp = DR18E_Testpult_B.mkm;
    DR18E_Testpult_B.Verbrauch_Whkm = tmp == 0U ? MAX_uint32_T :
      DR18E_Testpult_B.TagesenergieMABX_Wh / tmp;

    /* RelationalOperator: '<S571>/Relational Operator' incorporates:
     *  Constant: '<S571>/Constant4'
     */
    DR18E_Testpult_B.Start_Derating_0_1 = ((real_T)DR18E_Testpult_B.mkm *
      2.9802322387695313E-8 >= DR18E_Testpult_P.Constant4_Value_k);

    /* RelationalOperator: '<S572>/Compare' incorporates:
     *  Constant: '<S571>/Constant2'
     *  Constant: '<S572>/Constant'
     */
    DR18E_Testpult_B.Compare_a = (DR18E_Testpult_P.Constant2_Value_cq ==
      DR18E_Testpult_P.CompareToConstant_const_c);

    /* Logic: '<S571>/Logical Operator' incorporates:
     *  Constant: '<S571>/Constant3'
     *  Constant: '<S571>/Safety_Derateing'
     */
    DR18E_Testpult_B.LogicalOperator_a = (DR18E_Testpult_B.Start_Derating_0_1 &&
      (DR18E_Testpult_P.Safety_Derateing_Value != 0.0) &&
      (DR18E_Testpult_P.Constant3_Value_i != 0.0) && DR18E_Testpult_B.Compare_a);

    /* Switch: '<S571>/Derating_Battery_active' incorporates:
     *  Constant: '<S571>/Safety1'
     */
    if (DR18E_Testpult_B.LogicalOperator_a) {
      /* Sum: '<S571>/Add1' incorporates:
       *  Constant: '<S571>/Constant1'
       */
      DR18E_Testpult_B.Reststrecke_km = DR18E_Testpult_P.Constant1_Value_o -
        (real_T)DR18E_Testpult_B.mkm * 2.9802322387695313E-8;

      /* Gain: '<S571>/kWh->Wh' incorporates:
       *  Constant: '<S571>/Constant'
       */
      DR18E_Testpult_B.kWhWh = DR18E_Testpult_P.kWhWh_Gain *
        DR18E_Testpult_P.Constant_Value_f;

      /* Sum: '<S571>/Add' */
      DR18E_Testpult_B.verbleibendeEnergie_Wh = DR18E_Testpult_B.kWhWh - (real_T)
        DR18E_Testpult_B.TagesenergieMABX_Wh;

      /* Product: '<S571>/Divide1' */
      DR18E_Testpult_B.Restreichweite_km =
        DR18E_Testpult_B.verbleibendeEnergie_Wh / ((real_T)
        DR18E_Testpult_B.Verbrauch_Whkm * 3.3554432E+7);

      /* Sum: '<S571>/Add2' */
      DR18E_Testpult_B.deltaStrecke_km = DR18E_Testpult_B.Reststrecke_km -
        DR18E_Testpult_B.Restreichweite_km;

      /* Saturate: '<S571>/Saturation' */
      u0 = DR18E_Testpult_B.deltaStrecke_km;
      u1 = DR18E_Testpult_P.Saturation_LowerSat;
      u2 = DR18E_Testpult_P.Saturation_UpperSat;
      if (u0 > u2) {
        DR18E_Testpult_B.Saturation_m = u2;
      } else if (u0 < u1) {
        DR18E_Testpult_B.Saturation_m = u1;
      } else {
        DR18E_Testpult_B.Saturation_m = u0;
      }

      /* End of Saturate: '<S571>/Saturation' */
      DR18E_Testpult_B.Derating_Battery_active = DR18E_Testpult_B.Saturation_m;
    } else {
      DR18E_Testpult_B.Derating_Battery_active = DR18E_Testpult_P.Safety1_Value;
    }

    /* End of Switch: '<S571>/Derating_Battery_active' */

    /* Lookup_n-D: '<S571>/Map_Reichweite_Derating_Rev1' */
    DR18E_Testpult_B.Map_Reichweite_Derating_Rev1 = look1_binlxpw
      (DR18E_Testpult_B.Derating_Battery_active,
       DR18E_Testpult_P.Map_Reichweite_Derating_Rev1_bp,
       DR18E_Testpult_P.Map_Reichweite_Derating_Rev1_ta, 10U);

    /* MinMax: '<S563>/MinMax' */
    u2 = DR18E_Testpult_B.Map_Reichweite_Derating_Rev1;
    if (!(u2 < 0.0)) {
      u2 = 0.0;
    }

    DR18E_Testpult_B.MinMax_g = u2;

    /* End of MinMax: '<S563>/MinMax' */

    /* Saturate: '<S563>/0-1' */
    u0 = DR18E_Testpult_B.MinMax_g;
    u1 = DR18E_Testpult_P.u1_LowerSat;
    u2 = DR18E_Testpult_P.u1_UpperSat;
    if (u0 > u2) {
      DR18E_Testpult_B.u1 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.u1 = u1;
    } else {
      DR18E_Testpult_B.u1 = u0;
    }

    /* End of Saturate: '<S563>/0-1' */

    /* Product: '<S563>/Product' */
    DR18E_Testpult_B.Product_lr = DR18E_Testpult_B.u80 * DR18E_Testpult_B.u1;

    /* Gain: '<S565>/kW-W' */
    DR18E_Testpult_B.kWW = DR18E_Testpult_P.kWW_Gain *
      DR18E_Testpult_B.Product_lr;

    /* RelationalOperator: '<S565>/Relational Operator' */
    DR18E_Testpult_B.RelationalOperator_g = (DR18E_Testpult_B.HV_Power_Watt <=
      DR18E_Testpult_B.kWW);

    /* Gain: '<S565>/halbe Gesamtleistung pro Motor' */
    DR18E_Testpult_B.halbeGesamtleistungproMotor =
      DR18E_Testpult_P.halbeGesamtleistungproMotor_Gai * DR18E_Testpult_B.kWW;

    /* Gain: '<S530>/rpm-rad//s' */
    DR18E_Testpult_B.Drehzahl_RL_rads = DR18E_Testpult_P.rpmrads_Gain *
      DR18E_Testpult_B.Sum1_ps;

    /* Gain: '<S565>/rad//s -> RPM' */
    DR18E_Testpult_B.radsRPM = DR18E_Testpult_P.radsRPM_Gain *
      DR18E_Testpult_B.Drehzahl_RL_rads;

    /* Sum: '<S565>/Sum2' incorporates:
     *  Constant: '<S565>/eps'
     */
    DR18E_Testpult_B.Sum2 = DR18E_Testpult_B.radsRPM +
      DR18E_Testpult_P.eps_Value;

    /* Gain: '<S565>/RPM-1//s' */
    DR18E_Testpult_B.RPM1s = DR18E_Testpult_P.RPM1s_Gain * DR18E_Testpult_B.Sum2;

    /* Gain: '<S530>/rpm-rad//s1' */
    DR18E_Testpult_B.Drehzahl_RR_rads = DR18E_Testpult_P.rpmrads1_Gain *
      DR18E_Testpult_B.Sum1_l3;

    /* Gain: '<S565>/rad//s -> RPM1' */
    DR18E_Testpult_B.radsRPM1 = DR18E_Testpult_P.radsRPM1_Gain *
      DR18E_Testpult_B.Drehzahl_RR_rads;

    /* Sum: '<S565>/Sum3' incorporates:
     *  Constant: '<S565>/eps'
     */
    DR18E_Testpult_B.Sum3 = DR18E_Testpult_P.eps_Value +
      DR18E_Testpult_B.radsRPM1;

    /* Gain: '<S565>/RPM-1//s1' */
    DR18E_Testpult_B.RPM1s1 = DR18E_Testpult_P.RPM1s1_Gain *
      DR18E_Testpult_B.Sum3;

    /* UnitDelay: '<S614>/Delay Input1' */
    DR18E_Testpult_B.Uk1_m = DR18E_Testpult_DW.DelayInput1_DSTATE_jg;
  }

  /* Switch: '<S565>/Switch' */
  if (DR18E_Testpult_B.RelationalOperator_g) {
    DR18E_Testpult_B.Switch_a[0] = DR18E_Testpult_B.Saturation1_h;
    DR18E_Testpult_B.Switch_a[1] = DR18E_Testpult_B.Saturation3;
  } else {
    /* Sum: '<S565>/Sum5' incorporates:
     *  Constant: '<S565>/PowerLimit [kW]2'
     */
    DR18E_Testpult_B.Sum5 = DR18E_Testpult_B.Saturation3 +
      DR18E_Testpult_P.PowerLimitkW2_Value;

    /* Product: '<S565>/Divide' */
    DR18E_Testpult_B.Divide_f = DR18E_Testpult_B.Saturation1_h /
      DR18E_Testpult_B.Sum5;

    /* Product: '<S565>/Product' */
    DR18E_Testpult_B.PMotL = DR18E_Testpult_B.Divide_f *
      DR18E_Testpult_B.halbeGesamtleistungproMotor;

    /* Product: '<S565>/Divide1' */
    DR18E_Testpult_B.ML = DR18E_Testpult_B.PMotL / DR18E_Testpult_B.RPM1s;

    /* Sum: '<S565>/Sum1' */
    DR18E_Testpult_B.PMotR = DR18E_Testpult_B.kWW - DR18E_Testpult_B.PMotL;

    /* Product: '<S565>/Divide2' */
    DR18E_Testpult_B.MR = DR18E_Testpult_B.PMotR / DR18E_Testpult_B.RPM1s1;
    DR18E_Testpult_B.Switch_a[0] = DR18E_Testpult_B.ML;
    DR18E_Testpult_B.Switch_a[1] = DR18E_Testpult_B.MR;
  }

  /* End of Switch: '<S565>/Switch' */

  /* RelationalOperator: '<S614>/FixPt Relational Operator' */
  DR18E_Testpult_B.FixPtRelationalOperator_m = (DR18E_Testpult_B.Switch_a[0] >
    DR18E_Testpult_B.Uk1_m);
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S612>/Delay Input1' */
    DR18E_Testpult_B.Uk1_mx = DR18E_Testpult_DW.DelayInput1_DSTATE_b;

    /* Memory: '<S618>/Memory' */
    DR18E_Testpult_B.Memory_f = DR18E_Testpult_DW.Memory_PreviousInput_m;
  }

  /* RelationalOperator: '<S612>/FixPt Relational Operator' */
  DR18E_Testpult_B.FixPtRelationalOperator_j = (DR18E_Testpult_B.Switch_a[0] <
    DR18E_Testpult_B.Uk1_mx);

  /* CombinatorialLogic: '<S618>/Logic' */
  zcEvent = DR18E_Testpult_B.FixPtRelationalOperator_m;
  i = zcEvent;
  zcEvent = DR18E_Testpult_B.FixPtRelationalOperator_j;
  i = (int32_T)(((uint32_T)i << 1) + zcEvent);
  zcEvent = DR18E_Testpult_B.Memory_f;
  i = (int32_T)(((uint32_T)i << 1) + zcEvent);
  DR18E_Testpult_B.Logic_i[0U] = DR18E_Testpult_P.Logic_table_cf[(uint32_T)i];
  DR18E_Testpult_B.Logic_i[1U] = DR18E_Testpult_P.Logic_table_cf[i + 8U];

  /* Switch: '<S570>/Switch1' incorporates:
   *  Constant: '<S570>/TFilterTorqueFall'
   *  Constant: '<S570>/TFilterTorqueRise'
   */
  if (DR18E_Testpult_B.Logic_i[0]) {
    DR18E_Testpult_B.Switch1_a = DR18E_Testpult_P.TFilterTorqueRise_Value;
  } else {
    DR18E_Testpult_B.Switch1_a = DR18E_Testpult_P.TFilterTorqueFall_Value;
  }

  /* End of Switch: '<S570>/Switch1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* SampleTimeMath: '<S622>/Weighted Sample Time'
     *
     * About '<S622>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_c =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_c;

    /* Memory: '<S617>/Memory' */
    DR18E_Testpult_B.Memory_b = DR18E_Testpult_DW.Memory_PreviousInput_g;
  }

  /* Product: '<S622>/Divide1' */
  DR18E_Testpult_B.Divide1_nz = DR18E_Testpult_B.Switch1_a /
    DR18E_Testpult_B.WeightedSampleTime_c;

  /* Sum: '<S622>/Sum' incorporates:
   *  Constant: '<S622>/Constant2'
   */
  DR18E_Testpult_B.Sum_c3 = DR18E_Testpult_B.Divide1_nz +
    DR18E_Testpult_P.Constant2_Value_o;

  /* Product: '<S622>/Divide' incorporates:
   *  Constant: '<S622>/Constant'
   */
  DR18E_Testpult_B.Divide_o = DR18E_Testpult_P.Constant_Value_hb /
    DR18E_Testpult_B.Sum_c3;

  /* Product: '<S617>/Product' incorporates:
   *  Constant: '<S570>/Constant2'
   */
  DR18E_Testpult_B.Product_mn = DR18E_Testpult_P.Constant2_Value_bg *
    DR18E_Testpult_B.Switch_a[0];

  /* Sum: '<S617>/Sum' */
  DR18E_Testpult_B.Sum_e = DR18E_Testpult_B.Product_mn -
    DR18E_Testpult_B.Memory_b;

  /* Product: '<S617>/Product1' */
  DR18E_Testpult_B.Product1_j = DR18E_Testpult_B.Divide_o *
    DR18E_Testpult_B.Sum_e;

  /* Sum: '<S617>/Sum1' */
  DR18E_Testpult_B.Sum1_ia = DR18E_Testpult_B.Product1_j +
    DR18E_Testpult_B.Memory_b;

  /* Product: '<S617>/Product2' */
  DR18E_Testpult_B.Product2_e = DR18E_Testpult_B.DataTypeConversion_h2 *
    DR18E_Testpult_B.Sum1_ia;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Logic: '<S616>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_e = true;

    /* UnitDelay: '<S615>/Delay Input1' */
    DR18E_Testpult_B.Uk1_j = DR18E_Testpult_DW.DelayInput1_DSTATE_f2;
  }

  /* DataTypeConversion: '<S616>/Data Type Conversion' */
  DR18E_Testpult_B.DataTypeConversion_b = DR18E_Testpult_B.LogicalOperator_e;

  /* RelationalOperator: '<S615>/FixPt Relational Operator' */
  DR18E_Testpult_B.FixPtRelationalOperator_a = (DR18E_Testpult_B.Switch_a[1] >
    DR18E_Testpult_B.Uk1_j);
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* UnitDelay: '<S613>/Delay Input1' */
    DR18E_Testpult_B.Uk1_d = DR18E_Testpult_DW.DelayInput1_DSTATE_nw;

    /* Memory: '<S619>/Memory' */
    DR18E_Testpult_B.Memory_fq = DR18E_Testpult_DW.Memory_PreviousInput_e;
  }

  /* RelationalOperator: '<S613>/FixPt Relational Operator' */
  DR18E_Testpult_B.FixPtRelationalOperator_aw = (DR18E_Testpult_B.Switch_a[1] <
    DR18E_Testpult_B.Uk1_d);

  /* CombinatorialLogic: '<S619>/Logic' */
  zcEvent = DR18E_Testpult_B.FixPtRelationalOperator_a;
  i = zcEvent;
  zcEvent = DR18E_Testpult_B.FixPtRelationalOperator_aw;
  i = (int32_T)(((uint32_T)i << 1) + zcEvent);
  zcEvent = DR18E_Testpult_B.Memory_fq;
  i = (int32_T)(((uint32_T)i << 1) + zcEvent);
  DR18E_Testpult_B.Logic_b[0U] = DR18E_Testpult_P.Logic_table_kb[(uint32_T)i];
  DR18E_Testpult_B.Logic_b[1U] = DR18E_Testpult_P.Logic_table_kb[i + 8U];

  /* Switch: '<S570>/Switch2' incorporates:
   *  Constant: '<S570>/TFilterTorqueFall'
   *  Constant: '<S570>/TFilterTorqueRise'
   */
  if (DR18E_Testpult_B.Logic_b[0]) {
    DR18E_Testpult_B.Switch2 = DR18E_Testpult_P.TFilterTorqueRise_Value;
  } else {
    DR18E_Testpult_B.Switch2 = DR18E_Testpult_P.TFilterTorqueFall_Value;
  }

  /* End of Switch: '<S570>/Switch2' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* SampleTimeMath: '<S621>/Weighted Sample Time'
     *
     * About '<S621>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_hx =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_pa;

    /* Memory: '<S616>/Memory' */
    DR18E_Testpult_B.Memory_h = DR18E_Testpult_DW.Memory_PreviousInput_kf;
  }

  /* Product: '<S621>/Divide1' */
  DR18E_Testpult_B.Divide1_dd = DR18E_Testpult_B.Switch2 /
    DR18E_Testpult_B.WeightedSampleTime_hx;

  /* Sum: '<S621>/Sum' incorporates:
   *  Constant: '<S621>/Constant2'
   */
  DR18E_Testpult_B.Sum_i = DR18E_Testpult_B.Divide1_dd +
    DR18E_Testpult_P.Constant2_Value_ip;

  /* Product: '<S621>/Divide' incorporates:
   *  Constant: '<S621>/Constant'
   */
  DR18E_Testpult_B.Divide_ny = DR18E_Testpult_P.Constant_Value_p /
    DR18E_Testpult_B.Sum_i;

  /* Product: '<S616>/Product' incorporates:
   *  Constant: '<S570>/Constant1'
   */
  DR18E_Testpult_B.Product_fw = DR18E_Testpult_P.Constant1_Value_fa *
    DR18E_Testpult_B.Switch_a[1];

  /* Sum: '<S616>/Sum' */
  DR18E_Testpult_B.Sum_gc = DR18E_Testpult_B.Product_fw -
    DR18E_Testpult_B.Memory_h;

  /* Product: '<S616>/Product1' */
  DR18E_Testpult_B.Product1_o = DR18E_Testpult_B.Divide_ny *
    DR18E_Testpult_B.Sum_gc;

  /* Sum: '<S616>/Sum1' */
  DR18E_Testpult_B.Sum1_l = DR18E_Testpult_B.Product1_o +
    DR18E_Testpult_B.Memory_h;

  /* Product: '<S616>/Product2' */
  DR18E_Testpult_B.Product2_f = DR18E_Testpult_B.DataTypeConversion_b *
    DR18E_Testpult_B.Sum1_l;

  /* RelationalOperator: '<S620>/LowerRelop1' incorporates:
   *  Constant: '<S570>/M_max'
   */
  DR18E_Testpult_B.LowerRelop1[0] = (DR18E_Testpult_B.Product2_e >
    DR18E_Testpult_P.M_max_Value);
  DR18E_Testpult_B.LowerRelop1[1] = (DR18E_Testpult_B.Product2_f >
    DR18E_Testpult_P.M_max_Value);

  /* RelationalOperator: '<S620>/UpperRelop' incorporates:
   *  Constant: '<S570>/MinTorque'
   */
  DR18E_Testpult_B.UpperRelop[0] = (DR18E_Testpult_B.Product2_e <
    DR18E_Testpult_P.MinTorque_Value);
  DR18E_Testpult_B.UpperRelop[1] = (DR18E_Testpult_B.Product2_f <
    DR18E_Testpult_P.MinTorque_Value);

  /* Switch: '<S620>/Switch' incorporates:
   *  Constant: '<S570>/MinTorque'
   */
  if (DR18E_Testpult_B.UpperRelop[0]) {
    DR18E_Testpult_B.Switch_o[0] = DR18E_Testpult_P.MinTorque_Value;
  } else {
    DR18E_Testpult_B.Switch_o[0] = DR18E_Testpult_B.Product2_e;
  }

  if (DR18E_Testpult_B.UpperRelop[1]) {
    DR18E_Testpult_B.Switch_o[1] = DR18E_Testpult_P.MinTorque_Value;
  } else {
    DR18E_Testpult_B.Switch_o[1] = DR18E_Testpult_B.Product2_f;
  }

  /* End of Switch: '<S620>/Switch' */

  /* Switch: '<S620>/Switch2' incorporates:
   *  Constant: '<S570>/M_max'
   */
  if (DR18E_Testpult_B.LowerRelop1[0]) {
    DR18E_Testpult_B.Switch2_f[0] = DR18E_Testpult_P.M_max_Value;
  } else {
    DR18E_Testpult_B.Switch2_f[0] = DR18E_Testpult_B.Switch_o[0];
  }

  /* Switch: '<S531>/Switch' incorporates:
   *  Constant: '<S531>/Constant'
   */
  if (DR18E_Testpult_B.LogicalOperator1_m) {
    DR18E_Testpult_B.Switch_dv[0] = DR18E_Testpult_P.Constant_Value_hx[0];
  } else {
    DR18E_Testpult_B.Switch_dv[0] = DR18E_Testpult_B.Switch2_f[0];
  }

  /* Switch: '<S620>/Switch2' incorporates:
   *  Constant: '<S570>/M_max'
   */
  if (DR18E_Testpult_B.LowerRelop1[1]) {
    DR18E_Testpult_B.Switch2_f[1] = DR18E_Testpult_P.M_max_Value;
  } else {
    DR18E_Testpult_B.Switch2_f[1] = DR18E_Testpult_B.Switch_o[1];
  }

  /* Switch: '<S531>/Switch' incorporates:
   *  Constant: '<S531>/Constant'
   */
  if (DR18E_Testpult_B.LogicalOperator1_m) {
    DR18E_Testpult_B.Switch_dv[1] = DR18E_Testpult_P.Constant_Value_hx[1];
  } else {
    DR18E_Testpult_B.Switch_dv[1] = DR18E_Testpult_B.Switch2_f[1];
  }

  /* Gain: '<S50>/Gain' */
  DR18E_Testpult_B.Gain_d = DR18E_Testpult_P.Gain_Gain_o *
    DR18E_Testpult_B.Switch_dv[0];

  /* DataTypeConversion: '<S50>/Data Type Conversion' */
  DR18E_Testpult_B.DataTypeConversion_hf = (real32_T)DR18E_Testpult_B.Gain_d;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S57>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(MSoll_Links_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_hf);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  /* Gain: '<S51>/Gain' */
  DR18E_Testpult_B.Gain_mj = DR18E_Testpult_P.Gain_Gain_p *
    DR18E_Testpult_B.Switch_dv[1];

  /* DataTypeConversion: '<S51>/Data Type Conversion' */
  DR18E_Testpult_B.DataTypeConversion_k = (real32_T)DR18E_Testpult_B.Gain_mj;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S58>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(MSoll_Rechts_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_k);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* RateTransition: '<S10>/Rate Transition' incorporates:
     *  Constant: '<S10>/RegID_Torque'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition[0] = DR18E_Testpult_P.RegID_Torque_Value[0];
      DR18E_Testpult_B.RateTransition[1] = DR18E_Testpult_P.RegID_Torque_Value[1];
    }

    /* End of RateTransition: '<S10>/Rate Transition' */
  }

  /* Gain: '<S54>/Gain1' */
  DR18E_Testpult_B.Gain1_o3 = DR18E_Testpult_P.Gain1_Gain_d *
    DR18E_Testpult_B.Switch_dv[1];

  /* Product: '<S54>/Divide1' incorporates:
   *  Constant: '<S54>/Constant1'
   */
  DR18E_Testpult_B.Divide1_j = DR18E_Testpult_B.Gain1_o3 /
    DR18E_Testpult_P.Constant1_Value_p;

  /* Gain: '<S54>/Gain2' */
  DR18E_Testpult_B.Gain2_l = DR18E_Testpult_P.Gain2_Gain_a *
    DR18E_Testpult_B.Switch_dv[0];

  /* Product: '<S54>/Divide2' incorporates:
   *  Constant: '<S54>/Constant2'
   */
  DR18E_Testpult_B.Divide2_c = DR18E_Testpult_B.Gain2_l /
    DR18E_Testpult_P.Constant2_Value_ge;

  /* RateTransition: '<S10>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition1_j[0] = DR18E_Testpult_B.Divide1_j;
      DR18E_Testpult_B.RateTransition1_j[1] = DR18E_Testpult_B.Divide2_c;
    }

    /* Chart: '<S10>/TX Mode Management' */
    /* Gateway: Ausgabe/Inverter TX/TX Mode Management */
    /* During: Ausgabe/Inverter TX/TX Mode Management */
    if (DR18E_Testpult_DW.is_active_c4_DR18E_Testpult == 0U) {
      /* Entry: Ausgabe/Inverter TX/TX Mode Management */
      DR18E_Testpult_DW.is_active_c4_DR18E_Testpult = 1U;

      /* Entry Internal: Ausgabe/Inverter TX/TX Mode Management */
      /* Transition: '<S55>:20' */
      DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Off;
    } else {
      switch (DR18E_Testpult_DW.is_c4_DR18E_Testpult) {
       case DR18E_Testpult_IN_Init:
        /* During 'Init': '<S55>:1' */
        if (DR18E_Testpult_B.O_Inverter_TX_Mode == 3) {
          /* Transition: '<S55>:8' */
          /* Exit 'Init': '<S55>:1' */
          DR18E_Testpult_B.O_Init = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Torque;

          /* Entry 'Torque': '<S55>:2' */
          DR18E_Testpult_B.O_Torque = true;
        } else if (DR18E_Testpult_B.O_Inverter_TX_Mode == 2) {
          /* Transition: '<S55>:11' */
          /* Exit 'Init': '<S55>:1' */
          DR18E_Testpult_B.O_Init = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Universal;

          /* Entry 'Universal': '<S55>:3' */
          DR18E_Testpult_B.O_Universal = true;
        } else {
          if (DR18E_Testpult_B.O_Inverter_TX_Mode == 0) {
            /* Transition: '<S55>:16' */
            /* Exit 'Init': '<S55>:1' */
            DR18E_Testpult_B.O_Init = false;
            DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Off;
          }
        }
        break;

       case DR18E_Testpult_IN_Off:
        /* During 'Off': '<S55>:15' */
        if (DR18E_Testpult_B.O_Inverter_TX_Mode == 3) {
          /* Transition: '<S55>:17' */
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Torque;

          /* Entry 'Torque': '<S55>:2' */
          DR18E_Testpult_B.O_Torque = true;
        } else if (DR18E_Testpult_B.O_Inverter_TX_Mode == 2) {
          /* Transition: '<S55>:18' */
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Universal;

          /* Entry 'Universal': '<S55>:3' */
          DR18E_Testpult_B.O_Universal = true;
        } else {
          if (DR18E_Testpult_B.O_Inverter_TX_Mode == 1) {
            /* Transition: '<S55>:19' */
            DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Init;

            /* Entry 'Init': '<S55>:1' */
            DR18E_Testpult_B.O_Init = true;
          }
        }
        break;

       case DR18E_Testpult_IN_Torque:
        /* During 'Torque': '<S55>:2' */
        if (DR18E_Testpult_B.O_Inverter_TX_Mode == 0) {
          /* Transition: '<S55>:10' */
          /* Exit 'Torque': '<S55>:2' */
          DR18E_Testpult_B.O_Torque = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Off;
        } else if (DR18E_Testpult_B.O_Inverter_TX_Mode == 2) {
          /* Transition: '<S55>:13' */
          /* Exit 'Torque': '<S55>:2' */
          DR18E_Testpult_B.O_Torque = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Universal;

          /* Entry 'Universal': '<S55>:3' */
          DR18E_Testpult_B.O_Universal = true;
        } else {
          if (DR18E_Testpult_B.O_Inverter_TX_Mode == 1) {
            /* Transition: '<S55>:22' */
            /* Exit 'Torque': '<S55>:2' */
            DR18E_Testpult_B.O_Torque = false;
            DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Init;

            /* Entry 'Init': '<S55>:1' */
            DR18E_Testpult_B.O_Init = true;
          }
        }
        break;

       default:
        /* During 'Universal': '<S55>:3' */
        if (DR18E_Testpult_B.O_Inverter_TX_Mode == 0) {
          /* Transition: '<S55>:12' */
          /* Exit 'Universal': '<S55>:3' */
          DR18E_Testpult_B.O_Universal = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Off;
        } else if (DR18E_Testpult_B.O_Inverter_TX_Mode == 3) {
          /* Transition: '<S55>:14' */
          /* Exit 'Universal': '<S55>:3' */
          DR18E_Testpult_B.O_Universal = false;
          DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Torque;

          /* Entry 'Torque': '<S55>:2' */
          DR18E_Testpult_B.O_Torque = true;
        } else {
          if (DR18E_Testpult_B.O_Inverter_TX_Mode == 1) {
            /* Transition: '<S55>:21' */
            /* Exit 'Universal': '<S55>:3' */
            DR18E_Testpult_B.O_Universal = false;
            DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpult_IN_Init;

            /* Entry 'Init': '<S55>:1' */
            DR18E_Testpult_B.O_Init = true;
          }
        }
        break;
      }
    }

    /* End of Chart: '<S10>/TX Mode Management' */

    /* Outputs for Enabled SubSystem: '<S10>/Inverters TXTorque' incorporates:
     *  EnablePort: '<S52>/Enable'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      if (DR18E_Testpult_B.O_Torque) {
        if (!DR18E_Testpult_DW.InvertersTXTorque_MODE) {
          DR18E_Testpult_DW.InvertersTXTorque_MODE = true;
        }
      } else {
        if (DR18E_Testpult_DW.InvertersTXTorque_MODE) {
          DR18E_Testpult_DW.InvertersTXTorque_MODE = false;
        }
      }
    }

    /* End of Outputs for SubSystem: '<S10>/Inverters TXTorque' */
  }

  /* End of RateTransition: '<S10>/Rate Transition1' */

  /* Outputs for Enabled SubSystem: '<S10>/Inverters TXTorque' incorporates:
   *  EnablePort: '<S52>/Enable'
   */
  if (DR18E_Testpult_DW.InvertersTXTorque_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      /* S-Function (rti_commonblock): '<S59>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:260 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104]->timestamp);
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "INV_1_TX_REGID" (0|8, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.RateTransition[0] ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition[0] )
              - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition[0] )
              + 0.5);
          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "INV_1_TX_Value" (8|32, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.RateTransition1_j[0]
            ) + 0.5);
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte2;
          CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte3;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      /* S-Function (rti_commonblock): '<S60>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:262 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106]->processed) {
          can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106]->timestamp);
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "INV_2_TX_REGID" (0|8, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.RateTransition[1] ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition[1] )
              - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition[1] )
              + 0.5);
          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "INV_2_TX_Value" (8|32, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.RateTransition1_j[1] ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition1_j[1]
              ) - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.RateTransition1_j[1]
              ) + 0.5);
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte2;
          CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte3;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }
  }

  /* End of Outputs for SubSystem: '<S10>/Inverters TXTorque' */

  /* Outputs for Enabled SubSystem: '<S10>/Inverters TXUniversal' incorporates:
   *  EnablePort: '<S53>/Enable'
   */
  if ((rtmIsMajorTimeStep(DR18E_Testpult_M) &&
       DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) && rtmIsMajorTimeStep
      (DR18E_Testpult_M)) {
    if (DR18E_Testpult_B.O_Universal) {
      if (!DR18E_Testpult_DW.InvertersTXUniversal_MODE) {
        DR18E_Testpult_DW.InvertersTXUniversal_MODE = true;
      }
    } else {
      if (DR18E_Testpult_DW.InvertersTXUniversal_MODE) {
        DR18E_Testpult_DW.InvertersTXUniversal_MODE = false;
      }
    }
  }

  if (DR18E_Testpult_DW.InvertersTXUniversal_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* S-Function (rti_commonblock): '<S62>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:259 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_e5n = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->processed;
          DR18E_Testpult_B.SFunction1_o2_bs = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_nwq = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "INV_1_TX_REGID" (0|8, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.O_U1_RegID ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U1_RegID ) - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U1_RegID ) + 0.5);
          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "INV_1_TX_Value" (8|32, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.O_U2_Value32 ) +
            0.5);
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte2;
          CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte3;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* S-Function (rti_commonblock): '<S63>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:260 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->processed) {
          can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_cc = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->processed;
          DR18E_Testpult_B.SFunction1_o2_ae = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_ej = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "INV_2_TX_REGID" (0|8, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.O_U2_RegID ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U2_RegID ) - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U2_RegID ) + 0.5);
          CAN_Sgn.SignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "INV_2_TX_Value" (8|32, standard signal, signed int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          if (( DR18E_Testpult_B.O_U1_Value32 ) < -0.5)
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U1_Value32 ) - 0.5);
          else
            CAN_Sgn.SignedSgn = (Int32) (( DR18E_Testpult_B.O_U1_Value32 ) + 0.5);
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte1;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte2;
          CAN_Msg[4] |= CAN_Sgn.SgnBytes.Byte3;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104], 8,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* Memory: '<S65>/Mem1' */
      DR18E_Testpult_B.Mem1_cqr = DR18E_Testpult_DW.Mem1_PreviousInput_iax;

      /* Memory: '<S65>/Mem2' */
      DR18E_Testpult_B.Mem2_j4 = DR18E_Testpult_DW.Mem2_PreviousInput_g2;

      /* Memory: '<S65>/Mem3' */
      DR18E_Testpult_B.Mem3_iw = DR18E_Testpult_DW.Mem3_PreviousInput_cj;

      /* Memory: '<S65>/Mem4' */
      DR18E_Testpult_B.Mem4_ki = DR18E_Testpult_DW.Mem4_PreviousInput_b;
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* RelationalOperator: '<S65>/Delta time limit exceeded' incorporates:
       *  Constant: '<S65>/Delta time limit'
       */
      DR18E_Testpult_B.Deltatimelimitexceeded_np =
        (DR18E_Testpult_B.SFunction1_o3_ej >=
         DR18E_Testpult_P.Deltatimelimit_Value);

      /* RelationalOperator: '<S65>/Prev. msg.  not sent' incorporates:
       *  Constant: '<S65>/Prev. msg. sent value'
       */
      DR18E_Testpult_B.Prevmsgnotsent_hi = (DR18E_Testpult_B.SFunction1_o1_cc !=
        DR18E_Testpult_P.Prevmsgsentvalue_Value);

      /* Logic: '<S65>/OR' */
      DR18E_Testpult_B.OR_pz = (DR18E_Testpult_B.Prevmsgnotsent_hi ||
        DR18E_Testpult_B.Deltatimelimitexceeded_np);

      /* RelationalOperator: '<S66>/Delta time limit exceeded' incorporates:
       *  Constant: '<S66>/Delta time limit'
       */
      DR18E_Testpult_B.Deltatimelimitexceeded_fo =
        (DR18E_Testpult_B.SFunction1_o3_nwq >=
         DR18E_Testpult_P.Deltatimelimit_Value_h);
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* Logic: '<S65>/Warn' */
      DR18E_Testpult_B.Warn_nt = (DR18E_Testpult_B.OR_pz &&
        DR18E_Testpult_B.Mem1_cqr && DR18E_Testpult_B.Mem2_j4 &&
        DR18E_Testpult_B.Mem3_iw && DR18E_Testpult_B.Mem4_ki);
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
      /* RelationalOperator: '<S66>/Prev. msg.  not sent' incorporates:
       *  Constant: '<S66>/Prev. msg. sent value'
       */
      DR18E_Testpult_B.Prevmsgnotsent_es = (DR18E_Testpult_B.SFunction1_o1_e5n
        != DR18E_Testpult_P.Prevmsgsentvalue_Value_o);

      /* Logic: '<S66>/OR' */
      DR18E_Testpult_B.OR_nv = (DR18E_Testpult_B.Prevmsgnotsent_es ||
        DR18E_Testpult_B.Deltatimelimitexceeded_fo);
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* Memory: '<S66>/Mem1' */
      DR18E_Testpult_B.Mem1_ax = DR18E_Testpult_DW.Mem1_PreviousInput_n3;

      /* Memory: '<S66>/Mem2' */
      DR18E_Testpult_B.Mem2_ol = DR18E_Testpult_DW.Mem2_PreviousInput_bd;

      /* Memory: '<S66>/Mem3' */
      DR18E_Testpult_B.Mem3_pj = DR18E_Testpult_DW.Mem3_PreviousInput_d;

      /* Memory: '<S66>/Mem4' */
      DR18E_Testpult_B.Mem4_oz = DR18E_Testpult_DW.Mem4_PreviousInput_kp;

      /* Logic: '<S66>/Warn' */
      DR18E_Testpult_B.Warn_j1 = (DR18E_Testpult_B.OR_nv &&
        DR18E_Testpult_B.Mem1_ax && DR18E_Testpult_B.Mem2_ol &&
        DR18E_Testpult_B.Mem3_pj && DR18E_Testpult_B.Mem4_oz);
    }
  }

  /* End of Outputs for SubSystem: '<S10>/Inverters TXUniversal' */

  /* Outputs for Enabled SubSystem: '<S10>/Umrichter Init' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  if ((rtmIsMajorTimeStep(DR18E_Testpult_M) &&
       DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) && rtmIsMajorTimeStep
      (DR18E_Testpult_M)) {
    if (DR18E_Testpult_B.O_Init) {
      if (!DR18E_Testpult_DW.UmrichterInit_MODE) {
        DR18E_Testpult_DW.UmrichterInit_MODE = true;
      }
    } else {
      if (DR18E_Testpult_DW.UmrichterInit_MODE) {
        DR18E_Testpult_DW.UmrichterInit_MODE = false;
      }
    }
  }

  if (DR18E_Testpult_DW.UmrichterInit_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* DataTypeConversion: '<S56>/Data Type Conversion1' */
      DR18E_Testpult_B.DataTypeConversion1_a = DR18E_Testpult_B.O_U1Init_Reg;

      /* DataTypeConversion: '<S56>/Data Type Conversion2' */
      DR18E_Testpult_B.DataTypeConversion2_j = DR18E_Testpult_B.O_U1Init_Zeit;
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
      /* DataTypeConversion: '<S56>/Data Type Conversion' incorporates:
       *  Constant: '<S56>/Constant'
       */
      DR18E_Testpult_B.DataTypeConversion_l = DR18E_Testpult_P.Constant_Value;

      /* S-Function (rti_commonblock): '<S67>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:257 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->processed) {
          can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_h2 = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->processed;
          DR18E_Testpult_B.SFunction1_o2_ai = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_cl = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->deltatime;
          DR18E_Testpult_B.SFunction1_o4_p2 = (real_T)
            can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101]->delaytime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "Befehl" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion_l ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "Register ID" (8|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion1_a ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "Repeat" (16|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion2_j ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101], 3,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* RateTransition: '<S69>/Rate Transition' incorporates:
       *  RateTransition: '<S69>/Rate Transition1'
       */
      if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
          DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
        DR18E_Testpult_B.RateTransition_p =
          DR18E_Testpult_DW.RateTransition_Buffer0;
        DR18E_Testpult_B.RateTransition1_i =
          DR18E_Testpult_DW.RateTransition1_Buffer0_l;
      }

      /* End of RateTransition: '<S69>/Rate Transition' */

      /* RelationalOperator: '<S69>/Delta time limit exceeded' incorporates:
       *  Constant: '<S69>/Delta time limit'
       */
      DR18E_Testpult_B.Deltatimelimitexceeded_hu =
        (DR18E_Testpult_B.RateTransition_p >=
         DR18E_Testpult_P.Deltatimelimit_Value_n);

      /* Memory: '<S69>/Mem1' */
      DR18E_Testpult_B.Mem1_ob = DR18E_Testpult_DW.Mem1_PreviousInput_p3;

      /* Memory: '<S69>/Mem2' */
      DR18E_Testpult_B.Mem2_nb = DR18E_Testpult_DW.Mem2_PreviousInput_pz;

      /* Memory: '<S69>/Mem3' */
      DR18E_Testpult_B.Mem3_k = DR18E_Testpult_DW.Mem3_PreviousInput_m;

      /* Memory: '<S69>/Mem4' */
      DR18E_Testpult_B.Mem4_gu = DR18E_Testpult_DW.Mem4_PreviousInput_g;

      /* RelationalOperator: '<S69>/Prev. msg.  not sent' incorporates:
       *  Constant: '<S69>/Prev. msg. sent value'
       */
      DR18E_Testpult_B.Prevmsgnotsent_im = (DR18E_Testpult_B.RateTransition1_i
        != DR18E_Testpult_P.Prevmsgsentvalue_Value_m);

      /* Logic: '<S69>/OR' */
      DR18E_Testpult_B.OR_bf = (DR18E_Testpult_B.Prevmsgnotsent_im ||
        DR18E_Testpult_B.Deltatimelimitexceeded_hu);

      /* Logic: '<S69>/Warn' */
      DR18E_Testpult_B.Warn_ej = (DR18E_Testpult_B.OR_bf &&
        DR18E_Testpult_B.Mem1_ob && DR18E_Testpult_B.Mem2_nb &&
        DR18E_Testpult_B.Mem3_k && DR18E_Testpult_B.Mem4_gu);

      /* DataTypeConversion: '<S56>/Data Type Conversion4' */
      DR18E_Testpult_B.DataTypeConversion4_k = DR18E_Testpult_B.O_U2Init_Reg;

      /* DataTypeConversion: '<S56>/Data Type Conversion5' */
      DR18E_Testpult_B.DataTypeConversion5_g = DR18E_Testpult_B.O_U2Init_Zeit;
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
      /* DataTypeConversion: '<S56>/Data Type Conversion3' incorporates:
       *  Constant: '<S56>/Constant1'
       */
      DR18E_Testpult_B.DataTypeConversion3_n = DR18E_Testpult_P.Constant1_Value;

      /* S-Function (rti_commonblock): '<S68>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:258 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]);

        /* Convert timestamp */
        if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->processed) {
          can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_pw = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->processed;
          DR18E_Testpult_B.SFunction1_o2_pk = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_ii = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->deltatime;
          DR18E_Testpult_B.SFunction1_o4_acu = (real_T)
            can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102]->delaytime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "Befehl" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion3_n ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "Register ID" (8|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion4_k ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "Repeat" (16|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion5_g ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102], 3,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* RateTransition: '<S70>/Rate Transition' incorporates:
       *  RateTransition: '<S70>/Rate Transition1'
       */
      if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
          DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
        DR18E_Testpult_B.RateTransition_a =
          DR18E_Testpult_DW.RateTransition_Buffer0_n;
        DR18E_Testpult_B.RateTransition1_m =
          DR18E_Testpult_DW.RateTransition1_Buffer0_i;
      }

      /* End of RateTransition: '<S70>/Rate Transition' */

      /* RelationalOperator: '<S70>/Delta time limit exceeded' incorporates:
       *  Constant: '<S70>/Delta time limit'
       */
      DR18E_Testpult_B.Deltatimelimitexceeded_ku =
        (DR18E_Testpult_B.RateTransition_a >=
         DR18E_Testpult_P.Deltatimelimit_Value_g);

      /* Memory: '<S70>/Mem1' */
      DR18E_Testpult_B.Mem1_la = DR18E_Testpult_DW.Mem1_PreviousInput_bf;

      /* Memory: '<S70>/Mem2' */
      DR18E_Testpult_B.Mem2_fi = DR18E_Testpult_DW.Mem2_PreviousInput_ee;

      /* Memory: '<S70>/Mem3' */
      DR18E_Testpult_B.Mem3_ib = DR18E_Testpult_DW.Mem3_PreviousInput_pq;

      /* Memory: '<S70>/Mem4' */
      DR18E_Testpult_B.Mem4_a = DR18E_Testpult_DW.Mem4_PreviousInput_cg;

      /* RelationalOperator: '<S70>/Prev. msg.  not sent' incorporates:
       *  Constant: '<S70>/Prev. msg. sent value'
       */
      DR18E_Testpult_B.Prevmsgnotsent_ly = (DR18E_Testpult_B.RateTransition1_m
        != DR18E_Testpult_P.Prevmsgsentvalue_Value_k);

      /* Logic: '<S70>/OR' */
      DR18E_Testpult_B.OR_p1 = (DR18E_Testpult_B.Prevmsgnotsent_ly ||
        DR18E_Testpult_B.Deltatimelimitexceeded_ku);

      /* Logic: '<S70>/Warn' */
      DR18E_Testpult_B.Warn_kj = (DR18E_Testpult_B.OR_p1 &&
        DR18E_Testpult_B.Mem1_la && DR18E_Testpult_B.Mem2_fi &&
        DR18E_Testpult_B.Mem3_ib && DR18E_Testpult_B.Mem4_a);
    }
  }

  /* End of Outputs for SubSystem: '<S10>/Umrichter Init' */

  /* RateTransition: '<S11>/Rate Transition' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    DR18E_Testpult_B.RateTransition_e = DR18E_Testpult_B.O_fBlink_Start;

    /* DataTypeConversion: '<S11>/Data Type Conversion1' */
    DR18E_Testpult_B.DataTypeConversion1_n = DR18E_Testpult_B.ORSicherheitskreis;

    /* DataTypeConversion: '<S11>/Data Type Conversion3' */
    DR18E_Testpult_B.DataTypeConversion3_m = DR18E_Testpult_B.Logic_fh[0];

    /* S-Function (rti_commonblock): '<S266>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "GLV_AMS_STATe" Id:582 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->processed) {
          DR18E_Testpult_B.SFunction1_o4_llh = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->processed;
          DR18E_Testpult_B.SFunction1_o5_l4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->timestamp;
          DR18E_Testpult_B.SFunction1_o6_b = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "GLV_Voltage_ges" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_bj = 0.001 * ( ((real_T)
              CAN_Sgn.SignedSgn) );

            /* ...... "GLV_Err_Comp_Nr" (24|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o2_jo = ((real_T) CAN_Sgn.UnsignedSgn);

            /* ...... "GLV_Errorbyte" (32|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o3_o2 = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o4_llh = 0.0;
      }
    }

    /* DiscretePulseGenerator: '<S527>/Pulse Generator' */
    DR18E_Testpult_B.PulseGenerator_p = (DR18E_Testpult_DW.clockTickCounter_d <
      DR18E_Testpult_P.PulseGenerator_Duty_h) &&
      (DR18E_Testpult_DW.clockTickCounter_d >= 0) ?
      DR18E_Testpult_P.PulseGenerator_Amp_o : 0.0;
    if (DR18E_Testpult_DW.clockTickCounter_d >=
        DR18E_Testpult_P.PulseGenerator_Period_c - 1.0) {
      DR18E_Testpult_DW.clockTickCounter_d = 0;
    } else {
      DR18E_Testpult_DW.clockTickCounter_d++;
    }

    /* End of DiscretePulseGenerator: '<S527>/Pulse Generator' */

    /* Switch: '<S527>/Switch' incorporates:
     *  Constant: '<S527>/Cubatt'
     */
    if (DR18E_Testpult_B.SFunction1_o1_bj >= DR18E_Testpult_P.Switch_Threshold_e)
    {
      DR18E_Testpult_B.LV_Undervoltage = DR18E_Testpult_P.Cubatt_Value;
    } else {
      DR18E_Testpult_B.LV_Undervoltage = DR18E_Testpult_B.PulseGenerator_p;
    }

    /* End of Switch: '<S527>/Switch' */

    /* Logic: '<S1>/or' */
    DR18E_Testpult_B.or = ((DR18E_Testpult_B.LV_Undervoltage != 0.0) ||
      DR18E_Testpult_B.Logic_f[0]);

    /* DataTypeConversion: '<S11>/Data Type Conversion2' */
    DR18E_Testpult_B.DataTypeConversion2_o = DR18E_Testpult_B.or;

    /* UnitDelay: '<S72>/Delay Input1' */
    DR18E_Testpult_B.Uk1_n5 = DR18E_Testpult_DW.DelayInput1_DSTATE_f2m;

    /* RelationalOperator: '<S72>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_jo =
      (DR18E_Testpult_B.RateTransition_e != DR18E_Testpult_B.Uk1_n5);

    /* UnitDelay: '<S73>/Delay Input1' */
    DR18E_Testpult_B.Uk1_pv = DR18E_Testpult_DW.DelayInput1_DSTATE_ot;

    /* RelationalOperator: '<S73>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_iq =
      (DR18E_Testpult_B.DataTypeConversion1_n != DR18E_Testpult_B.Uk1_pv);

    /* UnitDelay: '<S74>/Delay Input1' */
    DR18E_Testpult_B.Uk1_o = DR18E_Testpult_DW.DelayInput1_DSTATE_m;

    /* RelationalOperator: '<S74>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_d =
      (DR18E_Testpult_B.DataTypeConversion3_m != DR18E_Testpult_B.Uk1_o);

    /* Logic: '<S11>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_et =
      (DR18E_Testpult_B.FixPtRelationalOperator_jo ||
       DR18E_Testpult_B.FixPtRelationalOperator_iq ||
       DR18E_Testpult_B.FixPtRelationalOperator_d);

    /* Outputs for Enabled SubSystem: '<S11>/Dashboard_LEDs' incorporates:
     *  EnablePort: '<S71>/Enable'
     */
    if (DR18E_Testpult_B.LogicalOperator_et) {
      /* S-Function (rti_commonblock): '<S71>/S-Function1' */
      /* This comment workarounds a code generation problem */

      /* dSPACE RTICAN TX Message Block: "Dashboard_LEDs" Id:788 */
      {
        UInt32 CAN_Msg[8] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

        Float32 delayTime = 0.0;

        /* ... Read status and timestamp info (previous message) */
        can_tp1_msg_read(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]);

        /* Convert timestamp */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->processed) {
          can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->timestamp =
            rtk_dsts_time_to_simtime_convert
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->timestamp);
        }

        /* Messages with timestamp zero have been received in pause/stop state
           and must not be handled.
         */
        if (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->timestamp > 0.0) {
          DR18E_Testpult_B.SFunction1_o1_la = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->processed;
          DR18E_Testpult_B.SFunction1_o2_bxo = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->timestamp;
          DR18E_Testpult_B.SFunction1_o3_os = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314]->deltatime;
        }

        /* ... Encode Simulink signals of TX and RM blocks*/
        {
          rtican_Signal_t CAN_Sgn;

          /* ...... "Startbutton_LED" (0|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32) (( DR18E_Testpult_B.RateTransition_e )
            + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[0] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "Notaus_Cockpit_LED" (8|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion1_n ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[1] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "IMD_LED" (16|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion3_m ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[2] |= CAN_Sgn.SgnBytes.Byte0;

          /* ...... "AMS_LED" (24|8, standard signal, unsigned int, little endian) */
          /* Add or substract 0.5 in order to round to nearest integer */
          CAN_Sgn.UnsignedSgn = (UInt32)
            (( DR18E_Testpult_B.DataTypeConversion2_o ) + 0.5);
          CAN_Sgn.UnsignedSgn &= 0x000000FF;
          CAN_Msg[3] |= CAN_Sgn.SgnBytes.Byte0;
        }

        /* ... Write the data to the CAN microcontroller and trigger the sending of the message */
        can_tp1_msg_send(can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314], 4,
                         &(CAN_Msg[0]), delayTime);
      }
    }

    /* End of Outputs for SubSystem: '<S11>/Dashboard_LEDs' */

    /* UnitDelay: '<S75>/Delay Input1' */
    DR18E_Testpult_B.Uk1_g = DR18E_Testpult_DW.DelayInput1_DSTATE_a;

    /* RelationalOperator: '<S75>/FixPt Relational Operator' */
    DR18E_Testpult_B.FixPtRelationalOperator_au =
      (DR18E_Testpult_B.DataTypeConversion2_o != DR18E_Testpult_B.Uk1_g);

    /* RelationalOperator: '<S76>/Delta time limit exceeded' incorporates:
     *  Constant: '<S76>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_em =
      (DR18E_Testpult_B.SFunction1_o3_os >=
       DR18E_Testpult_P.Deltatimelimit_Value_fq);

    /* Memory: '<S76>/Mem1' */
    DR18E_Testpult_B.Mem1_h4 = DR18E_Testpult_DW.Mem1_PreviousInput_fm;

    /* Memory: '<S76>/Mem2' */
    DR18E_Testpult_B.Mem2_m = DR18E_Testpult_DW.Mem2_PreviousInput_ma;

    /* Memory: '<S76>/Mem3' */
    DR18E_Testpult_B.Mem3_ch = DR18E_Testpult_DW.Mem3_PreviousInput_j;

    /* Memory: '<S76>/Mem4' */
    DR18E_Testpult_B.Mem4_m2 = DR18E_Testpult_DW.Mem4_PreviousInput_lt;

    /* RelationalOperator: '<S76>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S76>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_p = (DR18E_Testpult_B.SFunction1_o1_la !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_jb);

    /* Logic: '<S76>/OR' */
    DR18E_Testpult_B.OR_np = (DR18E_Testpult_B.Prevmsgnotsent_p ||
      DR18E_Testpult_B.Deltatimelimitexceeded_em);

    /* Logic: '<S76>/Warn' */
    DR18E_Testpult_B.Warn_g2 = (DR18E_Testpult_B.OR_np &&
      DR18E_Testpult_B.Mem1_h4 && DR18E_Testpult_B.Mem2_m &&
      DR18E_Testpult_B.Mem3_ch && DR18E_Testpult_B.Mem4_m2);
  }

  /* End of RateTransition: '<S11>/Rate Transition' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* S-Function (rti_commonblock): '<S183>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK1A" Id:336 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->processed) {
          DR18E_Testpult_B.SFunction1_o5_n = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->processed;
          DR18E_Testpult_B.SFunction1_o6_gp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_g = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_1" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_jt = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_2" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ld = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_3" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_bh = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_4" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_if = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_n = 0.0;
      }
    }

    /* Gain: '<S87>/Gain' */
    DR18E_Testpult_B.Gain_c = DR18E_Testpult_P.Gain_Gain_fm *
      DR18E_Testpult_B.SFunction1_o1_jt;

    /* DataTypeConversion: '<S87>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_a = (real32_T)DR18E_Testpult_B.Gain_c;

    /* S-Function (rti_commonblock): '<S99>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(UBattZelle_all_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_a);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Outputs for Atomic SubSystem: '<S187>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_n,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem,
      &DR18E_Testpult_DW.Subsystem, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem);

    /* End of Outputs for SubSystem: '<S187>/Subsystem' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S184>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK1B" Id:337 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->processed) {
          DR18E_Testpult_B.SFunction1_o5_lz = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->processed;
          DR18E_Testpult_B.SFunction1_o6_km = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_f = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_5" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_ff = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_6" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_je = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_7" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_hv = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_8" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_ac = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_lz = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S186>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_lz,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_d,
      &DR18E_Testpult_DW.Subsystem_d, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_d);

    /* End of Outputs for SubSystem: '<S186>/Subsystem' */

    /* S-Function (rti_commonblock): '<S185>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK1C" Id:338 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->processed) {
          DR18E_Testpult_B.SFunction1_o5_fc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->processed;
          DR18E_Testpult_B.SFunction1_o6_p0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_p = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_9" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_k = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_10" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_er = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_11" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_aj = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_12" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_lw = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_fc = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S188>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_fc,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_f,
      &DR18E_Testpult_DW.Subsystem_f, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_f);

    /* End of Outputs for SubSystem: '<S188>/Subsystem' */

    /* Logic: '<S181>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_m = ((DR18E_Testpult_B.Subsystem.Switch1 !=
      0.0) || (DR18E_Testpult_B.Subsystem_d.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_f.Switch1 != 0.0));

    /* S-Function (rti_commonblock): '<S192>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK2A" Id:339 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->processed) {
          DR18E_Testpult_B.SFunction1_o5_fb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->processed;
          DR18E_Testpult_B.SFunction1_o6_n = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_hc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_13" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_mg = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_14" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_l2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_15" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_gq = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_16" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_dl = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_fb = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S196>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_fb,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_g,
      &DR18E_Testpult_DW.Subsystem_g, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_g);

    /* End of Outputs for SubSystem: '<S196>/Subsystem' */

    /* S-Function (rti_commonblock): '<S193>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK2B" Id:340 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->processed) {
          DR18E_Testpult_B.SFunction1_o5_e5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->processed;
          DR18E_Testpult_B.SFunction1_o6_e = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_f1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_17" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_if = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_18" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_aa = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_19" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_ey = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_20" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_hbx = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_e5 = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S195>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_e5,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_j,
      &DR18E_Testpult_DW.Subsystem_j, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_j);

    /* End of Outputs for SubSystem: '<S195>/Subsystem' */

    /* S-Function (rti_commonblock): '<S194>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK2C" Id:341 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->processed) {
          DR18E_Testpult_B.SFunction1_o5_na = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->processed;
          DR18E_Testpult_B.SFunction1_o6_av = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_mh = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_21" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_kq = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_22" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_o5 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_23" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_nw = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_24" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_b = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_na = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S197>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_na,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_n,
      &DR18E_Testpult_DW.Subsystem_n, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_n);

    /* End of Outputs for SubSystem: '<S197>/Subsystem' */

    /* Logic: '<S182>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_gp = ((DR18E_Testpult_B.Subsystem_g.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_j.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_n.Switch1 != 0.0));

    /* Logic: '<S95>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_n = (DR18E_Testpult_B.LogicalOperator_m ||
      DR18E_Testpult_B.LogicalOperator_gp);

    /* S-Function (rti_commonblock): '<S203>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK3A" Id:342 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->processed) {
          DR18E_Testpult_B.SFunction1_o5_h = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->processed;
          DR18E_Testpult_B.SFunction1_o6_ns = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_nj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_25" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_e2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_26" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_m = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_27" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_d2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_28" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_jt = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_h = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S207>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_h,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_b,
      &DR18E_Testpult_DW.Subsystem_b, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_b);

    /* End of Outputs for SubSystem: '<S207>/Subsystem' */

    /* S-Function (rti_commonblock): '<S204>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK3B" Id:343 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ne = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->processed;
          DR18E_Testpult_B.SFunction1_o6_c = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_j = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_29" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_me = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_30" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ih = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_31" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_jy = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_32" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_b4 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ne = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S206>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_ne,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_l,
      &DR18E_Testpult_DW.Subsystem_l, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_l);

    /* End of Outputs for SubSystem: '<S206>/Subsystem' */

    /* S-Function (rti_commonblock): '<S205>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK3C" Id:344 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->processed) {
          DR18E_Testpult_B.SFunction1_o5_g0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->processed;
          DR18E_Testpult_B.SFunction1_o6_an = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ps = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_33" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_gl = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_34" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_jm = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_35" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_lw = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_36" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_f3 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_g0 = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S208>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_g0,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_i,
      &DR18E_Testpult_DW.Subsystem_i, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_i);

    /* End of Outputs for SubSystem: '<S208>/Subsystem' */

    /* Logic: '<S201>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_o = ((DR18E_Testpult_B.Subsystem_b.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_l.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_i.Switch1 != 0.0));

    /* S-Function (rti_commonblock): '<S212>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK4A" Id:345 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->processed) {
          DR18E_Testpult_B.SFunction1_o5_gm = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->processed;
          DR18E_Testpult_B.SFunction1_o6_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_gc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_37" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_or = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_38" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_fz = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_39" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_ew = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_40" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_ay = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_gm = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S216>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_gm,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_k,
      &DR18E_Testpult_DW.Subsystem_k, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_k);

    /* End of Outputs for SubSystem: '<S216>/Subsystem' */

    /* S-Function (rti_commonblock): '<S213>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK4B" Id:346 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->processed) {
          DR18E_Testpult_B.SFunction1_o5_j1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->processed;
          DR18E_Testpult_B.SFunction1_o6_j1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_kr = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_41" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_dm = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_42" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ot = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_43" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_c = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_44" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_cu = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_j1 = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S215>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_j1,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_bk,
      &DR18E_Testpult_DW.Subsystem_bk, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_bk);

    /* End of Outputs for SubSystem: '<S215>/Subsystem' */

    /* S-Function (rti_commonblock): '<S214>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK4C" Id:347 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->processed) {
          DR18E_Testpult_B.SFunction1_o5_nr = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->processed;
          DR18E_Testpult_B.SFunction1_o6_c5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_bu = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_45" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_nn = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_46" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_jt = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_47" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_bs = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_48" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_bc = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_nr = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S217>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_nr,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_a,
      &DR18E_Testpult_DW.Subsystem_a, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_a);

    /* End of Outputs for SubSystem: '<S217>/Subsystem' */

    /* Logic: '<S202>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_l = ((DR18E_Testpult_B.Subsystem_k.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_bk.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_a.Switch1 != 0.0));

    /* Logic: '<S96>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_nz = (DR18E_Testpult_B.LogicalOperator_o ||
      DR18E_Testpult_B.LogicalOperator_l);

    /* S-Function (rti_commonblock): '<S223>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK5A" Id:348 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ms = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->processed;
          DR18E_Testpult_B.SFunction1_o6_p2 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_e = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_49" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_hc = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_50" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_mo = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_51" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_oj = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_52" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_im = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ms = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S227>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_ms,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_js,
      &DR18E_Testpult_DW.Subsystem_js, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_js);

    /* End of Outputs for SubSystem: '<S227>/Subsystem' */

    /* S-Function (rti_commonblock): '<S224>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK5B" Id:349 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->processed) {
          DR18E_Testpult_B.SFunction1_o5_es = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->processed;
          DR18E_Testpult_B.SFunction1_o6_ez = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_i = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_53" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_pb = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_54" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_l4 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_55" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_ny = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_56" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_dm = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_es = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S226>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_es,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_gd,
      &DR18E_Testpult_DW.Subsystem_gd, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_gd);

    /* End of Outputs for SubSystem: '<S226>/Subsystem' */

    /* S-Function (rti_commonblock): '<S225>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK5C" Id:350 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->processed) {
          DR18E_Testpult_B.SFunction1_o5_d = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->processed;
          DR18E_Testpult_B.SFunction1_o6_h = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_j5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_57" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_ee = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_58" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_pu = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_59" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_da = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_60" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_fs = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_d = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S228>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_d,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_be,
      &DR18E_Testpult_DW.Subsystem_be, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_be);

    /* End of Outputs for SubSystem: '<S228>/Subsystem' */

    /* Logic: '<S221>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_i = ((DR18E_Testpult_B.Subsystem_js.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_gd.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_be.Switch1 != 0.0));

    /* S-Function (rti_commonblock): '<S232>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK6A" Id:352 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ex = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->processed;
          DR18E_Testpult_B.SFunction1_o6_dj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_g3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_61" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_mv = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_62" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ka = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_63" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_id = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_64" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_ix = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ex = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S236>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_ex,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_fq,
      &DR18E_Testpult_DW.Subsystem_fq, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_fq);

    /* End of Outputs for SubSystem: '<S236>/Subsystem' */

    /* S-Function (rti_commonblock): '<S233>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK6B" Id:353 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->processed) {
          DR18E_Testpult_B.SFunction1_o5_esb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->processed;
          DR18E_Testpult_B.SFunction1_o6_p4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_c = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_65" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_mez = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_66" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ee = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_67" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_kx = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_68" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_jw = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_esb = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S235>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_esb,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_fr,
      &DR18E_Testpult_DW.Subsystem_fr, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_fr);

    /* End of Outputs for SubSystem: '<S235>/Subsystem' */

    /* S-Function (rti_commonblock): '<S234>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK6C" Id:354 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->processed) {
          DR18E_Testpult_B.SFunction1_o5_mxp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->processed;
          DR18E_Testpult_B.SFunction1_o6_kz = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_me = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_69" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_e5 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_70" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_hp = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_71" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_mt = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_72" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_nd = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_mxp = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S237>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_mxp,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_c,
      &DR18E_Testpult_DW.Subsystem_c, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_c);

    /* End of Outputs for SubSystem: '<S237>/Subsystem' */

    /* Logic: '<S222>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_of =
      ((DR18E_Testpult_B.Subsystem_fq.Switch1 != 0.0) ||
       (DR18E_Testpult_B.Subsystem_fr.Switch1 != 0.0) ||
       (DR18E_Testpult_B.Subsystem_c.Switch1 != 0.0));

    /* Logic: '<S97>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_c = (DR18E_Testpult_B.LogicalOperator_i ||
      DR18E_Testpult_B.LogicalOperator_of);

    /* S-Function (rti_commonblock): '<S243>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK7A" Id:355 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->processed) {
          DR18E_Testpult_B.SFunction1_o5_pq = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->processed;
          DR18E_Testpult_B.SFunction1_o6_jj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_jz = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_73" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_o2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_74" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_kp = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_75" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_k4 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_76" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_fz = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_pq = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S247>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_pq,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_o,
      &DR18E_Testpult_DW.Subsystem_o, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_o);

    /* End of Outputs for SubSystem: '<S247>/Subsystem' */

    /* S-Function (rti_commonblock): '<S244>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK7B" Id:356 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->processed) {
          DR18E_Testpult_B.SFunction1_o5_nm = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->processed;
          DR18E_Testpult_B.SFunction1_o6_m = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ha = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_77" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_od = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_78" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ls = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_79" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_fw = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_80" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_fm = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_nm = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S246>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_nm,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_n4,
      &DR18E_Testpult_DW.Subsystem_n4, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_n4);

    /* End of Outputs for SubSystem: '<S246>/Subsystem' */

    /* S-Function (rti_commonblock): '<S245>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK7C" Id:357 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->processed) {
          DR18E_Testpult_B.SFunction1_o5_em = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->processed;
          DR18E_Testpult_B.SFunction1_o6_bd = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_oi = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_81" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_in = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_82" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_pg = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_83" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_mg = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_84" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_o = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_em = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S248>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_em,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_oy,
      &DR18E_Testpult_DW.Subsystem_oy, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_oy);

    /* End of Outputs for SubSystem: '<S248>/Subsystem' */

    /* Logic: '<S241>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_lx = ((DR18E_Testpult_B.Subsystem_o.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_n4.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_oy.Switch1 != 0.0));

    /* S-Function (rti_commonblock): '<S252>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK8A" Id:358 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->processed) {
          DR18E_Testpult_B.SFunction1_o5_al = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->processed;
          DR18E_Testpult_B.SFunction1_o6_oh = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ng = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_85" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_o5 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_86" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_bz = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_87" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_cr = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_88" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_gl = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_al = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S256>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_al,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_dm,
      &DR18E_Testpult_DW.Subsystem_dm, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_dm);

    /* End of Outputs for SubSystem: '<S256>/Subsystem' */

    /* S-Function (rti_commonblock): '<S253>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK8B" Id:359 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->processed) {
          DR18E_Testpult_B.SFunction1_o5_j3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->processed;
          DR18E_Testpult_B.SFunction1_o6_mp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_cd = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_89" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_jr = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_90" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_bv = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_91" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_jb = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_92" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_ar = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_j3 = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S255>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_j3,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_e,
      &DR18E_Testpult_DW.Subsystem_e, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_e);

    /* End of Outputs for SubSystem: '<S255>/Subsystem' */

    /* S-Function (rti_commonblock): '<S254>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK8C" Id:360 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->processed) {
          DR18E_Testpult_B.SFunction1_o5_of = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->processed;
          DR18E_Testpult_B.SFunction1_o6_et = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_l = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_93" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_ll = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_94" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_pc = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_95" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_kh = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_96" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_id = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_of = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S257>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_of,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_kn,
      &DR18E_Testpult_DW.Subsystem_kn, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_kn);

    /* End of Outputs for SubSystem: '<S257>/Subsystem' */

    /* Logic: '<S242>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_b = ((DR18E_Testpult_B.Subsystem_dm.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_e.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_kn.Switch1 != 0.0));

    /* Logic: '<S98>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_nc = (DR18E_Testpult_B.LogicalOperator_lx ||
      DR18E_Testpult_B.LogicalOperator_b);

    /* Outputs for Atomic SubSystem: '<S91>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o8,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_ld,
      &DR18E_Testpult_DW.Subsystem_ld, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_ld);

    /* End of Outputs for SubSystem: '<S91>/Subsystem' */

    /* S-Function (rti_commonblock): '<S172>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK9A" Id:361 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->processed) {
          DR18E_Testpult_B.SFunction1_o5_jj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->processed;
          DR18E_Testpult_B.SFunction1_o6_c0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_j0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_97" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_oe = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_98" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_mv = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_99" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_h1i = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_100" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_jb = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_jj = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S176>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_jj,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_e3,
      &DR18E_Testpult_DW.Subsystem_e3, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_e3);

    /* End of Outputs for SubSystem: '<S176>/Subsystem' */

    /* S-Function (rti_commonblock): '<S173>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK9B" Id:362 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->processed) {
          DR18E_Testpult_B.SFunction1_o5_as = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->processed;
          DR18E_Testpult_B.SFunction1_o6_a1 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_ou = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_101" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_gy = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_102" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_i2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_103" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_mv = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_104" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_oc = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_as = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S175>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_as,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_kl,
      &DR18E_Testpult_DW.Subsystem_kl, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_kl);

    /* End of Outputs for SubSystem: '<S175>/Subsystem' */

    /* S-Function (rti_commonblock): '<S174>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK9C" Id:363 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->processed) {
          DR18E_Testpult_B.SFunction1_o5_cl = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->processed;
          DR18E_Testpult_B.SFunction1_o6_od = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_cz = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_105" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_gm = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_106" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_ng = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_107" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_e2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_108" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_ey = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_cl = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S177>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_cl,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_bek,
      &DR18E_Testpult_DW.Subsystem_bek, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_bek);

    /* End of Outputs for SubSystem: '<S177>/Subsystem' */

    /* Logic: '<S162>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_j = ((DR18E_Testpult_B.Subsystem_e3.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_kl.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_bek.Switch1 != 0.0));

    /* S-Function (rti_commonblock): '<S163>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK10A" Id:364 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->processed) {
          DR18E_Testpult_B.SFunction1_o5_jd = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->processed;
          DR18E_Testpult_B.SFunction1_o6_lx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_d = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_109" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_m2 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_110" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_d3 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_111" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_ep = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_112" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_n4 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_jd = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S167>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_jd,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_m,
      &DR18E_Testpult_DW.Subsystem_m, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_m);

    /* End of Outputs for SubSystem: '<S167>/Subsystem' */

    /* S-Function (rti_commonblock): '<S164>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK10B" Id:365 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->processed) {
          DR18E_Testpult_B.SFunction1_o5_nrg = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->processed;
          DR18E_Testpult_B.SFunction1_o6_dr = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_p3 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_113" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_lh = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_114" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_l31 = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_115" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_crb = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_116" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_kd = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_nrg = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S166>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_nrg,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_nc,
      &DR18E_Testpult_DW.Subsystem_nc, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_nc);

    /* End of Outputs for SubSystem: '<S166>/Subsystem' */

    /* S-Function (rti_commonblock): '<S165>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "HV_STK10C" Id:366 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->processed) {
          DR18E_Testpult_B.SFunction1_o5_od = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->processed;
          DR18E_Testpult_B.SFunction1_o6_gf = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_go = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Cell_Voltage_117" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_oo = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_118" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_os = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_119" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_pr = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "Cell_Voltage_120" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_fo = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_od = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S168>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_od,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_lz,
      &DR18E_Testpult_DW.Subsystem_lz, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_lz);

    /* End of Outputs for SubSystem: '<S168>/Subsystem' */

    /* Logic: '<S161>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_k = ((DR18E_Testpult_B.Subsystem_m.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_nc.Switch1 != 0.0) ||
      (DR18E_Testpult_B.Subsystem_lz.Switch1 != 0.0));

    /* Logic: '<S94>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_b1 = (DR18E_Testpult_B.LogicalOperator_j ||
      DR18E_Testpult_B.LogicalOperator_k);

    /* Logic: '<S77>/BMS Timout Error' */
    DR18E_Testpult_B.BMSTimeoutError = (DR18E_Testpult_B.LogicalOperator_n ||
      DR18E_Testpult_B.LogicalOperator_nz || DR18E_Testpult_B.LogicalOperator_c ||
      DR18E_Testpult_B.LogicalOperator_nc ||
      (DR18E_Testpult_B.Subsystem_ld.Switch1 != 0.0) ||
      DR18E_Testpult_B.LogicalOperator_b1);

    /* DataTypeConversion: '<S77>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_f = DR18E_Testpult_B.BMSTimeoutError;

    /* S-Function (rti_commonblock): '<S89>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Precharge_Status" Id:561 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->processed) {
          DR18E_Testpult_B.SFunction1_o2_m0 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->processed;
          DR18E_Testpult_B.SFunction1_o3_dp = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_od = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Precharge_Relay_Status" (0|8, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.UnsignedSgn &= 0x000000FF;
            DR18E_Testpult_B.SFunction1_o1_fn = ((real_T) CAN_Sgn.UnsignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_m0 = 0.0;
      }
    }

    /* Gain: '<S77>/Gain' */
    DR18E_Testpult_B.Precharge_Relay_Status = DR18E_Testpult_P.Gain_Gain_kl *
      DR18E_Testpult_B.SFunction1_o1_fn;

    /* RelationalOperator: '<S90>/Delta time limit exceeded' incorporates:
     *  Constant: '<S90>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_dt =
      (DR18E_Testpult_B.SFunction1_o4_od >=
       DR18E_Testpult_P.Deltatimelimit_Value_j);

    /* Memory: '<S90>/Mem1' */
    DR18E_Testpult_B.Mem1_hb = DR18E_Testpult_DW.Mem1_PreviousInput_o;

    /* Memory: '<S90>/Mem2' */
    DR18E_Testpult_B.Mem2_fux = DR18E_Testpult_DW.Mem2_PreviousInput_a;

    /* Memory: '<S90>/Mem3' */
    DR18E_Testpult_B.Mem3_b = DR18E_Testpult_DW.Mem3_PreviousInput_e2;

    /* Memory: '<S90>/Mem4' */
    DR18E_Testpult_B.Mem4_mr = DR18E_Testpult_DW.Mem4_PreviousInput_o;

    /* RelationalOperator: '<S90>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S90>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_bp = (DR18E_Testpult_B.SFunction1_o2_m0 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_gg);

    /* Logic: '<S90>/OR' */
    DR18E_Testpult_B.OR_a = (DR18E_Testpult_B.Prevmsgnotsent_bp ||
      DR18E_Testpult_B.Deltatimelimitexceeded_dt);

    /* Logic: '<S90>/Warn' */
    DR18E_Testpult_B.Warn_e = (DR18E_Testpult_B.OR_a && DR18E_Testpult_B.Mem1_hb
      && DR18E_Testpult_B.Mem2_fux && DR18E_Testpult_B.Mem3_b &&
      DR18E_Testpult_B.Mem4_mr);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* Outputs for Atomic SubSystem: '<S111>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_ig,
      &DR18E_Testpult_DW.Subsystem_ig, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_ig);

    /* End of Outputs for SubSystem: '<S111>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S113>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_n,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_im,
      &DR18E_Testpult_DW.Subsystem_im, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_im);

    /* End of Outputs for SubSystem: '<S113>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S114>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_p,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_dl,
      &DR18E_Testpult_DW.Subsystem_dl, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_dl);

    /* End of Outputs for SubSystem: '<S114>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S115>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_l,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_om,
      &DR18E_Testpult_DW.Subsystem_om, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_om);

    /* End of Outputs for SubSystem: '<S115>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S116>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_pf,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_fe,
      &DR18E_Testpult_DW.Subsystem_fe, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_fe);

    /* End of Outputs for SubSystem: '<S116>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S117>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_h,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_nm,
      &DR18E_Testpult_DW.Subsystem_nm, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_nm);

    /* End of Outputs for SubSystem: '<S117>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S118>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_d,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_la,
      &DR18E_Testpult_DW.Subsystem_la, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_la);

    /* End of Outputs for SubSystem: '<S118>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S119>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_i,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_co,
      &DR18E_Testpult_DW.Subsystem_co, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_co);

    /* End of Outputs for SubSystem: '<S119>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S120>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_a,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_nx,
      &DR18E_Testpult_DW.Subsystem_nx, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_nx);

    /* End of Outputs for SubSystem: '<S120>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S112>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_a,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_e1,
      &DR18E_Testpult_DW.Subsystem_e1, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_e1);

    /* End of Outputs for SubSystem: '<S112>/Subsystem' */

    /* Logic: '<S92>/Logical Operator12' */
    DR18E_Testpult_B.LogicalOperator12 = ((DR18E_Testpult_B.Subsystem_nx.Switch1
      != 0.0) || (DR18E_Testpult_B.Subsystem_e1.Switch1 != 0.0));

    /* Logic: '<S92>/Logical Operator9' */
    DR18E_Testpult_B.LogicalOperator9 = ((DR18E_Testpult_B.Subsystem_co.Switch1
      != 0.0) || DR18E_Testpult_B.LogicalOperator12);

    /* Logic: '<S92>/Logical Operator8' */
    DR18E_Testpult_B.LogicalOperator8 = ((DR18E_Testpult_B.Subsystem_la.Switch1
      != 0.0) || DR18E_Testpult_B.LogicalOperator9);

    /* Logic: '<S92>/Logical Operator7' */
    DR18E_Testpult_B.LogicalOperator7 = DR18E_Testpult_B.LogicalOperator8;

    /* Logic: '<S92>/Logical Operator6' */
    DR18E_Testpult_B.LogicalOperator6 = ((DR18E_Testpult_B.Subsystem_nm.Switch1
      != 0.0) || DR18E_Testpult_B.LogicalOperator7);

    /* Logic: '<S92>/Logical Operator5' */
    DR18E_Testpult_B.LogicalOperator5 = ((DR18E_Testpult_B.Subsystem_fe.Switch1
      != 0.0) || DR18E_Testpult_B.LogicalOperator6);

    /* Logic: '<S92>/Logical Operator4' */
    DR18E_Testpult_B.LogicalOperator4_h =
      ((DR18E_Testpult_B.Subsystem_om.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator5);

    /* Logic: '<S92>/Logical Operator3' */
    DR18E_Testpult_B.LogicalOperator3_o =
      ((DR18E_Testpult_B.Subsystem_dl.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator4_h);

    /* Logic: '<S92>/Logical Operator2' */
    DR18E_Testpult_B.LogicalOperator2_i =
      ((DR18E_Testpult_B.Subsystem_im.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator3_o);

    /* Logic: '<S92>/Logical Operator1' */
    DR18E_Testpult_B.LogicalOperator1_d =
      ((DR18E_Testpult_B.Subsystem_ig.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator2_i);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* Outputs for Atomic SubSystem: '<S141>/Subsystem' */

    /* Constant: '<S77>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_k,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_ms,
      &DR18E_Testpult_DW.Subsystem_ms, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_ms);

    /* End of Outputs for SubSystem: '<S141>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S143>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_e3,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_ot,
      &DR18E_Testpult_DW.Subsystem_ot, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_ot);

    /* End of Outputs for SubSystem: '<S143>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S144>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_f,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_eq,
      &DR18E_Testpult_DW.Subsystem_eq, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_eq);

    /* End of Outputs for SubSystem: '<S144>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S145>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_f,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_fqo,
      &DR18E_Testpult_DW.Subsystem_fqo, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_fqo);

    /* End of Outputs for SubSystem: '<S145>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S146>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_kx,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_c0,
      &DR18E_Testpult_DW.Subsystem_c0, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_c0);

    /* End of Outputs for SubSystem: '<S146>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S147>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_ea,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_mf,
      &DR18E_Testpult_DW.Subsystem_mf, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_mf);

    /* End of Outputs for SubSystem: '<S147>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S148>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_d1,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_jsn,
      &DR18E_Testpult_DW.Subsystem_jsn, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_jsn);

    /* End of Outputs for SubSystem: '<S148>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S149>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_lb,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_ih,
      &DR18E_Testpult_DW.Subsystem_ih, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_ih);

    /* End of Outputs for SubSystem: '<S149>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S150>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_g,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_h,
      &DR18E_Testpult_DW.Subsystem_h, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_h);

    /* End of Outputs for SubSystem: '<S150>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S142>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o3_ht,
      DR18E_Testpult_P.Timeoutsamples_Value, &DR18E_Testpult_B.Subsystem_nw,
      &DR18E_Testpult_DW.Subsystem_nw, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_nw);

    /* End of Outputs for SubSystem: '<S142>/Subsystem' */

    /* Logic: '<S93>/Logical Operator12' */
    DR18E_Testpult_B.LogicalOperator12_j =
      ((DR18E_Testpult_B.Subsystem_h.Switch1 != 0.0) ||
       (DR18E_Testpult_B.Subsystem_nw.Switch1 != 0.0));

    /* Logic: '<S93>/Logical Operator9' */
    DR18E_Testpult_B.LogicalOperator9_j =
      ((DR18E_Testpult_B.Subsystem_ih.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator12_j);

    /* Logic: '<S93>/Logical Operator8' */
    DR18E_Testpult_B.LogicalOperator8_o =
      ((DR18E_Testpult_B.Subsystem_jsn.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator9_j);

    /* Logic: '<S93>/Logical Operator7' */
    DR18E_Testpult_B.LogicalOperator7_k = DR18E_Testpult_B.LogicalOperator8_o;

    /* Logic: '<S93>/Logical Operator6' */
    DR18E_Testpult_B.LogicalOperator6_p =
      ((DR18E_Testpult_B.Subsystem_mf.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator7_k);

    /* Logic: '<S93>/Logical Operator5' */
    DR18E_Testpult_B.LogicalOperator5_d =
      ((DR18E_Testpult_B.Subsystem_c0.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator6_p);

    /* Logic: '<S93>/Logical Operator4' */
    DR18E_Testpult_B.LogicalOperator4_d =
      ((DR18E_Testpult_B.Subsystem_fqo.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator5_d);

    /* Logic: '<S93>/Logical Operator3' */
    DR18E_Testpult_B.LogicalOperator3_b =
      ((DR18E_Testpult_B.Subsystem_eq.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator4_d);

    /* Logic: '<S93>/Logical Operator2' */
    DR18E_Testpult_B.LogicalOperator2_e =
      ((DR18E_Testpult_B.Subsystem_ot.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator3_b);

    /* Logic: '<S93>/Logical Operator1' */
    DR18E_Testpult_B.LogicalOperator1_p =
      ((DR18E_Testpult_B.Subsystem_ms.Switch1 != 0.0) ||
       DR18E_Testpult_B.LogicalOperator2_e);
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S262>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "CANIO_Temperature" Id:806 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->processed) {
          DR18E_Testpult_B.SFunction1_o2_hx = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->processed;
          DR18E_Testpult_B.SFunction1_o3_mj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_nb = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "CANIO_Temperature" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_ga = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_hx = 0.0;
      }
    }

    /* Gain: '<S78>/1//10 °C' */
    DR18E_Testpult_B.CANIOTemp = DR18E_Testpult_P.u10C_Gain *
      DR18E_Testpult_B.SFunction1_o1_ga;

    /* Gain: '<S78>/Gain3' */
    DR18E_Testpult_B.Safetycircuit_State = DR18E_Testpult_P.Gain3_Gain_k *
      DR18E_Testpult_B.SFunction1_o1_gb;

    /* Gain: '<S78>/Gain5' */
    DR18E_Testpult_B.Inv_1_State = DR18E_Testpult_P.Gain5_Gain_c *
      DR18E_Testpult_B.SFunction1_o3_jz;

    /* Gain: '<S78>/Gain6' */
    DR18E_Testpult_B.Inv_2_State = DR18E_Testpult_P.Gain6_Gain_m *
      DR18E_Testpult_B.SFunction1_o4_as5;

    /* RelationalOperator: '<S263>/Delta time limit exceeded' incorporates:
     *  Constant: '<S263>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_f =
      (DR18E_Testpult_B.SFunction1_o4_nb >=
       DR18E_Testpult_P.Deltatimelimit_Value_od);

    /* Memory: '<S263>/Mem1' */
    DR18E_Testpult_B.Mem1_ok = DR18E_Testpult_DW.Mem1_PreviousInput_a;

    /* Memory: '<S263>/Mem2' */
    DR18E_Testpult_B.Mem2_kb = DR18E_Testpult_DW.Mem2_PreviousInput_d;

    /* Memory: '<S263>/Mem3' */
    DR18E_Testpult_B.Mem3_m = DR18E_Testpult_DW.Mem3_PreviousInput_ou;

    /* Memory: '<S263>/Mem4' */
    DR18E_Testpult_B.Mem4_l = DR18E_Testpult_DW.Mem4_PreviousInput_lx;

    /* RelationalOperator: '<S263>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S263>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_mv = (DR18E_Testpult_B.SFunction1_o2_hx !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_b2);

    /* Logic: '<S263>/OR' */
    DR18E_Testpult_B.OR_bk = (DR18E_Testpult_B.Prevmsgnotsent_mv ||
      DR18E_Testpult_B.Deltatimelimitexceeded_f);

    /* Logic: '<S263>/Warn' */
    DR18E_Testpult_B.Warn_et = (DR18E_Testpult_B.OR_bk &&
      DR18E_Testpult_B.Mem1_ok && DR18E_Testpult_B.Mem2_kb &&
      DR18E_Testpult_B.Mem3_m && DR18E_Testpult_B.Mem4_l);

    /* RelationalOperator: '<S264>/Delta time limit exceeded' incorporates:
     *  Constant: '<S264>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_e4 =
      (DR18E_Testpult_B.SFunction1_o7_ap >=
       DR18E_Testpult_P.Deltatimelimit_Value_df);

    /* Memory: '<S264>/Mem1' */
    DR18E_Testpult_B.Mem1_f1 = DR18E_Testpult_DW.Mem1_PreviousInput_n;

    /* Memory: '<S264>/Mem2' */
    DR18E_Testpult_B.Mem2_a = DR18E_Testpult_DW.Mem2_PreviousInput_gl;

    /* Memory: '<S264>/Mem3' */
    DR18E_Testpult_B.Mem3_pu = DR18E_Testpult_DW.Mem3_PreviousInput_k;

    /* Memory: '<S264>/Mem4' */
    DR18E_Testpult_B.Mem4_g = DR18E_Testpult_DW.Mem4_PreviousInput_k;

    /* RelationalOperator: '<S264>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S264>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_lh = (DR18E_Testpult_B.SFunction1_o5_e !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_mr);

    /* Logic: '<S264>/OR' */
    DR18E_Testpult_B.OR_j0 = (DR18E_Testpult_B.Prevmsgnotsent_lh ||
      DR18E_Testpult_B.Deltatimelimitexceeded_e4);

    /* Logic: '<S264>/Warn' */
    DR18E_Testpult_B.Warn_n = (DR18E_Testpult_B.OR_j0 &&
      DR18E_Testpult_B.Mem1_f1 && DR18E_Testpult_B.Mem2_a &&
      DR18E_Testpult_B.Mem3_pu && DR18E_Testpult_B.Mem4_g);

    /* S-Function (rti_commonblock): '<S269>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "GLV_Cells" Id:576 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->processed) {
          DR18E_Testpult_B.SFunction1_o5_dj = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->processed;
          DR18E_Testpult_B.SFunction1_o6_ka = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_cr = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "GLV_Cell_Voltage_1" (0|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o1_o5k = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "GLV_Cell_Voltage_2" (16|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o2_jk = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "GLV_Cell_Voltage_3" (32|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o3_mgh = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );

            /* ...... "GLV_Cell_Voltage_4" (48|16, standard signal, unsigned int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.UnsignedSgn &= 0x0000FFFF;
            DR18E_Testpult_B.SFunction1_o4_jo = 0.001 * ( ((real_T)
              CAN_Sgn.UnsignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_dj = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S270>/Subsystem' */

    /* Constant: '<S79>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o5_dj,
      DR18E_Testpult_P.Timeoutsamples_Value_e, &DR18E_Testpult_B.Subsystem_cy,
      &DR18E_Testpult_DW.Subsystem_cy, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_cy);

    /* End of Outputs for SubSystem: '<S270>/Subsystem' */

    /* RelationalOperator: '<S267>/Delta time limit exceeded' incorporates:
     *  Constant: '<S267>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_l =
      (DR18E_Testpult_B.SFunction1_o6_b >=
       DR18E_Testpult_P.Deltatimelimit_Value_oz);

    /* Memory: '<S267>/Mem1' */
    DR18E_Testpult_B.Mem1_pz = DR18E_Testpult_DW.Mem1_PreviousInput_oh;

    /* Memory: '<S267>/Mem2' */
    DR18E_Testpult_B.Mem2_h = DR18E_Testpult_DW.Mem2_PreviousInput_a3;

    /* Memory: '<S267>/Mem3' */
    DR18E_Testpult_B.Mem3_oo = DR18E_Testpult_DW.Mem3_PreviousInput_g3;

    /* Memory: '<S267>/Mem4' */
    DR18E_Testpult_B.Mem4_lm = DR18E_Testpult_DW.Mem4_PreviousInput_mx;

    /* RelationalOperator: '<S267>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S267>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_k = (DR18E_Testpult_B.SFunction1_o4_llh !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_pd);

    /* Logic: '<S267>/OR' */
    DR18E_Testpult_B.OR_o = (DR18E_Testpult_B.Prevmsgnotsent_k ||
      DR18E_Testpult_B.Deltatimelimitexceeded_l);

    /* Logic: '<S267>/Warn' */
    DR18E_Testpult_B.Warn_hi = (DR18E_Testpult_B.OR_o &&
      DR18E_Testpult_B.Mem1_pz && DR18E_Testpult_B.Mem2_h &&
      DR18E_Testpult_B.Mem3_oo && DR18E_Testpult_B.Mem4_lm);

    /* S-Function (rti_commonblock): '<S272>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "GLV Temp_2" Id:580 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->processed) {
          DR18E_Testpult_B.SFunction1_o5_bw = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->processed;
          DR18E_Testpult_B.SFunction1_o6_n5 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_kc = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_hd = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_bx = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_du = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_jj = ((real_T) CAN_Sgn.SignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_bw = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S273>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "GLV Temp_3" Id:581 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ps = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->processed;
          DR18E_Testpult_B.SFunction1_o6_gs = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_e4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Temp1" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_aex = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp2" (16|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o2_pw = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp3" (32|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[4];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[5];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o3_k3 = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "Temp4" (48|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[6];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[7];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o4_p5 = ((real_T) CAN_Sgn.SignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ps = 0.0;
      }
    }

    /* S-Function (rti_commonblock): '<S274>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "GLV_TEMP" Id:579 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->processed) {
          DR18E_Testpult_B.SFunction1_o5_ci = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->processed;
          DR18E_Testpult_B.SFunction1_o6_pum = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->timestamp;
          DR18E_Testpult_B.SFunction1_o7_db = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "GLV_Temp_1" (0|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o1_aj = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "GLV_Temp_2" (8|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o2_o5w = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "GLV_Temp_3" (16|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[2];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o3_nc = ((real_T) CAN_Sgn.SignedSgn);

            /* ...... "GLV_Temp_4" (24|8, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[3];
            CAN_Sgn.SignedSgn &= 0x000000FF;
            if (CAN_Sgn.SignedSgn >> 7) {
              CAN_Sgn.SignedSgn |= 0xFFFFFF00;
            }

            DR18E_Testpult_B.SFunction1_o4_oe = ((real_T) CAN_Sgn.SignedSgn);
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o5_ci = 0.0;
      }
    }

    /* Outputs for Atomic SubSystem: '<S275>/Subsystem' */

    /* Constant: '<S79>/Timeout//samples' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_pum,
      DR18E_Testpult_P.Timeoutsamples_Value_e, &DR18E_Testpult_B.Subsystem_p,
      &DR18E_Testpult_DW.Subsystem_p, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_p);

    /* End of Outputs for SubSystem: '<S275>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S276>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_n5,
      DR18E_Testpult_P.Timeoutsamples_Value_e, &DR18E_Testpult_B.Subsystem_bp,
      &DR18E_Testpult_DW.Subsystem_bp, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_bp);

    /* End of Outputs for SubSystem: '<S276>/Subsystem' */

    /* Outputs for Atomic SubSystem: '<S277>/Subsystem' */
    DR18E_Testpult_Subsystem(DR18E_Testpult_B.SFunction1_o6_gs,
      DR18E_Testpult_P.Timeoutsamples_Value_e, &DR18E_Testpult_B.Subsystem_gh,
      &DR18E_Testpult_DW.Subsystem_gh, (P_Subsystem_DR18E_Testpult_T *)
      &DR18E_Testpult_P.Subsystem_gh);

    /* End of Outputs for SubSystem: '<S277>/Subsystem' */

    /* Logic: '<S268>/Logical Operator2' */
    DR18E_Testpult_B.LogicalOperator2_j =
      ((DR18E_Testpult_B.Subsystem_bp.Switch1 != 0.0) ||
       (DR18E_Testpult_B.Subsystem_gh.Switch1 != 0.0));

    /* Logic: '<S268>/Logical Operator1' */
    DR18E_Testpult_B.LogicalOperator1_l = ((DR18E_Testpult_B.Subsystem_p.Switch1
      != 0.0) || DR18E_Testpult_B.LogicalOperator2_j);

    /* Gain: '<S281>/Gain' */
    DR18E_Testpult_B.Gain_g = DR18E_Testpult_P.Gain_Gain_fn *
      DR18E_Testpult_B.Yaw_Z;

    /* DataTypeConversion: '<S281>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_kf = (real32_T)DR18E_Testpult_B.Gain_g;

    /* S-Function (rti_commonblock): '<S284>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(Gierrate_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_kf);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S80>/Errorfield' */
    DR18E_Testpult_B.Yaw_Z_Error = DR18E_Testpult_P.Errorfield_Gain *
      DR18E_Testpult_B.SFunction1_o2_az;

    /* Gain: '<S286>/Gain10' */
    DR18E_Testpult_B.Gain10 = DR18E_Testpult_P.Gain10_Gain *
      DR18E_Testpult_B.U_DC.UmrechnungRegisterSpannungManua;

    /* Gain: '<S289>/Gain' */
    DR18E_Testpult_B.Gain_mjr = DR18E_Testpult_P.Gain_Gain_da *
      DR18E_Testpult_B.Gain10;

    /* DataTypeConversion: '<S289>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_n = (real32_T)DR18E_Testpult_B.Gain_mjr;

    /* S-Function (rti_commonblock): '<S305>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(UDC_HV_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_n);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S286>/Gain11' */
    DR18E_Testpult_B.Gain11 = DR18E_Testpult_P.Gain11_Gain *
      DR18E_Testpult_B.Inverter_Temp.BAMOCARPGD3ManualS48;

    /* Gain: '<S290>/Gain' */
    DR18E_Testpult_B.Gain_ct = DR18E_Testpult_P.Gain_Gain_pm *
      DR18E_Testpult_B.Gain11;

    /* DataTypeConversion: '<S290>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_hn = (real32_T)DR18E_Testpult_B.Gain_ct;

    /* S-Function (rti_commonblock): '<S306>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(Inverter1Temp_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_hn);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S286>/Gain9' */
    DR18E_Testpult_B.Gain9 = DR18E_Testpult_P.Gain9_Gain *
      DR18E_Testpult_B.WirkstromIq.Product;

    /* Gain: '<S291>/Gain' */
    DR18E_Testpult_B.Gain_b = DR18E_Testpult_P.Gain_Gain_m *
      DR18E_Testpult_B.Gain9;

    /* DataTypeConversion: '<S291>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_c = (real32_T)DR18E_Testpult_B.Gain_b;

    /* S-Function (rti_commonblock): '<S307>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(MMotL_ist_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_c);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S286>/Gain1' */
    DR18E_Testpult_B.Gain1_b = DR18E_Testpult_P.Gain1_Gain_jw *
      DR18E_Testpult_B.Tempcorrespondingresistance_i;

    /* Gain: '<S292>/Gain' */
    DR18E_Testpult_B.Gain_bv = DR18E_Testpult_P.Gain_Gain_p1 *
      DR18E_Testpult_B.Gain1_b;

    /* DataTypeConversion: '<S292>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bv = (real32_T)DR18E_Testpult_B.Gain_bv;

    /* S-Function (rti_commonblock): '<S308>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(MotorLTemp_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_bv);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* RelationalOperator: '<S298>/No data' incorporates:
     *  Constant: '<S298>/No data value'
     */
    DR18E_Testpult_B.Nodata = (DR18E_Testpult_B.SFunction1_o4_dc ==
      DR18E_Testpult_P.Nodatavalue_Value);

    /* RelationalOperator: '<S298>/New data' incorporates:
     *  Constant: '<S298>/New data value'
     */
    DR18E_Testpult_B.Newdata = (DR18E_Testpult_B.SFunction1_o4_dc ==
      DR18E_Testpult_P.Newdatavalue_Value);

    /* RelationalOperator: '<S298>/Delta time limit exceeded' incorporates:
     *  Constant: '<S298>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_he =
      (DR18E_Testpult_B.SFunction1_o6_pu >=
       DR18E_Testpult_P.Deltatimelimit_Value_oi);

    /* Logic: '<S298>/AND' */
    DR18E_Testpult_B.AND = (DR18E_Testpult_B.Newdata &&
      DR18E_Testpult_B.Deltatimelimitexceeded_he);

    /* Logic: '<S298>/OR' */
    DR18E_Testpult_B.OR_f4 = (DR18E_Testpult_B.Nodata || DR18E_Testpult_B.AND);

    /* Memory: '<S298>/Mem1' */
    DR18E_Testpult_B.Mem1_fn = DR18E_Testpult_DW.Mem1_PreviousInput_mt;

    /* Memory: '<S298>/Mem2' */
    DR18E_Testpult_B.Mem2_fz = DR18E_Testpult_DW.Mem2_PreviousInput_i;

    /* Memory: '<S298>/Mem3' */
    DR18E_Testpult_B.Mem3_e = DR18E_Testpult_DW.Mem3_PreviousInput_kb;

    /* Memory: '<S298>/Mem4' */
    DR18E_Testpult_B.Mem4_px = DR18E_Testpult_DW.Mem4_PreviousInput_ne0;

    /* Memory: '<S298>/Mem5' */
    DR18E_Testpult_B.Mem5 = DR18E_Testpult_DW.Mem5_PreviousInput;

    /* Logic: '<S298>/Warn' */
    DR18E_Testpult_B.Warn_hy = (DR18E_Testpult_B.OR_f4 &&
      DR18E_Testpult_B.Mem1_fn && DR18E_Testpult_B.Mem2_fz &&
      DR18E_Testpult_B.Mem3_e && DR18E_Testpult_B.Mem4_px &&
      DR18E_Testpult_B.Mem5);

    /* Gain: '<S286>/Gain' */
    DR18E_Testpult_B.Gain_bt = (uint8_T)(DR18E_Testpult_B.Warn_hy ? (int32_T)
      DR18E_Testpult_P.Gain_Gain_dz : 0);

    /* Gain: '<S286>/Gain2' */
    DR18E_Testpult_B.Gain2_p = DR18E_Testpult_P.Gain2_Gain_n *
      DR18E_Testpult_B.Divide_aa;

    /* Gain: '<S286>/Gain3' */
    DR18E_Testpult_B.Gain3_a = DR18E_Testpult_P.Gain3_Gain_j *
      DR18E_Testpult_B.Sum1_ps;

    /* Gain: '<S286>/Gain5' */
    DR18E_Testpult_B.Gain5_f = DR18E_Testpult_P.Gain5_Gain_m *
      DR18E_Testpult_B.Divide2_b;

    /* Gain: '<S286>/Gain6' */
    DR18E_Testpult_B.Gain6_k = DR18E_Testpult_P.Gain6_Gain_k *
      DR18E_Testpult_B.WirkstromIq.Divide2;

    /* Gain: '<S286>/Gain7' */
    DR18E_Testpult_B.Gain7 = DR18E_Testpult_P.Gain7_Gain *
      DR18E_Testpult_B.DrehmomentStrangstrominNmArms_d;

    /* Gain: '<S286>/Gain8' */
    DR18E_Testpult_B.Gain8 = DR18E_Testpult_P.Gain8_Gain *
      DR18E_Testpult_B.upi60;

    /* Gain: '<S287>/Gain9' */
    DR18E_Testpult_B.Gain9_n = DR18E_Testpult_P.Gain9_Gain_g *
      DR18E_Testpult_B.WirkstromIq_e.Product;

    /* Gain: '<S369>/Gain' */
    DR18E_Testpult_B.Gain_b5 = DR18E_Testpult_P.Gain_Gain_f5 *
      DR18E_Testpult_B.Gain9_n;

    /* DataTypeConversion: '<S369>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_i = (real32_T)DR18E_Testpult_B.Gain_b5;

    /* S-Function (rti_commonblock): '<S382>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(MMotR_Ist_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_i);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* RelationalOperator: '<S375>/No data' incorporates:
     *  Constant: '<S375>/No data value'
     */
    DR18E_Testpult_B.Nodata_l = (DR18E_Testpult_B.SFunction1_o3_b ==
      DR18E_Testpult_P.Nodatavalue_Value_l);

    /* RelationalOperator: '<S375>/New data' incorporates:
     *  Constant: '<S375>/New data value'
     */
    DR18E_Testpult_B.Newdata_l = (DR18E_Testpult_B.SFunction1_o3_b ==
      DR18E_Testpult_P.Newdatavalue_Value_a);

    /* RelationalOperator: '<S375>/Delta time limit exceeded' incorporates:
     *  Constant: '<S375>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_iu =
      (DR18E_Testpult_B.SFunction1_o5_mx >=
       DR18E_Testpult_P.Deltatimelimit_Value_nb);

    /* Logic: '<S375>/AND' */
    DR18E_Testpult_B.AND_g = (DR18E_Testpult_B.Newdata_l &&
      DR18E_Testpult_B.Deltatimelimitexceeded_iu);

    /* Logic: '<S375>/OR' */
    DR18E_Testpult_B.OR_bz = (DR18E_Testpult_B.Nodata_l ||
      DR18E_Testpult_B.AND_g);

    /* Memory: '<S375>/Mem1' */
    DR18E_Testpult_B.Mem1_cq = DR18E_Testpult_DW.Mem1_PreviousInput_fe;

    /* Memory: '<S375>/Mem2' */
    DR18E_Testpult_B.Mem2_a2 = DR18E_Testpult_DW.Mem2_PreviousInput_lp;

    /* Memory: '<S375>/Mem3' */
    DR18E_Testpult_B.Mem3_bs = DR18E_Testpult_DW.Mem3_PreviousInput_fr;

    /* Memory: '<S375>/Mem4' */
    DR18E_Testpult_B.Mem4_io = DR18E_Testpult_DW.Mem4_PreviousInput_p3;

    /* Memory: '<S375>/Mem5' */
    DR18E_Testpult_B.Mem5_l = DR18E_Testpult_DW.Mem5_PreviousInput_f;

    /* Logic: '<S375>/Warn' */
    DR18E_Testpult_B.Warn_da = (DR18E_Testpult_B.OR_bz &&
      DR18E_Testpult_B.Mem1_cq && DR18E_Testpult_B.Mem2_a2 &&
      DR18E_Testpult_B.Mem3_bs && DR18E_Testpult_B.Mem4_io &&
      DR18E_Testpult_B.Mem5_l);

    /* Gain: '<S287>/Gain' */
    DR18E_Testpult_B.Gain_aw = (uint8_T)(DR18E_Testpult_B.Warn_da ? (int32_T)
      DR18E_Testpult_P.Gain_Gain_nt : 0);

    /* Gain: '<S287>/Gain1' */
    DR18E_Testpult_B.Gain1_k = DR18E_Testpult_P.Gain1_Gain_c *
      DR18E_Testpult_B.Tempcorrespondingresistance;

    /* Gain: '<S287>/Gain10' */
    DR18E_Testpult_B.Gain10_p = DR18E_Testpult_P.Gain10_Gain_i *
      DR18E_Testpult_B.U_DC_o.UmrechnungRegisterSpannungManua;

    /* Gain: '<S287>/Gain11' */
    DR18E_Testpult_B.Gain11_g = DR18E_Testpult_P.Gain11_Gain_a *
      DR18E_Testpult_B.Inverter_Temp_e.BAMOCARPGD3ManualS48;

    /* Gain: '<S287>/Gain2' */
    DR18E_Testpult_B.Gain2_m = DR18E_Testpult_P.Gain2_Gain_h *
      DR18E_Testpult_B.Divide_dg;

    /* Gain: '<S287>/Gain3' */
    DR18E_Testpult_B.Gain3_f = DR18E_Testpult_P.Gain3_Gain_jv *
      DR18E_Testpult_B.Sum1_l3;

    /* Gain: '<S287>/Gain5' */
    DR18E_Testpult_B.Gain5_p = DR18E_Testpult_P.Gain5_Gain_e *
      DR18E_Testpult_B.Divide2_h;

    /* Gain: '<S287>/Gain6' */
    DR18E_Testpult_B.Gain6_k0 = DR18E_Testpult_P.Gain6_Gain_c *
      DR18E_Testpult_B.WirkstromIq_e.Divide2;

    /* Gain: '<S287>/Gain7' */
    DR18E_Testpult_B.Gain7_j = DR18E_Testpult_P.Gain7_Gain_g *
      DR18E_Testpult_B.DrehmomentStrangstrominNmArms;

    /* Gain: '<S287>/Gain8' */
    DR18E_Testpult_B.Gain8_l = DR18E_Testpult_P.Gain8_Gain_h *
      DR18E_Testpult_B.up60i;

    /* Gain: '<S287>/InvCorrection' */
    DR18E_Testpult_B.InvCorrection = DR18E_Testpult_P.InvCorrection_Gain_d *
      DR18E_Testpult_B.U_DC_o.UmrechnungRegisterSpannungManua;

    /* Gain: '<S442>/Gain' */
    DR18E_Testpult_B.Gain_o = DR18E_Testpult_P.Gain_Gain_ow *
      DR18E_Testpult_B.SFunction1_o1_ey;

    /* DataTypeConversion: '<S442>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_m = (real32_T)DR18E_Testpult_B.Gain_o;

    /* S-Function (rti_commonblock): '<S445>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(Lenkwinkel_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_m);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* SampleTimeMath: '<S467>/Weighted Sample Time'
     *
     * About '<S467>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_gx =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_fn;

    /* Product: '<S467>/Divide1' incorporates:
     *  Constant: '<S462>/TTemp'
     */
    DR18E_Testpult_B.Divide1_pa = DR18E_Testpult_P.TTemp_Value /
      DR18E_Testpult_B.WeightedSampleTime_gx;

    /* Sum: '<S467>/Sum' incorporates:
     *  Constant: '<S467>/Constant2'
     */
    DR18E_Testpult_B.Sum_d = DR18E_Testpult_B.Divide1_pa +
      DR18E_Testpult_P.Constant2_Value_mh;

    /* Product: '<S467>/Divide' incorporates:
     *  Constant: '<S467>/Constant'
     */
    DR18E_Testpult_B.Divide_ir = DR18E_Testpult_P.Constant_Value_jw /
      DR18E_Testpult_B.Sum_d;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
    /* S-Function (rti_commonblock): '<S454>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH5,
        (dsfloat *)&DR18E_Testpult_B.SFunction1);
    }

    /* Gain: '<S460>/UrefADC' */
    DR18E_Testpult_B.UrefADC = DR18E_Testpult_P.UrefADC_Gain *
      DR18E_Testpult_B.SFunction1;

    /* S-Function (rti_commonblock): '<S455>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH6,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_f);
    }

    /* Gain: '<S447>/Spannungsteiler' */
    DR18E_Testpult_B.UBatt = DR18E_Testpult_P.Spannungsteiler_Gain *
      DR18E_Testpult_B.SFunction1_f;

    /* Fcn: '<S460>/ADC-R' */
    DR18E_Testpult_B.ADCR = -4.914E+8 / (45200.0 - 8200.0 *
      DR18E_Testpult_B.UBatt / DR18E_Testpult_B.UrefADC);

    /* Product: '<S462>/Divide1' incorporates:
     *  Constant: '<S462>/R25'
     */
    DR18E_Testpult_B.Divide1_f = DR18E_Testpult_P.R25_Value /
      DR18E_Testpult_B.ADCR;

    /* Math: '<S462>/Math Function'
     *
     * About '<S462>/Math Function':
     *  Operator: log
     */
    DR18E_Testpult_B.MathFunction = log(DR18E_Testpult_B.Divide1_f);

    /* Product: '<S462>/Divide2' incorporates:
     *  Constant: '<S462>/BETA'
     *  Constant: '<S462>/T25'
     */
    DR18E_Testpult_B.Divide2_l = DR18E_Testpult_P.T25_Value /
      DR18E_Testpult_P.BETA_Value;

    /* Product: '<S462>/Product' */
    DR18E_Testpult_B.Product_b2 = DR18E_Testpult_B.MathFunction *
      DR18E_Testpult_B.Divide2_l;

    /* Sum: '<S462>/Sum' incorporates:
     *  Constant: '<S462>/T2'
     */
    DR18E_Testpult_B.Sum_jf = DR18E_Testpult_P.T2_Value -
      DR18E_Testpult_B.Product_b2;

    /* Product: '<S462>/Divide' incorporates:
     *  Constant: '<S462>/T1'
     */
    DR18E_Testpult_B.Divide_do = DR18E_Testpult_P.T1_Value /
      DR18E_Testpult_B.Sum_jf;

    /* Sum: '<S462>/Sum1' incorporates:
     *  Constant: '<S462>/T0'
     */
    DR18E_Testpult_B.Sum1_k = DR18E_Testpult_B.Divide_do -
      DR18E_Testpult_P.T0_Value;

    /* Product: '<S466>/Product' incorporates:
     *  Constant: '<S462>/KTemp'
     */
    DR18E_Testpult_B.Product_g = DR18E_Testpult_P.KTemp_Value *
      DR18E_Testpult_B.Sum1_k;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Memory: '<S466>/Memory' */
    DR18E_Testpult_B.Memory_c = DR18E_Testpult_DW.Memory_PreviousInput_n;

    /* Sum: '<S466>/Sum' */
    DR18E_Testpult_B.Sum_ju = DR18E_Testpult_B.Product_g -
      DR18E_Testpult_B.Memory_c;

    /* Product: '<S466>/Product1' */
    DR18E_Testpult_B.Product1_e = DR18E_Testpult_B.Divide_ir *
      DR18E_Testpult_B.Sum_ju;

    /* Sum: '<S466>/Sum1' */
    DR18E_Testpult_B.Sum1_m = DR18E_Testpult_B.Product1_e +
      DR18E_Testpult_B.Memory_c;

    /* Gain: '<S458>/Gain' */
    DR18E_Testpult_B.Gain_ph = DR18E_Testpult_P.Gain_Gain_g *
      DR18E_Testpult_B.Sum1_m;

    /* DataTypeConversion: '<S458>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_mm = (real32_T)DR18E_Testpult_B.Gain_ph;

    /* S-Function (rti_commonblock): '<S464>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(KuehlwasserTemp_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_mm);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
    /* Gain: '<S459>/Gain' */
    DR18E_Testpult_B.Gain_gd = DR18E_Testpult_P.Gain_Gain_gm *
      DR18E_Testpult_B.UBatt;

    /* DataTypeConversion: '<S459>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_aj = (real32_T)DR18E_Testpult_B.Gain_gd;

    /* S-Function (rti_commonblock): '<S465>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(UBatt_LV_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_aj);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* S-Function (rti_commonblock): '<S450>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH1,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_b);
    }

    /* S-Function (rti_commonblock): '<S451>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH2,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_m);
    }

    /* S-Function (rti_commonblock): '<S452>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH3,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_d);
    }

    /* S-Function (rti_commonblock): '<S453>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH4,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_i);
    }

    /* S-Function (rti_commonblock): '<S456>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH7,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_l);
    }

    /* S-Function (rti_commonblock): '<S457>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DS1401STDADCT4 #1 Unit:ADC Group:ADC */
      adc_tp4_single_new_read(ADC_TP4_1_MODULE_ADDR,
        ADC_TP4_CH8,
        (dsfloat *)&DR18E_Testpult_B.SFunction1_g);
    }

    /* Gain: '<S461>/UrefADC' */
    DR18E_Testpult_B.UrefADC_c = DR18E_Testpult_P.UrefADC_Gain_m *
      DR18E_Testpult_B.SFunction1_l;

    /* Fcn: '<S461>/ADC-R' */
    DR18E_Testpult_B.ADCR_h = -4.914E+8 / (45200.0 - 8200.0 *
      DR18E_Testpult_B.UBatt / DR18E_Testpult_B.UrefADC_c);

    /* Product: '<S463>/Divide1' incorporates:
     *  Constant: '<S463>/R25'
     */
    DR18E_Testpult_B.Divide1_b = DR18E_Testpult_P.R25_Value_h /
      DR18E_Testpult_B.ADCR_h;

    /* Math: '<S463>/Math Function'
     *
     * About '<S463>/Math Function':
     *  Operator: log
     */
    DR18E_Testpult_B.MathFunction_a = log(DR18E_Testpult_B.Divide1_b);

    /* Product: '<S463>/Divide2' incorporates:
     *  Constant: '<S463>/BETA'
     *  Constant: '<S463>/T25'
     */
    DR18E_Testpult_B.Divide2_g = DR18E_Testpult_P.T25_Value_n /
      DR18E_Testpult_P.BETA_Value_k;

    /* Product: '<S463>/Product' */
    DR18E_Testpult_B.Product_fv = DR18E_Testpult_B.MathFunction_a *
      DR18E_Testpult_B.Divide2_g;

    /* Sum: '<S463>/Sum' incorporates:
     *  Constant: '<S463>/T2'
     */
    DR18E_Testpult_B.Sum_en = DR18E_Testpult_P.T2_Value_g -
      DR18E_Testpult_B.Product_fv;

    /* Product: '<S463>/Divide' incorporates:
     *  Constant: '<S463>/T1'
     */
    DR18E_Testpult_B.Divide_o5 = DR18E_Testpult_P.T1_Value_l /
      DR18E_Testpult_B.Sum_en;

    /* Sum: '<S463>/Sum1' incorporates:
     *  Constant: '<S463>/T0'
     */
    DR18E_Testpult_B.Sum1_p = DR18E_Testpult_B.Divide_o5 -
      DR18E_Testpult_P.T0_Value_j;

    /* Product: '<S468>/Product' incorporates:
     *  Constant: '<S463>/KTemp'
     */
    DR18E_Testpult_B.Product_j = DR18E_Testpult_P.KTemp_Value_f *
      DR18E_Testpult_B.Sum1_p;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* SampleTimeMath: '<S469>/Weighted Sample Time'
     *
     * About '<S469>/Weighted Sample Time':
     *  y = K where K = ( w * Ts )
     */
    DR18E_Testpult_B.WeightedSampleTime_l =
      DR18E_Testpult_P.WeightedSampleTime_WtEt_az;

    /* Product: '<S469>/Divide1' incorporates:
     *  Constant: '<S463>/TTemp'
     */
    DR18E_Testpult_B.Divide1_lg = DR18E_Testpult_P.TTemp_Value_i /
      DR18E_Testpult_B.WeightedSampleTime_l;

    /* Sum: '<S469>/Sum' incorporates:
     *  Constant: '<S469>/Constant2'
     */
    DR18E_Testpult_B.Sum_ha = DR18E_Testpult_B.Divide1_lg +
      DR18E_Testpult_P.Constant2_Value_ef;

    /* Product: '<S469>/Divide' incorporates:
     *  Constant: '<S469>/Constant'
     */
    DR18E_Testpult_B.Divide_b = DR18E_Testpult_P.Constant_Value_k /
      DR18E_Testpult_B.Sum_ha;

    /* Memory: '<S468>/Memory' */
    DR18E_Testpult_B.Memory_n = DR18E_Testpult_DW.Memory_PreviousInput_d;

    /* Sum: '<S468>/Sum' */
    DR18E_Testpult_B.Sum_n2 = DR18E_Testpult_B.Product_j -
      DR18E_Testpult_B.Memory_n;

    /* Product: '<S468>/Product1' */
    DR18E_Testpult_B.Product1_nj = DR18E_Testpult_B.Divide_b *
      DR18E_Testpult_B.Sum_n2;

    /* Sum: '<S468>/Sum1' */
    DR18E_Testpult_B.Sum1_b2 = DR18E_Testpult_B.Product1_nj +
      DR18E_Testpult_B.Memory_n;

    /* Gain: '<S447>/Gain' */
    DR18E_Testpult_B.Gain_pj[0] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.SFunction1_b;
    DR18E_Testpult_B.Gain_pj[1] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.SFunction1_m;
    DR18E_Testpult_B.Gain_pj[2] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.SFunction1_d;
    DR18E_Testpult_B.Gain_pj[3] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.SFunction1_i;
    DR18E_Testpult_B.Gain_pj[4] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.Sum1_m;
    DR18E_Testpult_B.Gain_pj[5] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.UBatt;
    DR18E_Testpult_B.Gain_pj[6] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.Sum1_b2;
    DR18E_Testpult_B.Gain_pj[7] = DR18E_Testpult_P.Gain_Gain_gn *
      DR18E_Testpult_B.SFunction1_g;

    /* S-Function (rti_commonblock): '<S470>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S471>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S472>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S473>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S474>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S475>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S476>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S477>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S478>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S479>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* RelationalOperator: '<S484>/Delta time limit exceeded' incorporates:
     *  Constant: '<S484>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_m1 =
      (DR18E_Testpult_B.SFunction1_o4_j3 >=
       DR18E_Testpult_P.Deltatimelimit_Value_kj);

    /* Memory: '<S484>/Mem1' */
    DR18E_Testpult_B.Mem1_mh = DR18E_Testpult_DW.Mem1_PreviousInput_ip;

    /* Memory: '<S484>/Mem2' */
    DR18E_Testpult_B.Mem2_gi = DR18E_Testpult_DW.Mem2_PreviousInput_ii;

    /* Memory: '<S484>/Mem3' */
    DR18E_Testpult_B.Mem3_i = DR18E_Testpult_DW.Mem3_PreviousInput_a4;

    /* Memory: '<S484>/Mem4' */
    DR18E_Testpult_B.Mem4_e = DR18E_Testpult_DW.Mem4_PreviousInput_fj;

    /* RelationalOperator: '<S484>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S484>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_h = (DR18E_Testpult_B.SFunction1_o2_n !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_e);

    /* Logic: '<S484>/OR' */
    DR18E_Testpult_B.OR_fm = (DR18E_Testpult_B.Prevmsgnotsent_h ||
      DR18E_Testpult_B.Deltatimelimitexceeded_m1);

    /* Logic: '<S484>/Warn' */
    DR18E_Testpult_B.Warn_l = (DR18E_Testpult_B.OR_fm &&
      DR18E_Testpult_B.Mem1_mh && DR18E_Testpult_B.Mem2_gi &&
      DR18E_Testpult_B.Mem3_i && DR18E_Testpult_B.Mem4_e);

    /* RelationalOperator: '<S485>/Delta time limit exceeded' incorporates:
     *  Constant: '<S485>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_o =
      (DR18E_Testpult_B.SFunction1_o4_f1 >=
       DR18E_Testpult_P.Deltatimelimit_Value_lh);

    /* Memory: '<S485>/Mem1' */
    DR18E_Testpult_B.Mem1_e = DR18E_Testpult_DW.Mem1_PreviousInput_pt;

    /* Memory: '<S485>/Mem2' */
    DR18E_Testpult_B.Mem2_j = DR18E_Testpult_DW.Mem2_PreviousInput_ak;

    /* Memory: '<S485>/Mem3' */
    DR18E_Testpult_B.Mem3_df = DR18E_Testpult_DW.Mem3_PreviousInput_fc;

    /* Memory: '<S485>/Mem4' */
    DR18E_Testpult_B.Mem4_mi = DR18E_Testpult_DW.Mem4_PreviousInput_h3;

    /* RelationalOperator: '<S485>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S485>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_kk = (DR18E_Testpult_B.SFunction1_o2_pb !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_j1);

    /* Logic: '<S485>/OR' */
    DR18E_Testpult_B.OR_jt = (DR18E_Testpult_B.Prevmsgnotsent_kk ||
      DR18E_Testpult_B.Deltatimelimitexceeded_o);

    /* Logic: '<S485>/Warn' */
    DR18E_Testpult_B.Warn_j = (DR18E_Testpult_B.OR_jt && DR18E_Testpult_B.Mem1_e
      && DR18E_Testpult_B.Mem2_j && DR18E_Testpult_B.Mem3_df &&
      DR18E_Testpult_B.Mem4_mi);

    /* RelationalOperator: '<S486>/Delta time limit exceeded' incorporates:
     *  Constant: '<S486>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_jd =
      (DR18E_Testpult_B.SFunction1_o4_cb >=
       DR18E_Testpult_P.Deltatimelimit_Value_ma);

    /* Memory: '<S486>/Mem1' */
    DR18E_Testpult_B.Mem1_kb = DR18E_Testpult_DW.Mem1_PreviousInput_e5;

    /* Memory: '<S486>/Mem2' */
    DR18E_Testpult_B.Mem2_ki = DR18E_Testpult_DW.Mem2_PreviousInput_at;

    /* Memory: '<S486>/Mem3' */
    DR18E_Testpult_B.Mem3_c5 = DR18E_Testpult_DW.Mem3_PreviousInput_ii;

    /* Memory: '<S486>/Mem4' */
    DR18E_Testpult_B.Mem4_h = DR18E_Testpult_DW.Mem4_PreviousInput_kr;

    /* RelationalOperator: '<S486>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S486>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_ec = (DR18E_Testpult_B.SFunction1_o2_f5 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_mk);

    /* Logic: '<S486>/OR' */
    DR18E_Testpult_B.OR_bp = (DR18E_Testpult_B.Prevmsgnotsent_ec ||
      DR18E_Testpult_B.Deltatimelimitexceeded_jd);

    /* Logic: '<S486>/Warn' */
    DR18E_Testpult_B.Warn_b4 = (DR18E_Testpult_B.OR_bp &&
      DR18E_Testpult_B.Mem1_kb && DR18E_Testpult_B.Mem2_ki &&
      DR18E_Testpult_B.Mem3_c5 && DR18E_Testpult_B.Mem4_h);

    /* Gain: '<S85>/Gain1' */
    DR18E_Testpult_B.Crashsensor = DR18E_Testpult_P.Gain1_Gain_oi *
      DR18E_Testpult_B.SFunction1_o2_c1;

    /* RelationalOperator: '<S497>/Delta time limit exceeded' incorporates:
     *  Constant: '<S497>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_bp =
      (DR18E_Testpult_B.SFunction1_o5_f4 >=
       DR18E_Testpult_P.Deltatimelimit_Value_hl);

    /* Memory: '<S497>/Mem1' */
    DR18E_Testpult_B.Mem1_n = DR18E_Testpult_DW.Mem1_PreviousInput_pc;

    /* Memory: '<S497>/Mem2' */
    DR18E_Testpult_B.Mem2_mb = DR18E_Testpult_DW.Mem2_PreviousInput_c2;

    /* Memory: '<S497>/Mem3' */
    DR18E_Testpult_B.Mem3_gx = DR18E_Testpult_DW.Mem3_PreviousInput_ah;

    /* Memory: '<S497>/Mem4' */
    DR18E_Testpult_B.Mem4_c = DR18E_Testpult_DW.Mem4_PreviousInput_fw;

    /* RelationalOperator: '<S497>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S497>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_g5 = (DR18E_Testpult_B.SFunction1_o3_ni !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_of);

    /* Logic: '<S497>/OR' */
    DR18E_Testpult_B.OR_bc = (DR18E_Testpult_B.Prevmsgnotsent_g5 ||
      DR18E_Testpult_B.Deltatimelimitexceeded_bp);

    /* Logic: '<S497>/Warn' */
    DR18E_Testpult_B.Warn_dp = (DR18E_Testpult_B.OR_bc &&
      DR18E_Testpult_B.Mem1_n && DR18E_Testpult_B.Mem2_mb &&
      DR18E_Testpult_B.Mem3_gx && DR18E_Testpult_B.Mem4_c);

    /* RelationalOperator: '<S498>/Delta time limit exceeded' incorporates:
     *  Constant: '<S498>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_js =
      (DR18E_Testpult_B.SFunction1_o4_lu >=
       DR18E_Testpult_P.Deltatimelimit_Value_ea);

    /* Memory: '<S498>/Mem1' */
    DR18E_Testpult_B.Mem1_c2 = DR18E_Testpult_DW.Mem1_PreviousInput_bw;

    /* Memory: '<S498>/Mem2' */
    DR18E_Testpult_B.Mem2_hh = DR18E_Testpult_DW.Mem2_PreviousInput_cz;

    /* Memory: '<S498>/Mem3' */
    DR18E_Testpult_B.Mem3_hh = DR18E_Testpult_DW.Mem3_PreviousInput_os;

    /* Memory: '<S498>/Mem4' */
    DR18E_Testpult_B.Mem4_k = DR18E_Testpult_DW.Mem4_PreviousInput_i;

    /* RelationalOperator: '<S498>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S498>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_hr = (DR18E_Testpult_B.SFunction1_o2_ay !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_n);

    /* Logic: '<S498>/OR' */
    DR18E_Testpult_B.OR_o2 = (DR18E_Testpult_B.Prevmsgnotsent_hr ||
      DR18E_Testpult_B.Deltatimelimitexceeded_js);

    /* Logic: '<S498>/Warn' */
    DR18E_Testpult_B.Warn_p = (DR18E_Testpult_B.OR_o2 &&
      DR18E_Testpult_B.Mem1_c2 && DR18E_Testpult_B.Mem2_hh &&
      DR18E_Testpult_B.Mem3_hh && DR18E_Testpult_B.Mem4_k);

    /* Gain: '<S501>/Gain' */
    DR18E_Testpult_B.Gain_k = DR18E_Testpult_P.Gain_Gain_dc *
      DR18E_Testpult_B.SFunction1_o1_ae;

    /* DataTypeConversion: '<S501>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_c4 = (real32_T)DR18E_Testpult_B.Gain_k;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S509>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(WaterPump_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_c4);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S502>/Gain' */
    DR18E_Testpult_B.Gain_cq = DR18E_Testpult_P.Gain_Gain_e *
      DR18E_Testpult_B.SFunction1_o2_k2;

    /* DataTypeConversion: '<S502>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_e = (real32_T)DR18E_Testpult_B.Gain_cq;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S510>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(WaterCooler_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_e);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S504>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN RX Message Block: "Oiltemperature" Id:792 */
    {
      UInt32 *CAN_Msg;

      /* ... Read status and timestamp info (previous message) */
      can_tp1_msg_read_from_mem(can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]);

      /* Convert timestamp */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->processed) {
        can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->timestamp =
          rtk_dsts_time_to_simtime_convert
          (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->timestamp);
      }

      /* Messages with timestamp zero have been received in pause/stop state
         and must not be handled.
       */
      if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->timestamp > 0.0) {
        if (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->processed) {
          DR18E_Testpult_B.SFunction1_o2_i4 = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->processed;
          DR18E_Testpult_B.SFunction1_o3_jl = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->timestamp;
          DR18E_Testpult_B.SFunction1_o4_lg = (real_T)
            can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->deltatime;
          CAN_Msg = can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->data;

          /* ... Decode CAN Message */
          {
            rtican_Signal_t CAN_Sgn;

            /* ...... "Oil_Temperature" (0|16, standard signal, signed int, little endian) */
            CAN_Sgn.SgnBytes.Byte0 = CAN_Msg[0];
            CAN_Sgn.SgnBytes.Byte1 = CAN_Msg[1];
            CAN_Sgn.SignedSgn &= 0x0000FFFF;
            if (CAN_Sgn.SignedSgn >> 15) {
              CAN_Sgn.SignedSgn |= 0xFFFF0000;
            }

            DR18E_Testpult_B.SFunction1_o1_le = 0.1 * ( ((real_T)
              CAN_Sgn.SignedSgn) );
          }
        }
      }

      if (!can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318]->processed) {
        /* ... set RX status to 0 because no new message has arrived */
        DR18E_Testpult_B.SFunction1_o2_i4 = 0.0;
      }
    }

    /* Gain: '<S503>/Gain' */
    DR18E_Testpult_B.Gain_h = DR18E_Testpult_P.Gain_Gain_fq *
      DR18E_Testpult_B.SFunction1_o1_le;

    /* DataTypeConversion: '<S503>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_h24 = (real32_T)DR18E_Testpult_B.Gain_h;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S511>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(oiltemp_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_h24);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* RelationalOperator: '<S506>/Delta time limit exceeded' incorporates:
     *  Constant: '<S506>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_k =
      (DR18E_Testpult_B.SFunction1_o4_lg >=
       DR18E_Testpult_P.Deltatimelimit_Value_eq);

    /* Memory: '<S506>/Mem1' */
    DR18E_Testpult_B.Mem1_em = DR18E_Testpult_DW.Mem1_PreviousInput_hl;

    /* Memory: '<S506>/Mem2' */
    DR18E_Testpult_B.Mem2_i = DR18E_Testpult_DW.Mem2_PreviousInput_ls;

    /* Memory: '<S506>/Mem3' */
    DR18E_Testpult_B.Mem3_gt = DR18E_Testpult_DW.Mem3_PreviousInput_p;

    /* Memory: '<S506>/Mem4' */
    DR18E_Testpult_B.Mem4_eg = DR18E_Testpult_DW.Mem4_PreviousInput_dpj;

    /* RelationalOperator: '<S506>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S506>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_i = (DR18E_Testpult_B.SFunction1_o2_i4 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_ej);

    /* Logic: '<S506>/OR' */
    DR18E_Testpult_B.OR_m1 = (DR18E_Testpult_B.Prevmsgnotsent_i ||
      DR18E_Testpult_B.Deltatimelimitexceeded_k);

    /* Logic: '<S506>/Warn' */
    DR18E_Testpult_B.Warn_ln = (DR18E_Testpult_B.OR_m1 &&
      DR18E_Testpult_B.Mem1_em && DR18E_Testpult_B.Mem2_i &&
      DR18E_Testpult_B.Mem3_gt && DR18E_Testpult_B.Mem4_eg);

    /* RelationalOperator: '<S507>/Delta time limit exceeded' incorporates:
     *  Constant: '<S507>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_kf =
      (DR18E_Testpult_B.SFunction1_o5_jw >=
       DR18E_Testpult_P.Deltatimelimit_Value_e3);

    /* Memory: '<S507>/Mem1' */
    DR18E_Testpult_B.Mem1_nx = DR18E_Testpult_DW.Mem1_PreviousInput_g;

    /* Memory: '<S507>/Mem2' */
    DR18E_Testpult_B.Mem2_jr = DR18E_Testpult_DW.Mem2_PreviousInput_ez;

    /* Memory: '<S507>/Mem3' */
    DR18E_Testpult_B.Mem3_hm = DR18E_Testpult_DW.Mem3_PreviousInput_nb;

    /* Memory: '<S507>/Mem4' */
    DR18E_Testpult_B.Mem4_nn = DR18E_Testpult_DW.Mem4_PreviousInput_j;

    /* RelationalOperator: '<S507>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S507>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_pg = (DR18E_Testpult_B.SFunction1_o3_lo !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_i);

    /* Logic: '<S507>/OR' */
    DR18E_Testpult_B.OR_c = (DR18E_Testpult_B.Prevmsgnotsent_pg ||
      DR18E_Testpult_B.Deltatimelimitexceeded_kf);

    /* Logic: '<S507>/Warn' */
    DR18E_Testpult_B.Warn_lt = (DR18E_Testpult_B.OR_c &&
      DR18E_Testpult_B.Mem1_nx && DR18E_Testpult_B.Mem2_jr &&
      DR18E_Testpult_B.Mem3_hm && DR18E_Testpult_B.Mem4_nn);

    /* RelationalOperator: '<S508>/Delta time limit exceeded' incorporates:
     *  Constant: '<S508>/Delta time limit'
     */
    DR18E_Testpult_B.Deltatimelimitexceeded_n =
      (DR18E_Testpult_B.SFunction1_o5_p >=
       DR18E_Testpult_P.Deltatimelimit_Value_or);

    /* Memory: '<S508>/Mem1' */
    DR18E_Testpult_B.Mem1_bp = DR18E_Testpult_DW.Mem1_PreviousInput_ba;

    /* Memory: '<S508>/Mem2' */
    DR18E_Testpult_B.Mem2_o = DR18E_Testpult_DW.Mem2_PreviousInput_p;

    /* Memory: '<S508>/Mem3' */
    DR18E_Testpult_B.Mem3_gf = DR18E_Testpult_DW.Mem3_PreviousInput_ip;

    /* Memory: '<S508>/Mem4' */
    DR18E_Testpult_B.Mem4_gq = DR18E_Testpult_DW.Mem4_PreviousInput_iq;

    /* RelationalOperator: '<S508>/Prev. msg.  not sent' incorporates:
     *  Constant: '<S508>/Prev. msg. sent value'
     */
    DR18E_Testpult_B.Prevmsgnotsent_j = (DR18E_Testpult_B.SFunction1_o3_de3 !=
      DR18E_Testpult_P.Prevmsgsentvalue_Value_p2);

    /* Logic: '<S508>/OR' */
    DR18E_Testpult_B.OR_oh = (DR18E_Testpult_B.Prevmsgnotsent_j ||
      DR18E_Testpult_B.Deltatimelimitexceeded_n);

    /* Logic: '<S508>/Warn' */
    DR18E_Testpult_B.Warn_i = (DR18E_Testpult_B.OR_oh &&
      DR18E_Testpult_B.Mem1_bp && DR18E_Testpult_B.Mem2_o &&
      DR18E_Testpult_B.Mem3_gf && DR18E_Testpult_B.Mem4_gq);

    /* Gain: '<S542>/Gain' */
    DR18E_Testpult_B.Gain_n = DR18E_Testpult_P.Gain_Gain_dau *
      DR18E_Testpult_B.SFunction1_o1_mm;

    /* DataTypeConversion: '<S542>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_me = (real32_T)DR18E_Testpult_B.Gain_n;

    /* S-Function (rti_commonblock): '<S547>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(BremsdruckVorne_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_me);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S543>/Gain' */
    DR18E_Testpult_B.Gain_a = DR18E_Testpult_P.Gain_Gain_i *
      DR18E_Testpult_B.SFunction1_o2_o3;

    /* DataTypeConversion: '<S543>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_nb = (real32_T)DR18E_Testpult_B.Gain_a;

    /* S-Function (rti_commonblock): '<S548>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(BremsdruckHinten_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_nb);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S544>/Gain' */
    DR18E_Testpult_B.Gain_fn = (uint8_T)(DR18E_Testpult_B.Bremse_bin ? (int32_T)
      DR18E_Testpult_P.Gain_Gain_ix : 0);

    /* DataTypeConversion: '<S544>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_lx = (real32_T)DR18E_Testpult_B.Gain_fn *
      0.0078125F;

    /* S-Function (rti_commonblock): '<S549>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(Bremse_bin_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_lx);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S538>/Gain' */
    DR18E_Testpult_B.Gain_afl = (uint8_T)(DR18E_Testpult_B.A_BSPD ? (int32_T)
      DR18E_Testpult_P.Gain_Gain_ood : 0);

    /* Gain: '<S538>/Gain1' */
    DR18E_Testpult_B.Gain1_a = (uint8_T)(DR18E_Testpult_B.A_BRAKE_OVERTRAVEL ?
      (int32_T)DR18E_Testpult_P.Gain1_Gain_h : 0);

    /* Logic: '<S538>/Logical Operator1' */
    DR18E_Testpult_B.LogicalOperator1_j = (DR18E_Testpult_B.Gas1Status ||
      DR18E_Testpult_B.Gas2Status);

    /* Gain: '<S538>/Gain10' */
    DR18E_Testpult_B.Gain10_f = (uint8_T)(DR18E_Testpult_B.LogicalOperator1_j ?
      (int32_T)DR18E_Testpult_P.Gain10_Gain_b : 0);

    /* Logic: '<S538>/Logical Operator2' */
    DR18E_Testpult_B.LogicalOperator2_j1 = (DR18E_Testpult_B.BremseVorneStatus ||
      DR18E_Testpult_B.BremseHintenStatus);

    /* Gain: '<S538>/Gain11' */
    DR18E_Testpult_B.Gain11_d = (uint8_T)(DR18E_Testpult_B.LogicalOperator2_j1 ?
      (int32_T)DR18E_Testpult_P.Gain11_Gain_g : 0);

    /* Gain: '<S538>/Gain12' */
    DR18E_Testpult_B.Gain12 = (uint8_T)(DR18E_Testpult_B.DrehzahlTimeout ?
      (int32_T)DR18E_Testpult_P.Gain12_Gain : 0);

    /* Gain: '<S538>/Gain13' */
    DR18E_Testpult_B.Gain13 = (uint8_T)(DR18E_Testpult_B.LenkwinkelTimeout ?
      (int32_T)DR18E_Testpult_P.Gain13_Gain : 0);

    /* Gain: '<S538>/Gain2' */
    DR18E_Testpult_B.Gain2_b = (uint8_T)(DR18E_Testpult_B.A_NOT_COCKPIT ?
      (int32_T)DR18E_Testpult_P.Gain2_Gain_c : 0);

    /* Gain: '<S538>/Gain3' */
    DR18E_Testpult_B.Gain3_k = (uint8_T)(DR18E_Testpult_B.A_NOT_LINKS ? (int32_T)
      DR18E_Testpult_P.Gain3_Gain_b : 0);

    /* Gain: '<S538>/Gain4' */
    DR18E_Testpult_B.Gain4_d = (uint8_T)(DR18E_Testpult_B.A_NOT_RECHTS ?
      (int32_T)DR18E_Testpult_P.Gain4_Gain_p : 0);

    /* Gain: '<S538>/Gain5' */
    DR18E_Testpult_B.Gain5_h = (uint8_T)(DR18E_Testpult_B.Logic_f[0] ? (int32_T)
      DR18E_Testpult_P.Gain5_Gain_d : 0);

    /* Gain: '<S538>/Gain6' */
    DR18E_Testpult_B.Gain6_b = (uint8_T)(DR18E_Testpult_B.Logic_fh[0] ? (int32_T)
      DR18E_Testpult_P.Gain6_Gain_cw : 0);

    /* Gain: '<S538>/Gain7' */
    DR18E_Testpult_B.Gain7_f = (uint8_T)(DR18E_Testpult_B.A_HVD ? (int32_T)
      DR18E_Testpult_P.Gain7_Gain_k : 0);

    /* Gain: '<S538>/Gain8' */
    DR18E_Testpult_B.Gain8_k = (uint8_T)(DR18E_Testpult_B.BRInplausible ?
      (int32_T)DR18E_Testpult_P.Gain8_Gain_j : 0);

    /* Logic: '<S538>/Logical Operator' */
    DR18E_Testpult_B.LogicalOperator_el = (DR18E_Testpult_B.GasTimeout ||
      DR18E_Testpult_B.BremseTimeout);

    /* Gain: '<S538>/Gain9' */
    DR18E_Testpult_B.Gain9_d = (uint8_T)(DR18E_Testpult_B.LogicalOperator_el ?
      (int32_T)DR18E_Testpult_P.Gain9_Gain_k : 0);

    /* MinMax: '<S538>/MinMax' */
    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain_afl >> 5);
    maxV = (int32_T)((uint32_T)DR18E_Testpult_B.Gain1_a >> 4);
    if ((uint32_T)i > (uint32_T)maxV) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain2_b >> 4);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain3_k >> 3);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain4_d >> 3);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain5_h >> 3);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain6_b >> 3);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = (int32_T)((uint32_T)DR18E_Testpult_B.Gain7_f >> 2);
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain8_k;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain9_d;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain10_f;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain11_d;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain12;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    i = DR18E_Testpult_B.Gain13;
    if (!((uint32_T)maxV > (uint32_T)i)) {
      maxV = i;
    }

    DR18E_Testpult_B.MinMax_f = (uint8_T)maxV;

    /* End of MinMax: '<S538>/MinMax' */

    /* Gain: '<S564>/Gain' incorporates:
     *  Constant: '<S526>/Constant1'
     */
    DR18E_Testpult_B.Gain_e = DR18E_Testpult_P.Gain_Gain_or *
      DR18E_Testpult_P.Constant1_Value_c;

    /* DataTypeConversion: '<S564>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bt = (real32_T)DR18E_Testpult_B.Gain_e;

    /* S-Function (rti_commonblock): '<S575>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(M_max_pro_Mot_Nm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_bt);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S573>/Gain' */
    tmp = DR18E_Testpult_P.Gain_Gain_l5;
    tmp_0 = DR18E_Testpult_B.Verbrauch_Whkm;
    uMultiWordMul(&tmp, 1, &tmp_0, 1, &tmp_1.chunks[0U], 2);
    DR18E_Testpult_B.Gain_gp = tmp_1;

    /* DataTypeConversion: '<S573>/Data Type Conversion' */
    tmp_1 = DR18E_Testpult_B.Gain_gp;
    DR18E_Testpult_B.DataTypeConversion_a5 = uMultiWordSingle(&tmp_1.chunks[0U],
      2, 0) * 0.015625F;

    /* S-Function (rti_commonblock): '<S574>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(Verbrauch_Whprokm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_a5);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  /* TransferFcn: '<S582>/ModelReference' */
  DR18E_Testpult_B.ModelReference = 0.0;
  DR18E_Testpult_B.ModelReference += DR18E_Testpult_P.ModelReference_C *
    DR18E_Testpult_X.ModelReference_CSTATE;

  /* Sum: '<S582>/Sum' */
  DR18E_Testpult_B.Sum_kx = DR18E_Testpult_B.degrad -
    DR18E_Testpult_B.ModelReference;

  /* Product: '<S582>/Product1' */
  DR18E_Testpult_B.Product1_b2 = DR18E_Testpult_B.degrad *
    DR18E_Testpult_B.Sum_kx;

  /* Product: '<S582>/Product3' */
  DR18E_Testpult_B.Product3 = DR18E_Testpult_B.Gravity2 *
    DR18E_Testpult_B.Sum_kx;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S583>/Gain' */
    DR18E_Testpult_B.Gain_jh = DR18E_Testpult_P.Gain_Gain_k3 *
      DR18E_Testpult_B.Gravity2;

    /* Gain: '<S584>/Gain' */
    DR18E_Testpult_B.Gain_bh = DR18E_Testpult_P.Gain_Gain_l2 *
      DR18E_Testpult_B.Gravity2;
  }

  /* TransferFcn: '<S583>/ModelReference' */
  DR18E_Testpult_B.ModelReference_l = 0.0;
  DR18E_Testpult_B.ModelReference_l += DR18E_Testpult_P.ModelReference_C_p *
    DR18E_Testpult_X.ModelReference_CSTATE_i;

  /* Sum: '<S583>/Sum2' */
  DR18E_Testpult_B.Sum2_e = DR18E_Testpult_B.degrad -
    DR18E_Testpult_B.ModelReference_l;

  /* Gain: '<S583>/Gain1' */
  DR18E_Testpult_B.Gain1_c = DR18E_Testpult_P.Gain1_Gain_a *
    DR18E_Testpult_B.Sum2_e;

  /* TransferFcn: '<S583>/ModelReference3' */
  DR18E_Testpult_B.ModelReference3 = 0.0;
  DR18E_Testpult_B.ModelReference3 += DR18E_Testpult_P.ModelReference3_C *
    DR18E_Testpult_X.ModelReference3_CSTATE;

  /* Product: '<S583>/Product2' */
  DR18E_Testpult_B.Product2_h = DR18E_Testpult_B.Gain_jh *
    DR18E_Testpult_B.Gain1_c;

  /* Product: '<S583>/Product3' */
  DR18E_Testpult_B.Product3_c = DR18E_Testpult_B.Gain1_c *
    DR18E_Testpult_B.degrad;

  /* TransferFcn: '<S584>/ModelReference' */
  DR18E_Testpult_B.ModelReference_n = 0.0;
  DR18E_Testpult_B.ModelReference_n += DR18E_Testpult_P.ModelReference_C_g *
    DR18E_Testpult_X.ModelReference_CSTATE_l;

  /* Sum: '<S584>/Sum2' */
  DR18E_Testpult_B.Sum2_j = DR18E_Testpult_B.degrad -
    DR18E_Testpult_B.ModelReference_n;

  /* Gain: '<S584>/Gain1' */
  DR18E_Testpult_B.Gain1_d = DR18E_Testpult_P.Gain1_Gain_dn *
    DR18E_Testpult_B.Sum2_j;

  /* TransferFcn: '<S584>/ModelReference1' */
  DR18E_Testpult_B.ModelReference1_f = 0.0;
  DR18E_Testpult_B.ModelReference1_f += DR18E_Testpult_P.ModelReference1_C_i *
    DR18E_Testpult_X.ModelReference1_CSTATE_i;

  /* TransferFcn: '<S584>/ModelReference3' */
  DR18E_Testpult_B.ModelReference3_b = 0.0;
  DR18E_Testpult_B.ModelReference3_b += DR18E_Testpult_P.ModelReference3_C_b *
    DR18E_Testpult_X.ModelReference3_CSTATE_b;

  /* Product: '<S584>/Product2' */
  DR18E_Testpult_B.Product2_a = DR18E_Testpult_B.Gain_bh *
    DR18E_Testpult_B.Gain1_d;

  /* Product: '<S584>/Product3' */
  DR18E_Testpult_B.Product3_i = DR18E_Testpult_B.Gain1_d *
    DR18E_Testpult_B.degrad;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S589>/deg-rad' */
    DR18E_Testpult_B.degrad_d = DR18E_Testpult_P.degrad_Gain_b *
      DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel;

    /* Product: '<S589>/Product' */
    DR18E_Testpult_B.Product_h = DR18E_Testpult_B.degrad_d *
      DR18E_Testpult_B.kmhms;

    /* Math: '<S589>/sqr' */
    DR18E_Testpult_B.sqr = DR18E_Testpult_B.kmhms * DR18E_Testpult_B.kmhms;

    /* Product: '<S589>/Product1' incorporates:
     *  Constant: '<S589>/EG Einlenkgradient'
     */
    DR18E_Testpult_B.Product1_ov = DR18E_Testpult_B.sqr *
      DR18E_Testpult_P.EGEinlenkgradient_Value;

    /* Sum: '<S589>/Sum' incorporates:
     *  Constant: '<S589>/l Radstand'
     */
    DR18E_Testpult_B.Sum_hs = DR18E_Testpult_B.Product1_ov +
      DR18E_Testpult_P.lRadstand_Value;

    /* Product: '<S589>/Divide' */
    DR18E_Testpult_B.Divide_a = DR18E_Testpult_B.Product_h /
      DR18E_Testpult_B.Sum_hs;

    /* Gain: '<S589>/rad-deg' */
    DR18E_Testpult_B.raddeg = DR18E_Testpult_P.raddeg_Gain *
      DR18E_Testpult_B.Divide_a;

    /* Gain: '<S590>/Gain' */
    DR18E_Testpult_B.Gain_mv = DR18E_Testpult_P.Gain_Gain_pn *
      DR18E_Testpult_B.raddeg;

    /* DataTypeConversion: '<S590>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_hnd = (real32_T)DR18E_Testpult_B.Gain_mv;

    /* S-Function (rti_commonblock): '<S592>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(PsiPunktSoll_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_hnd);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Sum: '<S589>/Sum1' */
    DR18E_Testpult_B.Sum1_e = 0.0;
    for (i = 0; i < 5; i++) {
      /* S-Function (sfix_udelay): '<S589>/Tapped Delay' */
      DR18E_Testpult_B.TappedDelay[i] = DR18E_Testpult_DW.TappedDelay_X[i];

      /* Gain: '<S589>/deg-rad1' */
      DR18E_Testpult_B.degrad1_i[i] = DR18E_Testpult_P.degrad1_Gain_d *
        DR18E_Testpult_B.TappedDelay[i];
    }

    /* Sum: '<S591>/Sum' */
    DR18E_Testpult_B.Sum_fz = DR18E_Testpult_B.raddeg - DR18E_Testpult_B.Yaw_Z;

    /* RateTransition: '<S591>/Rate Transition' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition_h = DR18E_Testpult_B.Sum_fz;
    }

    /* End of RateTransition: '<S591>/Rate Transition' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
    /* Gain: '<S591>/K_OpenLoop1' */
    DR18E_Testpult_B.K_OpenLoop1 = DR18E_Testpult_P.K_OpenLoop1_Gain *
      DR18E_Testpult_B.RateTransition_h;

    /* Gain: '<S591>/2*Jz*rdyn//(br*i)' */
    DR18E_Testpult_B.uJzrdynbri = DR18E_Testpult_P.uJzrdynbri_Gain *
      DR18E_Testpult_B.K_OpenLoop1;

    /* Gain: '<S591>/K_ClosedLoop' */
    DR18E_Testpult_B.K_ClosedLoop = DR18E_Testpult_P.K_ClosedLoop_Gain *
      DR18E_Testpult_B.RateTransition_h;

    /* Gain: '<S594>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_p = DR18E_Testpult_P.PID_fromGA_P *
      DR18E_Testpult_B.K_ClosedLoop;

    /* DiscreteIntegrator: '<S594>/Integrator' */
    DR18E_Testpult_B.Integrator_e = DR18E_Testpult_DW.Integrator_DSTATE_b;

    /* Gain: '<S594>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain = DR18E_Testpult_P.PID_fromGA_D *
      DR18E_Testpult_B.K_ClosedLoop;

    /* DiscreteIntegrator: '<S594>/Filter' */
    DR18E_Testpult_B.Filter = DR18E_Testpult_DW.Filter_DSTATE;

    /* Sum: '<S594>/SumD' */
    DR18E_Testpult_B.SumD = DR18E_Testpult_B.DerivativeGain -
      DR18E_Testpult_B.Filter;

    /* Gain: '<S594>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient = DR18E_Testpult_P.PID_fromGA_N *
      DR18E_Testpult_B.SumD;

    /* Sum: '<S594>/Sum' */
    DR18E_Testpult_B.Sum_lv = (DR18E_Testpult_B.ProportionalGain_p +
      DR18E_Testpult_B.Integrator_e) + DR18E_Testpult_B.FilterCoefficient;

    /* ManualSwitch: '<S591>/Manual Switch' incorporates:
     *  Constant: '<S591>/Constant'
     */
    if (DR18E_Testpult_P.ManualSwitch_CurrentSetting == 1) {
      DR18E_Testpult_B.ManualSwitch = DR18E_Testpult_B.Sum_lv;
    } else {
      DR18E_Testpult_B.ManualSwitch = DR18E_Testpult_P.Constant_Value_c;
    }

    /* End of ManualSwitch: '<S591>/Manual Switch' */

    /* Gain: '<S594>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain = DR18E_Testpult_P.PID_fromGA_I *
      DR18E_Testpult_B.K_ClosedLoop;

    /* Sum: '<S591>/Sum1' */
    DR18E_Testpult_B.Sum1_is = DR18E_Testpult_B.uJzrdynbri +
      DR18E_Testpult_B.ManualSwitch;

    /* Gain: '<S595>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain_b = DR18E_Testpult_P.PID_fromOptim_D * 0.0;

    /* DiscreteIntegrator: '<S595>/Filter' */
    DR18E_Testpult_B.Filter_p = DR18E_Testpult_DW.Filter_DSTATE_m;

    /* Sum: '<S595>/SumD' */
    DR18E_Testpult_B.SumD_a = DR18E_Testpult_B.DerivativeGain_b -
      DR18E_Testpult_B.Filter_p;

    /* Gain: '<S595>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient_e = DR18E_Testpult_P.PID_fromOptim_N *
      DR18E_Testpult_B.SumD_a;

    /* Gain: '<S595>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_e = DR18E_Testpult_P.PID_fromOptim_I * 0.0;

    /* DiscreteIntegrator: '<S595>/Integrator' */
    DR18E_Testpult_B.Integrator_ef = DR18E_Testpult_DW.Integrator_DSTATE_e;

    /* Gain: '<S595>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_c = DR18E_Testpult_P.PID_fromOptim_P * 0.0;

    /* Sum: '<S595>/Sum' */
    DR18E_Testpult_B.Sum_d2 = (DR18E_Testpult_B.ProportionalGain_c +
      DR18E_Testpult_B.Integrator_ef) + DR18E_Testpult_B.FilterCoefficient_e;

    /* Gain: '<S596>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain_bg = DR18E_Testpult_P.PID_from_BJ_D * 0.0;

    /* DiscreteIntegrator: '<S596>/Filter' */
    DR18E_Testpult_B.Filter_n = DR18E_Testpult_DW.Filter_DSTATE_l;

    /* Sum: '<S596>/SumD' */
    DR18E_Testpult_B.SumD_j = DR18E_Testpult_B.DerivativeGain_bg -
      DR18E_Testpult_B.Filter_n;

    /* Gain: '<S596>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient_n = DR18E_Testpult_P.PID_from_BJ_N *
      DR18E_Testpult_B.SumD_j;

    /* Gain: '<S596>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_b = DR18E_Testpult_P.PID_from_BJ_I * 0.0;

    /* DiscreteIntegrator: '<S596>/Integrator' */
    DR18E_Testpult_B.Integrator_m = DR18E_Testpult_DW.Integrator_DSTATE_c;

    /* Gain: '<S596>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_pc = DR18E_Testpult_P.PID_from_BJ_P * 0.0;

    /* Sum: '<S596>/Sum' */
    DR18E_Testpult_B.Sum_b5 = (DR18E_Testpult_B.ProportionalGain_pc +
      DR18E_Testpult_B.Integrator_m) + DR18E_Testpult_B.FilterCoefficient_n;
  }

  /* TransferFcn: '<S597>/ModelReference' */
  DR18E_Testpult_B.ModelReference_h = 0.0;
  DR18E_Testpult_B.ModelReference_h += DR18E_Testpult_P.ModelReference_C_go *
    DR18E_Testpult_X.ModelReference_CSTATE_g;

  /* Sum: '<S597>/Sum' */
  DR18E_Testpult_B.Sum_ht = DR18E_Testpult_B.degrad_f -
    DR18E_Testpult_B.ModelReference_h;

  /* Product: '<S597>/Product1' */
  DR18E_Testpult_B.Product1_l = DR18E_Testpult_B.degrad_f *
    DR18E_Testpult_B.Sum_ht;

  /* Product: '<S597>/Product3' */
  DR18E_Testpult_B.Product3_p = DR18E_Testpult_B.Gravity2_p *
    DR18E_Testpult_B.Sum_ht;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S598>/Gain' */
    DR18E_Testpult_B.Gain_l = DR18E_Testpult_P.Gain_Gain_n *
      DR18E_Testpult_B.Gravity2_p;

    /* Gain: '<S599>/Gain' */
    DR18E_Testpult_B.Gain_i = DR18E_Testpult_P.Gain_Gain_cw *
      DR18E_Testpult_B.Gravity2_p;
  }

  /* TransferFcn: '<S598>/ModelReference' */
  DR18E_Testpult_B.ModelReference_e = 0.0;
  DR18E_Testpult_B.ModelReference_e += DR18E_Testpult_P.ModelReference_C_n *
    DR18E_Testpult_X.ModelReference_CSTATE_d;

  /* Sum: '<S598>/Sum2' */
  DR18E_Testpult_B.Sum2_a = DR18E_Testpult_B.degrad_f -
    DR18E_Testpult_B.ModelReference_e;

  /* Gain: '<S598>/Gain1' */
  DR18E_Testpult_B.Gain1_n = DR18E_Testpult_P.Gain1_Gain_e *
    DR18E_Testpult_B.Sum2_a;

  /* TransferFcn: '<S598>/ModelReference3' */
  DR18E_Testpult_B.ModelReference3_j = 0.0;
  DR18E_Testpult_B.ModelReference3_j += DR18E_Testpult_P.ModelReference3_C_l *
    DR18E_Testpult_X.ModelReference3_CSTATE_k;

  /* Product: '<S598>/Product2' */
  DR18E_Testpult_B.Product2_p = DR18E_Testpult_B.Gain_l *
    DR18E_Testpult_B.Gain1_n;

  /* Product: '<S598>/Product3' */
  DR18E_Testpult_B.Product3_d = DR18E_Testpult_B.Gain1_n *
    DR18E_Testpult_B.degrad_f;

  /* TransferFcn: '<S599>/ModelReference' */
  DR18E_Testpult_B.ModelReference_d = 0.0;
  DR18E_Testpult_B.ModelReference_d += DR18E_Testpult_P.ModelReference_C_a *
    DR18E_Testpult_X.ModelReference_CSTATE_m;

  /* Sum: '<S599>/Sum2' */
  DR18E_Testpult_B.Sum2_am = DR18E_Testpult_B.degrad_f -
    DR18E_Testpult_B.ModelReference_d;

  /* Gain: '<S599>/Gain1' */
  DR18E_Testpult_B.Gain1_cd = DR18E_Testpult_P.Gain1_Gain_i *
    DR18E_Testpult_B.Sum2_am;

  /* TransferFcn: '<S599>/ModelReference1' */
  DR18E_Testpult_B.ModelReference1_i = 0.0;
  DR18E_Testpult_B.ModelReference1_i += DR18E_Testpult_P.ModelReference1_C_f *
    DR18E_Testpult_X.ModelReference1_CSTATE_a;

  /* TransferFcn: '<S599>/ModelReference3' */
  DR18E_Testpult_B.ModelReference3_k = 0.0;
  DR18E_Testpult_B.ModelReference3_k += DR18E_Testpult_P.ModelReference3_C_o *
    DR18E_Testpult_X.ModelReference3_CSTATE_e;

  /* Product: '<S599>/Product2' */
  DR18E_Testpult_B.Product2_es = DR18E_Testpult_B.Gain_i *
    DR18E_Testpult_B.Gain1_cd;

  /* Product: '<S599>/Product3' */
  DR18E_Testpult_B.Product3_p0 = DR18E_Testpult_B.Gain1_cd *
    DR18E_Testpult_B.degrad_f;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S604>/deg-rad' */
    DR18E_Testpult_B.degrad_p = DR18E_Testpult_P.degrad_Gain_nd *
      DR18E_Testpult_B.LenkwinkelRadeinschlagwinkel_d;

    /* Product: '<S604>/Product' */
    DR18E_Testpult_B.Product_ix = DR18E_Testpult_B.degrad_p *
      DR18E_Testpult_B.kmhms_e;

    /* Math: '<S604>/sqr' */
    DR18E_Testpult_B.sqr_m = DR18E_Testpult_B.kmhms_e * DR18E_Testpult_B.kmhms_e;

    /* Product: '<S604>/Product1' incorporates:
     *  Constant: '<S604>/EG Einlenkgradient'
     */
    DR18E_Testpult_B.Product1_eb = DR18E_Testpult_B.sqr_m *
      DR18E_Testpult_P.EGEinlenkgradient_Value_h;

    /* Sum: '<S604>/Sum' incorporates:
     *  Constant: '<S604>/l Radstand'
     */
    DR18E_Testpult_B.Sum_l5 = DR18E_Testpult_B.Product1_eb +
      DR18E_Testpult_P.lRadstand_Value_a;

    /* Product: '<S604>/Divide' */
    DR18E_Testpult_B.Divide_ci = DR18E_Testpult_B.Product_ix /
      DR18E_Testpult_B.Sum_l5;

    /* Gain: '<S604>/rad-deg' */
    DR18E_Testpult_B.raddeg_g = DR18E_Testpult_P.raddeg_Gain_o *
      DR18E_Testpult_B.Divide_ci;

    /* Gain: '<S605>/Gain' */
    DR18E_Testpult_B.Gain_mn = DR18E_Testpult_P.Gain_Gain_l2x *
      DR18E_Testpult_B.raddeg_g;

    /* DataTypeConversion: '<S605>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_p = (real32_T)DR18E_Testpult_B.Gain_mn;

    /* S-Function (rti_commonblock): '<S607>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(PsiPunktSoll2_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_p);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Sum: '<S604>/Sum1' */
    DR18E_Testpult_B.Sum1_mx = 0.0;
    for (i = 0; i < 5; i++) {
      /* S-Function (sfix_udelay): '<S604>/Tapped Delay' */
      DR18E_Testpult_B.TappedDelay_f[i] = DR18E_Testpult_DW.TappedDelay_X_l[i];

      /* Gain: '<S604>/deg-rad1' */
      DR18E_Testpult_B.degrad1_g[i] = DR18E_Testpult_P.degrad1_Gain_g *
        DR18E_Testpult_B.TappedDelay_f[i];
    }

    /* Sum: '<S606>/Sum' */
    DR18E_Testpult_B.Sum_cp = DR18E_Testpult_B.raddeg_g - DR18E_Testpult_B.Yaw_Z;

    /* RateTransition: '<S606>/Rate Transition' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
      DR18E_Testpult_B.RateTransition_b = DR18E_Testpult_B.Sum_cp;
    }

    /* End of RateTransition: '<S606>/Rate Transition' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
    /* Gain: '<S606>/K_OpenLoop1' */
    DR18E_Testpult_B.K_OpenLoop1_g = DR18E_Testpult_P.K_OpenLoop1_Gain_d *
      DR18E_Testpult_B.RateTransition_b;

    /* Gain: '<S606>/2*Jz*rdyn//(br*i)' */
    DR18E_Testpult_B.uJzrdynbri_n = DR18E_Testpult_P.uJzrdynbri_Gain_h *
      DR18E_Testpult_B.K_OpenLoop1_g;

    /* Gain: '<S606>/K_ClosedLoop' */
    DR18E_Testpult_B.K_ClosedLoop_k = DR18E_Testpult_P.K_ClosedLoop_Gain_m *
      DR18E_Testpult_B.RateTransition_b;

    /* Gain: '<S609>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_d = DR18E_Testpult_P.PID_fromGA_P_k *
      DR18E_Testpult_B.K_ClosedLoop_k;

    /* DiscreteIntegrator: '<S609>/Integrator' */
    DR18E_Testpult_B.Integrator_f = DR18E_Testpult_DW.Integrator_DSTATE_f;

    /* Gain: '<S609>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain_j = DR18E_Testpult_P.PID_fromGA_D_j *
      DR18E_Testpult_B.K_ClosedLoop_k;

    /* DiscreteIntegrator: '<S609>/Filter' */
    DR18E_Testpult_B.Filter_d = DR18E_Testpult_DW.Filter_DSTATE_n;

    /* Sum: '<S609>/SumD' */
    DR18E_Testpult_B.SumD_c = DR18E_Testpult_B.DerivativeGain_j -
      DR18E_Testpult_B.Filter_d;

    /* Gain: '<S609>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient_ey = DR18E_Testpult_P.PID_fromGA_N_b *
      DR18E_Testpult_B.SumD_c;

    /* Sum: '<S609>/Sum' */
    DR18E_Testpult_B.Sum_hi = (DR18E_Testpult_B.ProportionalGain_d +
      DR18E_Testpult_B.Integrator_f) + DR18E_Testpult_B.FilterCoefficient_ey;

    /* ManualSwitch: '<S606>/Manual Switch' incorporates:
     *  Constant: '<S606>/Constant'
     */
    if (DR18E_Testpult_P.ManualSwitch_CurrentSetting_c == 1) {
      DR18E_Testpult_B.ManualSwitch_m = DR18E_Testpult_B.Sum_hi;
    } else {
      DR18E_Testpult_B.ManualSwitch_m = DR18E_Testpult_P.Constant_Value_b;
    }

    /* End of ManualSwitch: '<S606>/Manual Switch' */

    /* Gain: '<S609>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_h = DR18E_Testpult_P.PID_fromGA_I_n *
      DR18E_Testpult_B.K_ClosedLoop_k;

    /* Sum: '<S606>/Sum1' */
    DR18E_Testpult_B.Sum1_h = DR18E_Testpult_B.uJzrdynbri_n +
      DR18E_Testpult_B.ManualSwitch_m;

    /* Gain: '<S610>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain_l = DR18E_Testpult_P.PID_fromOptim_D_a * 0.0;

    /* DiscreteIntegrator: '<S610>/Filter' */
    DR18E_Testpult_B.Filter_c = DR18E_Testpult_DW.Filter_DSTATE_i;

    /* Sum: '<S610>/SumD' */
    DR18E_Testpult_B.SumD_d = DR18E_Testpult_B.DerivativeGain_l -
      DR18E_Testpult_B.Filter_c;

    /* Gain: '<S610>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient_d = DR18E_Testpult_P.PID_fromOptim_N_o *
      DR18E_Testpult_B.SumD_d;

    /* Gain: '<S610>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_c = DR18E_Testpult_P.PID_fromOptim_I_d * 0.0;

    /* DiscreteIntegrator: '<S610>/Integrator' */
    DR18E_Testpult_B.Integrator_o = DR18E_Testpult_DW.Integrator_DSTATE_p;

    /* Gain: '<S610>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_g = DR18E_Testpult_P.PID_fromOptim_P_d *
      0.0;

    /* Sum: '<S610>/Sum' */
    DR18E_Testpult_B.Sum_m = (DR18E_Testpult_B.ProportionalGain_g +
      DR18E_Testpult_B.Integrator_o) + DR18E_Testpult_B.FilterCoefficient_d;

    /* Gain: '<S611>/Derivative Gain' */
    DR18E_Testpult_B.DerivativeGain_c = DR18E_Testpult_P.PID_from_BJ_D_i * 0.0;

    /* DiscreteIntegrator: '<S611>/Filter' */
    DR18E_Testpult_B.Filter_m = DR18E_Testpult_DW.Filter_DSTATE_ma;

    /* Sum: '<S611>/SumD' */
    DR18E_Testpult_B.SumD_m = DR18E_Testpult_B.DerivativeGain_c -
      DR18E_Testpult_B.Filter_m;

    /* Gain: '<S611>/Filter Coefficient' */
    DR18E_Testpult_B.FilterCoefficient_h = DR18E_Testpult_P.PID_from_BJ_N_b *
      DR18E_Testpult_B.SumD_m;

    /* Gain: '<S611>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_g = DR18E_Testpult_P.PID_from_BJ_I_f * 0.0;

    /* DiscreteIntegrator: '<S611>/Integrator' */
    DR18E_Testpult_B.Integrator_a = DR18E_Testpult_DW.Integrator_DSTATE_ps;

    /* Gain: '<S611>/Proportional Gain' */
    DR18E_Testpult_B.ProportionalGain_j = DR18E_Testpult_P.PID_from_BJ_P_o * 0.0;

    /* Sum: '<S611>/Sum' */
    DR18E_Testpult_B.Sum_pc = (DR18E_Testpult_B.ProportionalGain_j +
      DR18E_Testpult_B.Integrator_a) + DR18E_Testpult_B.FilterCoefficient_h;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S625>/Gain' */
    DR18E_Testpult_B.Gain_f = DR18E_Testpult_P.Gain_Gain_p5 *
      DR18E_Testpult_B.Switch_p;

    /* DataTypeConversion: '<S625>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_id = (real32_T)DR18E_Testpult_B.Gain_f;

    /* S-Function (rti_commonblock): '<S629>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(gas_plausibel_prozent_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_id);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* RelationalOperator: '<S627>/Compare' incorporates:
     *  Constant: '<S627>/Constant'
     */
    DR18E_Testpult_B.Compare_mh = (DR18E_Testpult_B.Gas_01 ==
      DR18E_Testpult_P.Constant_Value_ma);

    /* Switch: '<S623>/Switch' incorporates:
     *  Constant: '<S623>/Constant'
     */
    if (DR18E_Testpult_B.Compare_mh) {
      DR18E_Testpult_B.Switch_pt = DR18E_Testpult_P.Constant_Value_n;
    } else {
      DR18E_Testpult_B.Switch_pt = DR18E_Testpult_B.SFunction1_o3_jr;
    }

    /* End of Switch: '<S623>/Switch' */

    /* RelationalOperator: '<S628>/Compare' incorporates:
     *  Constant: '<S628>/Constant'
     */
    DR18E_Testpult_B.Compare_cz = (DR18E_Testpult_B.Gas_01 ==
      DR18E_Testpult_P.Constant_Value_i2);

    /* Switch: '<S624>/Switch' incorporates:
     *  Constant: '<S624>/Constant'
     */
    if (DR18E_Testpult_B.Compare_cz) {
      DR18E_Testpult_B.Switch_k = DR18E_Testpult_P.Constant_Value_a;
    } else {
      DR18E_Testpult_B.Switch_k = DR18E_Testpult_B.SFunction1_o4_pw;
    }

    /* End of Switch: '<S624>/Switch' */

    /* MinMax: '<S626>/Min' */
    DR18E_Testpult_B.Min = 0.0;

    /* S-Function (rti_commonblock): '<S643>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* write to NV_RAM*/
    ds1401_nvram_write(4U, 2, (uint16_T*)&DR18E_Testpult_B.TagesenergieMABX_Wh);

    /* S-Function (rti_commonblock): '<S644>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* write to NV_RAM*/
    ds1401_nvram_write(1U, 2, (uint16_T*)&DR18E_Testpult_B.TagesmeterMABX_m);

    /* DataTypeConversion: '<S529>/Data Type Conversion1' */
    u0 = floor(DR18E_Testpult_B.Tagesmeter_fluechtig_s_m);
    if (rtIsNaN(u0) || rtIsInf(u0)) {
      u0 = 0.0;
    } else {
      u0 = fmod(u0, 4.294967296E+9);
    }

    DR18E_Testpult_B.DataTypeConversion1_l = u0 < 0.0 ? (uint32_T)-(int32_T)
      (uint32_T)-u0 : (uint32_T)u0;

    /* End of DataTypeConversion: '<S529>/Data Type Conversion1' */

    /* UnitDelay: '<S635>/UD' */
    DR18E_Testpult_B.Uk1_gr = DR18E_Testpult_DW.UD_DSTATE;

    /* Sum: '<S635>/Diff' */
    DR18E_Testpult_B.Diff = DR18E_Testpult_B.DataTypeConversion1_l -
      DR18E_Testpult_B.Uk1_gr;

    /* S-Function (rti_commonblock): '<S640>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* Sum: '<S529>/Add' */
    DR18E_Testpult_B.Add_p = DR18E_Testpult_B.Diff +
      DR18E_Testpult_B.SFunction1_k;

    /* Gain: '<S638>/Gain' */
    tmp = DR18E_Testpult_P.Gain_Gain_kh;
    tmp_0 = DR18E_Testpult_B.Add_p;
    uMultiWordMul(&tmp, 1, &tmp_0, 1, &tmp_2.chunks[0U], 2);
    DR18E_Testpult_B.Gain_o2 = tmp_2;

    /* DataTypeConversion: '<S638>/Data Type Conversion' */
    tmp_1 = DR18E_Testpult_B.Gain_o2;
    DR18E_Testpult_B.DataTypeConversion_cy = uMultiWordSingle(&tmp_1.chunks[0U],
      2, 0) * 4.65661287E-10F;

    /* S-Function (rti_commonblock): '<S645>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(gesamt_s_m_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_cy);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* S-Function (rti_commonblock): '<S642>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* write to NV_RAM*/
    ds1401_nvram_write(10U, 4, (uint32_T*)&DR18E_Testpult_B.Add_p);

    /* Gain: '<S646>/Gain' */
    DR18E_Testpult_B.Gain_hz = DR18E_Testpult_P.Gain_Gain_j *
      DR18E_Testpult_B.mskmh;

    /* DataTypeConversion: '<S646>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_g = (real32_T)DR18E_Testpult_B.Gain_hz;

    /* S-Function (rti_commonblock): '<S654>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(v_kmh_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_g);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S647>/Gain' */
    DR18E_Testpult_B.Gain_de = DR18E_Testpult_P.Gain_Gain_jl *
      DR18E_Testpult_B.Gain_m;

    /* DataTypeConversion: '<S647>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_o = (real32_T)DR18E_Testpult_B.Gain_de;

    /* S-Function (rti_commonblock): '<S655>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(DrehzahlRL_rpm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_o);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S648>/Gain' */
    DR18E_Testpult_B.Gain_on = DR18E_Testpult_P.Gain_Gain_dh *
      DR18E_Testpult_B.Gain1_o;

    /* DataTypeConversion: '<S648>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_kg = (real32_T)DR18E_Testpult_B.Gain_on;

    /* S-Function (rti_commonblock): '<S656>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(DrehzahlRR_rpm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_kg);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S649>/Gain' */
    DR18E_Testpult_B.Gain_dx = DR18E_Testpult_P.Gain_Gain_mo *
      DR18E_Testpult_B.SFunction1_o2_it;

    /* DataTypeConversion: '<S649>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_aa = (real32_T)DR18E_Testpult_B.Gain_dx;

    /* S-Function (rti_commonblock): '<S657>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(DrehzahlFR_rpm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_aa);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S650>/Gain' */
    DR18E_Testpult_B.Gain_aa = DR18E_Testpult_P.Gain_Gain_pr *
      DR18E_Testpult_B.SFunction1_o1_b3;

    /* DataTypeConversion: '<S650>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_co = (real32_T)DR18E_Testpult_B.Gain_aa;

    /* S-Function (rti_commonblock): '<S658>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(DrehzahlFL_rpm_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_co);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S651>/Gain' */
    DR18E_Testpult_B.Gain_gt = DR18E_Testpult_P.Gain_Gain_a *
      DR18E_Testpult_B.Saturation_p;

    /* DataTypeConversion: '<S651>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bz = (real32_T)DR18E_Testpult_B.Gain_gt;

    /* S-Function (rti_commonblock): '<S659>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(slip_links_0_1_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_bz);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S652>/Gain' */
    DR18E_Testpult_B.Gain_af = DR18E_Testpult_P.Gain_Gain_n2 *
      DR18E_Testpult_B.Saturation1_hx;

    /* DataTypeConversion: '<S652>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_kb = (real32_T)DR18E_Testpult_B.Gain_af;

    /* S-Function (rti_commonblock): '<S660>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(slip_rechts_0_1_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_kb);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S661>/Gain' */
    DR18E_Testpult_B.Gain_aj = DR18E_Testpult_P.Gain_Gain_lh *
      DR18E_Testpult_B.Tagesmeter_fluechtig_s_m;

    /* DataTypeConversion: '<S661>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_f3 = (real32_T)DR18E_Testpult_B.Gain_aj;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S662>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(tages_s_m_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_f3);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Saturate: '<S530>/größer 0' */
    u0 = DR18E_Testpult_B.vomegar;
    u1 = DR18E_Testpult_P.grer0_LowerSat;
    u2 = DR18E_Testpult_P.grer0_UpperSat;
    if (u0 > u2) {
      DR18E_Testpult_B.grer0 = u2;
    } else if (u0 < u1) {
      DR18E_Testpult_B.grer0 = u1;
    } else {
      DR18E_Testpult_B.grer0 = u0;
    }

    /* End of Saturate: '<S530>/größer 0' */

    /* Gain: '<S663>/Gain' */
    DR18E_Testpult_B.Gain_di = DR18E_Testpult_P.Gain_Gain_em *
      DR18E_Testpult_B.HVCurrent;

    /* DataTypeConversion: '<S663>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_hi = (real32_T)DR18E_Testpult_B.Gain_di;

    /* S-Function (rti_commonblock): '<S668>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(HV_current_A_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_hi);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S664>/Gain' */
    DR18E_Testpult_B.Gain_lq = DR18E_Testpult_P.Gain_Gain_jj *
      DR18E_Testpult_B.SFunction1_o1_mi;

    /* DataTypeConversion: '<S664>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bi = (real32_T)DR18E_Testpult_B.Gain_lq;

    /* S-Function (rti_commonblock): '<S669>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(HV_voltage_V_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_bi);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* DiscreteIntegrator: '<S532>/Discrete-Time Integrator' */
    DR18E_Testpult_B.CurrentConsumption =
      DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE_m;

    /* Gain: '<S665>/Gain' */
    DR18E_Testpult_B.Gain_p2 = DR18E_Testpult_P.Gain_Gain_if *
      DR18E_Testpult_B.CurrentConsumption;

    /* DataTypeConversion: '<S665>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_g3 = (real32_T)DR18E_Testpult_B.Gain_p2;

    /* S-Function (rti_commonblock): '<S670>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(currentConsumption_As_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_g3);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S666>/Gain' */
    DR18E_Testpult_B.Gain_om = DR18E_Testpult_P.Gain_Gain_he *
      DR18E_Testpult_B.HV_energy_con_Ws;

    /* DataTypeConversion: '<S666>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_ni = (real32_T)DR18E_Testpult_B.Gain_om;

    /* S-Function (rti_commonblock): '<S671>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(powerConsumption_Ws_Index_UsbFlRec,
        (Float32)DR18E_Testpult_B.DataTypeConversion_ni);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S667>/Gain' */
    DR18E_Testpult_B.Gain_kf = DR18E_Testpult_P.Gain_Gain_pp *
      DR18E_Testpult_B.HV_Power_Watt;

    /* DataTypeConversion: '<S667>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_j = (real32_T)DR18E_Testpult_B.Gain_kf;

    /* S-Function (rti_commonblock): '<S672>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(HV_power_W_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_j);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[5] == 0) {
    /* Gain: '<S679>/Integral Gain' */
    DR18E_Testpult_B.IntegralGain_j = DR18E_Testpult_P.PIController_I *
      DR18E_Testpult_B.Sum_h;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Gain: '<S698>/Gain' */
    DR18E_Testpult_B.Gain_nr = DR18E_Testpult_P.Gain_Gain_oo *
      DR18E_Testpult_B.O_State;

    /* DataTypeConversion: '<S698>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_bc = (real32_T)DR18E_Testpult_B.Gain_nr;

    /* S-Function (rti_commonblock): '<S701>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(State_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_bc);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Gain: '<S699>/Gain' */
    DR18E_Testpult_B.Gain_at = DR18E_Testpult_P.Gain_Gain_an *
      DR18E_Testpult_B.O_ErrorNr;

    /* DataTypeConversion: '<S699>/Data Type Conversion' */
    DR18E_Testpult_B.DataTypeConversion_hl = (real32_T)DR18E_Testpult_B.Gain_at;

    /* S-Function (rti_commonblock): '<S702>/S-Function1' */
    /* This comment workarounds a code generation problem */
    {
      /* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
      UInt16 tempU;
      Int16 errorCode = DSFLREC_USB_NO_ERROR;
      static UInt16 SecFullWarFlag = 0;
      static UInt16 DataLostWarFlag = 0;

      /* call routine for writting data in flash memory */
      errorCode = dsflrec_usb_write_float32(ErrorNo_Index_UsbFlRec, (Float32)
        DR18E_Testpult_B.DataTypeConversion_hl);
      switch (errorCode)
      {

#ifdef DEBUG_POLL

       case DSFLREC_USB_DATA_SECTION_FULL:
        if (SecFullWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_SECTION_FULL_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          SecFullWarFlag = 1;
        }
        break;

       case DSFLREC_USB_OVERRUN:
        if (DataLostWarFlag == 0) {
          /* warning dialog enable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_OKCANCEL);
          rti_msg_warning_set(RTI_USB_FLREC_DATA_LOST_WARNING);

          /* warning dialog disable */
          msg_default_dialog_set(MSG_MC_WARNING, MSG_DLG_NONE);
          DataLostWarFlag = 1;
        }
        break;

       case DSFLREC_USB_FLASH_TIME_OUT:
        rti_msg_error_set(RTI_USB_FLREC_FLASH_ERROR);
        exit (1);
        break;

       case DSFLREC_USB_WRITE_NOT_READY:
        rti_msg_error_set(RTI_USB_FLREC_WR_NOT_RDY_ERROR);
        exit (1);
        break;

#endif

       default:
        break;
      }
    }

    /* Outputs for Triggered SubSystem: '<S3>/CAN_TYPE1_BOR_M2_C1' incorporates:
     *  TriggerPort: '<S518>/Trigger'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
      /* Constant: '<S3>/CAN 1 Recovery' */
      zcEvent_0 = rt_ZCFcn(RISING_ZERO_CROSSING,
                           &DR18E_Testpult_PrevZCX.CAN_TYPE1_BOR_M2_C1_Trig_ZCE,
                           (DR18E_Testpult_P.CAN1Recovery_Value));
      if (zcEvent_0 != NO_ZCEVENT) {
        /* S-Function (rti_commonblock): '<S518>/S-Function1' */
        /* This comment workarounds a code generation problem */

        /* dSPACE RTICAN Bus Off Recovery block */
        /* ... Perform software-reset of the CAN microcontroller */
        {
          UInt32 loop_counter, memory;
          loop_counter = 0;
          while ((rtican_type1_tq_error[1][0] = can_tp1_channel_BOff_return
                  (can_type1_channel_M2_C1)) == DSMCOM_BUFFER_OVERFLOW) {
            loop_counter++;
            if (loop_counter > MAX_LOOP) {
              memory = rtican_type1_error_level;
              rtican_type1_error_level = 1;
              rtican_type1_tq_err_sig(1, 0);
              rtican_type1_error_level = memory;
              break;
            }
          }

          while ((rtican_type1_tq_error[1][0] = can_tp1_channel_all_wakeup
                  (can_type1_channel_M2_C1)) == DSMCOM_BUFFER_OVERFLOW) {
            loop_counter++;
            if (loop_counter > MAX_LOOP) {
              memory = rtican_type1_error_level;
              rtican_type1_error_level = 1;
              rtican_type1_tq_err_sig(1, 0);
              rtican_type1_error_level = memory;
              break;
            }
          }
        }
      }
    }

    /* End of Outputs for SubSystem: '<S3>/CAN_TYPE1_BOR_M2_C1' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S513>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN Status block */
    /* ... read status variables of the CAN microcontroller */
    {
      UInt32 loop_counter, memory, j;
      for (j=0;j<=9;j++) {
        rtican_type1_tq_error[1][6] = can_tp1_service_read
          (can_type1_service_M2_C1[j]);
        loop_counter = 0;
        while ((rtican_type1_tq_error[1][6] = can_tp1_service_request
                (can_type1_service_M2_C1[j]))== DSMCOM_BUFFER_OVERFLOW) {
          loop_counter++;
          if (loop_counter > MAX_LOOP) {
            memory = rtican_type1_error_level;
            rtican_type1_error_level = 1;
            rtican_type1_tq_err_sig(1, 6);
            rtican_type1_error_level = memory;
            break;
          }
        }

        if (j==CANTP1_M2_C1_RXLost) {
          rtican_type1_tq_error[1][6] = can_tp1_service_read
            (can_type1_service_M2_C1[CANTP1_M2_C1_DataLost]);
          loop_counter = 0;
          while ((rtican_type1_tq_error[1][6] = can_tp1_service_request
                  (can_type1_service_M2_C1[CANTP1_M2_C1_DataLost]))==
                 DSMCOM_BUFFER_OVERFLOW) {
            loop_counter++;
            if (loop_counter > MAX_LOOP) {
              memory = rtican_type1_error_level;
              rtican_type1_error_level = 1;
              rtican_type1_tq_err_sig(1, 6);
              rtican_type1_error_level = memory;
              break;
            }
          }
        }
      }

      DR18E_Testpult_B.SFunction1_o1_dj = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_Status]->data0;
      DR18E_Testpult_B.SFunction1_o2_np = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_StuffErrors]->data0;
      DR18E_Testpult_B.SFunction1_o3_ec = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_FormatErrors]->data0;
      DR18E_Testpult_B.SFunction1_o4_hu = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_AckErrors]->data0;
      DR18E_Testpult_B.SFunction1_o5_ee = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_Bit0Errors]->data0;
      DR18E_Testpult_B.SFunction1_o6_ma = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_Bit1Errors]->data0;
      DR18E_Testpult_B.SFunction1_o7_hy = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_CRCErrors]->data0;
      DR18E_Testpult_B.SFunction1_o8_d = (UInt32)
        (can_type1_service_M2_C1[CANTP1_M2_C1_RXLost]->data0 +
         can_type1_service_M2_C1[CANTP1_M2_C1_DataLost]->data0);
      DR18E_Testpult_B.SFunction1_o9_o = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_RXOK]->data0;
      DR18E_Testpult_B.SFunction1_o10_f = (UInt32)
        can_type1_service_M2_C1[CANTP1_M2_C1_TXOK]->data0;
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S515>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN Status block */
    /* ... read status variables of the CAN microcontroller */
    {
      UInt32 loop_counter, memory, j;
      for (j=0;j<=9;j++) {
        rtican_type1_tq_error[0][6] = can_tp1_service_read
          (can_type1_service_M1_C1[j]);
        loop_counter = 0;
        while ((rtican_type1_tq_error[0][6] = can_tp1_service_request
                (can_type1_service_M1_C1[j]))== DSMCOM_BUFFER_OVERFLOW) {
          loop_counter++;
          if (loop_counter > MAX_LOOP) {
            memory = rtican_type1_error_level;
            rtican_type1_error_level = 1;
            rtican_type1_tq_err_sig(0, 6);
            rtican_type1_error_level = memory;
            break;
          }
        }

        if (j==CANTP1_M1_C1_RXLost) {
          rtican_type1_tq_error[0][6] = can_tp1_service_read
            (can_type1_service_M1_C1[CANTP1_M1_C1_DataLost]);
          loop_counter = 0;
          while ((rtican_type1_tq_error[0][6] = can_tp1_service_request
                  (can_type1_service_M1_C1[CANTP1_M1_C1_DataLost]))==
                 DSMCOM_BUFFER_OVERFLOW) {
            loop_counter++;
            if (loop_counter > MAX_LOOP) {
              memory = rtican_type1_error_level;
              rtican_type1_error_level = 1;
              rtican_type1_tq_err_sig(0, 6);
              rtican_type1_error_level = memory;
              break;
            }
          }
        }
      }

      DR18E_Testpult_B.SFunction1_o1_eu = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_Status]->data0;
      DR18E_Testpult_B.SFunction1_o2_jz = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_StuffErrors]->data0;
      DR18E_Testpult_B.SFunction1_o3_ko = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_FormatErrors]->data0;
      DR18E_Testpult_B.SFunction1_o4_kg = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_AckErrors]->data0;
      DR18E_Testpult_B.SFunction1_o5_fu = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_Bit0Errors]->data0;
      DR18E_Testpult_B.SFunction1_o6_p1 = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_Bit1Errors]->data0;
      DR18E_Testpult_B.SFunction1_o7_bo = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_CRCErrors]->data0;
      DR18E_Testpult_B.SFunction1_o8_j = (UInt32)
        (can_type1_service_M1_C1[CANTP1_M1_C1_RXLost]->data0 +
         can_type1_service_M1_C1[CANTP1_M1_C1_DataLost]->data0);
      DR18E_Testpult_B.SFunction1_o9_k = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_RXOK]->data0;
      DR18E_Testpult_B.SFunction1_o10_d = (UInt32)
        can_type1_service_M1_C1[CANTP1_M1_C1_TXOK]->data0;
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[6] == 0) {
    /* S-Function (rti_commonblock): '<S517>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE RTICAN Status block */
    /* ... read status variables of the CAN microcontroller */
    {
      UInt32 loop_counter, memory, j;
      for (j=0;j<=9;j++) {
        rtican_type1_tq_error[0][6] = can_tp1_service_read
          (can_type1_service_M1_C2[j]);
        loop_counter = 0;
        while ((rtican_type1_tq_error[0][6] = can_tp1_service_request
                (can_type1_service_M1_C2[j]))== DSMCOM_BUFFER_OVERFLOW) {
          loop_counter++;
          if (loop_counter > MAX_LOOP) {
            memory = rtican_type1_error_level;
            rtican_type1_error_level = 1;
            rtican_type1_tq_err_sig(0, 6);
            rtican_type1_error_level = memory;
            break;
          }
        }

        if (j==CANTP1_M1_C2_RXLost) {
          rtican_type1_tq_error[0][6] = can_tp1_service_read
            (can_type1_service_M1_C2[CANTP1_M1_C2_DataLost]);
          loop_counter = 0;
          while ((rtican_type1_tq_error[0][6] = can_tp1_service_request
                  (can_type1_service_M1_C2[CANTP1_M1_C2_DataLost]))==
                 DSMCOM_BUFFER_OVERFLOW) {
            loop_counter++;
            if (loop_counter > MAX_LOOP) {
              memory = rtican_type1_error_level;
              rtican_type1_error_level = 1;
              rtican_type1_tq_err_sig(0, 6);
              rtican_type1_error_level = memory;
              break;
            }
          }
        }
      }

      DR18E_Testpult_B.SFunction1_o1_kb = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_Status]->data0;
      DR18E_Testpult_B.SFunction1_o2_hk = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_StuffErrors]->data0;
      DR18E_Testpult_B.SFunction1_o3_a1 = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_FormatErrors]->data0;
      DR18E_Testpult_B.SFunction1_o4_jl = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_AckErrors]->data0;
      DR18E_Testpult_B.SFunction1_o5_ob = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_Bit0Errors]->data0;
      DR18E_Testpult_B.SFunction1_o6_mn = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_Bit1Errors]->data0;
      DR18E_Testpult_B.SFunction1_o7_oh = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_CRCErrors]->data0;
      DR18E_Testpult_B.SFunction1_o8_a = (UInt32)
        (can_type1_service_M1_C2[CANTP1_M1_C2_RXLost]->data0 +
         can_type1_service_M1_C2[CANTP1_M1_C2_DataLost]->data0);
      DR18E_Testpult_B.SFunction1_o9_a = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_RXOK]->data0;
      DR18E_Testpult_B.SFunction1_o10_m = (UInt32)
        can_type1_service_M1_C2[CANTP1_M1_C2_TXOK]->data0;
    }
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* S-Function (rti_commonblock): '<S512>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S514>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S516>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* S-Function (rti_commonblock): '<S519>/S-Function1' */
    /* This comment workarounds a code generation problem */
  }
}

/* Model update function */
void DR18E_Testpult_update(void)
{
  real_T *lastU;
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update for UnitDelay: '<S12>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE = DR18E_Testpult_B.DataTypeConversion4;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S14>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput = DR18E_Testpult_B.OR;

    /* Update for Memory: '<S14>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput = DR18E_Testpult_B.Mem1;

    /* Update for Memory: '<S14>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput = DR18E_Testpult_B.Mem2;

    /* Update for Memory: '<S14>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput = DR18E_Testpult_B.Mem3;

    /* Update for UnitDelay: '<S696>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_p = DR18E_Testpult_B.Compare_l;

    /* Update for SwitchCase: '<S286>/Switch Case' */
    if (DR18E_Testpult_DW.SwitchCase_ActiveSubsystem == 1) {
      /* Update for IfAction SubSystem: '<S286>/Drehzahl' incorporates:
       *  Update for ActionPort: '<S288>/Action Port'
       */
      /* Update for Memory: '<S302>/Memory' */
      DR18E_Testpult_DW.Memory_PreviousInput_nz = DR18E_Testpult_B.Sum1_ps;

      /* End of Update for SubSystem: '<S286>/Drehzahl' */
    }

    /* End of Update for SwitchCase: '<S286>/Switch Case' */

    /* Update for Memory: '<S545>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput[0] = DR18E_Testpult_B.Sum1[0];
    DR18E_Testpult_DW.Memory_PreviousInput[1] = DR18E_Testpult_B.Sum1[1];

    /* Update for Memory: '<S24>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_p = DR18E_Testpult_B.OR_h;

    /* Update for Memory: '<S24>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_b = DR18E_Testpult_B.Mem1_c;

    /* Update for Memory: '<S24>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a = DR18E_Testpult_B.Mem2_f;

    /* Update for Memory: '<S24>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_h = DR18E_Testpult_B.Mem3_n;

    /* Update for Memory: '<S25>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_k = DR18E_Testpult_B.OR_n;

    /* Update for Memory: '<S25>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_c = DR18E_Testpult_B.Mem1_a;

    /* Update for Memory: '<S25>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_c = DR18E_Testpult_B.Mem2_k;

    /* Update for Memory: '<S25>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_d = DR18E_Testpult_B.Mem3_d;

    /* Update for Memory: '<S26>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_e = DR18E_Testpult_B.OR_hi;

    /* Update for Memory: '<S26>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_h = DR18E_Testpult_B.Mem1_o;

    /* Update for Memory: '<S26>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a0 = DR18E_Testpult_B.Mem2_c;

    /* Update for Memory: '<S26>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_e = DR18E_Testpult_B.Mem3_a;

    /* Update for Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S678>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_Pre =
      DR18E_Testpult_P.Constant_Value_c3;

    /* Update for Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S678>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_Pre =
      DR18E_Testpult_P.Constant_Value_c3;

    /* Update for Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S677>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_d =
      DR18E_Testpult_P.Constant_Value_k2;

    /* Update for Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S677>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_f =
      DR18E_Testpult_P.Constant_Value_k2;

    /* Update for Memory: '<S681>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_k = DR18E_Testpult_B.Sum1_g;

    /* Update for UnitDelay: '<S15>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_o =
      DR18E_Testpult_B.DataTypeConversion4_m;

    /* Update for Memory: '<S27>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_h = DR18E_Testpult_B.OR_g;

    /* Update for Memory: '<S27>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_k = DR18E_Testpult_B.Mem1_m;

    /* Update for Memory: '<S27>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_n = DR18E_Testpult_B.Mem2_g;

    /* Update for Memory: '<S27>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_n = DR18E_Testpult_B.Mem3_di;

    /* Update for Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport1' incorporates:
     *  Constant: '<S676>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_b =
      DR18E_Testpult_P.Constant_Value_day;

    /* Update for Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport2' incorporates:
     *  Constant: '<S676>/Constant'
     */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_k =
      DR18E_Testpult_P.Constant_Value_day;

    /* Update for SwitchCase: '<S287>/Switch Case' */
    if (DR18E_Testpult_DW.SwitchCase_ActiveSubsystem_p == 1) {
      /* Update for IfAction SubSystem: '<S287>/Drehzahl' incorporates:
       *  Update for ActionPort: '<S368>/Action Port'
       */
      /* Update for Memory: '<S379>/Memory' */
      DR18E_Testpult_DW.Memory_PreviousInput_oz = DR18E_Testpult_B.Sum1_l3;

      /* End of Update for SubSystem: '<S287>/Drehzahl' */
    }

    /* End of Update for SwitchCase: '<S287>/Switch Case' */
  }

  /* Update for Enabled SubSystem: '<S523>/AMSIMD_Latching' incorporates:
   *  Update for EnablePort: '<S536>/Enable'
   */
  if (DR18E_Testpult_DW.AMSIMD_Latching_MODE && (rtmIsMajorTimeStep
       (DR18E_Testpult_M) &&
       DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0)) {
    /* Update for Memory: '<S539>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_eq = DR18E_Testpult_B.Logic_f[0];

    /* Update for Memory: '<S540>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_oa = DR18E_Testpult_B.Logic_fh[0];
  }

  /* End of Update for SubSystem: '<S523>/AMSIMD_Latching' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[5] == 0) {
    /* Update for DiscreteIntegrator: '<S679>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE += DR18E_Testpult_P.Integrator_gainval *
      DR18E_Testpult_B.IntegralGain_j;
    DR18E_Testpult_DW.Integrator_PrevResetState = (int8_T)
      DR18E_Testpult_B.Compare_ko;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S680>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_j = DR18E_Testpult_B.Sum1_i;

    /* Update for UnitDelay: '<S16>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f =
      DR18E_Testpult_B.DataTypeConversion5;

    /* Update for Memory: '<S28>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_m = DR18E_Testpult_B.OR_d;

    /* Update for Memory: '<S28>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_n = DR18E_Testpult_B.Mem1_k;

    /* Update for Memory: '<S28>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_e = DR18E_Testpult_B.Mem2_ge;

    /* Update for Memory: '<S28>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_c = DR18E_Testpult_B.Mem3_o;

    /* Update for Memory: '<S29>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_d = DR18E_Testpult_B.OR_b;

    /* Update for Memory: '<S29>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_hu = DR18E_Testpult_B.Mem1_h;

    /* Update for Memory: '<S29>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_f = DR18E_Testpult_B.Mem2_e;

    /* Update for Memory: '<S29>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_dp = DR18E_Testpult_B.Mem3_l;

    /* Update for Memory: '<S30>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_l = DR18E_Testpult_B.OR_f;

    /* Update for Memory: '<S30>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_j = DR18E_Testpult_B.Mem1_ce;

    /* Update for Memory: '<S30>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_o = DR18E_Testpult_B.Mem2_n;

    /* Update for Memory: '<S30>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_n1 = DR18E_Testpult_B.Mem3_f;

    /* Update for Memory: '<S37>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_i = DR18E_Testpult_B.OR_k;

    /* Update for Memory: '<S37>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_o = DR18E_Testpult_B.Mem1_b;

    /* Update for Memory: '<S37>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_g = DR18E_Testpult_B.Mem2_d;

    /* Update for Memory: '<S37>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_f = DR18E_Testpult_B.Mem3_lm;

    /* Update for Memory: '<S35>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ia = DR18E_Testpult_B.OR_m;

    /* Update for Memory: '<S35>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_e = DR18E_Testpult_B.Mem1_b2;

    /* Update for Memory: '<S35>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_nc = DR18E_Testpult_B.Mem2_gb;

    /* Update for Memory: '<S35>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_cj = DR18E_Testpult_B.Mem3_c;

    /* Update for Memory: '<S36>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_b = DR18E_Testpult_B.OR_p;

    /* Update for Memory: '<S36>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_k4 = DR18E_Testpult_B.Mem1_mr;

    /* Update for Memory: '<S36>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_b = DR18E_Testpult_B.Mem2_ek;

    /* Update for Memory: '<S36>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fb = DR18E_Testpult_B.Mem3_p;

    /* Update for Memory: '<S38>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_dg = DR18E_Testpult_B.OR_e;

    /* Update for Memory: '<S38>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_l = DR18E_Testpult_B.Mem1_l;

    /* Update for Memory: '<S38>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_go = DR18E_Testpult_B.Mem2_nv;

    /* Update for Memory: '<S38>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_l = DR18E_Testpult_B.Mem3_h;

    /* Update for UnitDelay: '<S41>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_j = DR18E_Testpult_B.O_ErrorNr;

    /* Update for Memory: '<S46>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_is = DR18E_Testpult_B.OR_fz;

    /* Update for Memory: '<S46>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_nj = DR18E_Testpult_B.Mem1_g;

    /* Update for Memory: '<S46>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_bm = DR18E_Testpult_B.Mem2_nk;

    /* Update for Memory: '<S46>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_p = DR18E_Testpult_B.Mem3_lk;

    /* Update for UnitDelay: '<S42>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_n = DR18E_Testpult_B.O_State;

    /* Update for Memory: '<S47>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_m4 = DR18E_Testpult_B.OR_j;

    /* Update for Memory: '<S47>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_m = DR18E_Testpult_B.Mem1_j;

    /* Update for Memory: '<S47>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_oq = DR18E_Testpult_B.Mem2_d3;

    /* Update for Memory: '<S47>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_m = DR18E_Testpult_B.Mem3_fd;

    /* Update for Memory: '<S48>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_f = DR18E_Testpult_B.OR_l;

    /* Update for Memory: '<S48>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_g = DR18E_Testpult_B.Mem1_p;

    /* Update for Memory: '<S48>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_i = DR18E_Testpult_B.Mem2_ed;

    /* Update for Memory: '<S48>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_ne = DR18E_Testpult_B.Mem3_ox;

    /* Update for UnitDelay: '<S43>/Delay Input1' */
    memcpy(&DR18E_Testpult_DW.DelayInput1_DSTATE_e[0],
           &DR18E_Testpult_B.LEDBarVektor[0], sizeof(real_T) << 3U);

    /* Update for Memory: '<S49>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ig = DR18E_Testpult_B.OR_k5;

    /* Update for Memory: '<S49>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_hk = DR18E_Testpult_B.Mem1_f;

    /* Update for Memory: '<S49>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_if = DR18E_Testpult_B.Mem2_fu;

    /* Update for Memory: '<S49>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_la = DR18E_Testpult_B.Mem3_g;

    /* Update for Memory: '<S560>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_op = DR18E_Testpult_B.Logic[0];

    /* Update for Memory: '<S559>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_i = DR18E_Testpult_B.Sum1_d;

    /* Update for Atomic SubSystem: '<S487>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.TriggeredSubsystem,
      &DR18E_Testpult_DW.TriggeredSubsystem);

    /* End of Update for SubSystem: '<S487>/Triggered Subsystem' */

    /* Update for Atomic SubSystem: '<S488>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.TriggeredSubsystem_i,
      &DR18E_Testpult_DW.TriggeredSubsystem_i);

    /* End of Update for SubSystem: '<S488>/Triggered Subsystem' */

    /* Update for Atomic SubSystem: '<S496>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.TriggeredSubsystem_f,
      &DR18E_Testpult_DW.TriggeredSubsystem_f);

    /* End of Update for SubSystem: '<S496>/Triggered Subsystem' */

    /* Update for Atomic SubSystem: '<S443>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.TriggeredSubsystem_k,
      &DR18E_Testpult_DW.TriggeredSubsystem_k);

    /* End of Update for SubSystem: '<S443>/Triggered Subsystem' */
  }

  /* Update for Derivative: '<S576>/Derivative' */
  if (DR18E_Testpult_DW.TimeStampA == (rtInf)) {
    DR18E_Testpult_DW.TimeStampA = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA;
  } else if (DR18E_Testpult_DW.TimeStampB == (rtInf)) {
    DR18E_Testpult_DW.TimeStampB = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB;
  } else if (DR18E_Testpult_DW.TimeStampA < DR18E_Testpult_DW.TimeStampB) {
    DR18E_Testpult_DW.TimeStampA = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA;
  } else {
    DR18E_Testpult_DW.TimeStampB = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB;
  }

  *lastU = DR18E_Testpult_B.Saturation_p;

  /* End of Update for Derivative: '<S576>/Derivative' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Delay: '<S576>/Delay' */
    DR18E_Testpult_DW.Delay_DSTATE = DR18E_Testpult_B.MultiportSwitch;

    /* Update for Memory: '<S630>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_i0 = DR18E_Testpult_B.Sum1_b;

    /* Update for Memory: '<S631>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_o = DR18E_Testpult_B.Sum1_bz;

    /* Update for Memory: '<S578>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_a = DR18E_Testpult_B.Logic_j[0];
  }

  /* Update for Derivative: '<S583>/Derivative' */
  if (DR18E_Testpult_DW.TimeStampA_o == (rtInf)) {
    DR18E_Testpult_DW.TimeStampA_o = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_m;
  } else if (DR18E_Testpult_DW.TimeStampB_h == (rtInf)) {
    DR18E_Testpult_DW.TimeStampB_h = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_h;
  } else if (DR18E_Testpult_DW.TimeStampA_o < DR18E_Testpult_DW.TimeStampB_h) {
    DR18E_Testpult_DW.TimeStampA_o = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_m;
  } else {
    DR18E_Testpult_DW.TimeStampB_h = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_h;
  }

  *lastU = DR18E_Testpult_B.degrad;

  /* End of Update for Derivative: '<S583>/Derivative' */

  /* Update for RateTransition: '<S591>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
    DR18E_Testpult_DW.RateTransition1_Buffer0 = DR18E_Testpult_B.Sum1_is;
  }

  /* End of Update for RateTransition: '<S591>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Atomic SubSystem: '<S282>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.TriggeredSubsystem_a,
      &DR18E_Testpult_DW.TriggeredSubsystem_a);

    /* End of Update for SubSystem: '<S282>/Triggered Subsystem' */
  }

  /* Update for Derivative: '<S579>/Derivative' */
  if (DR18E_Testpult_DW.TimeStampA_os == (rtInf)) {
    DR18E_Testpult_DW.TimeStampA_os = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_n;
  } else if (DR18E_Testpult_DW.TimeStampB_j == (rtInf)) {
    DR18E_Testpult_DW.TimeStampB_j = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_c;
  } else if (DR18E_Testpult_DW.TimeStampA_os < DR18E_Testpult_DW.TimeStampB_j) {
    DR18E_Testpult_DW.TimeStampA_os = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_n;
  } else {
    DR18E_Testpult_DW.TimeStampB_j = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_c;
  }

  *lastU = DR18E_Testpult_B.Saturation1_hx;

  /* End of Update for Derivative: '<S579>/Derivative' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Delay: '<S579>/Delay' */
    DR18E_Testpult_DW.Delay_DSTATE_k = DR18E_Testpult_B.MultiportSwitch_c;

    /* Update for Memory: '<S581>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_aa = DR18E_Testpult_B.Logic_e[0];
  }

  /* Update for Derivative: '<S598>/Derivative' */
  if (DR18E_Testpult_DW.TimeStampA_o0 == (rtInf)) {
    DR18E_Testpult_DW.TimeStampA_o0 = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_p;
  } else if (DR18E_Testpult_DW.TimeStampB_p == (rtInf)) {
    DR18E_Testpult_DW.TimeStampB_p = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_f;
  } else if (DR18E_Testpult_DW.TimeStampA_o0 < DR18E_Testpult_DW.TimeStampB_p) {
    DR18E_Testpult_DW.TimeStampA_o0 = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeA_p;
  } else {
    DR18E_Testpult_DW.TimeStampB_p = DR18E_Testpult_M->Timing.t[0];
    lastU = &DR18E_Testpult_DW.LastUAtTimeB_f;
  }

  *lastU = DR18E_Testpult_B.degrad_f;

  /* End of Update for Derivative: '<S598>/Derivative' */

  /* Update for RateTransition: '<S606>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
    DR18E_Testpult_DW.RateTransition1_Buffer0_k = DR18E_Testpult_B.Sum1_h;
  }

  /* End of Update for RateTransition: '<S606>/Rate Transition1' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* Update for DiscreteIntegrator: '<S532>/Discrete-Time Integrator1' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator1_DSTATE +=
      DR18E_Testpult_P.DiscreteTimeIntegrator1_gainval *
      DR18E_Testpult_B.HV_Power_Watt;

    /* Update for UnitDelay: '<S637>/UD' */
    DR18E_Testpult_DW.UD_DSTATE_h = DR18E_Testpult_B.DataTypeConversion2_ap;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for DiscreteIntegrator: '<S653>/Discrete-Time Integrator' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE +=
      DR18E_Testpult_P.DiscreteTimeIntegrator_gainval * DR18E_Testpult_B.grer0;

    /* Update for UnitDelay: '<S636>/UD' */
    DR18E_Testpult_DW.UD_DSTATE_hj = DR18E_Testpult_B.DataTypeConversion_h1;

    /* Update for UnitDelay: '<S614>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_jg = DR18E_Testpult_B.Switch_a[0];

    /* Update for UnitDelay: '<S612>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_b = DR18E_Testpult_B.Switch_a[0];

    /* Update for Memory: '<S618>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_m = DR18E_Testpult_B.Logic_i[0];

    /* Update for Memory: '<S617>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_g = DR18E_Testpult_B.Product2_e;

    /* Update for UnitDelay: '<S615>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f2 = DR18E_Testpult_B.Switch_a[1];

    /* Update for UnitDelay: '<S613>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_nw = DR18E_Testpult_B.Switch_a[1];

    /* Update for Memory: '<S619>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_e = DR18E_Testpult_B.Logic_b[0];

    /* Update for Memory: '<S616>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_kf = DR18E_Testpult_B.Product2_f;
  }

  /* Update for Enabled SubSystem: '<S10>/Inverters TXUniversal' incorporates:
   *  Update for EnablePort: '<S53>/Enable'
   */
  if (DR18E_Testpult_DW.InvertersTXUniversal_MODE) {
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* Update for Memory: '<S65>/Mem1' */
      DR18E_Testpult_DW.Mem1_PreviousInput_iax = DR18E_Testpult_B.OR_pz;

      /* Update for Memory: '<S65>/Mem2' */
      DR18E_Testpult_DW.Mem2_PreviousInput_g2 = DR18E_Testpult_B.Mem1_cqr;

      /* Update for Memory: '<S65>/Mem3' */
      DR18E_Testpult_DW.Mem3_PreviousInput_cj = DR18E_Testpult_B.Mem2_j4;

      /* Update for Memory: '<S65>/Mem4' */
      DR18E_Testpult_DW.Mem4_PreviousInput_b = DR18E_Testpult_B.Mem3_iw;

      /* Update for Memory: '<S66>/Mem1' */
      DR18E_Testpult_DW.Mem1_PreviousInput_n3 = DR18E_Testpult_B.OR_nv;

      /* Update for Memory: '<S66>/Mem2' */
      DR18E_Testpult_DW.Mem2_PreviousInput_bd = DR18E_Testpult_B.Mem1_ax;

      /* Update for Memory: '<S66>/Mem3' */
      DR18E_Testpult_DW.Mem3_PreviousInput_d = DR18E_Testpult_B.Mem2_ol;

      /* Update for Memory: '<S66>/Mem4' */
      DR18E_Testpult_DW.Mem4_PreviousInput_kp = DR18E_Testpult_B.Mem3_pj;
    }
  }

  /* End of Update for SubSystem: '<S10>/Inverters TXUniversal' */

  /* Update for Enabled SubSystem: '<S10>/Umrichter Init' incorporates:
   *  Update for EnablePort: '<S56>/Enable'
   */
  if (DR18E_Testpult_DW.UmrichterInit_MODE) {
    /* Update for RateTransition: '<S69>/Rate Transition' incorporates:
     *  Update for RateTransition: '<S69>/Rate Transition1'
     *  Update for RateTransition: '<S70>/Rate Transition'
     */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
      DR18E_Testpult_DW.RateTransition_Buffer0 =
        DR18E_Testpult_B.SFunction1_o4_p2;
      DR18E_Testpult_DW.RateTransition1_Buffer0_l =
        DR18E_Testpult_B.SFunction1_o1_h2;
      DR18E_Testpult_DW.RateTransition_Buffer0_n =
        DR18E_Testpult_B.SFunction1_o4_acu;
    }

    /* End of Update for RateTransition: '<S69>/Rate Transition' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
      /* Update for Memory: '<S69>/Mem1' */
      DR18E_Testpult_DW.Mem1_PreviousInput_p3 = DR18E_Testpult_B.OR_bf;

      /* Update for Memory: '<S69>/Mem2' */
      DR18E_Testpult_DW.Mem2_PreviousInput_pz = DR18E_Testpult_B.Mem1_ob;

      /* Update for Memory: '<S69>/Mem3' */
      DR18E_Testpult_DW.Mem3_PreviousInput_m = DR18E_Testpult_B.Mem2_nb;

      /* Update for Memory: '<S69>/Mem4' */
      DR18E_Testpult_DW.Mem4_PreviousInput_g = DR18E_Testpult_B.Mem3_k;

      /* Update for Memory: '<S70>/Mem1' */
      DR18E_Testpult_DW.Mem1_PreviousInput_bf = DR18E_Testpult_B.OR_p1;

      /* Update for Memory: '<S70>/Mem2' */
      DR18E_Testpult_DW.Mem2_PreviousInput_ee = DR18E_Testpult_B.Mem1_la;

      /* Update for Memory: '<S70>/Mem3' */
      DR18E_Testpult_DW.Mem3_PreviousInput_pq = DR18E_Testpult_B.Mem2_fi;

      /* Update for Memory: '<S70>/Mem4' */
      DR18E_Testpult_DW.Mem4_PreviousInput_cg = DR18E_Testpult_B.Mem3_ib;
    }

    /* Update for RateTransition: '<S70>/Rate Transition1' */
    if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
        DR18E_Testpult_M->Timing.TaskCounters.TID[4] == 0) {
      DR18E_Testpult_DW.RateTransition1_Buffer0_i =
        DR18E_Testpult_B.SFunction1_o1_pw;
    }

    /* End of Update for RateTransition: '<S70>/Rate Transition1' */
  }

  /* End of Update for SubSystem: '<S10>/Umrichter Init' */
  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S72>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f2m = DR18E_Testpult_B.RateTransition_e;

    /* Update for UnitDelay: '<S73>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_ot =
      DR18E_Testpult_B.DataTypeConversion1_n;

    /* Update for UnitDelay: '<S74>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_m =
      DR18E_Testpult_B.DataTypeConversion3_m;

    /* Update for UnitDelay: '<S75>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_a =
      DR18E_Testpult_B.DataTypeConversion2_o;

    /* Update for Memory: '<S76>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_fm = DR18E_Testpult_B.OR_np;

    /* Update for Memory: '<S76>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ma = DR18E_Testpult_B.Mem1_h4;

    /* Update for Memory: '<S76>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_j = DR18E_Testpult_B.Mem2_m;

    /* Update for Memory: '<S76>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_lt = DR18E_Testpult_B.Mem3_ch;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* Update for Atomic SubSystem: '<S187>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem,
      &DR18E_Testpult_DW.Subsystem);

    /* End of Update for SubSystem: '<S187>/Subsystem' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Atomic SubSystem: '<S186>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_d,
      &DR18E_Testpult_DW.Subsystem_d);

    /* End of Update for SubSystem: '<S186>/Subsystem' */

    /* Update for Atomic SubSystem: '<S188>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_f,
      &DR18E_Testpult_DW.Subsystem_f);

    /* End of Update for SubSystem: '<S188>/Subsystem' */

    /* Update for Atomic SubSystem: '<S196>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_g,
      &DR18E_Testpult_DW.Subsystem_g);

    /* End of Update for SubSystem: '<S196>/Subsystem' */

    /* Update for Atomic SubSystem: '<S195>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_j,
      &DR18E_Testpult_DW.Subsystem_j);

    /* End of Update for SubSystem: '<S195>/Subsystem' */

    /* Update for Atomic SubSystem: '<S197>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_n,
      &DR18E_Testpult_DW.Subsystem_n);

    /* End of Update for SubSystem: '<S197>/Subsystem' */

    /* Update for Atomic SubSystem: '<S207>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_b,
      &DR18E_Testpult_DW.Subsystem_b);

    /* End of Update for SubSystem: '<S207>/Subsystem' */

    /* Update for Atomic SubSystem: '<S206>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_l,
      &DR18E_Testpult_DW.Subsystem_l);

    /* End of Update for SubSystem: '<S206>/Subsystem' */

    /* Update for Atomic SubSystem: '<S208>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_i,
      &DR18E_Testpult_DW.Subsystem_i);

    /* End of Update for SubSystem: '<S208>/Subsystem' */

    /* Update for Atomic SubSystem: '<S216>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_k,
      &DR18E_Testpult_DW.Subsystem_k);

    /* End of Update for SubSystem: '<S216>/Subsystem' */

    /* Update for Atomic SubSystem: '<S215>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_bk,
      &DR18E_Testpult_DW.Subsystem_bk);

    /* End of Update for SubSystem: '<S215>/Subsystem' */

    /* Update for Atomic SubSystem: '<S217>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_a,
      &DR18E_Testpult_DW.Subsystem_a);

    /* End of Update for SubSystem: '<S217>/Subsystem' */

    /* Update for Atomic SubSystem: '<S227>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_js,
      &DR18E_Testpult_DW.Subsystem_js);

    /* End of Update for SubSystem: '<S227>/Subsystem' */

    /* Update for Atomic SubSystem: '<S226>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_gd,
      &DR18E_Testpult_DW.Subsystem_gd);

    /* End of Update for SubSystem: '<S226>/Subsystem' */

    /* Update for Atomic SubSystem: '<S228>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_be,
      &DR18E_Testpult_DW.Subsystem_be);

    /* End of Update for SubSystem: '<S228>/Subsystem' */

    /* Update for Atomic SubSystem: '<S236>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_fq,
      &DR18E_Testpult_DW.Subsystem_fq);

    /* End of Update for SubSystem: '<S236>/Subsystem' */

    /* Update for Atomic SubSystem: '<S235>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_fr,
      &DR18E_Testpult_DW.Subsystem_fr);

    /* End of Update for SubSystem: '<S235>/Subsystem' */

    /* Update for Atomic SubSystem: '<S237>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_c,
      &DR18E_Testpult_DW.Subsystem_c);

    /* End of Update for SubSystem: '<S237>/Subsystem' */

    /* Update for Atomic SubSystem: '<S247>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_o,
      &DR18E_Testpult_DW.Subsystem_o);

    /* End of Update for SubSystem: '<S247>/Subsystem' */

    /* Update for Atomic SubSystem: '<S246>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_n4,
      &DR18E_Testpult_DW.Subsystem_n4);

    /* End of Update for SubSystem: '<S246>/Subsystem' */

    /* Update for Atomic SubSystem: '<S248>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_oy,
      &DR18E_Testpult_DW.Subsystem_oy);

    /* End of Update for SubSystem: '<S248>/Subsystem' */

    /* Update for Atomic SubSystem: '<S256>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_dm,
      &DR18E_Testpult_DW.Subsystem_dm);

    /* End of Update for SubSystem: '<S256>/Subsystem' */

    /* Update for Atomic SubSystem: '<S255>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_e,
      &DR18E_Testpult_DW.Subsystem_e);

    /* End of Update for SubSystem: '<S255>/Subsystem' */

    /* Update for Atomic SubSystem: '<S257>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_kn,
      &DR18E_Testpult_DW.Subsystem_kn);

    /* End of Update for SubSystem: '<S257>/Subsystem' */

    /* Update for Atomic SubSystem: '<S91>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_ld,
      &DR18E_Testpult_DW.Subsystem_ld);

    /* End of Update for SubSystem: '<S91>/Subsystem' */

    /* Update for Atomic SubSystem: '<S176>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_e3,
      &DR18E_Testpult_DW.Subsystem_e3);

    /* End of Update for SubSystem: '<S176>/Subsystem' */

    /* Update for Atomic SubSystem: '<S175>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_kl,
      &DR18E_Testpult_DW.Subsystem_kl);

    /* End of Update for SubSystem: '<S175>/Subsystem' */

    /* Update for Atomic SubSystem: '<S177>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_bek,
      &DR18E_Testpult_DW.Subsystem_bek);

    /* End of Update for SubSystem: '<S177>/Subsystem' */

    /* Update for Atomic SubSystem: '<S167>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_m,
      &DR18E_Testpult_DW.Subsystem_m);

    /* End of Update for SubSystem: '<S167>/Subsystem' */

    /* Update for Atomic SubSystem: '<S166>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_nc,
      &DR18E_Testpult_DW.Subsystem_nc);

    /* End of Update for SubSystem: '<S166>/Subsystem' */

    /* Update for Atomic SubSystem: '<S168>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_lz,
      &DR18E_Testpult_DW.Subsystem_lz);

    /* End of Update for SubSystem: '<S168>/Subsystem' */

    /* Update for Memory: '<S90>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_o = DR18E_Testpult_B.OR_a;

    /* Update for Memory: '<S90>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_a = DR18E_Testpult_B.Mem1_hb;

    /* Update for Memory: '<S90>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_e2 = DR18E_Testpult_B.Mem2_fux;

    /* Update for Memory: '<S90>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_o = DR18E_Testpult_B.Mem3_b;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[3] == 0) {
    /* Update for Atomic SubSystem: '<S111>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_ig,
      &DR18E_Testpult_DW.Subsystem_ig);

    /* End of Update for SubSystem: '<S111>/Subsystem' */

    /* Update for Atomic SubSystem: '<S113>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_im,
      &DR18E_Testpult_DW.Subsystem_im);

    /* End of Update for SubSystem: '<S113>/Subsystem' */

    /* Update for Atomic SubSystem: '<S114>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_dl,
      &DR18E_Testpult_DW.Subsystem_dl);

    /* End of Update for SubSystem: '<S114>/Subsystem' */

    /* Update for Atomic SubSystem: '<S115>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_om,
      &DR18E_Testpult_DW.Subsystem_om);

    /* End of Update for SubSystem: '<S115>/Subsystem' */

    /* Update for Atomic SubSystem: '<S116>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_fe,
      &DR18E_Testpult_DW.Subsystem_fe);

    /* End of Update for SubSystem: '<S116>/Subsystem' */

    /* Update for Atomic SubSystem: '<S117>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_nm,
      &DR18E_Testpult_DW.Subsystem_nm);

    /* End of Update for SubSystem: '<S117>/Subsystem' */

    /* Update for Atomic SubSystem: '<S118>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_la,
      &DR18E_Testpult_DW.Subsystem_la);

    /* End of Update for SubSystem: '<S118>/Subsystem' */

    /* Update for Atomic SubSystem: '<S119>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_co,
      &DR18E_Testpult_DW.Subsystem_co);

    /* End of Update for SubSystem: '<S119>/Subsystem' */

    /* Update for Atomic SubSystem: '<S120>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_nx,
      &DR18E_Testpult_DW.Subsystem_nx);

    /* End of Update for SubSystem: '<S120>/Subsystem' */

    /* Update for Atomic SubSystem: '<S112>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_e1,
      &DR18E_Testpult_DW.Subsystem_e1);

    /* End of Update for SubSystem: '<S112>/Subsystem' */

    /* Update for Atomic SubSystem: '<S141>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_ms,
      &DR18E_Testpult_DW.Subsystem_ms);

    /* End of Update for SubSystem: '<S141>/Subsystem' */

    /* Update for Atomic SubSystem: '<S143>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_ot,
      &DR18E_Testpult_DW.Subsystem_ot);

    /* End of Update for SubSystem: '<S143>/Subsystem' */

    /* Update for Atomic SubSystem: '<S144>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_eq,
      &DR18E_Testpult_DW.Subsystem_eq);

    /* End of Update for SubSystem: '<S144>/Subsystem' */

    /* Update for Atomic SubSystem: '<S145>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_fqo,
      &DR18E_Testpult_DW.Subsystem_fqo);

    /* End of Update for SubSystem: '<S145>/Subsystem' */

    /* Update for Atomic SubSystem: '<S146>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_c0,
      &DR18E_Testpult_DW.Subsystem_c0);

    /* End of Update for SubSystem: '<S146>/Subsystem' */

    /* Update for Atomic SubSystem: '<S147>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_mf,
      &DR18E_Testpult_DW.Subsystem_mf);

    /* End of Update for SubSystem: '<S147>/Subsystem' */

    /* Update for Atomic SubSystem: '<S148>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_jsn,
      &DR18E_Testpult_DW.Subsystem_jsn);

    /* End of Update for SubSystem: '<S148>/Subsystem' */

    /* Update for Atomic SubSystem: '<S149>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_ih,
      &DR18E_Testpult_DW.Subsystem_ih);

    /* End of Update for SubSystem: '<S149>/Subsystem' */

    /* Update for Atomic SubSystem: '<S150>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_h,
      &DR18E_Testpult_DW.Subsystem_h);

    /* End of Update for SubSystem: '<S150>/Subsystem' */

    /* Update for Atomic SubSystem: '<S142>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_nw,
      &DR18E_Testpult_DW.Subsystem_nw);

    /* End of Update for SubSystem: '<S142>/Subsystem' */
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for Memory: '<S263>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_a = DR18E_Testpult_B.OR_bk;

    /* Update for Memory: '<S263>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_d = DR18E_Testpult_B.Mem1_ok;

    /* Update for Memory: '<S263>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ou = DR18E_Testpult_B.Mem2_kb;

    /* Update for Memory: '<S263>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_lx = DR18E_Testpult_B.Mem3_m;

    /* Update for Memory: '<S264>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_n = DR18E_Testpult_B.OR_j0;

    /* Update for Memory: '<S264>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_gl = DR18E_Testpult_B.Mem1_f1;

    /* Update for Memory: '<S264>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_k = DR18E_Testpult_B.Mem2_a;

    /* Update for Memory: '<S264>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_k = DR18E_Testpult_B.Mem3_pu;

    /* Update for Atomic SubSystem: '<S270>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_cy,
      &DR18E_Testpult_DW.Subsystem_cy);

    /* End of Update for SubSystem: '<S270>/Subsystem' */

    /* Update for Memory: '<S267>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_oh = DR18E_Testpult_B.OR_o;

    /* Update for Memory: '<S267>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_a3 = DR18E_Testpult_B.Mem1_pz;

    /* Update for Memory: '<S267>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_g3 = DR18E_Testpult_B.Mem2_h;

    /* Update for Memory: '<S267>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_mx = DR18E_Testpult_B.Mem3_oo;

    /* Update for Atomic SubSystem: '<S275>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_p,
      &DR18E_Testpult_DW.Subsystem_p);

    /* End of Update for SubSystem: '<S275>/Subsystem' */

    /* Update for Atomic SubSystem: '<S276>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_bp,
      &DR18E_Testpult_DW.Subsystem_bp);

    /* End of Update for SubSystem: '<S276>/Subsystem' */

    /* Update for Atomic SubSystem: '<S277>/Subsystem' */
    DR18E_Testpult_Subsystem_Update(&DR18E_Testpult_B.Subsystem_gh,
      &DR18E_Testpult_DW.Subsystem_gh);

    /* End of Update for SubSystem: '<S277>/Subsystem' */

    /* Update for Memory: '<S298>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_mt = DR18E_Testpult_B.OR_f4;

    /* Update for Memory: '<S298>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_i = DR18E_Testpult_B.Mem1_fn;

    /* Update for Memory: '<S298>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_kb = DR18E_Testpult_B.Mem2_fz;

    /* Update for Memory: '<S298>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_ne0 = DR18E_Testpult_B.Mem3_e;

    /* Update for Memory: '<S298>/Mem5' */
    DR18E_Testpult_DW.Mem5_PreviousInput = DR18E_Testpult_B.Mem4_px;

    /* Update for Memory: '<S375>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_fe = DR18E_Testpult_B.OR_bz;

    /* Update for Memory: '<S375>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_lp = DR18E_Testpult_B.Mem1_cq;

    /* Update for Memory: '<S375>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_fr = DR18E_Testpult_B.Mem2_a2;

    /* Update for Memory: '<S375>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_p3 = DR18E_Testpult_B.Mem3_bs;

    /* Update for Memory: '<S375>/Mem5' */
    DR18E_Testpult_DW.Mem5_PreviousInput_f = DR18E_Testpult_B.Mem4_io;

    /* Update for Memory: '<S466>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_n = DR18E_Testpult_B.Sum1_m;

    /* Update for Memory: '<S468>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_d = DR18E_Testpult_B.Sum1_b2;

    /* Update for Memory: '<S484>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ip = DR18E_Testpult_B.OR_fm;

    /* Update for Memory: '<S484>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ii = DR18E_Testpult_B.Mem1_mh;

    /* Update for Memory: '<S484>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a4 = DR18E_Testpult_B.Mem2_gi;

    /* Update for Memory: '<S484>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fj = DR18E_Testpult_B.Mem3_i;

    /* Update for Memory: '<S485>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_pt = DR18E_Testpult_B.OR_jt;

    /* Update for Memory: '<S485>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ak = DR18E_Testpult_B.Mem1_e;

    /* Update for Memory: '<S485>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_fc = DR18E_Testpult_B.Mem2_j;

    /* Update for Memory: '<S485>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_h3 = DR18E_Testpult_B.Mem3_df;

    /* Update for Memory: '<S486>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_e5 = DR18E_Testpult_B.OR_bp;

    /* Update for Memory: '<S486>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_at = DR18E_Testpult_B.Mem1_kb;

    /* Update for Memory: '<S486>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ii = DR18E_Testpult_B.Mem2_ki;

    /* Update for Memory: '<S486>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_kr = DR18E_Testpult_B.Mem3_c5;

    /* Update for Memory: '<S497>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_pc = DR18E_Testpult_B.OR_bc;

    /* Update for Memory: '<S497>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_c2 = DR18E_Testpult_B.Mem1_n;

    /* Update for Memory: '<S497>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ah = DR18E_Testpult_B.Mem2_mb;

    /* Update for Memory: '<S497>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fw = DR18E_Testpult_B.Mem3_gx;

    /* Update for Memory: '<S498>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_bw = DR18E_Testpult_B.OR_o2;

    /* Update for Memory: '<S498>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_cz = DR18E_Testpult_B.Mem1_c2;

    /* Update for Memory: '<S498>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_os = DR18E_Testpult_B.Mem2_hh;

    /* Update for Memory: '<S498>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_i = DR18E_Testpult_B.Mem3_hh;

    /* Update for Memory: '<S506>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_hl = DR18E_Testpult_B.OR_m1;

    /* Update for Memory: '<S506>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ls = DR18E_Testpult_B.Mem1_em;

    /* Update for Memory: '<S506>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_p = DR18E_Testpult_B.Mem2_i;

    /* Update for Memory: '<S506>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_dpj = DR18E_Testpult_B.Mem3_gt;

    /* Update for Memory: '<S507>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_g = DR18E_Testpult_B.OR_c;

    /* Update for Memory: '<S507>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ez = DR18E_Testpult_B.Mem1_nx;

    /* Update for Memory: '<S507>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_nb = DR18E_Testpult_B.Mem2_jr;

    /* Update for Memory: '<S507>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_j = DR18E_Testpult_B.Mem3_hm;

    /* Update for Memory: '<S508>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ba = DR18E_Testpult_B.OR_oh;

    /* Update for Memory: '<S508>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_p = DR18E_Testpult_B.Mem1_bp;

    /* Update for Memory: '<S508>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ip = DR18E_Testpult_B.Mem2_o;

    /* Update for Memory: '<S508>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_iq = DR18E_Testpult_B.Mem3_gf;

    /* Update for S-Function (sfix_udelay): '<S589>/Tapped Delay' */
    DR18E_Testpult_DW.TappedDelay_X[0] = DR18E_Testpult_DW.TappedDelay_X[1];
    DR18E_Testpult_DW.TappedDelay_X[1] = DR18E_Testpult_DW.TappedDelay_X[2];
    DR18E_Testpult_DW.TappedDelay_X[2] = DR18E_Testpult_DW.TappedDelay_X[3];
    DR18E_Testpult_DW.TappedDelay_X[3] = DR18E_Testpult_DW.TappedDelay_X[4];
    DR18E_Testpult_DW.TappedDelay_X[4] = 0.0;

    /* Update for S-Function (sfix_udelay): '<S604>/Tapped Delay' */
    DR18E_Testpult_DW.TappedDelay_X_l[0] = DR18E_Testpult_DW.TappedDelay_X_l[1];
    DR18E_Testpult_DW.TappedDelay_X_l[1] = DR18E_Testpult_DW.TappedDelay_X_l[2];
    DR18E_Testpult_DW.TappedDelay_X_l[2] = DR18E_Testpult_DW.TappedDelay_X_l[3];
    DR18E_Testpult_DW.TappedDelay_X_l[3] = DR18E_Testpult_DW.TappedDelay_X_l[4];
    DR18E_Testpult_DW.TappedDelay_X_l[4] = 0.0;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[2] == 0) {
    /* Update for DiscreteIntegrator: '<S594>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_b +=
      DR18E_Testpult_P.Integrator_gainval_n * DR18E_Testpult_B.IntegralGain;

    /* Update for DiscreteIntegrator: '<S594>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE += DR18E_Testpult_P.Filter_gainval *
      DR18E_Testpult_B.FilterCoefficient;

    /* Update for DiscreteIntegrator: '<S595>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_m += DR18E_Testpult_P.Filter_gainval_b *
      DR18E_Testpult_B.FilterCoefficient_e;

    /* Update for DiscreteIntegrator: '<S595>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_e +=
      DR18E_Testpult_P.Integrator_gainval_g * DR18E_Testpult_B.IntegralGain_e;

    /* Update for DiscreteIntegrator: '<S596>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_l += DR18E_Testpult_P.Filter_gainval_p *
      DR18E_Testpult_B.FilterCoefficient_n;

    /* Update for DiscreteIntegrator: '<S596>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_c +=
      DR18E_Testpult_P.Integrator_gainval_h * DR18E_Testpult_B.IntegralGain_b;

    /* Update for DiscreteIntegrator: '<S609>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_f +=
      DR18E_Testpult_P.Integrator_gainval_gy * DR18E_Testpult_B.IntegralGain_h;

    /* Update for DiscreteIntegrator: '<S609>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_n += DR18E_Testpult_P.Filter_gainval_f *
      DR18E_Testpult_B.FilterCoefficient_ey;

    /* Update for DiscreteIntegrator: '<S610>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_i += DR18E_Testpult_P.Filter_gainval_c *
      DR18E_Testpult_B.FilterCoefficient_d;

    /* Update for DiscreteIntegrator: '<S610>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_p +=
      DR18E_Testpult_P.Integrator_gainval_f * DR18E_Testpult_B.IntegralGain_c;

    /* Update for DiscreteIntegrator: '<S611>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_ma += DR18E_Testpult_P.Filter_gainval_k *
      DR18E_Testpult_B.FilterCoefficient_h;

    /* Update for DiscreteIntegrator: '<S611>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_ps +=
      DR18E_Testpult_P.Integrator_gainval_hd * DR18E_Testpult_B.IntegralGain_g;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S635>/UD' */
    DR18E_Testpult_DW.UD_DSTATE = DR18E_Testpult_B.DataTypeConversion1_l;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M) &&
      DR18E_Testpult_M->Timing.TaskCounters.TID[7] == 0) {
    /* Update for DiscreteIntegrator: '<S532>/Discrete-Time Integrator' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE_m +=
      DR18E_Testpult_P.DiscreteTimeIntegrator_gainva_a *
      DR18E_Testpult_B.HVCurrent;
  }

  if (rtmIsMajorTimeStep(DR18E_Testpult_M)) {
    rt_ertODEUpdateContinuousStates(&DR18E_Testpult_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++DR18E_Testpult_M->Timing.clockTick0)) {
    ++DR18E_Testpult_M->Timing.clockTickH0;
  }

  DR18E_Testpult_M->Timing.t[0] = rtsiGetSolverStopTime
    (&DR18E_Testpult_M->solverInfo);

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.001, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    DR18E_Testpult_M->Timing.clockTick1++;
    if (!DR18E_Testpult_M->Timing.clockTick1) {
      DR18E_Testpult_M->Timing.clockTickH1++;
    }
  }

  rate_scheduler();
}

/* Derivatives for root system: '<Root>' */
void DR18E_Testpult_derivatives(void)
{
  XDot_DR18E_Testpult_T *_rtXdot;
  _rtXdot = ((XDot_DR18E_Testpult_T *) DR18E_Testpult_M->derivs);

  /* Derivatives for TransferFcn: '<S582>/em*GM' */
  _rtXdot->emGM_CSTATE = 0.0;
  _rtXdot->emGM_CSTATE += DR18E_Testpult_P.emGM_A * DR18E_Testpult_X.emGM_CSTATE;
  _rtXdot->emGM_CSTATE += DR18E_Testpult_B.Product3;

  /* Derivatives for TransferFcn: '<S582>/em*GM*X²' */
  _rtXdot->emGMX_CSTATE = 0.0;
  _rtXdot->emGMX_CSTATE += DR18E_Testpult_P.emGMX_A *
    DR18E_Testpult_X.emGMX_CSTATE;
  _rtXdot->emGMX_CSTATE += DR18E_Testpult_B.Product1_b2;

  /* Derivatives for TransferFcn: '<S584>/ModelReference4' */
  _rtXdot->ModelReference4_CSTATE = 0.0;
  _rtXdot->ModelReference4_CSTATE += DR18E_Testpult_P.ModelReference4_A *
    DR18E_Testpult_X.ModelReference4_CSTATE;
  _rtXdot->ModelReference4_CSTATE += DR18E_Testpult_B.ModelReference3_b;

  /* Derivatives for TransferFcn: '<S584>/ModelReference2' */
  _rtXdot->ModelReference2_CSTATE = 0.0;
  _rtXdot->ModelReference2_CSTATE += DR18E_Testpult_P.ModelReference2_A *
    DR18E_Testpult_X.ModelReference2_CSTATE;
  _rtXdot->ModelReference2_CSTATE += DR18E_Testpult_B.ModelReference1_f;

  /* Derivatives for TransferFcn: '<S583>/ModelReference4' */
  _rtXdot->ModelReference4_CSTATE_b = 0.0;
  _rtXdot->ModelReference4_CSTATE_b += DR18E_Testpult_P.ModelReference4_A_j *
    DR18E_Testpult_X.ModelReference4_CSTATE_b;
  _rtXdot->ModelReference4_CSTATE_b += DR18E_Testpult_B.ModelReference3;

  /* Derivatives for TransferFcn: '<S583>/ModelReference2' */
  _rtXdot->ModelReference2_CSTATE_o = 0.0;
  _rtXdot->ModelReference2_CSTATE_o += DR18E_Testpult_P.ModelReference2_A_g *
    DR18E_Testpult_X.ModelReference2_CSTATE_o;
  _rtXdot->ModelReference2_CSTATE_o += DR18E_Testpult_B.ModelReference1;

  /* Derivatives for TransferFcn: '<S583>/ModelReference1' */
  _rtXdot->ModelReference1_CSTATE = 0.0;
  _rtXdot->ModelReference1_CSTATE += DR18E_Testpult_P.ModelReference1_A *
    DR18E_Testpult_X.ModelReference1_CSTATE;
  _rtXdot->ModelReference1_CSTATE += DR18E_Testpult_B.Product3_c;

  /* Derivatives for TransferFcn: '<S597>/em*GM' */
  _rtXdot->emGM_CSTATE_d = 0.0;
  _rtXdot->emGM_CSTATE_d += DR18E_Testpult_P.emGM_A_e *
    DR18E_Testpult_X.emGM_CSTATE_d;
  _rtXdot->emGM_CSTATE_d += DR18E_Testpult_B.Product3_p;

  /* Derivatives for TransferFcn: '<S597>/em*GM*X²' */
  _rtXdot->emGMX_CSTATE_a = 0.0;
  _rtXdot->emGMX_CSTATE_a += DR18E_Testpult_P.emGMX_A_c *
    DR18E_Testpult_X.emGMX_CSTATE_a;
  _rtXdot->emGMX_CSTATE_a += DR18E_Testpult_B.Product1_l;

  /* Derivatives for TransferFcn: '<S599>/ModelReference4' */
  _rtXdot->ModelReference4_CSTATE_l = 0.0;
  _rtXdot->ModelReference4_CSTATE_l += DR18E_Testpult_P.ModelReference4_A_p *
    DR18E_Testpult_X.ModelReference4_CSTATE_l;
  _rtXdot->ModelReference4_CSTATE_l += DR18E_Testpult_B.ModelReference3_k;

  /* Derivatives for TransferFcn: '<S599>/ModelReference2' */
  _rtXdot->ModelReference2_CSTATE_a = 0.0;
  _rtXdot->ModelReference2_CSTATE_a += DR18E_Testpult_P.ModelReference2_A_k *
    DR18E_Testpult_X.ModelReference2_CSTATE_a;
  _rtXdot->ModelReference2_CSTATE_a += DR18E_Testpult_B.ModelReference1_i;

  /* Derivatives for TransferFcn: '<S598>/ModelReference4' */
  _rtXdot->ModelReference4_CSTATE_d = 0.0;
  _rtXdot->ModelReference4_CSTATE_d += DR18E_Testpult_P.ModelReference4_A_c *
    DR18E_Testpult_X.ModelReference4_CSTATE_d;
  _rtXdot->ModelReference4_CSTATE_d += DR18E_Testpult_B.ModelReference3_j;

  /* Derivatives for TransferFcn: '<S598>/ModelReference2' */
  _rtXdot->ModelReference2_CSTATE_m = 0.0;
  _rtXdot->ModelReference2_CSTATE_m += DR18E_Testpult_P.ModelReference2_A_f *
    DR18E_Testpult_X.ModelReference2_CSTATE_m;
  _rtXdot->ModelReference2_CSTATE_m += DR18E_Testpult_B.ModelReference1_o;

  /* Derivatives for TransferFcn: '<S598>/ModelReference1' */
  _rtXdot->ModelReference1_CSTATE_k = 0.0;
  _rtXdot->ModelReference1_CSTATE_k += DR18E_Testpult_P.ModelReference1_A_n *
    DR18E_Testpult_X.ModelReference1_CSTATE_k;
  _rtXdot->ModelReference1_CSTATE_k += DR18E_Testpult_B.Product3_d;

  /* Derivatives for TransferFcn: '<S582>/ModelReference' */
  _rtXdot->ModelReference_CSTATE = 0.0;
  _rtXdot->ModelReference_CSTATE += DR18E_Testpult_P.ModelReference_A *
    DR18E_Testpult_X.ModelReference_CSTATE;
  _rtXdot->ModelReference_CSTATE += DR18E_Testpult_B.Gravity2;

  /* Derivatives for TransferFcn: '<S583>/ModelReference' */
  _rtXdot->ModelReference_CSTATE_i = 0.0;
  _rtXdot->ModelReference_CSTATE_i += DR18E_Testpult_P.ModelReference_A_h *
    DR18E_Testpult_X.ModelReference_CSTATE_i;
  _rtXdot->ModelReference_CSTATE_i += DR18E_Testpult_B.Gravity2;

  /* Derivatives for TransferFcn: '<S583>/ModelReference3' */
  _rtXdot->ModelReference3_CSTATE = 0.0;
  _rtXdot->ModelReference3_CSTATE += DR18E_Testpult_P.ModelReference3_A *
    DR18E_Testpult_X.ModelReference3_CSTATE;
  _rtXdot->ModelReference3_CSTATE += DR18E_Testpult_B.Product2_h;

  /* Derivatives for TransferFcn: '<S584>/ModelReference' */
  _rtXdot->ModelReference_CSTATE_l = 0.0;
  _rtXdot->ModelReference_CSTATE_l += DR18E_Testpult_P.ModelReference_A_i *
    DR18E_Testpult_X.ModelReference_CSTATE_l;
  _rtXdot->ModelReference_CSTATE_l += DR18E_Testpult_B.Gravity2;

  /* Derivatives for TransferFcn: '<S584>/ModelReference1' */
  _rtXdot->ModelReference1_CSTATE_i = 0.0;
  _rtXdot->ModelReference1_CSTATE_i += DR18E_Testpult_P.ModelReference1_A_i *
    DR18E_Testpult_X.ModelReference1_CSTATE_i;
  _rtXdot->ModelReference1_CSTATE_i += DR18E_Testpult_B.Product3_i;

  /* Derivatives for TransferFcn: '<S584>/ModelReference3' */
  _rtXdot->ModelReference3_CSTATE_b = 0.0;
  _rtXdot->ModelReference3_CSTATE_b += DR18E_Testpult_P.ModelReference3_A_c *
    DR18E_Testpult_X.ModelReference3_CSTATE_b;
  _rtXdot->ModelReference3_CSTATE_b += DR18E_Testpult_B.Product2_a;

  /* Derivatives for TransferFcn: '<S597>/ModelReference' */
  _rtXdot->ModelReference_CSTATE_g = 0.0;
  _rtXdot->ModelReference_CSTATE_g += DR18E_Testpult_P.ModelReference_A_m *
    DR18E_Testpult_X.ModelReference_CSTATE_g;
  _rtXdot->ModelReference_CSTATE_g += DR18E_Testpult_B.Gravity2_p;

  /* Derivatives for TransferFcn: '<S598>/ModelReference' */
  _rtXdot->ModelReference_CSTATE_d = 0.0;
  _rtXdot->ModelReference_CSTATE_d += DR18E_Testpult_P.ModelReference_A_l *
    DR18E_Testpult_X.ModelReference_CSTATE_d;
  _rtXdot->ModelReference_CSTATE_d += DR18E_Testpult_B.Gravity2_p;

  /* Derivatives for TransferFcn: '<S598>/ModelReference3' */
  _rtXdot->ModelReference3_CSTATE_k = 0.0;
  _rtXdot->ModelReference3_CSTATE_k += DR18E_Testpult_P.ModelReference3_A_f *
    DR18E_Testpult_X.ModelReference3_CSTATE_k;
  _rtXdot->ModelReference3_CSTATE_k += DR18E_Testpult_B.Product2_p;

  /* Derivatives for TransferFcn: '<S599>/ModelReference' */
  _rtXdot->ModelReference_CSTATE_m = 0.0;
  _rtXdot->ModelReference_CSTATE_m += DR18E_Testpult_P.ModelReference_A_a *
    DR18E_Testpult_X.ModelReference_CSTATE_m;
  _rtXdot->ModelReference_CSTATE_m += DR18E_Testpult_B.Gravity2_p;

  /* Derivatives for TransferFcn: '<S599>/ModelReference1' */
  _rtXdot->ModelReference1_CSTATE_a = 0.0;
  _rtXdot->ModelReference1_CSTATE_a += DR18E_Testpult_P.ModelReference1_A_k *
    DR18E_Testpult_X.ModelReference1_CSTATE_a;
  _rtXdot->ModelReference1_CSTATE_a += DR18E_Testpult_B.Product3_p0;

  /* Derivatives for TransferFcn: '<S599>/ModelReference3' */
  _rtXdot->ModelReference3_CSTATE_e = 0.0;
  _rtXdot->ModelReference3_CSTATE_e += DR18E_Testpult_P.ModelReference3_A_j *
    DR18E_Testpult_X.ModelReference3_CSTATE_e;
  _rtXdot->ModelReference3_CSTATE_e += DR18E_Testpult_B.Product2_es;
}

/* Model initialize function */
void DR18E_Testpult_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)DR18E_Testpult_M, 0,
                sizeof(RT_MODEL_DR18E_Testpult_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&DR18E_Testpult_M->solverInfo,
                          &DR18E_Testpult_M->Timing.simTimeStep);
    rtsiSetTPtr(&DR18E_Testpult_M->solverInfo, &rtmGetTPtr(DR18E_Testpult_M));
    rtsiSetStepSizePtr(&DR18E_Testpult_M->solverInfo,
                       &DR18E_Testpult_M->Timing.stepSize0);
    rtsiSetdXPtr(&DR18E_Testpult_M->solverInfo, &DR18E_Testpult_M->derivs);
    rtsiSetContStatesPtr(&DR18E_Testpult_M->solverInfo, (real_T **)
                         &DR18E_Testpult_M->contStates);
    rtsiSetNumContStatesPtr(&DR18E_Testpult_M->solverInfo,
      &DR18E_Testpult_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&DR18E_Testpult_M->solverInfo,
      &DR18E_Testpult_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&DR18E_Testpult_M->solverInfo,
      &DR18E_Testpult_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&DR18E_Testpult_M->solverInfo,
      &DR18E_Testpult_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&DR18E_Testpult_M->solverInfo, (&rtmGetErrorStatus
      (DR18E_Testpult_M)));
    rtsiSetRTModelPtr(&DR18E_Testpult_M->solverInfo, DR18E_Testpult_M);
  }

  rtsiSetSimTimeStep(&DR18E_Testpult_M->solverInfo, MAJOR_TIME_STEP);
  DR18E_Testpult_M->intgData.f[0] = DR18E_Testpult_M->odeF[0];
  DR18E_Testpult_M->contStates = ((X_DR18E_Testpult_T *) &DR18E_Testpult_X);
  rtsiSetSolverData(&DR18E_Testpult_M->solverInfo, (void *)
                    &DR18E_Testpult_M->intgData);
  rtsiSetSolverName(&DR18E_Testpult_M->solverInfo,"ode1");
  rtmSetTPtr(DR18E_Testpult_M, &DR18E_Testpult_M->Timing.tArray[0]);
  DR18E_Testpult_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) memset(((void *) &DR18E_Testpult_B), 0,
                sizeof(B_DR18E_Testpult_T));

  /* states (continuous) */
  {
    (void) memset((void *)&DR18E_Testpult_X, 0,
                  sizeof(X_DR18E_Testpult_T));
  }

  /* states (dwork) */
  (void) memset((void *)&DR18E_Testpult_DW, 0,
                sizeof(DW_DR18E_Testpult_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    DR18E_Testpult_rti_init_trc_pointers();
  }

  /* Start for Enabled SubSystem: '<S523>/AMSIMD_Latching' */
  DR18E_Testpult_DW.AMSIMD_Latching_MODE = false;

  /* End of Start for SubSystem: '<S523>/AMSIMD_Latching' */
  /* Start for SwitchCase: '<S286>/Switch Case' */
  DR18E_Testpult_DW.SwitchCase_ActiveSubsystem = -1;

  /* Start for DiscretePulseGenerator: '<S533>/Pulse Generator' */
  DR18E_Testpult_DW.clockTickCounter = 0;

  /* Start for Enabled SubSystem: '<S7>/SIG_PUMP' */
  DR18E_Testpult_DW.SIG_PUMP_MODE = false;

  /* Start for SwitchCase: '<S287>/Switch Case' */
  DR18E_Testpult_DW.SwitchCase_ActiveSubsystem_p = -1;

  /* Start for Enabled SubSystem: '<S7>/SIG_FAN' */
  DR18E_Testpult_DW.SIG_FAN_MODE = false;

  /* Start for DiscretePulseGenerator: '<S562>/Pulse Generator' */
  DR18E_Testpult_DW.clockTickCounter_j = 0;

  /* Start for Enabled SubSystem: '<S9>/LED_BAR' */
  DR18E_Testpult_DW.LED_BAR_MODE = false;

  /* Start for RateTransition: '<S591>/Rate Transition1' */
  DR18E_Testpult_B.RateTransition1 = DR18E_Testpult_P.RateTransition1_X0_k;

  /* Start for RateTransition: '<S606>/Rate Transition1' */
  DR18E_Testpult_B.RateTransition1_f = DR18E_Testpult_P.RateTransition1_X0_a;

  /* Start for Enabled SubSystem: '<S10>/Inverters TXTorque' */
  DR18E_Testpult_DW.InvertersTXTorque_MODE = false;

  /* Start for Enabled SubSystem: '<S10>/Inverters TXUniversal' */
  DR18E_Testpult_DW.InvertersTXUniversal_MODE = false;

  /* Start for Enabled SubSystem: '<S10>/Umrichter Init' */
  DR18E_Testpult_DW.UmrichterInit_MODE = false;

  /* Start for RateTransition: '<S69>/Rate Transition' */
  DR18E_Testpult_B.RateTransition_p = DR18E_Testpult_P.RateTransition_X0;

  /* Start for RateTransition: '<S69>/Rate Transition1' */
  DR18E_Testpult_B.RateTransition1_i = DR18E_Testpult_P.RateTransition1_X0;

  /* Start for RateTransition: '<S70>/Rate Transition' */
  DR18E_Testpult_B.RateTransition_a = DR18E_Testpult_P.RateTransition_X0_c;

  /* Start for RateTransition: '<S70>/Rate Transition1' */
  DR18E_Testpult_B.RateTransition1_m = DR18E_Testpult_P.RateTransition1_X0_c;

  /* End of Start for SubSystem: '<S10>/Umrichter Init' */
  /* Start for DiscretePulseGenerator: '<S527>/Pulse Generator' */
  DR18E_Testpult_DW.clockTickCounter_d = 0;
  DR18E_Testpult_PrevZCX.SIG_Brakelight_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.SIG_Buzzer_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.SIG_Inverter_Enable_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.SIG_PRECHARGE_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.SIG_SHUTDOWN_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.CAN_TYPE1_BOR_M2_C1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  DR18E_Testpult_PrevZCX.JKFlipFlop.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;
  DR18E_Testpult_PrevZCX.JKFlipFlop_l.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;
  DR18E_Testpult_PrevZCX.JKFlipFlop_n.JKFlipFlop_Trig_ZCE = ZERO_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<S12>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE = DR18E_Testpult_P.DetectChange1_vinit;

    /* InitializeConditions for Memory: '<S14>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput = DR18E_Testpult_P.Mem1_X0_g;

    /* InitializeConditions for Memory: '<S14>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput = DR18E_Testpult_P.Mem2_X0_h;

    /* InitializeConditions for Memory: '<S14>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput = DR18E_Testpult_P.Mem3_X0_hg;

    /* InitializeConditions for Memory: '<S14>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput = DR18E_Testpult_P.Mem4_X0_g;

    /* InitializeConditions for UnitDelay: '<S696>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_p =
      DR18E_Testpult_P.DetectRisePositive_vinit;

    /* InitializeConditions for Memory: '<S545>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput[0] = DR18E_Testpult_P.Memory_X0_m;
    DR18E_Testpult_DW.Memory_PreviousInput[1] = DR18E_Testpult_P.Memory_X0_m;

    /* InitializeConditions for Memory: '<S24>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_p = DR18E_Testpult_P.Mem1_X0_gm;

    /* InitializeConditions for Memory: '<S24>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_b = DR18E_Testpult_P.Mem2_X0_l;

    /* InitializeConditions for Memory: '<S24>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a = DR18E_Testpult_P.Mem3_X0_o;

    /* InitializeConditions for Memory: '<S24>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_h = DR18E_Testpult_P.Mem4_X0_kv;

    /* InitializeConditions for Memory: '<S25>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_k = DR18E_Testpult_P.Mem1_X0_p;

    /* InitializeConditions for Memory: '<S25>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_c = DR18E_Testpult_P.Mem2_X0_o;

    /* InitializeConditions for Memory: '<S25>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_c = DR18E_Testpult_P.Mem3_X0_a;

    /* InitializeConditions for Memory: '<S25>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_d = DR18E_Testpult_P.Mem4_X0_j;

    /* InitializeConditions for Memory: '<S26>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_e = DR18E_Testpult_P.Mem1_X0_f;

    /* InitializeConditions for Memory: '<S26>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_h = DR18E_Testpult_P.Mem2_X0_dt;

    /* InitializeConditions for Memory: '<S26>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a0 = DR18E_Testpult_P.Mem3_X0_e;

    /* InitializeConditions for Memory: '<S26>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_e = DR18E_Testpult_P.Mem4_X0_f;

    /* InitializeConditions for Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_Pre =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport1_X0;

    /* InitializeConditions for Memory: '<S690>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_Pre =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport2_X0;

    /* InitializeConditions for Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_d =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport1_X_h;

    /* InitializeConditions for Memory: '<S688>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_f =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport2_X_h;

    /* InitializeConditions for Memory: '<S681>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_k = DR18E_Testpult_P.Memory_X0_h;

    /* InitializeConditions for UnitDelay: '<S15>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_o =
      DR18E_Testpult_P.DetectChange1_vinit_m;

    /* InitializeConditions for Memory: '<S27>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_h = DR18E_Testpult_P.Mem1_X0_e0;

    /* InitializeConditions for Memory: '<S27>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_k = DR18E_Testpult_P.Mem2_X0_j;

    /* InitializeConditions for Memory: '<S27>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_n = DR18E_Testpult_P.Mem3_X0_p;

    /* InitializeConditions for Memory: '<S27>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_n = DR18E_Testpult_P.Mem4_X0_l;

    /* InitializeConditions for Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport1' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport1_P_b =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport1_X_c;

    /* InitializeConditions for Memory: '<S686>/TmpLatchAtJ-K Flip-FlopInport2' */
    DR18E_Testpult_DW.TmpLatchAtJKFlipFlopInport2_P_k =
      DR18E_Testpult_P.TmpLatchAtJKFlipFlopInport2_X_c;

    /* InitializeConditions for DiscreteIntegrator: '<S679>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE = DR18E_Testpult_P.Integrator_IC;
    DR18E_Testpult_DW.Integrator_PrevResetState = 0;

    /* InitializeConditions for Memory: '<S680>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_j = DR18E_Testpult_P.Memory_X0_l;

    /* InitializeConditions for UnitDelay: '<S16>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f =
      DR18E_Testpult_P.DetectChange2_vinit;

    /* InitializeConditions for Memory: '<S28>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_m = DR18E_Testpult_P.Mem1_X0_j;

    /* InitializeConditions for Memory: '<S28>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_n = DR18E_Testpult_P.Mem2_X0_jg;

    /* InitializeConditions for Memory: '<S28>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_e = DR18E_Testpult_P.Mem3_X0_j;

    /* InitializeConditions for Memory: '<S28>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_c = DR18E_Testpult_P.Mem4_X0_fy;

    /* InitializeConditions for Memory: '<S29>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_d = DR18E_Testpult_P.Mem1_X0_n;

    /* InitializeConditions for Memory: '<S29>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_hu = DR18E_Testpult_P.Mem2_X0_f;

    /* InitializeConditions for Memory: '<S29>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_f = DR18E_Testpult_P.Mem3_X0_pl;

    /* InitializeConditions for Memory: '<S29>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_dp = DR18E_Testpult_P.Mem4_X0_c;

    /* InitializeConditions for Memory: '<S30>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_l = DR18E_Testpult_P.Mem1_X0_l;

    /* InitializeConditions for Memory: '<S30>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_j = DR18E_Testpult_P.Mem2_X0_e;

    /* InitializeConditions for Memory: '<S30>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_o = DR18E_Testpult_P.Mem3_X0_p1;

    /* InitializeConditions for Memory: '<S30>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_n1 = DR18E_Testpult_P.Mem4_X0_n;

    /* InitializeConditions for Memory: '<S37>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_i = DR18E_Testpult_P.Mem1_X0_i;

    /* InitializeConditions for Memory: '<S37>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_o = DR18E_Testpult_P.Mem2_X0_i;

    /* InitializeConditions for Memory: '<S37>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_g = DR18E_Testpult_P.Mem3_X0_ai;

    /* InitializeConditions for Memory: '<S37>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_f = DR18E_Testpult_P.Mem4_X0_nu;

    /* InitializeConditions for Memory: '<S35>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ia = DR18E_Testpult_P.Mem1_X0_dl;

    /* InitializeConditions for Memory: '<S35>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_e = DR18E_Testpult_P.Mem2_X0_g;

    /* InitializeConditions for Memory: '<S35>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_nc = DR18E_Testpult_P.Mem3_X0_l;

    /* InitializeConditions for Memory: '<S35>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_cj = DR18E_Testpult_P.Mem4_X0_ps;

    /* InitializeConditions for Memory: '<S36>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_b = DR18E_Testpult_P.Mem1_X0_ea;

    /* InitializeConditions for Memory: '<S36>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_k4 = DR18E_Testpult_P.Mem2_X0_m;

    /* InitializeConditions for Memory: '<S36>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_b = DR18E_Testpult_P.Mem3_X0_f;

    /* InitializeConditions for Memory: '<S36>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fb = DR18E_Testpult_P.Mem4_X0_a;

    /* InitializeConditions for Memory: '<S38>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_dg = DR18E_Testpult_P.Mem1_X0_pg;

    /* InitializeConditions for Memory: '<S38>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_l = DR18E_Testpult_P.Mem2_X0_dx;

    /* InitializeConditions for Memory: '<S38>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_go = DR18E_Testpult_P.Mem3_X0_d;

    /* InitializeConditions for Memory: '<S38>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_l = DR18E_Testpult_P.Mem4_X0_oa;

    /* InitializeConditions for UnitDelay: '<S41>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_j = DR18E_Testpult_P.DetectChange_vinit;

    /* InitializeConditions for Memory: '<S46>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_is = DR18E_Testpult_P.Mem1_X0_pv;

    /* InitializeConditions for Memory: '<S46>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_nj = DR18E_Testpult_P.Mem2_X0_of;

    /* InitializeConditions for Memory: '<S46>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_bm = DR18E_Testpult_P.Mem3_X0_fy;

    /* InitializeConditions for Memory: '<S46>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_p = DR18E_Testpult_P.Mem4_X0_m;

    /* InitializeConditions for UnitDelay: '<S42>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_n =
      DR18E_Testpult_P.DetectChange1_vinit_l;

    /* InitializeConditions for Memory: '<S47>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_m4 = DR18E_Testpult_P.Mem1_X0_h;

    /* InitializeConditions for Memory: '<S47>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_m = DR18E_Testpult_P.Mem2_X0_e2;

    /* InitializeConditions for Memory: '<S47>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_oq = DR18E_Testpult_P.Mem3_X0_jb;

    /* InitializeConditions for Memory: '<S47>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_m = DR18E_Testpult_P.Mem4_X0_c0;

    /* InitializeConditions for Memory: '<S48>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_f = DR18E_Testpult_P.Mem1_X0_px;

    /* InitializeConditions for Memory: '<S48>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_g = DR18E_Testpult_P.Mem2_X0_ee;

    /* InitializeConditions for Memory: '<S48>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_i = DR18E_Testpult_P.Mem3_X0_m;

    /* InitializeConditions for Memory: '<S48>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_ne = DR18E_Testpult_P.Mem4_X0_a2;

    /* InitializeConditions for UnitDelay: '<S43>/Delay Input1' */
    for (i = 0; i < 8; i++) {
      DR18E_Testpult_DW.DelayInput1_DSTATE_e[i] =
        DR18E_Testpult_P.DetectChange2_vinit_i;
    }

    /* End of InitializeConditions for UnitDelay: '<S43>/Delay Input1' */

    /* InitializeConditions for Memory: '<S49>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ig = DR18E_Testpult_P.Mem1_X0_jt;

    /* InitializeConditions for Memory: '<S49>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_hk = DR18E_Testpult_P.Mem2_X0_hk;

    /* InitializeConditions for Memory: '<S49>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_if = DR18E_Testpult_P.Mem3_X0_jp;

    /* InitializeConditions for Memory: '<S49>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_la = DR18E_Testpult_P.Mem4_X0_kp;

    /* InitializeConditions for Memory: '<S560>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_op =
      DR18E_Testpult_P.SRFlipFlop_initial_condition_f;

    /* InitializeConditions for Memory: '<S559>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_i = DR18E_Testpult_P.Memory_X0_b;

    /* InitializeConditions for Derivative: '<S576>/Derivative' */
    DR18E_Testpult_DW.TimeStampA = (rtInf);
    DR18E_Testpult_DW.TimeStampB = (rtInf);

    /* InitializeConditions for Delay: '<S576>/Delay' */
    DR18E_Testpult_DW.Delay_DSTATE = DR18E_Testpult_P.Delay_InitialCondition;

    /* InitializeConditions for Memory: '<S630>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_i0 = DR18E_Testpult_P.Memory_X0_lp;

    /* InitializeConditions for Memory: '<S631>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_o = DR18E_Testpult_P.Memory_X0_n;

    /* InitializeConditions for Memory: '<S578>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_a =
      DR18E_Testpult_P.SRFlipFlop_initial_condition_i;

    /* InitializeConditions for TransferFcn: '<S582>/em*GM' */
    DR18E_Testpult_X.emGM_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S582>/em*GM*X²' */
    DR18E_Testpult_X.emGMX_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S584>/ModelReference4' */
    DR18E_Testpult_X.ModelReference4_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S584>/ModelReference2' */
    DR18E_Testpult_X.ModelReference2_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S583>/ModelReference4' */
    DR18E_Testpult_X.ModelReference4_CSTATE_b = 0.0;

    /* InitializeConditions for TransferFcn: '<S583>/ModelReference2' */
    DR18E_Testpult_X.ModelReference2_CSTATE_o = 0.0;

    /* InitializeConditions for Derivative: '<S583>/Derivative' */
    DR18E_Testpult_DW.TimeStampA_o = (rtInf);
    DR18E_Testpult_DW.TimeStampB_h = (rtInf);

    /* InitializeConditions for TransferFcn: '<S583>/ModelReference1' */
    DR18E_Testpult_X.ModelReference1_CSTATE = 0.0;

    /* InitializeConditions for RateTransition: '<S591>/Rate Transition1' */
    DR18E_Testpult_DW.RateTransition1_Buffer0 =
      DR18E_Testpult_P.RateTransition1_X0_k;

    /* InitializeConditions for Derivative: '<S579>/Derivative' */
    DR18E_Testpult_DW.TimeStampA_os = (rtInf);
    DR18E_Testpult_DW.TimeStampB_j = (rtInf);

    /* InitializeConditions for Delay: '<S579>/Delay' */
    DR18E_Testpult_DW.Delay_DSTATE_k = DR18E_Testpult_P.Delay_InitialCondition_n;

    /* InitializeConditions for Memory: '<S581>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_aa =
      DR18E_Testpult_P.SRFlipFlop_initial_condition_l;

    /* InitializeConditions for TransferFcn: '<S597>/em*GM' */
    DR18E_Testpult_X.emGM_CSTATE_d = 0.0;

    /* InitializeConditions for TransferFcn: '<S597>/em*GM*X²' */
    DR18E_Testpult_X.emGMX_CSTATE_a = 0.0;

    /* InitializeConditions for TransferFcn: '<S599>/ModelReference4' */
    DR18E_Testpult_X.ModelReference4_CSTATE_l = 0.0;

    /* InitializeConditions for TransferFcn: '<S599>/ModelReference2' */
    DR18E_Testpult_X.ModelReference2_CSTATE_a = 0.0;

    /* InitializeConditions for TransferFcn: '<S598>/ModelReference4' */
    DR18E_Testpult_X.ModelReference4_CSTATE_d = 0.0;

    /* InitializeConditions for TransferFcn: '<S598>/ModelReference2' */
    DR18E_Testpult_X.ModelReference2_CSTATE_m = 0.0;

    /* InitializeConditions for Derivative: '<S598>/Derivative' */
    DR18E_Testpult_DW.TimeStampA_o0 = (rtInf);
    DR18E_Testpult_DW.TimeStampB_p = (rtInf);

    /* InitializeConditions for TransferFcn: '<S598>/ModelReference1' */
    DR18E_Testpult_X.ModelReference1_CSTATE_k = 0.0;

    /* InitializeConditions for RateTransition: '<S606>/Rate Transition1' */
    DR18E_Testpult_DW.RateTransition1_Buffer0_k =
      DR18E_Testpult_P.RateTransition1_X0_a;

    /* InitializeConditions for DiscreteIntegrator: '<S532>/Discrete-Time Integrator1' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator1_DSTATE =
      DR18E_Testpult_P.DiscreteTimeIntegrator1_IC;

    /* InitializeConditions for UnitDelay: '<S637>/UD' */
    DR18E_Testpult_DW.UD_DSTATE_h = DR18E_Testpult_P.Difference2_ICPrevInput;

    /* InitializeConditions for DiscreteIntegrator: '<S653>/Discrete-Time Integrator' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE =
      DR18E_Testpult_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for UnitDelay: '<S636>/UD' */
    DR18E_Testpult_DW.UD_DSTATE_hj = DR18E_Testpult_P.Difference1_ICPrevInput;

    /* InitializeConditions for UnitDelay: '<S614>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_jg =
      DR18E_Testpult_P.DetectIncrease_vinit;

    /* InitializeConditions for UnitDelay: '<S612>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_b =
      DR18E_Testpult_P.DetectDecrease_vinit;

    /* InitializeConditions for Memory: '<S618>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_m =
      DR18E_Testpult_P.SRFlipFlop_initial_condition_k;

    /* InitializeConditions for Memory: '<S617>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_g = DR18E_Testpult_P.Memory_X0_i;

    /* InitializeConditions for UnitDelay: '<S615>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f2 =
      DR18E_Testpult_P.DetectIncrease1_vinit;

    /* InitializeConditions for UnitDelay: '<S613>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_nw =
      DR18E_Testpult_P.DetectDecrease1_vinit;

    /* InitializeConditions for Memory: '<S619>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_e =
      DR18E_Testpult_P.SRFlipFlop1_initial_condition_k;

    /* InitializeConditions for Memory: '<S616>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_kf = DR18E_Testpult_P.Memory_X0_k;

    /* InitializeConditions for UnitDelay: '<S72>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_f2m =
      DR18E_Testpult_P.DetectChange_vinit_l;

    /* InitializeConditions for UnitDelay: '<S73>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_ot =
      DR18E_Testpult_P.DetectChange1_vinit_i;

    /* InitializeConditions for UnitDelay: '<S74>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_m =
      DR18E_Testpult_P.DetectChange2_vinit_d;

    /* InitializeConditions for UnitDelay: '<S75>/Delay Input1' */
    DR18E_Testpult_DW.DelayInput1_DSTATE_a =
      DR18E_Testpult_P.DetectChange3_vinit;

    /* InitializeConditions for Memory: '<S76>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_fm = DR18E_Testpult_P.Mem1_X0_i0;

    /* InitializeConditions for Memory: '<S76>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ma = DR18E_Testpult_P.Mem2_X0_c;

    /* InitializeConditions for Memory: '<S76>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_j = DR18E_Testpult_P.Mem3_X0_b;

    /* InitializeConditions for Memory: '<S76>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_lt = DR18E_Testpult_P.Mem4_X0_b;

    /* InitializeConditions for Memory: '<S90>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_o = DR18E_Testpult_P.Mem1_X0_b;

    /* InitializeConditions for Memory: '<S90>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_a = DR18E_Testpult_P.Mem2_X0_f3;

    /* InitializeConditions for Memory: '<S90>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_e2 = DR18E_Testpult_P.Mem3_X0_fa;

    /* InitializeConditions for Memory: '<S90>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_o = DR18E_Testpult_P.Mem4_X0_fk;

    /* InitializeConditions for Memory: '<S263>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_a = DR18E_Testpult_P.Mem1_X0_m;

    /* InitializeConditions for Memory: '<S263>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_d = DR18E_Testpult_P.Mem2_X0_n;

    /* InitializeConditions for Memory: '<S263>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ou = DR18E_Testpult_P.Mem3_X0_cz;

    /* InitializeConditions for Memory: '<S263>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_lx = DR18E_Testpult_P.Mem4_X0_kq;

    /* InitializeConditions for Memory: '<S264>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_n = DR18E_Testpult_P.Mem1_X0_g1;

    /* InitializeConditions for Memory: '<S264>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_gl = DR18E_Testpult_P.Mem2_X0_p;

    /* InitializeConditions for Memory: '<S264>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_k = DR18E_Testpult_P.Mem3_X0_lz;

    /* InitializeConditions for Memory: '<S264>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_k = DR18E_Testpult_P.Mem4_X0_c0l;

    /* InitializeConditions for Memory: '<S267>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_oh = DR18E_Testpult_P.Mem1_X0_nd;

    /* InitializeConditions for Memory: '<S267>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_a3 = DR18E_Testpult_P.Mem2_X0_ov;

    /* InitializeConditions for Memory: '<S267>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_g3 = DR18E_Testpult_P.Mem3_X0_en;

    /* InitializeConditions for Memory: '<S267>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_mx = DR18E_Testpult_P.Mem4_X0_jb;

    /* InitializeConditions for Memory: '<S298>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_mt = DR18E_Testpult_P.Mem1_X0_he;

    /* InitializeConditions for Memory: '<S298>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_i = DR18E_Testpult_P.Mem2_X0_ca;

    /* InitializeConditions for Memory: '<S298>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_kb = DR18E_Testpult_P.Mem3_X0_or;

    /* InitializeConditions for Memory: '<S298>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_ne0 = DR18E_Testpult_P.Mem4_X0_i;

    /* InitializeConditions for Memory: '<S298>/Mem5' */
    DR18E_Testpult_DW.Mem5_PreviousInput = DR18E_Testpult_P.Mem5_X0;

    /* InitializeConditions for Memory: '<S375>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_fe = DR18E_Testpult_P.Mem1_X0_a;

    /* InitializeConditions for Memory: '<S375>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_lp = DR18E_Testpult_P.Mem2_X0_fl;

    /* InitializeConditions for Memory: '<S375>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_fr = DR18E_Testpult_P.Mem3_X0_i;

    /* InitializeConditions for Memory: '<S375>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_p3 = DR18E_Testpult_P.Mem4_X0_d;

    /* InitializeConditions for Memory: '<S375>/Mem5' */
    DR18E_Testpult_DW.Mem5_PreviousInput_f = DR18E_Testpult_P.Mem5_X0_a;

    /* InitializeConditions for Memory: '<S466>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_n = DR18E_Testpult_P.Memory_X0_a;

    /* InitializeConditions for Memory: '<S468>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_d = DR18E_Testpult_P.Memory_X0_aj;

    /* InitializeConditions for Memory: '<S484>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ip = DR18E_Testpult_P.Mem1_X0_hc;

    /* InitializeConditions for Memory: '<S484>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ii = DR18E_Testpult_P.Mem2_X0_hk3;

    /* InitializeConditions for Memory: '<S484>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_a4 = DR18E_Testpult_P.Mem3_X0_lq;

    /* InitializeConditions for Memory: '<S484>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fj = DR18E_Testpult_P.Mem4_X0_mc;

    /* InitializeConditions for Memory: '<S485>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_pt = DR18E_Testpult_P.Mem1_X0_mr;

    /* InitializeConditions for Memory: '<S485>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ak = DR18E_Testpult_P.Mem2_X0_ia;

    /* InitializeConditions for Memory: '<S485>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_fc = DR18E_Testpult_P.Mem3_X0_g;

    /* InitializeConditions for Memory: '<S485>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_h3 = DR18E_Testpult_P.Mem4_X0_e;

    /* InitializeConditions for Memory: '<S486>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_e5 = DR18E_Testpult_P.Mem1_X0_oy;

    /* InitializeConditions for Memory: '<S486>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_at = DR18E_Testpult_P.Mem2_X0_pt;

    /* InitializeConditions for Memory: '<S486>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ii = DR18E_Testpult_P.Mem3_X0_aj;

    /* InitializeConditions for Memory: '<S486>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_kr = DR18E_Testpult_P.Mem4_X0_k1;

    /* InitializeConditions for Memory: '<S497>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_pc = DR18E_Testpult_P.Mem1_X0_oa;

    /* InitializeConditions for Memory: '<S497>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_c2 = DR18E_Testpult_P.Mem2_X0_gr;

    /* InitializeConditions for Memory: '<S497>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ah = DR18E_Testpult_P.Mem3_X0_jn;

    /* InitializeConditions for Memory: '<S497>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_fw = DR18E_Testpult_P.Mem4_X0_jh;

    /* InitializeConditions for Memory: '<S498>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_bw = DR18E_Testpult_P.Mem1_X0_lc;

    /* InitializeConditions for Memory: '<S498>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_cz = DR18E_Testpult_P.Mem2_X0_pm;

    /* InitializeConditions for Memory: '<S498>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_os = DR18E_Testpult_P.Mem3_X0_ie;

    /* InitializeConditions for Memory: '<S498>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_i = DR18E_Testpult_P.Mem4_X0_i4;

    /* InitializeConditions for Memory: '<S506>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_hl = DR18E_Testpult_P.Mem1_X0_h4;

    /* InitializeConditions for Memory: '<S506>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ls = DR18E_Testpult_P.Mem2_X0_nr;

    /* InitializeConditions for Memory: '<S506>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_p = DR18E_Testpult_P.Mem3_X0_iy;

    /* InitializeConditions for Memory: '<S506>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_dpj = DR18E_Testpult_P.Mem4_X0_bf;

    /* InitializeConditions for Memory: '<S507>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_g = DR18E_Testpult_P.Mem1_X0_lt;

    /* InitializeConditions for Memory: '<S507>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ez = DR18E_Testpult_P.Mem2_X0_m1;

    /* InitializeConditions for Memory: '<S507>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_nb = DR18E_Testpult_P.Mem3_X0_oo;

    /* InitializeConditions for Memory: '<S507>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_j = DR18E_Testpult_P.Mem4_X0_fa;

    /* InitializeConditions for Memory: '<S508>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_ba = DR18E_Testpult_P.Mem1_X0_k;

    /* InitializeConditions for Memory: '<S508>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_p = DR18E_Testpult_P.Mem2_X0_ns;

    /* InitializeConditions for Memory: '<S508>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_ip = DR18E_Testpult_P.Mem3_X0_p0;

    /* InitializeConditions for Memory: '<S508>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_iq = DR18E_Testpult_P.Mem4_X0_lq;

    /* InitializeConditions for TransferFcn: '<S582>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S583>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE_i = 0.0;

    /* InitializeConditions for TransferFcn: '<S583>/ModelReference3' */
    DR18E_Testpult_X.ModelReference3_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S584>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE_l = 0.0;

    /* InitializeConditions for TransferFcn: '<S584>/ModelReference1' */
    DR18E_Testpult_X.ModelReference1_CSTATE_i = 0.0;

    /* InitializeConditions for TransferFcn: '<S584>/ModelReference3' */
    DR18E_Testpult_X.ModelReference3_CSTATE_b = 0.0;

    /* InitializeConditions for DiscreteIntegrator: '<S594>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_b = DR18E_Testpult_P.Integrator_IC_b;

    /* InitializeConditions for DiscreteIntegrator: '<S594>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE = DR18E_Testpult_P.Filter_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S595>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_m = DR18E_Testpult_P.Filter_IC_n;

    /* InitializeConditions for DiscreteIntegrator: '<S595>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_e = DR18E_Testpult_P.Integrator_IC_o;

    /* InitializeConditions for DiscreteIntegrator: '<S596>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_l = DR18E_Testpult_P.Filter_IC_l;

    /* InitializeConditions for DiscreteIntegrator: '<S596>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_c = DR18E_Testpult_P.Integrator_IC_h;

    /* InitializeConditions for TransferFcn: '<S597>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE_g = 0.0;

    /* InitializeConditions for TransferFcn: '<S598>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE_d = 0.0;

    /* InitializeConditions for TransferFcn: '<S598>/ModelReference3' */
    DR18E_Testpult_X.ModelReference3_CSTATE_k = 0.0;

    /* InitializeConditions for TransferFcn: '<S599>/ModelReference' */
    DR18E_Testpult_X.ModelReference_CSTATE_m = 0.0;

    /* InitializeConditions for TransferFcn: '<S599>/ModelReference1' */
    DR18E_Testpult_X.ModelReference1_CSTATE_a = 0.0;

    /* InitializeConditions for TransferFcn: '<S599>/ModelReference3' */
    DR18E_Testpult_X.ModelReference3_CSTATE_e = 0.0;
    for (i = 0; i < 5; i++) {
      /* InitializeConditions for S-Function (sfix_udelay): '<S589>/Tapped Delay' */
      DR18E_Testpult_DW.TappedDelay_X[i] = DR18E_Testpult_P.TappedDelay_vinit;

      /* InitializeConditions for S-Function (sfix_udelay): '<S604>/Tapped Delay' */
      DR18E_Testpult_DW.TappedDelay_X_l[i] =
        DR18E_Testpult_P.TappedDelay_vinit_g;
    }

    /* InitializeConditions for DiscreteIntegrator: '<S609>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_f = DR18E_Testpult_P.Integrator_IC_k;

    /* InitializeConditions for DiscreteIntegrator: '<S609>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_n = DR18E_Testpult_P.Filter_IC_o;

    /* InitializeConditions for DiscreteIntegrator: '<S610>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_i = DR18E_Testpult_P.Filter_IC_g;

    /* InitializeConditions for DiscreteIntegrator: '<S610>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_p = DR18E_Testpult_P.Integrator_IC_e;

    /* InitializeConditions for DiscreteIntegrator: '<S611>/Filter' */
    DR18E_Testpult_DW.Filter_DSTATE_ma = DR18E_Testpult_P.Filter_IC_j;

    /* InitializeConditions for DiscreteIntegrator: '<S611>/Integrator' */
    DR18E_Testpult_DW.Integrator_DSTATE_ps = DR18E_Testpult_P.Integrator_IC_b1;

    /* InitializeConditions for UnitDelay: '<S635>/UD' */
    DR18E_Testpult_DW.UD_DSTATE = DR18E_Testpult_P.Difference_ICPrevInput;

    /* InitializeConditions for DiscreteIntegrator: '<S532>/Discrete-Time Integrator' */
    DR18E_Testpult_DW.DiscreteTimeIntegrator_DSTATE_m =
      DR18E_Testpult_P.DiscreteTimeIntegrator_IC_g;

    /* SystemInitialize for Enabled SubSystem: '<S6>/SIG_FAN_HVBATTERY' */
    /* SystemInitialize for Outport: '<S13>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_n4 = DR18E_Testpult_P.TXstatus_Y0;

    /* SystemInitialize for Outport: '<S13>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_kh = DR18E_Testpult_P.TXtime_Y0;

    /* SystemInitialize for Outport: '<S13>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_ic = DR18E_Testpult_P.TXdeltatime_Y0;

    /* End of SystemInitialize for SubSystem: '<S6>/SIG_FAN_HVBATTERY' */

    /* SystemInitialize for Enabled SubSystem: '<S523>/AMSIMD_Latching' */
    /* InitializeConditions for Memory: '<S539>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_eq =
      DR18E_Testpult_P.SRFlipFlop_initial_condition;

    /* InitializeConditions for Memory: '<S540>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_oa =
      DR18E_Testpult_P.SRFlipFlop1_initial_condition;

    /* SystemInitialize for Outport: '<S536>/AMS_ErrorOut' */
    DR18E_Testpult_B.Logic_f[0] = DR18E_Testpult_P.AMS_ErrorOut_Y0;

    /* SystemInitialize for Outport: '<S536>/IMD_ErrorOut' */
    DR18E_Testpult_B.Logic_fh[0] = DR18E_Testpult_P.IMD_ErrorOut_Y0;

    /* End of SystemInitialize for SubSystem: '<S523>/AMSIMD_Latching' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Motortemperatur' */
    /* SystemInitialize for Outport: '<S295>/Motor1_Temp' */
    DR18E_Testpult_B.Tempcorrespondingresistance_i =
      DR18E_Testpult_P.Motor1_Temp_Y0;

    /* SystemInitialize for Outport: '<S295>/Motor1_Temp_Raw ' */
    DR18E_Testpult_B.Divide_aa = DR18E_Testpult_P.Motor1_Temp_Raw_Y0;

    /* End of SystemInitialize for SubSystem: '<S286>/Motortemperatur' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Drehzahl' */
    /* InitializeConditions for Memory: '<S302>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_nz = DR18E_Testpult_P.Memory_X0;

    /* SystemInitialize for Outport: '<S288>/Drehzahl in 1//min U1' */
    DR18E_Testpult_B.Sum1_ps = DR18E_Testpult_P.Drehzahlin1minU1_Y0;

    /* SystemInitialize for Outport: '<S288>/Motorleistung in W U1' */
    DR18E_Testpult_B.upi60 = DR18E_Testpult_P.MotorleistunginWU1_Y0;

    /* End of SystemInitialize for SubSystem: '<S286>/Drehzahl' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Strom' */
    /* SystemInitialize for Outport: '<S299>/Strangstrom I_rms in A U1' */
    DR18E_Testpult_B.Divide2_b = DR18E_Testpult_P.StrangstromI_rmsinAU1_Y0;

    /* SystemInitialize for Outport: '<S299>/Drehmoment M in Nm U1' */
    DR18E_Testpult_B.DrehmomentStrangstrominNmArms_d =
      DR18E_Testpult_P.DrehmomentMinNmU1_Y0;

    /* End of SystemInitialize for SubSystem: '<S286>/Strom' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Wirkstrom Iq' */
    DR18E_Testpult_WirkstromIq_Init(&DR18E_Testpult_B.WirkstromIq,
      (P_WirkstromIq_DR18E_Testpult_T *)&DR18E_Testpult_P.WirkstromIq);

    /* End of SystemInitialize for SubSystem: '<S286>/Wirkstrom Iq' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Red ID 64:  Status Register Auswertung' */
    /* SystemInitialize for Outport: '<S296>/_Ena' */
    DR18E_Testpult_B.Compare_i2 = DR18E_Testpult_P._Ena_Y0;

    /* SystemInitialize for Outport: '<S296>/_NCR0' */
    DR18E_Testpult_B.Compare_bq = DR18E_Testpult_P._NCR0_Y0;

    /* SystemInitialize for Outport: '<S296>/_Lim+' */
    DR18E_Testpult_B.Compare_mb = DR18E_Testpult_P._Lim_Y0;

    /* SystemInitialize for Outport: '<S296>/_Lim-' */
    DR18E_Testpult_B.Compare_jwf = DR18E_Testpult_P._Lim_Y0_j;

    /* SystemInitialize for Outport: '<S296>/_OK' */
    DR18E_Testpult_B.Compare_bv = DR18E_Testpult_P._OK_Y0;

    /* SystemInitialize for Outport: '<S296>/_Icns' */
    DR18E_Testpult_B.Compare_ok = DR18E_Testpult_P._Icns_Y0;

    /* SystemInitialize for Outport: '<S296>/_T-Nlim' */
    DR18E_Testpult_B.Compare_bvf = DR18E_Testpult_P._TNlim_Y0;

    /* SystemInitialize for Outport: '<S296>/_P-N' */
    DR18E_Testpult_B.Compare_a2 = DR18E_Testpult_P._PN_Y0;

    /* SystemInitialize for Outport: '<S296>/_N-I' */
    DR18E_Testpult_B.Compare_gg = DR18E_Testpult_P._NI_Y0;

    /* SystemInitialize for Outport: '<S296>/_N0' */
    DR18E_Testpult_B.Compare_i4 = DR18E_Testpult_P._N0_Y0;

    /* SystemInitialize for Outport: '<S296>/_Rsw' */
    DR18E_Testpult_B.Compare_bk = DR18E_Testpult_P._Rsw_Y0;

    /* SystemInitialize for Outport: '<S296>/_Cal0' */
    DR18E_Testpult_B.Compare_it = DR18E_Testpult_P._Cal0_Y0;

    /* SystemInitialize for Outport: '<S296>/_Cal' */
    DR18E_Testpult_B.Compare_gl = DR18E_Testpult_P._Cal_Y0;

    /* SystemInitialize for Outport: '<S296>/_Tol' */
    DR18E_Testpult_B.Compare_er = DR18E_Testpult_P._Tol_Y0;

    /* SystemInitialize for Outport: '<S296>/_Rdy' */
    DR18E_Testpult_B.Compare_jl = DR18E_Testpult_P._Rdy_Y0;

    /* SystemInitialize for Outport: '<S296>/_Brk' */
    DR18E_Testpult_B.Compare_hb3 = DR18E_Testpult_P._Brk_Y0;

    /* SystemInitialize for Outport: '<S296>/_SIGNMAG' */
    DR18E_Testpult_B.Compare_om = DR18E_Testpult_P._SIGNMAG_Y0;

    /* SystemInitialize for Outport: '<S296>/_Nclip' */
    DR18E_Testpult_B.Compare_gx = DR18E_Testpult_P._Nclip_Y0;

    /* SystemInitialize for Outport: '<S296>/_Nclip+' */
    DR18E_Testpult_B.Compare_lc = DR18E_Testpult_P._Nclip_Y0_b;

    /* SystemInitialize for Outport: '<S296>/_Nclip-' */
    DR18E_Testpult_B.Compare_cc = DR18E_Testpult_P._Nclip_Y0_l;

    /* SystemInitialize for Outport: '<S296>/_Ird-Dig' */
    DR18E_Testpult_B.Compare_ar = DR18E_Testpult_P._IrdDig_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird-rchd' */
    DR18E_Testpult_B.Compare_pq = DR18E_Testpult_P._Irdrchd_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird-N' */
    DR18E_Testpult_B.Compare_ef = DR18E_Testpult_P._IrdN_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird_TI' */
    DR18E_Testpult_B.Compare_ex = DR18E_Testpult_P._Ird_TI_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird_TIR' */
    DR18E_Testpult_B.Compare_dp = DR18E_Testpult_P._Ird_TIR_Y0;

    /* SystemInitialize for Outport: '<S296>/_2Hz' */
    DR18E_Testpult_B.Compare_bf = DR18E_Testpult_P._2Hz_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird-TM' */
    DR18E_Testpult_B.Compare_bs = DR18E_Testpult_P._IrdTM_Y0;

    /* SystemInitialize for Outport: '<S296>/_Ird-ANA' */
    DR18E_Testpult_B.Compare_jw = DR18E_Testpult_P._IrdANA_Y0;

    /* SystemInitialize for Outport: '<S296>/_Iwcns' */
    DR18E_Testpult_B.Compare_f3 = DR18E_Testpult_P._Iwcns_Y0;

    /* SystemInitialize for Outport: '<S296>/_RFE_plus' */
    DR18E_Testpult_B.Compare_di = DR18E_Testpult_P._RFE_plus_Y0;

    /* SystemInitialize for Outport: '<S296>/_frei' */
    DR18E_Testpult_B.Compare_oa = DR18E_Testpult_P._frei_Y0;

    /* SystemInitialize for Outport: '<S296>/_Handrad' */
    DR18E_Testpult_B.Compare_ns = DR18E_Testpult_P._Handrad_Y0;

    /* End of SystemInitialize for SubSystem: '<S286>/Red ID 64:  Status Register Auswertung' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
    RegID0x8FERRORWarningRegis_Init
      (&DR18E_Testpult_B.RegID0x8FERRORWarningRegister_f,
       (P_RegID0x8FERRORWarningRegist_T *)
       &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_f);

    /* End of SystemInitialize for SubSystem: '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/U_DC' */
    DR18E_Testpult_U_DC_Init(&DR18E_Testpult_B.U_DC, (P_U_DC_DR18E_Testpult_T *)
      &DR18E_Testpult_P.U_DC);

    /* End of SystemInitialize for SubSystem: '<S286>/U_DC' */

    /* SystemInitialize for IfAction SubSystem: '<S286>/Inverter_Temp' */
    DR18E_Testpu_Inverter_Temp_Init(&DR18E_Testpult_B.Inverter_Temp,
      (P_Inverter_Temp_DR18E_Testpul_T *)&DR18E_Testpult_P.Inverter_Temp);

    /* End of SystemInitialize for SubSystem: '<S286>/Inverter_Temp' */

    /* SystemInitialize for Chart: '<S535>/Fahrzeugsteuerung' */
    DR18E_Testpult_DW.is_Check_Safety1 = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_Init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_Check_Safety = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_UmrichterInit = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_NormalShutdown = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_SafetyShutdown = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_Sound = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_TS_active = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_TS_init = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.is_Precharge = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.temporalCounter_i1 = 0U;
    DR18E_Testpult_DW.is_active_c3_DR18E_Testpult = 0U;
    DR18E_Testpult_DW.is_c3_DR18E_Testpult = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_DW.Init_complete = false;
    DR18E_Testpult_DW.i = 1;
    DR18E_Testpult_B.O_TS_sound = 0;
    DR18E_Testpult_B.O_U1_RegID = 0.0;
    DR18E_Testpult_B.O_U2_RegID = 0.0;
    DR18E_Testpult_B.O_U2_Value32 = 0.0;
    DR18E_Testpult_B.O_U1_Value32 = 0.0;
    DR18E_Testpult_B.O_Sicherheitskreis_Enable = false;
    DR18E_Testpult_B.O_Precharge_Enable = false;
    DR18E_Testpult_B.O_ErrorNr = 0.0;
    DR18E_Testpult_B.O_fBlink_Start = 0.0;
    DR18E_Testpult_B.O_State = 0.0;
    DR18E_Testpult_B.O_enableTorqueVectoring = 0U;
    DR18E_Testpult_B.O_enableTractionControl = 0U;
    DR18E_Testpult_B.O_InverterFRE = 0.0;
    DR18E_Testpult_B.O_TorqueEnable = 0.0;
    DR18E_Testpult_B.O_InvertersTXActive = 0.0;
    DR18E_Testpult_B.O_AMSIMDFlash = 0U;
    DR18E_Testpult_B.O_U1Init_Reg = 0.0;
    DR18E_Testpult_B.O_U1Init_Zeit = 0.0;
    DR18E_Testpult_B.O_U2Init_Reg = 0.0;
    DR18E_Testpult_B.O_U2Init_Zeit = 0.0;
    DR18E_Testpult_B.O_Inverter_TX_Mode = 0U;
    DR18E_Testpult_B.O_SoundEnable = 0U;
    DR18E_Testpult_B.O_SoundPlayChannel = 0.0;
    DR18E_Testpult_B.O_SpeakerEnable = 0.0;
    DR18E_Testpult_B.O_coolingEnable = 1.0;
    DR18E_Testpult_DW.e_ErrorEventCounter = 0U;
    DR18E_Testpult_B.e_Error = false;
    DR18E_Testpult_DW.e_ACTIVEEventCounter = 0U;
    DR18E_Testpult_B.e_ACTIVE = false;
    DR18E_Testpult_DW.e_clearPowervoltageEventCounter = 0U;
    DR18E_Testpult_B.e_clearPowervoltage = false;

    /* SystemInitialize for Triggered SubSystem: '<S7>/SIG_SHUTDOWN' */
    /* SystemInitialize for Outport: '<S23>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_l0 = DR18E_Testpult_P.TXstatus_Y0_g;

    /* SystemInitialize for Outport: '<S23>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_ph = DR18E_Testpult_P.TXtime_Y0_ie;

    /* SystemInitialize for Outport: '<S23>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_n2 = DR18E_Testpult_P.TXdeltatime_Y0_g;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_SHUTDOWN' */

    /* SystemInitialize for Triggered SubSystem: '<S7>/SIG_Brakelight' */
    /* SystemInitialize for Outport: '<S17>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_ku = DR18E_Testpult_P.TXstatus_Y0_d;

    /* SystemInitialize for Outport: '<S17>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_ga = DR18E_Testpult_P.TXtime_Y0_m;

    /* SystemInitialize for Outport: '<S17>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_ak = DR18E_Testpult_P.TXdeltatime_Y0_l;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_Brakelight' */

    /* SystemInitialize for Triggered SubSystem: '<S7>/SIG_Buzzer' */
    /* SystemInitialize for Outport: '<S18>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_do = DR18E_Testpult_P.TXstatus_Y0_f;

    /* SystemInitialize for Outport: '<S18>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_kf = DR18E_Testpult_P.TXtime_Y0_g;

    /* SystemInitialize for Outport: '<S18>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_iil = DR18E_Testpult_P.TXdeltatime_Y0_n;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_Buzzer' */

    /* SystemInitialize for Triggered SubSystem: '<S690>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop_Init(&DR18E_Testpult_B.JKFlipFlop,
      &DR18E_Testpult_DW.JKFlipFlop, (P_JKFlipFlop_DR18E_Testpult_T *)
      &DR18E_Testpult_P.JKFlipFlop);

    /* End of SystemInitialize for SubSystem: '<S690>/J-K Flip-Flop' */

    /* SystemInitialize for Triggered SubSystem: '<S688>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop_Init(&DR18E_Testpult_B.JKFlipFlop_l,
      &DR18E_Testpult_DW.JKFlipFlop_l, (P_JKFlipFlop_DR18E_Testpult_T *)
      &DR18E_Testpult_P.JKFlipFlop_l);

    /* End of SystemInitialize for SubSystem: '<S688>/J-K Flip-Flop' */

    /* SystemInitialize for Enabled SubSystem: '<S7>/SIG_PUMP' */
    /* SystemInitialize for Outport: '<S22>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_dg = DR18E_Testpult_P.TXstatus_Y0_fi;

    /* SystemInitialize for Outport: '<S22>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_gu = DR18E_Testpult_P.TXtime_Y0_f;

    /* SystemInitialize for Outport: '<S22>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_dd = DR18E_Testpult_P.TXdeltatime_Y0_ec;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_PUMP' */

    /* SystemInitialize for Triggered SubSystem: '<S686>/J-K Flip-Flop' */
    DR18E_Testpult_JKFlipFlop_Init(&DR18E_Testpult_B.JKFlipFlop_n,
      &DR18E_Testpult_DW.JKFlipFlop_n, (P_JKFlipFlop_DR18E_Testpult_T *)
      &DR18E_Testpult_P.JKFlipFlop_n);

    /* End of SystemInitialize for SubSystem: '<S686>/J-K Flip-Flop' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Motortemperatur' */
    /* SystemInitialize for Outport: '<S372>/Motor1_Temp' */
    DR18E_Testpult_B.Tempcorrespondingresistance =
      DR18E_Testpult_P.Motor1_Temp_Y0_l;

    /* SystemInitialize for Outport: '<S372>/Motor1_R ' */
    DR18E_Testpult_B.Divide_dg = DR18E_Testpult_P.Motor1_R_Y0;

    /* End of SystemInitialize for SubSystem: '<S287>/Motortemperatur' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Drehzahl' */
    /* InitializeConditions for Memory: '<S379>/Memory' */
    DR18E_Testpult_DW.Memory_PreviousInput_oz = DR18E_Testpult_P.Memory_X0_p;

    /* SystemInitialize for Outport: '<S368>/Drehzahl in 1//min U1' */
    DR18E_Testpult_B.Sum1_l3 = DR18E_Testpult_P.Drehzahlin1minU1_Y0_d;

    /* SystemInitialize for Outport: '<S368>/Motorleistung in W U1' */
    DR18E_Testpult_B.up60i = DR18E_Testpult_P.MotorleistunginWU1_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S287>/Drehzahl' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Strom' */
    /* SystemInitialize for Outport: '<S376>/Strangstrom I_rms in A U1' */
    DR18E_Testpult_B.Divide2_h = DR18E_Testpult_P.StrangstromI_rmsinAU1_Y0_d;

    /* SystemInitialize for Outport: '<S376>/Drehmoment M in Nm U1' */
    DR18E_Testpult_B.DrehmomentStrangstrominNmArms =
      DR18E_Testpult_P.DrehmomentMinNmU1_Y0_g;

    /* End of SystemInitialize for SubSystem: '<S287>/Strom' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Wirkstrom Iq' */
    DR18E_Testpult_WirkstromIq_Init(&DR18E_Testpult_B.WirkstromIq_e,
      (P_WirkstromIq_DR18E_Testpult_T *)&DR18E_Testpult_P.WirkstromIq_e);

    /* End of SystemInitialize for SubSystem: '<S287>/Wirkstrom Iq' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Red ID 64:  Status Register Auswertung' */
    /* SystemInitialize for Outport: '<S373>/_Ena' */
    DR18E_Testpult_B.Compare_e = DR18E_Testpult_P._Ena_Y0_l;

    /* SystemInitialize for Outport: '<S373>/_NCR0' */
    DR18E_Testpult_B.Compare_fu = DR18E_Testpult_P._NCR0_Y0_j;

    /* SystemInitialize for Outport: '<S373>/_Lim+' */
    DR18E_Testpult_B.Compare_cx = DR18E_Testpult_P._Lim_Y0_h;

    /* SystemInitialize for Outport: '<S373>/_Lim-' */
    DR18E_Testpult_B.Compare_ij = DR18E_Testpult_P._Lim_Y0_c;

    /* SystemInitialize for Outport: '<S373>/_OK' */
    DR18E_Testpult_B.Compare_fp = DR18E_Testpult_P._OK_Y0_f;

    /* SystemInitialize for Outport: '<S373>/_Icns' */
    DR18E_Testpult_B.Compare_dv = DR18E_Testpult_P._Icns_Y0_a;

    /* SystemInitialize for Outport: '<S373>/_T-Nlim' */
    DR18E_Testpult_B.Compare_ml = DR18E_Testpult_P._TNlim_Y0_p;

    /* SystemInitialize for Outport: '<S373>/_P-N' */
    DR18E_Testpult_B.Compare_nc = DR18E_Testpult_P._PN_Y0_b;

    /* SystemInitialize for Outport: '<S373>/_N-I' */
    DR18E_Testpult_B.Compare_av = DR18E_Testpult_P._NI_Y0_g;

    /* SystemInitialize for Outport: '<S373>/_N0' */
    DR18E_Testpult_B.Compare_hb = DR18E_Testpult_P._N0_Y0_k;

    /* SystemInitialize for Outport: '<S373>/_Rsw' */
    DR18E_Testpult_B.Compare_nw = DR18E_Testpult_P._Rsw_Y0_l;

    /* SystemInitialize for Outport: '<S373>/_Cal0' */
    DR18E_Testpult_B.Compare_h = DR18E_Testpult_P._Cal0_Y0_c;

    /* SystemInitialize for Outport: '<S373>/_Cal' */
    DR18E_Testpult_B.Compare_du = DR18E_Testpult_P._Cal_Y0_f;

    /* SystemInitialize for Outport: '<S373>/_Tol' */
    DR18E_Testpult_B.Compare_b = DR18E_Testpult_P._Tol_Y0_e;

    /* SystemInitialize for Outport: '<S373>/_Rdy' */
    DR18E_Testpult_B.Compare_g = DR18E_Testpult_P._Rdy_Y0_b;

    /* SystemInitialize for Outport: '<S373>/_Brk' */
    DR18E_Testpult_B.Compare_kl = DR18E_Testpult_P._Brk_Y0_b;

    /* SystemInitialize for Outport: '<S373>/_SIGNMAG' */
    DR18E_Testpult_B.Compare_cw = DR18E_Testpult_P._SIGNMAG_Y0_d;

    /* SystemInitialize for Outport: '<S373>/_Nclip' */
    DR18E_Testpult_B.Compare_cz0 = DR18E_Testpult_P._Nclip_Y0_p;

    /* SystemInitialize for Outport: '<S373>/_Nclip+' */
    DR18E_Testpult_B.Compare_dx = DR18E_Testpult_P._Nclip_Y0_bj;

    /* SystemInitialize for Outport: '<S373>/_Nclip-' */
    DR18E_Testpult_B.Compare_j = DR18E_Testpult_P._Nclip_Y0_k;

    /* SystemInitialize for Outport: '<S373>/_Ird-Dig' */
    DR18E_Testpult_B.Compare_ak = DR18E_Testpult_P._IrdDig_Y0_g;

    /* SystemInitialize for Outport: '<S373>/_Ird-rchd' */
    DR18E_Testpult_B.Compare_i = DR18E_Testpult_P._Irdrchd_Y0_j;

    /* SystemInitialize for Outport: '<S373>/_Ird-N' */
    DR18E_Testpult_B.Compare_bl = DR18E_Testpult_P._IrdN_Y0_o;

    /* SystemInitialize for Outport: '<S373>/_Ird_TI' */
    DR18E_Testpult_B.Compare_k0 = DR18E_Testpult_P._Ird_TI_Y0_a;

    /* SystemInitialize for Outport: '<S373>/_Ird_TIR' */
    DR18E_Testpult_B.Compare_o = DR18E_Testpult_P._Ird_TIR_Y0_d;

    /* SystemInitialize for Outport: '<S373>/_2Hz' */
    DR18E_Testpult_B.Compare_np = DR18E_Testpult_P._2Hz_Y0_l;

    /* SystemInitialize for Outport: '<S373>/_Ird-TM' */
    DR18E_Testpult_B.Compare_dc = DR18E_Testpult_P._IrdTM_Y0_i;

    /* SystemInitialize for Outport: '<S373>/_Ird-ANA' */
    DR18E_Testpult_B.Compare_ds = DR18E_Testpult_P._IrdANA_Y0_g;

    /* SystemInitialize for Outport: '<S373>/_Iwcns' */
    DR18E_Testpult_B.Compare_ey = DR18E_Testpult_P._Iwcns_Y0_a;

    /* SystemInitialize for Outport: '<S373>/_RFE-plus' */
    DR18E_Testpult_B.Compare_gq = DR18E_Testpult_P._RFEplus_Y0;

    /* SystemInitialize for Outport: '<S373>/_frei' */
    DR18E_Testpult_B.Compare_d3 = DR18E_Testpult_P._frei_Y0_i;

    /* SystemInitialize for Outport: '<S373>/_Handrad' */
    DR18E_Testpult_B.Compare_pzp = DR18E_Testpult_P._Handrad_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S287>/Red ID 64:  Status Register Auswertung' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
    RegID0x8FERRORWarningRegis_Init
      (&DR18E_Testpult_B.RegID0x8FERRORWarningRegister_c,
       (P_RegID0x8FERRORWarningRegist_T *)
       &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_c);

    /* End of SystemInitialize for SubSystem: '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/U_DC' */
    DR18E_Testpult_U_DC_Init(&DR18E_Testpult_B.U_DC_o, (P_U_DC_DR18E_Testpult_T *)
      &DR18E_Testpult_P.U_DC_o);

    /* End of SystemInitialize for SubSystem: '<S287>/U_DC' */

    /* SystemInitialize for IfAction SubSystem: '<S287>/Inverter_Temp' */
    DR18E_Testpu_Inverter_Temp_Init(&DR18E_Testpult_B.Inverter_Temp_e,
      (P_Inverter_Temp_DR18E_Testpul_T *)&DR18E_Testpult_P.Inverter_Temp_e);

    /* End of SystemInitialize for SubSystem: '<S287>/Inverter_Temp' */

    /* SystemInitialize for Enabled SubSystem: '<S7>/SIG_FAN' */
    /* SystemInitialize for Outport: '<S19>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_nc = DR18E_Testpult_P.TXstatus_Y0_b;

    /* SystemInitialize for Outport: '<S19>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_os0 = DR18E_Testpult_P.TXtime_Y0_i;

    /* SystemInitialize for Outport: '<S19>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_bp = DR18E_Testpult_P.TXdeltatime_Y0_h;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_FAN' */

    /* SystemInitialize for Triggered SubSystem: '<S7>/SIG_PRECHARGE' */
    /* SystemInitialize for Outport: '<S21>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_e1 = DR18E_Testpult_P.TXstatus_Y0_i;

    /* SystemInitialize for Outport: '<S21>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_azh = DR18E_Testpult_P.TXtime_Y0_a;

    /* SystemInitialize for Outport: '<S21>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_gw = DR18E_Testpult_P.TXdeltatime_Y0_a;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_PRECHARGE' */

    /* SystemInitialize for Triggered SubSystem: '<S7>/SIG_Inverter_Enable' */
    /* SystemInitialize for Outport: '<S20>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_p1 = DR18E_Testpult_P.TXstatus_Y0_k;

    /* SystemInitialize for Outport: '<S20>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_ey = DR18E_Testpult_P.TXtime_Y0_l;

    /* SystemInitialize for Outport: '<S20>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_duc = DR18E_Testpult_P.TXdeltatime_Y0_e;

    /* End of SystemInitialize for SubSystem: '<S7>/SIG_Inverter_Enable' */

    /* SystemInitialize for Enabled SubSystem: '<S9>/DISP_Error_Code' */
    /* SystemInitialize for Outport: '<S40>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_jp = DR18E_Testpult_P.TXstatus_Y0_ik;

    /* SystemInitialize for Outport: '<S40>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_kd = DR18E_Testpult_P.TXtime_Y0_md;

    /* SystemInitialize for Outport: '<S40>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_hk = DR18E_Testpult_P.TXdeltatime_Y0_lp;

    /* End of SystemInitialize for SubSystem: '<S9>/DISP_Error_Code' */

    /* SystemInitialize for Enabled SubSystem: '<S9>/Car_State' */
    /* SystemInitialize for Outport: '<S39>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_ji = DR18E_Testpult_P.TXstatus_Y0_m;

    /* SystemInitialize for Outport: '<S39>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_kt = DR18E_Testpult_P.TXtime_Y0_p;

    /* SystemInitialize for Outport: '<S39>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_kw = DR18E_Testpult_P.TXdeltatime_Y0_ly;

    /* End of SystemInitialize for SubSystem: '<S9>/Car_State' */

    /* SystemInitialize for Enabled SubSystem: '<S9>/LED_BAR' */
    /* SystemInitialize for Outport: '<S45>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_pp = DR18E_Testpult_P.TXstatus_Y0_o;

    /* SystemInitialize for Outport: '<S45>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_jc = DR18E_Testpult_P.TXtime_Y0_b;

    /* SystemInitialize for Outport: '<S45>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_li = DR18E_Testpult_P.TXdeltatime_Y0_p;

    /* End of SystemInitialize for SubSystem: '<S9>/LED_BAR' */

    /* SystemInitialize for Atomic SubSystem: '<S487>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.TriggeredSubsystem,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.TriggeredSubsystem);

    /* End of SystemInitialize for SubSystem: '<S487>/Triggered Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S488>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.TriggeredSubsystem_i,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.TriggeredSubsystem_i);

    /* End of SystemInitialize for SubSystem: '<S488>/Triggered Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S496>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.TriggeredSubsystem_f,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.TriggeredSubsystem_f);

    /* End of SystemInitialize for SubSystem: '<S496>/Triggered Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S443>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.TriggeredSubsystem_k,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.TriggeredSubsystem_k);

    /* End of SystemInitialize for SubSystem: '<S443>/Triggered Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S282>/Triggered Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.TriggeredSubsystem_a,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.TriggeredSubsystem_a);

    /* End of SystemInitialize for SubSystem: '<S282>/Triggered Subsystem' */

    /* SystemInitialize for Chart: '<S10>/TX Mode Management' */
    DR18E_Testpult_DW.is_active_c4_DR18E_Testpult = 0U;
    DR18E_Testpult_DW.is_c4_DR18E_Testpult = DR18E_Testpu_IN_NO_ACTIVE_CHILD;
    DR18E_Testpult_B.O_Universal = false;
    DR18E_Testpult_B.O_Init = false;
    DR18E_Testpult_B.O_Torque = false;

    /* SystemInitialize for Enabled SubSystem: '<S10>/Inverters TXUniversal' */
    /* InitializeConditions for Memory: '<S65>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_iax = DR18E_Testpult_P.Mem1_X0;

    /* InitializeConditions for Memory: '<S65>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_g2 = DR18E_Testpult_P.Mem2_X0;

    /* InitializeConditions for Memory: '<S65>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_cj = DR18E_Testpult_P.Mem3_X0;

    /* InitializeConditions for Memory: '<S65>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_b = DR18E_Testpult_P.Mem4_X0;

    /* InitializeConditions for Memory: '<S66>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_n3 = DR18E_Testpult_P.Mem1_X0_d;

    /* InitializeConditions for Memory: '<S66>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_bd = DR18E_Testpult_P.Mem2_X0_d;

    /* InitializeConditions for Memory: '<S66>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_d = DR18E_Testpult_P.Mem3_X0_h;

    /* InitializeConditions for Memory: '<S66>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_kp = DR18E_Testpult_P.Mem4_X0_p;

    /* End of SystemInitialize for SubSystem: '<S10>/Inverters TXUniversal' */

    /* SystemInitialize for Enabled SubSystem: '<S10>/Umrichter Init' */
    /* InitializeConditions for RateTransition: '<S69>/Rate Transition' */
    DR18E_Testpult_DW.RateTransition_Buffer0 =
      DR18E_Testpult_P.RateTransition_X0;

    /* InitializeConditions for Memory: '<S69>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_p3 = DR18E_Testpult_P.Mem1_X0_e;

    /* InitializeConditions for Memory: '<S69>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_pz = DR18E_Testpult_P.Mem2_X0_k;

    /* InitializeConditions for Memory: '<S69>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_m = DR18E_Testpult_P.Mem3_X0_hx;

    /* InitializeConditions for Memory: '<S69>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_g = DR18E_Testpult_P.Mem4_X0_o;

    /* InitializeConditions for RateTransition: '<S69>/Rate Transition1' */
    DR18E_Testpult_DW.RateTransition1_Buffer0_l =
      DR18E_Testpult_P.RateTransition1_X0;

    /* InitializeConditions for RateTransition: '<S70>/Rate Transition' */
    DR18E_Testpult_DW.RateTransition_Buffer0_n =
      DR18E_Testpult_P.RateTransition_X0_c;

    /* InitializeConditions for Memory: '<S70>/Mem1' */
    DR18E_Testpult_DW.Mem1_PreviousInput_bf = DR18E_Testpult_P.Mem1_X0_o;

    /* InitializeConditions for Memory: '<S70>/Mem2' */
    DR18E_Testpult_DW.Mem2_PreviousInput_ee = DR18E_Testpult_P.Mem2_X0_km;

    /* InitializeConditions for Memory: '<S70>/Mem3' */
    DR18E_Testpult_DW.Mem3_PreviousInput_pq = DR18E_Testpult_P.Mem3_X0_c;

    /* InitializeConditions for Memory: '<S70>/Mem4' */
    DR18E_Testpult_DW.Mem4_PreviousInput_cg = DR18E_Testpult_P.Mem4_X0_k;

    /* InitializeConditions for RateTransition: '<S70>/Rate Transition1' */
    DR18E_Testpult_DW.RateTransition1_Buffer0_i =
      DR18E_Testpult_P.RateTransition1_X0_c;

    /* End of SystemInitialize for SubSystem: '<S10>/Umrichter Init' */

    /* SystemInitialize for Enabled SubSystem: '<S11>/Dashboard_LEDs' */
    /* SystemInitialize for Outport: '<S71>/TX status' */
    DR18E_Testpult_B.SFunction1_o1_la = DR18E_Testpult_P.TXstatus_Y0_ip;

    /* SystemInitialize for Outport: '<S71>/TX time' */
    DR18E_Testpult_B.SFunction1_o2_bxo = DR18E_Testpult_P.TXtime_Y0_i3;

    /* SystemInitialize for Outport: '<S71>/TX delta time' */
    DR18E_Testpult_B.SFunction1_o3_os = DR18E_Testpult_P.TXdeltatime_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S11>/Dashboard_LEDs' */

    /* SystemInitialize for Atomic SubSystem: '<S187>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem);

    /* End of SystemInitialize for SubSystem: '<S187>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S186>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_d,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_d);

    /* End of SystemInitialize for SubSystem: '<S186>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S188>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_f,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_f);

    /* End of SystemInitialize for SubSystem: '<S188>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S196>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_g,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_g);

    /* End of SystemInitialize for SubSystem: '<S196>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S195>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_j,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_j);

    /* End of SystemInitialize for SubSystem: '<S195>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S197>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_n,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_n);

    /* End of SystemInitialize for SubSystem: '<S197>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S207>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_b,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_b);

    /* End of SystemInitialize for SubSystem: '<S207>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S206>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_l,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_l);

    /* End of SystemInitialize for SubSystem: '<S206>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S208>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_i,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_i);

    /* End of SystemInitialize for SubSystem: '<S208>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S216>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_k,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_k);

    /* End of SystemInitialize for SubSystem: '<S216>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S215>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_bk,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_bk);

    /* End of SystemInitialize for SubSystem: '<S215>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S217>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_a,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_a);

    /* End of SystemInitialize for SubSystem: '<S217>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S227>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_js,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_js);

    /* End of SystemInitialize for SubSystem: '<S227>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S226>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_gd,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_gd);

    /* End of SystemInitialize for SubSystem: '<S226>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S228>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_be,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_be);

    /* End of SystemInitialize for SubSystem: '<S228>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S236>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_fq,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_fq);

    /* End of SystemInitialize for SubSystem: '<S236>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S235>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_fr,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_fr);

    /* End of SystemInitialize for SubSystem: '<S235>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S237>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_c,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_c);

    /* End of SystemInitialize for SubSystem: '<S237>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S247>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_o,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_o);

    /* End of SystemInitialize for SubSystem: '<S247>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S246>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_n4,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_n4);

    /* End of SystemInitialize for SubSystem: '<S246>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S248>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_oy,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_oy);

    /* End of SystemInitialize for SubSystem: '<S248>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S256>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_dm,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_dm);

    /* End of SystemInitialize for SubSystem: '<S256>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S255>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_e,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_e);

    /* End of SystemInitialize for SubSystem: '<S255>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S257>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_kn,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_kn);

    /* End of SystemInitialize for SubSystem: '<S257>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S91>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_ld,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_ld);

    /* End of SystemInitialize for SubSystem: '<S91>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S176>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_e3,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_e3);

    /* End of SystemInitialize for SubSystem: '<S176>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S175>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_kl,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_kl);

    /* End of SystemInitialize for SubSystem: '<S175>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S177>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_bek,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_bek);

    /* End of SystemInitialize for SubSystem: '<S177>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S167>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_m,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_m);

    /* End of SystemInitialize for SubSystem: '<S167>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S166>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_nc,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_nc);

    /* End of SystemInitialize for SubSystem: '<S166>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S168>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_lz,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_lz);

    /* End of SystemInitialize for SubSystem: '<S168>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S111>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_ig,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_ig);

    /* End of SystemInitialize for SubSystem: '<S111>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S113>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_im,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_im);

    /* End of SystemInitialize for SubSystem: '<S113>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S114>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_dl,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_dl);

    /* End of SystemInitialize for SubSystem: '<S114>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S115>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_om,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_om);

    /* End of SystemInitialize for SubSystem: '<S115>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S116>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_fe,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_fe);

    /* End of SystemInitialize for SubSystem: '<S116>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S117>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_nm,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_nm);

    /* End of SystemInitialize for SubSystem: '<S117>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S118>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_la,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_la);

    /* End of SystemInitialize for SubSystem: '<S118>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S119>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_co,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_co);

    /* End of SystemInitialize for SubSystem: '<S119>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S120>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_nx,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_nx);

    /* End of SystemInitialize for SubSystem: '<S120>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S112>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_e1,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_e1);

    /* End of SystemInitialize for SubSystem: '<S112>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S141>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_ms,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_ms);

    /* End of SystemInitialize for SubSystem: '<S141>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S143>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_ot,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_ot);

    /* End of SystemInitialize for SubSystem: '<S143>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S144>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_eq,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_eq);

    /* End of SystemInitialize for SubSystem: '<S144>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S145>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_fqo,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_fqo);

    /* End of SystemInitialize for SubSystem: '<S145>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S146>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_c0,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_c0);

    /* End of SystemInitialize for SubSystem: '<S146>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S147>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_mf,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_mf);

    /* End of SystemInitialize for SubSystem: '<S147>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S148>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_jsn,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_jsn);

    /* End of SystemInitialize for SubSystem: '<S148>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S149>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_ih,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_ih);

    /* End of SystemInitialize for SubSystem: '<S149>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S150>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_h,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_h);

    /* End of SystemInitialize for SubSystem: '<S150>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S142>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_nw,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_nw);

    /* End of SystemInitialize for SubSystem: '<S142>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S270>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_cy,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_cy);

    /* End of SystemInitialize for SubSystem: '<S270>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S275>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_p,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_p);

    /* End of SystemInitialize for SubSystem: '<S275>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S276>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_bp,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_bp);

    /* End of SystemInitialize for SubSystem: '<S276>/Subsystem' */

    /* SystemInitialize for Atomic SubSystem: '<S277>/Subsystem' */
    DR18E_Testpult_Subsystem_Init(&DR18E_Testpult_DW.Subsystem_gh,
      (P_Subsystem_DR18E_Testpult_T *)&DR18E_Testpult_P.Subsystem_gh);

    /* End of SystemInitialize for SubSystem: '<S277>/Subsystem' */
  }
}

/* Model terminate function */
void DR18E_Testpult_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S101>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK1A_Temp" Id:538 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S102>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK1B_Temp" Id:539 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S103>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK2A_Temp" Id:540 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S104>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK2B_Temp" Id:541 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S105>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK3A_Temp" Id:542 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S106>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK3B_Temp" Id:543 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X21F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S107>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK4A_Temp" Id:544 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X220])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S108>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK4B_Temp" Id:545 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X221])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S109>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK5A_Temp" Id:546 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X222])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S110>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK5B_Temp" Id:547 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X223])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S133>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK6A_Temp" Id:550 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X226])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S134>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK6B_Temp" Id:551 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X227])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S135>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK7A_Temp" Id:552 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X228])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S136>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK7B_Temp" Id:553 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X229])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S137>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK8A_Temp" Id:554 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S138>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK8B_Temp" Id:555 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S139>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK9A_Temp" Id:556 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S140>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK9B_Temp" Id:557 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S131>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK10A_Temp" Id:558 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S132>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK10B_Temp" Id:559 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X22F])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S6>/SIG_FAN_HVBATTERY' */

  /* Terminate for S-Function (rti_commonblock): '<S13>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_FAN_HVBATTERY" Id:822 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X336])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S6>/SIG_FAN_HVBATTERY' */

  /* Terminate for S-Function (rti_commonblock): '<S494>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Dashboard_Buttons" Id:787 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X313])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S482>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "BSPD_Status" Id:770 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X302])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S481>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "BOTS_Status" Id:771 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X303])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S493>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Dashboard_AUX" Id:786 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X312])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S500>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "ES_rear" Id:789 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X315])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S88>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_AMS_STATE" Id:368 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X170])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S261>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "CANIO_AUX" Id:809 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X329])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S293>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "INV_1_Recieve" Id:273 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][4] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_RX_STD_0X111])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S483>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Brake_Value" Id:290 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X122])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Triggered SubSystem: '<S7>/SIG_SHUTDOWN' */

  /* Terminate for S-Function (rti_commonblock): '<S23>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_SHUTDOWN" Id:817 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X331])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_SHUTDOWN' */

  /* Terminate for Triggered SubSystem: '<S7>/SIG_Brakelight' */

  /* Terminate for S-Function (rti_commonblock): '<S17>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_Brakelight" Id:805 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X325])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_Brakelight' */

  /* Terminate for Triggered SubSystem: '<S7>/SIG_Buzzer' */

  /* Terminate for S-Function (rti_commonblock): '<S18>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_Buzzer" Id:803 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X323])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_Buzzer' */

  /* Terminate for S-Function (rti_commonblock): '<S505>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Sensor_Watertemp" Id:790 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X316])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S7>/SIG_PUMP' */

  /* Terminate for S-Function (rti_commonblock): '<S22>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_PUMP" Id:808 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X328])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_PUMP' */

  /* Terminate for S-Function (rti_commonblock): '<S370>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "INV_2_Recieve" Id:274 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][5] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_RX_STD_0X112])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S7>/SIG_FAN' */

  /* Terminate for S-Function (rti_commonblock): '<S19>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_FAN" Id:807 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X327])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_FAN' */

  /* Terminate for Triggered SubSystem: '<S7>/SIG_PRECHARGE' */

  /* Terminate for S-Function (rti_commonblock): '<S21>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_PRECHARGE" Id:818 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X332])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_PRECHARGE' */

  /* Terminate for Triggered SubSystem: '<S7>/SIG_Inverter_Enable' */

  /* Terminate for S-Function (rti_commonblock): '<S20>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "SIG_Inverter_Enable" Id:804 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X324])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S7>/SIG_Inverter_Enable' */

  /* Terminate for S-Function (rti_commonblock): '<S33>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "MOTOR_1_Temp" Id:1648 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X670])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S34>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "MOTOR_2_Temp" Id:1649 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X671])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S31>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "IGBT_1_Temp" Id:1650 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X672])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S32>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "IGBT_2_Temp" Id:1651 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X673])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S9>/DISP_Error_Code' */

  /* Terminate for S-Function (rti_commonblock): '<S40>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "DISP_Error_Code" Id:1638 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X666])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S9>/DISP_Error_Code' */

  /* Terminate for Enabled SubSystem: '<S9>/Car_State' */

  /* Terminate for S-Function (rti_commonblock): '<S39>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "Car_State" Id:1637 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X665])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S9>/Car_State' */

  /* Terminate for S-Function (rti_commonblock): '<S44>/S-Function1' incorporates:
   *  Constant: '<S526>/Constant1'
   */

  /* dSPACE RTICAN TX Message Block: "Drive_Torque_Max" Id:819 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X333])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S9>/LED_BAR' */

  /* Terminate for S-Function (rti_commonblock): '<S45>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "LED_BAR" Id:1636 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][5] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X664])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S9>/LED_BAR' */

  /* Terminate for S-Function (rti_commonblock): '<S490>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Throttle" Id:289 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X121])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S495>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "RPM_Front" Id:291 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X123])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S444>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Steering" Id:416 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X1A0])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S283>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Yaw_Rate" Id:307 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X133])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S489>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Sensor_Current" Id:772 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X304])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S10>/Inverters TXTorque' */

  /* Terminate for S-Function (rti_commonblock): '<S59>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:260 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X104])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S60>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:262 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][3] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X106])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S10>/Inverters TXTorque' */

  /* Terminate for Enabled SubSystem: '<S10>/Inverters TXUniversal' */

  /* Terminate for S-Function (rti_commonblock): '<S62>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "INV_1_TX" Id:259 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][1] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X103])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S63>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "INV_2_TX" Id:260 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][2] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X104])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S10>/Inverters TXUniversal' */

  /* Terminate for Enabled SubSystem: '<S10>/Umrichter Init' */

  /* Terminate for S-Function (rti_commonblock): '<S67>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:257 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C1_TX_STD_0X101])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S68>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "TX MessageInit" Id:258 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[0][0] = can_tp1_msg_sleep
            (can_type1_msg_M1[CANTP1_M1_C2_TX_STD_0X102])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S10>/Umrichter Init' */

  /* Terminate for S-Function (rti_commonblock): '<S266>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GLV_AMS_STATe" Id:582 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X246])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for Enabled SubSystem: '<S11>/Dashboard_LEDs' */

  /* Terminate for S-Function (rti_commonblock): '<S71>/S-Function1' */

  /* dSPACE RTICAN TX Message Block: "Dashboard_LEDs" Id:788 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_TX_STD_0X314])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* End of Terminate for SubSystem: '<S11>/Dashboard_LEDs' */

  /* Terminate for S-Function (rti_commonblock): '<S183>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK1A" Id:336 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X150])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S184>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK1B" Id:337 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X151])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S185>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK1C" Id:338 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X152])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S192>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK2A" Id:339 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X153])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S193>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK2B" Id:340 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X154])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S194>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK2C" Id:341 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X155])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S203>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK3A" Id:342 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X156])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S204>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK3B" Id:343 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X157])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S205>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK3C" Id:344 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X158])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S212>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK4A" Id:345 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X159])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S213>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK4B" Id:346 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][0] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S214>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK4C" Id:347 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S223>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK5A" Id:348 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S224>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK5B" Id:349 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S225>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK5C" Id:350 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X15E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S232>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK6A" Id:352 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X160])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S233>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK6B" Id:353 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X161])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S234>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK6C" Id:354 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X162])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S243>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK7A" Id:355 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X163])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S244>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK7B" Id:356 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X164])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S245>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK7C" Id:357 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X165])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S252>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK8A" Id:358 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X166])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S253>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK8B" Id:359 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X167])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S254>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK8C" Id:360 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X168])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S172>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK9A" Id:361 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X169])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S173>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK9B" Id:362 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][1] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16A])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S174>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK9C" Id:363 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16B])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S163>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK10A" Id:364 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16C])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S164>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK10B" Id:365 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16D])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S165>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "HV_STK10C" Id:366 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][2] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X16E])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S89>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Precharge_Status" Id:561 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X231])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S262>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "CANIO_Temperature" Id:806 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X326])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S269>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GLV_Cells" Id:576 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X240])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S272>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GLV Temp_2" Id:580 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X244])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S273>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GLV Temp_3" Id:581 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X245])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S274>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "GLV_TEMP" Id:579 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][3] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X243])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }

  /* Terminate for S-Function (rti_commonblock): '<S504>/S-Function1' */

  /* dSPACE RTICAN RX Message Block: "Oiltemperature" Id:792 */
  {
    /* ... Set the message into sleep mode */
    while ((rtican_type1_tq_error[1][4] = can_tp1_msg_sleep
            (can_type1_msg_M2[CANTP1_M2_C1_RX_STD_0X318])) ==
           DSMCOM_BUFFER_OVERFLOW) ;
  }
}
