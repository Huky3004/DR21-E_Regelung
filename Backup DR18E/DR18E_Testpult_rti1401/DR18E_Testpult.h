/*
 * DR18E_Testpult.h
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

#ifndef RTW_HEADER_DR18E_Testpult_h_
#define RTW_HEADER_DR18E_Testpult_h_
#include <math.h>
#include <string.h>
#ifndef DR18E_Testpult_COMMON_INCLUDES_
# define DR18E_Testpult_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include <dsflrecusb.h>
#include <rti_msg_access.h>
#include <rtiusbflightrec_msg.h>
#include <rtican_ds1401.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* DR18E_Testpult_COMMON_INCLUDES_ */

#include "DR18E_Testpult_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rt_look.h"
#include "rt_look1d.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->blkStateChange = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

/* Block signals for system '<S91>/Subsystem' */
typedef struct {
  real_T Delay;                        /* '<S100>/Delay' */
  real_T Switch;                       /* '<S100>/Switch' */
  real_T Switch1;                      /* '<S100>/Switch1' */
  real_T Sum;                          /* '<S100>/Sum' */
  boolean_T RelationalOperator;        /* '<S100>/Relational Operator' */
} B_Subsystem_DR18E_Testpult_T;

/* Block states (auto storage) for system '<S91>/Subsystem' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S100>/Delay' */
} DW_Subsystem_DR18E_Testpult_T;

/* Block signals for system '<S288>/Skalierung Drehzahl' */
typedef struct {
  real_T Gain;                         /* '<S303>/Gain' */
} B_SkalierungDrehzahl_DR18E_Te_T;

/* Block signals for system '<S286>/Wirkstrom Iq' */
typedef struct {
  real_T Divide2;                      /* '<S301>/Divide2' */
  real_T Product;                      /* '<S301>/Product' */
  int32_T Gain3;                       /* '<S301>/Gain3' */
  int16_T DataTypeConversion1;         /* '<S301>/Data Type Conversion1' */
} B_WirkstromIq_DR18E_Testpult_T;

/* Block signals for system '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
typedef struct {
  uint32_T DataTypeConversion;         /* '<S297>/Data Type Conversion' */
  uint32_T BADPARAS;                   /* '<S297>/BADPARAS' */
  uint32_T BALLAST;                    /* '<S297>/BALLAST' */
  uint32_T BUSTIMEOUT;                 /* '<S297>/BUS TIMEOUT' */
  uint32_T POWERFAULT;                 /* '<S297>/POWER FAULT' */
  uint32_T RACEAWAY;                   /* '<S297>/RACEAWAY' */
  uint32_T USER;                       /* '<S297>/USER' */
  uint32_T I2R;                        /* '<S297>/I2R' */
  uint32_T WarnWARNING_0;              /* '<S297>/WarnWARNING_0' */
  uint32_T HW_FAIL;                    /* '<S297>/HW_FAIL' */
  uint32_T SammelWarnung;              /* '<S297>/Sammel Warnung' */
  uint32_T RFEFault;                   /* '<S297>/RFE Fault' */
  uint32_T WarnILLEGAL_STATUS;         /* '<S297>/WarnILLEGAL_STATUS' */
  uint32_T WarnWARNING_2;              /* '<S297>/WarnWARNING_2' */
  uint32_T SammelError;                /* '<S297>/Sammel Error' */
  uint32_T WarnPOWERVOLTAGE;           /* '<S297>/WarnPOWERVOLTAGE' */
  uint32_T WarnMOTORTEMP;              /* '<S297>/WarnMOTORTEMP' */
  uint32_T WarnDEVICETEMP;             /* '<S297>/WarnDEVICETEMP' */
  uint32_T WarnOVERVOLTAGE;            /* '<S297>/WarnOVERVOLTAGE' */
  uint32_T WarnI_peak;                 /* '<S297>/WarnI_peak' */
  uint32_T WarnI2R;                    /* '<S297>/WarnI2R' */
  uint32_T WarnBALLAST;                /* '<S297>/WarnBALLAST' */
  uint32_T FEEDBACK;                   /* '<S297>/FEEDBACK' */
  uint32_T POWERVOLTAGE;               /* '<S297>/POWERVOLTAGE' */
  uint32_T MOTORTEMP;                  /* '<S297>/MOTORTEMP' */
  uint32_T DEVICETEMP;                 /* '<S297>/DEVICETEMP' */
  uint32_T OVERVOLTAGE;                /* '<S297>/OVERVOLTAGE' */
  uint32_T I_PEAK;                     /* '<S297>/I_PEAK' */
  boolean_T Compare;                   /* '<S341>/Compare' */
  boolean_T Compare_p;                 /* '<S342>/Compare' */
  boolean_T Compare_d;                 /* '<S343>/Compare' */
  boolean_T Compare_dz;                /* '<S344>/Compare' */
  boolean_T Compare_m;                 /* '<S345>/Compare' */
  boolean_T Compare_b;                 /* '<S346>/Compare' */
  boolean_T Compare_mb;                /* '<S347>/Compare' */
  boolean_T Compare_br;                /* '<S348>/Compare' */
  boolean_T Compare_o;                 /* '<S349>/Compare' */
  boolean_T Compare_e;                 /* '<S350>/Compare' */
  boolean_T Compare_l;                 /* '<S351>/Compare' */
  boolean_T Compare_ph;                /* '<S352>/Compare' */
  boolean_T Compare_i;                 /* '<S353>/Compare' */
  boolean_T Compare_lz;                /* '<S354>/Compare' */
  boolean_T Compare_n;                 /* '<S355>/Compare' */
  boolean_T Compare_ee;                /* '<S356>/Compare' */
  boolean_T Compare_lj;                /* '<S357>/Compare' */
  boolean_T Compare_h;                 /* '<S358>/Compare' */
  boolean_T Compare_la;                /* '<S359>/Compare' */
  boolean_T Compare_mj;                /* '<S360>/Compare' */
  boolean_T Compare_e4;                /* '<S361>/Compare' */
  boolean_T Compare_c;                 /* '<S362>/Compare' */
  boolean_T Compare_lg;                /* '<S363>/Compare' */
  boolean_T Compare_k;                 /* '<S364>/Compare' */
  boolean_T Compare_kp;                /* '<S365>/Compare' */
  boolean_T Compare_lq;                /* '<S366>/Compare' */
  boolean_T Compare_g;                 /* '<S367>/Compare' */
} B_RegID0x8FERRORWarningRegist_T;

/* Block signals for system '<S286>/U_DC' */
typedef struct {
  real_T UmrechnungRegisterSpannungManua;/* '<S300>/Umrechnung Register--> Spannung Manual BAMOCAR PG D3 S. 47' */
} B_U_DC_DR18E_Testpult_T;

/* Block signals for system '<S286>/Inverter_Temp' */
typedef struct {
  real_T BAMOCARPGD3ManualS48;         /* '<S294>/BAMOCAR PG D3 Manual S. 48 ' */
} B_Inverter_Temp_DR18E_Testpul_T;

/* Block signals for system '<S686>/J-K Flip-Flop' */
typedef struct {
  boolean_T Memory;                    /* '<S687>/Memory' */
  boolean_T Logic[2];                  /* '<S687>/Logic' */
  boolean_T OutportBufferForQ;         /* '<S687>/Demux' */
} B_JKFlipFlop_DR18E_Testpult_T;

/* Block states (auto storage) for system '<S686>/J-K Flip-Flop' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S687>/Memory' */
} DW_JKFlipFlop_DR18E_Testpult_T;

/* Zero-crossing (trigger) state for system '<S686>/J-K Flip-Flop' */
typedef struct {
  ZCSigState JKFlipFlop_Trig_ZCE;      /* '<S686>/J-K Flip-Flop' */
} ZCE_JKFlipFlop_DR18E_Testpult_T;

/* Block signals (auto storage) */
typedef struct {
  real_T SFunction1_o1;                /* '<S101>/S-Function1' */
  real_T SFunction1_o2;                /* '<S101>/S-Function1' */
  real_T SFunction1_o3;                /* '<S101>/S-Function1' */
  real_T SFunction1_o4;                /* '<S101>/S-Function1' */
  real_T SFunction1_o5;                /* '<S101>/S-Function1' */
  real_T SFunction1_o6;                /* '<S101>/S-Function1' */
  real_T SFunction1_o7;                /* '<S101>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S102>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S102>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S102>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S102>/S-Function1' */
  real_T SFunction1_o1_d;              /* '<S103>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S103>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S103>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S103>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S103>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S103>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S103>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S104>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S104>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S104>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S104>/S-Function1' */
  real_T SFunction1_o1_al;             /* '<S105>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S105>/S-Function1' */
  real_T SFunction1_o3_ns;             /* '<S105>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S105>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S105>/S-Function1' */
  real_T SFunction1_o6_pf;             /* '<S105>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S105>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S106>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S106>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S106>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S106>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S107>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S107>/S-Function1' */
  real_T SFunction1_o3_nm;             /* '<S107>/S-Function1' */
  real_T SFunction1_o4_l4;             /* '<S107>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S107>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S107>/S-Function1' */
  real_T SFunction1_o7_af;             /* '<S107>/S-Function1' */
  real_T SFunction1_o1_ez;             /* '<S108>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S108>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S108>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S108>/S-Function1' */
  real_T SFunction1_o1_dl;             /* '<S109>/S-Function1' */
  real_T SFunction1_o2_oa;             /* '<S109>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S109>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S109>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S109>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S109>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S109>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S110>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S110>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S110>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S110>/S-Function1' */
  real_T MinMax;                       /* '<S675>/MinMax' */
  real_T SFunction1_o1_c;              /* '<S133>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S133>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S133>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S133>/S-Function1' */
  real_T SFunction1_o5_mv;             /* '<S133>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S133>/S-Function1' */
  real_T SFunction1_o7_bx;             /* '<S133>/S-Function1' */
  real_T SFunction1_o1_da;             /* '<S134>/S-Function1' */
  real_T SFunction1_o2_hl;             /* '<S134>/S-Function1' */
  real_T SFunction1_o3_e3;             /* '<S134>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S134>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S135>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S135>/S-Function1' */
  real_T SFunction1_o3_h1;             /* '<S135>/S-Function1' */
  real_T SFunction1_o4_fc;             /* '<S135>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S135>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S135>/S-Function1' */
  real_T SFunction1_o7_n5;             /* '<S135>/S-Function1' */
  real_T SFunction1_o1_h;              /* '<S136>/S-Function1' */
  real_T SFunction1_o2_eo;             /* '<S136>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S136>/S-Function1' */
  real_T SFunction1_o4_lz;             /* '<S136>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S137>/S-Function1' */
  real_T SFunction1_o2_l3;             /* '<S137>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S137>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S137>/S-Function1' */
  real_T SFunction1_o5_jq;             /* '<S137>/S-Function1' */
  real_T SFunction1_o6_kx;             /* '<S137>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S137>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S138>/S-Function1' */
  real_T SFunction1_o2_e3;             /* '<S138>/S-Function1' */
  real_T SFunction1_o3_ea;             /* '<S138>/S-Function1' */
  real_T SFunction1_o4_hb;             /* '<S138>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S139>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S139>/S-Function1' */
  real_T SFunction1_o3_de;             /* '<S139>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S139>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S139>/S-Function1' */
  real_T SFunction1_o6_d1;             /* '<S139>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S139>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S140>/S-Function1' */
  real_T SFunction1_o2_ho;             /* '<S140>/S-Function1' */
  real_T SFunction1_o3_lb;             /* '<S140>/S-Function1' */
  real_T SFunction1_o4_la;             /* '<S140>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S131>/S-Function1' */
  real_T SFunction1_o2_dz;             /* '<S131>/S-Function1' */
  real_T SFunction1_o3_gs;             /* '<S131>/S-Function1' */
  real_T SFunction1_o4_as;             /* '<S131>/S-Function1' */
  real_T SFunction1_o5_js;             /* '<S131>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S131>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S131>/S-Function1' */
  real_T SFunction1_o1_f;              /* '<S132>/S-Function1' */
  real_T SFunction1_o2_ew;             /* '<S132>/S-Function1' */
  real_T SFunction1_o3_ht;             /* '<S132>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S132>/S-Function1' */
  real_T MinMax1;                      /* '<S675>/MinMax1' */
  real_T MinMax2;                      /* '<S675>/MinMax2' */
  real_T Switch1;                      /* '<S533>/Switch1' */
  real_T DataTypeConversion4;          /* '<S6>/Data Type Conversion4' */
  real_T Uk1;                          /* '<S12>/Delay Input1' */
  real_T Gain;                         /* '<S6>/Gain' */
  real_T SFunction1_o1_av;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_ay;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S494>/S-Function1' */
  real_T SFunction1_o4_lu;             /* '<S494>/S-Function1' */
  real_T Starttaster;                  /* '<S85>/Gain2' */
  real_T SFunction1_o1_fs;             /* '<S482>/S-Function1' */
  real_T SFunction1_o2_f5;             /* '<S482>/S-Function1' */
  real_T SFunction1_o3_gv;             /* '<S482>/S-Function1' */
  real_T SFunction1_o4_cb;             /* '<S482>/S-Function1' */
  real_T Gain1;                        /* '<S84>/Gain1' */
  real_T SFunction1_o1_id;             /* '<S481>/S-Function1' */
  real_T SFunction1_o2_pb;             /* '<S481>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S481>/S-Function1' */
  real_T SFunction1_o4_f1;             /* '<S481>/S-Function1' */
  real_T BOTS;                         /* '<S84>/Gain' */
  real_T SFunction1_o1_ib;             /* '<S493>/S-Function1' */
  real_T SFunction1_o2_c1;             /* '<S493>/S-Function1' */
  real_T SFunction1_o3_ni;             /* '<S493>/S-Function1' */
  real_T SFunction1_o4_go;             /* '<S493>/S-Function1' */
  real_T SFunction1_o5_f4;             /* '<S493>/S-Function1' */
  real_T Notaus_Cockpit;               /* '<S85>/Gain' */
  real_T SFunction1_o1_ds;             /* '<S500>/S-Function1' */
  real_T SFunction1_o2_ed;             /* '<S500>/S-Function1' */
  real_T SFunction1_o3_lo;             /* '<S500>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S500>/S-Function1' */
  real_T SFunction1_o5_jw;             /* '<S500>/S-Function1' */
  real_T Notaus_links;                 /* '<S86>/Gain' */
  real_T Notaus_rechts;                /* '<S86>/Gain1' */
  real_T SFunction1_o1_mi;             /* '<S88>/S-Function1' */
  real_T SFunction1_o2_ci;             /* '<S88>/S-Function1' */
  real_T SFunction1_o3_p;              /* '<S88>/S-Function1' */
  real_T SFunction1_o4_j5;             /* '<S88>/S-Function1' */
  real_T SFunction1_o5_mp;             /* '<S88>/S-Function1' */
  real_T SFunction1_o6_i;              /* '<S88>/S-Function1' */
  real_T SFunction1_o7_h;              /* '<S88>/S-Function1' */
  real_T SFunction1_o8;                /* '<S88>/S-Function1' */
  real_T SFunction1_o9;                /* '<S88>/S-Function1' */
  real_T SFunction1_o10;               /* '<S88>/S-Function1' */
  real_T AMS_RelayState;               /* '<S77>/Data Type Conversion1' */
  real_T SFunction1_o1_gb;             /* '<S261>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S261>/S-Function1' */
  real_T SFunction1_o3_jz;             /* '<S261>/S-Function1' */
  real_T SFunction1_o4_as5;            /* '<S261>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S261>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S261>/S-Function1' */
  real_T SFunction1_o7_ap;             /* '<S261>/S-Function1' */
  real_T IMD_State;                    /* '<S78>/Gain4' */
  real_T Step;                         /* '<S523>/Step' */
  real_T SFunction1_o1_ft;             /* '<S293>/S-Function1' */
  real_T SFunction1_o2_ao;             /* '<S293>/S-Function1' */
  real_T SFunction1_o3_lz;             /* '<S293>/S-Function1' */
  real_T SFunction1_o4_dc;             /* '<S293>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S293>/S-Function1' */
  real_T SFunction1_o6_pu;             /* '<S293>/S-Function1' */
  real_T UDCcorr;                      /* '<S286>/InvCorrection' */
  real_T WeightedSampleTime;           /* '<S550>/Weighted Sample Time' */
  real_T Divide1;                      /* '<S550>/Divide1' */
  real_T Sum;                          /* '<S550>/Sum' */
  real_T Divide;                       /* '<S550>/Divide' */
  real_T SFunction1_o1_mm;             /* '<S483>/S-Function1' */
  real_T SFunction1_o2_o3;             /* '<S483>/S-Function1' */
  real_T SFunction1_o3_lop;            /* '<S483>/S-Function1' */
  real_T SFunction1_o4_ll;             /* '<S483>/S-Function1' */
  real_T SFunction1_o5_ag;             /* '<S483>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S483>/S-Function1' */
  real_T SFunction1_o7_ne;             /* '<S483>/S-Function1' */
  real_T Product[2];                   /* '<S545>/Product' */
  real_T Memory[2];                    /* '<S545>/Memory' */
  real_T Sum_j[2];                     /* '<S545>/Sum' */
  real_T Product1[2];                  /* '<S545>/Product1' */
  real_T Sum1[2];                      /* '<S545>/Sum1' */
  real_T DataTypeConversion1;          /* '<S7>/Data Type Conversion1' */
  real_T Gain2;                        /* '<S7>/Gain2' */
  real_T DataTypeConversion2;          /* '<S7>/Data Type Conversion2' */
  real_T Gain3;                        /* '<S7>/Gain3' */
  real_T DataTypeConversion3;          /* '<S7>/Data Type Conversion3' */
  real_T Gain4;                        /* '<S7>/Gain4' */
  real_T WeightedSampleTime_g;         /* '<S693>/Weighted Sample Time' */
  real_T Divide1_d;                    /* '<S693>/Divide1' */
  real_T Sum_b;                        /* '<S693>/Sum' */
  real_T Divide_i;                     /* '<S693>/Divide' */
  real_T PulseGenerator;               /* '<S533>/Pulse Generator' */
  real_T SFunction1_o1_ae;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_k2;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_de3;            /* '<S505>/S-Function1' */
  real_T SFunction1_o4_l2;             /* '<S505>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S505>/S-Function1' */
  real_T Switch;                       /* '<S677>/Switch' */
  real_T Product_b;                    /* '<S681>/Product' */
  real_T Memory_g;                     /* '<S681>/Memory' */
  real_T Sum_n;                        /* '<S681>/Sum' */
  real_T Product1_p;                   /* '<S681>/Product1' */
  real_T Sum1_g;                       /* '<S681>/Sum1' */
  real_T Product2;                     /* '<S533>/Product2' */
  real_T Saturation2;                  /* '<S533>/Saturation2' */
  real_T DataTypeConversion4_m;        /* '<S7>/Data Type Conversion4' */
  real_T Uk1_i;                        /* '<S15>/Delay Input1' */
  real_T Gain_p;                       /* '<S7>/Gain' */
  real_T WeightedSampleTime_a;         /* '<S692>/Weighted Sample Time' */
  real_T Divide1_g;                    /* '<S692>/Divide1' */
  real_T Sum_k;                        /* '<S692>/Sum' */
  real_T Divide_g;                     /* '<S692>/Divide' */
  real_T SFunction1_o1_eb;             /* '<S370>/S-Function1' */
  real_T SFunction1_o2_a0;             /* '<S370>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S370>/S-Function1' */
  real_T SFunction1_o4_pa;             /* '<S370>/S-Function1' */
  real_T SFunction1_o5_mx;             /* '<S370>/S-Function1' */
  real_T Sum_h;                        /* '<S533>/Sum' */
  real_T ProportionalGain;             /* '<S679>/Proportional Gain' */
  real_T Integrator;                   /* '<S679>/Integrator' */
  real_T Sum_o;                        /* '<S679>/Sum' */
  real_T Saturation;                   /* '<S533>/Saturation' */
  real_T Switch_h;                     /* '<S676>/Switch' */
  real_T Product_l;                    /* '<S680>/Product' */
  real_T Memory_e;                     /* '<S680>/Memory' */
  real_T Sum_f;                        /* '<S680>/Sum' */
  real_T Product1_g;                   /* '<S680>/Product1' */
  real_T Sum1_i;                       /* '<S680>/Sum1' */
  real_T Product1_n;                   /* '<S533>/Product1' */
  real_T Saturation1;                  /* '<S533>/Saturation1' */
  real_T DataTypeConversion5;          /* '<S7>/Data Type Conversion5' */
  real_T Uk1_p;                        /* '<S16>/Delay Input1' */
  real_T Gain1_m;                      /* '<S7>/Gain1' */
  real_T DataTypeConversion;           /* '<S7>/Data Type Conversion' */
  real_T Gain5;                        /* '<S7>/Gain5' */
  real_T DataTypeConversion6;          /* '<S7>/Data Type Conversion6' */
  real_T Gain6;                        /* '<S7>/Gain6' */
  real_T DataTypeConversion4_e;        /* '<S8>/Data Type Conversion4' */
  real_T SFunction1_o1_dv;             /* '<S33>/S-Function1' */
  real_T SFunction1_o2_cb;             /* '<S33>/S-Function1' */
  real_T SFunction1_o3_jd;             /* '<S33>/S-Function1' */
  real_T DataTypeConversion1_k;        /* '<S8>/Data Type Conversion1' */
  real_T SFunction1_o1_hz;             /* '<S34>/S-Function1' */
  real_T SFunction1_o2_b;              /* '<S34>/S-Function1' */
  real_T SFunction1_o3_bt;             /* '<S34>/S-Function1' */
  real_T DataTypeConversion2_a;        /* '<S8>/Data Type Conversion2' */
  real_T SFunction1_o1_co;             /* '<S31>/S-Function1' */
  real_T SFunction1_o2_fk;             /* '<S31>/S-Function1' */
  real_T SFunction1_o3_o;              /* '<S31>/S-Function1' */
  real_T DataTypeConversion3_i;        /* '<S8>/Data Type Conversion3' */
  real_T SFunction1_o1_fj;             /* '<S32>/S-Function1' */
  real_T SFunction1_o2_j;              /* '<S32>/S-Function1' */
  real_T SFunction1_o3_h4;             /* '<S32>/S-Function1' */
  real_T Uk1_k;                        /* '<S41>/Delay Input1' */
  real_T Uk1_n;                        /* '<S42>/Delay Input1' */
  real_T SFunction1_o1_g3;             /* '<S44>/S-Function1' */
  real_T SFunction1_o2_ef;             /* '<S44>/S-Function1' */
  real_T SFunction1_o3_ka;             /* '<S44>/S-Function1' */
  real_T Uk1_ib[8];                    /* '<S43>/Delay Input1' */
  real_T PulseGenerator_g;             /* '<S562>/Pulse Generator' */
  real_T LEDBarVektor[8];              /* '<S525>/Multiport Switch' */
  real_T WeightedSampleTime_h;         /* '<S561>/Weighted Sample Time' */
  real_T Divide1_p;                    /* '<S561>/Divide1' */
  real_T Sum_p;                        /* '<S561>/Sum' */
  real_T Divide_c;                     /* '<S561>/Divide' */
  real_T MinMax_a;                     /* '<S546>/MinMax' */
  real_T SFunction1_o1_hb;             /* '<S490>/S-Function1' */
  real_T SFunction1_o2_ij;             /* '<S490>/S-Function1' */
  real_T SFunction1_o3_jr;             /* '<S490>/S-Function1' */
  real_T SFunction1_o4_pw;             /* '<S490>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S490>/S-Function1' */
  real_T SFunction1_o6_kr;             /* '<S490>/S-Function1' */
  real_T SFunction1_o7_oo;             /* '<S490>/S-Function1' */
  real_T MinMax1_e;                    /* '<S546>/MinMax1' */
  real_T DataTypeConversion_h;         /* '<S546>/Data Type Conversion' */
  real_T Product_e;                    /* '<S559>/Product' */
  real_T Memory_p;                     /* '<S559>/Memory' */
  real_T Sum_l;                        /* '<S559>/Sum' */
  real_T Product1_c;                   /* '<S559>/Product1' */
  real_T Sum1_d;                       /* '<S559>/Sum1' */
  real_T SFunction1_o1_b3;             /* '<S495>/S-Function1' */
  real_T SFunction1_o2_it;             /* '<S495>/S-Function1' */
  real_T SFunction1_o3_ik;             /* '<S495>/S-Function1' */
  real_T SFunction1_o4_g2;             /* '<S495>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S495>/S-Function1' */
  real_T SFunction1_o1_ey;             /* '<S444>/S-Function1' */
  real_T SFunction1_o2_ha;             /* '<S444>/S-Function1' */
  real_T SFunction1_o3_nx;             /* '<S444>/S-Function1' */
  real_T SFunction1_o4_kt;             /* '<S444>/S-Function1' */
  real_T DataTypeConversion_h2;        /* '<S617>/Data Type Conversion' */
  real_T Gain_m;                       /* '<S530>/Gain' */
  real_T WheelslipCalculationLeft;     /* '<S530>/Wheelslip Calculation Left' */
  real_T Saturation_p;                 /* '<S530>/Saturation' */
  real_T Relay;                        /* '<S576>/Relay' */
  real_T Derivative;                   /* '<S576>/Derivative' */
  real_T Add;                          /* '<S576>/Add' */
  real_T Delay;                        /* '<S576>/Delay' */
  real_T Fcn;                          /* '<S576>/Fcn' */
  real_T WeightedSampleTime_hg;        /* '<S633>/Weighted Sample Time' */
  real_T Divide1_p0;                   /* '<S633>/Divide1' */
  real_T Sum_bz;                       /* '<S633>/Sum' */
  real_T Divide_n;                     /* '<S633>/Divide' */
  real_T Saturation_g;                 /* '<S626>/Saturation' */
  real_T Product_m;                    /* '<S630>/Product' */
  real_T Memory_k;                     /* '<S630>/Memory' */
  real_T Sum_ls;                       /* '<S630>/Sum' */
  real_T Product1_k;                   /* '<S630>/Product1' */
  real_T Sum1_b;                       /* '<S630>/Sum1' */
  real_T WeightedSampleTime_ap;        /* '<S634>/Weighted Sample Time' */
  real_T Divide1_n;                    /* '<S634>/Divide1' */
  real_T Sum_nv;                       /* '<S634>/Sum' */
  real_T Divide_m;                     /* '<S634>/Divide' */
  real_T Saturation1_n;                /* '<S626>/Saturation1' */
  real_T Product_d;                    /* '<S631>/Product' */
  real_T Memory_ky;                    /* '<S631>/Memory' */
  real_T Sum_fn;                       /* '<S631>/Sum' */
  real_T Product1_i;                   /* '<S631>/Product1' */
  real_T Sum1_bz;                      /* '<S631>/Sum1' */
  real_T Sum_g;                        /* '<S626>/Sum' */
  real_T PlausAbs;                     /* '<S626>/Abs1' */
  real_T Switch_p;                     /* '<S626>/Switch' */
  real_T Gas_01;                       /* '<S528>/Saturation 0-1' */
  real_T Switch_l;                     /* '<S576>/Switch' */
  real_T Fcn2;                         /* '<S576>/Fcn2' */
  real_T Saturation_e;                 /* '<S576>/Saturation' */
  real_T MultiportSwitch;              /* '<S576>/Multiport Switch' */
  real_T Switch_e;                     /* '<S566>/Switch' */
  real_T Product_ec;                   /* '<S526>/Product' */
  real_T Gravity;                      /* '<S586>/Gravity' */
  real_T Override;                     /* '<S586>/Override' */
  real_T Sum_c;                        /* '<S530>/Sum' */
  real_T vomegar;                      /* '<S530>/v = omega*r' */
  real_T mskmh;                        /* '<S530>/m//s -> km//h' */
  real_T kmhms;                        /* '<S568>/kmh-ms' */
  real_T Switch_pe;                    /* '<S586>/Switch' */
  real_T Abs;                          /* '<S586>/Abs' */
  real_T Divide_d;                     /* '<S586>/Divide' */
  real_T SFunction1_o1_ln;             /* '<S283>/S-Function1' */
  real_T SFunction1_o2_az;             /* '<S283>/S-Function1' */
  real_T SFunction1_o3_fx;             /* '<S283>/S-Function1' */
  real_T SFunction1_o4_a1;             /* '<S283>/S-Function1' */
  real_T SFunction1_o5_f1;             /* '<S283>/S-Function1' */
  real_T Bitdegs;                      /* '<S80>/Bit-->deg//s' */
  real_T Yaw_Z;                        /* '<S80>/Sum' */
  real_T degrad;                       /* '<S568>/deg-rad' */
  real_T Abs2;                         /* '<S586>/Abs2' */
  real_T Subtract;                     /* '<S586>/Subtract' */
  real_T Gain_j;                       /* '<S586>/Gain' */
  real_T LookupTable;                  /* '<S586>/Lookup Table' */
  real_T Product_lf;                   /* '<S586>/Product' */
  real_T Torque_AC_OLD_RL;             /* '<S586>/Gain1' */
  real_T LenkwinkelRadeinschlagwinkel; /* '<S568>/Lenkwinkel-->Radeinschlagwinkel' */
  real_T degrad1;                      /* '<S568>/deg-rad1' */
  real_T Product_i;                    /* '<S587>/Product' */
  real_T sqr2;                         /* '<S587>/sqr2' */
  real_T Divide2;                      /* '<S587>/Divide2' */
  real_T Divide1_l;                    /* '<S587>/Divide1' */
  real_T Sum_n5;                       /* '<S587>/Sum' */
  real_T Product1_b;                   /* '<S587>/Product1' */
  real_T Divide_e;                     /* '<S587>/Divide' */
  real_T Gravity2;                     /* '<S568>/Gravity2' */
  real_T emGM;                         /* '<S582>/em*GM' */
  real_T emGMX;                        /* '<S582>/em*GM*X²' */
  real_T ModelReference4;              /* '<S584>/ModelReference4' */
  real_T ModelReference2;              /* '<S584>/ModelReference2' */
  real_T ModelReference4_n;            /* '<S583>/ModelReference4' */
  real_T ModelReference2_e;            /* '<S583>/ModelReference2' */
  real_T Derivative_e;                 /* '<S583>/Derivative' */
  real_T ModelReference1;              /* '<S583>/ModelReference1' */
  real_T RateTransition1;              /* '<S591>/Rate Transition1' */
  real_T Saturation_o;                 /* '<S585>/Saturation' */
  real_T Gainlinks;                    /* '<S588>/Gain links' */
  real_T Saturation1_p;                /* '<S585>/Saturation1' */
  real_T Switch_b;                     /* '<S568>/Switch' */
  real_T Torque_RL;                    /* '<S526>/Gain2' */
  real_T Saturation_h;                 /* '<S526>/Saturation' */
  real_T Add_i;                        /* '<S526>/Add' */
  real_T Saturation1_h;                /* '<S526>/Saturation1' */
  real_T Gain1_o;                      /* '<S530>/Gain1' */
  real_T WheelslipCalulationRight;     /* '<S530>/Wheelslip Calulation Right' */
  real_T Saturation1_hx;               /* '<S530>/Saturation1' */
  real_T Relay_o;                      /* '<S579>/Relay' */
  real_T Derivative_o;                 /* '<S579>/Derivative' */
  real_T Add_n;                        /* '<S579>/Add' */
  real_T Delay_c;                      /* '<S579>/Delay' */
  real_T Fcn_h;                        /* '<S579>/Fcn' */
  real_T Switch_g;                     /* '<S579>/Switch' */
  real_T Fcn2_k;                       /* '<S579>/Fcn2' */
  real_T Saturation_c;                 /* '<S579>/Saturation' */
  real_T MultiportSwitch_c;            /* '<S579>/Multiport Switch' */
  real_T Switch_d;                     /* '<S567>/Switch' */
  real_T Product1_be;                  /* '<S526>/Product1' */
  real_T Gravity_o;                    /* '<S601>/Gravity' */
  real_T Override_i;                   /* '<S601>/Override' */
  real_T kmhms_e;                      /* '<S569>/kmh-ms' */
  real_T Switch_h4;                    /* '<S601>/Switch' */
  real_T Abs_o;                        /* '<S601>/Abs' */
  real_T Divide_k;                     /* '<S601>/Divide' */
  real_T degrad_f;                     /* '<S569>/deg-rad' */
  real_T Abs2_g;                       /* '<S601>/Abs2' */
  real_T Subtract_d;                   /* '<S601>/Subtract' */
  real_T Gain_jv;                      /* '<S601>/Gain' */
  real_T LookupTable_c;                /* '<S601>/Lookup Table' */
  real_T Product_f;                    /* '<S601>/Product' */
  real_T Torque_AC_OLD_RL_d;           /* '<S601>/Gain1' */
  real_T LenkwinkelRadeinschlagwinkel_d;/* '<S569>/Lenkwinkel-->Radeinschlagwinkel' */
  real_T degrad1_a;                    /* '<S569>/deg-rad1' */
  real_T Product_mj;                   /* '<S602>/Product' */
  real_T sqr2_j;                       /* '<S602>/sqr2' */
  real_T Divide2_k;                    /* '<S602>/Divide2' */
  real_T Divide1_da;                   /* '<S602>/Divide1' */
  real_T Sum_a;                        /* '<S602>/Sum' */
  real_T Product1_gm;                  /* '<S602>/Product1' */
  real_T Divide_cc;                    /* '<S602>/Divide' */
  real_T Gravity2_p;                   /* '<S569>/Gravity2' */
  real_T emGM_c;                       /* '<S597>/em*GM' */
  real_T emGMX_i;                      /* '<S597>/em*GM*X²' */
  real_T ModelReference4_e;            /* '<S599>/ModelReference4' */
  real_T ModelReference2_c;            /* '<S599>/ModelReference2' */
  real_T ModelReference4_o;            /* '<S598>/ModelReference4' */
  real_T ModelReference2_f;            /* '<S598>/ModelReference2' */
  real_T Derivative_h;                 /* '<S598>/Derivative' */
  real_T ModelReference1_o;            /* '<S598>/ModelReference1' */
  real_T RateTransition1_f;            /* '<S606>/Rate Transition1' */
  real_T Saturation_pz;                /* '<S600>/Saturation' */
  real_T Gainrechts;                   /* '<S603>/Gain rechts' */
  real_T Saturation1_f;                /* '<S600>/Saturation1' */
  real_T Switch_d4;                    /* '<S569>/Switch' */
  real_T Gain4_i;                      /* '<S526>/Gain4' */
  real_T Saturation2_a;                /* '<S526>/Saturation2' */
  real_T Add1;                         /* '<S526>/Add1' */
  real_T Saturation3;                  /* '<S526>/Saturation3' */
  real_T SFunction1_o1_cv;             /* '<S489>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S489>/S-Function1' */
  real_T SFunction1_o3_h1j;            /* '<S489>/S-Function1' */
  real_T SFunction1_o4_j3;             /* '<S489>/S-Function1' */
  real_T HVCurrent;                    /* '<S84>/0,1 A//bit' */
  real_T HV_Power_Watt;                /* '<S532>/Product' */
  real_T u80;                          /* '<S563>/0-80' */
  real_T HV_energy_con_Ws;             /* '<S532>/Discrete-Time Integrator1' */
  real_T WsWh;                         /* '<S532>/Ws->Wh' */
  real_T DiscreteTimeIntegrator;       /* '<S653>/Discrete-Time Integrator' */
  real_T Tagesmeter_fluechtig_s_m;     /* '<S653>/s_m' */
  real_T Derating_Battery_active;      /* '<S571>/Derating_Battery_active' */
  real_T Map_Reichweite_Derating_Rev1; /* '<S571>/Map_Reichweite_Derating_Rev1' */
  real_T MinMax_g;                     /* '<S563>/MinMax' */
  real_T u1;                           /* '<S563>/0-1' */
  real_T Product_lr;                   /* '<S563>/Product' */
  real_T kWW;                          /* '<S565>/kW-W' */
  real_T halbeGesamtleistungproMotor;  /* '<S565>/halbe Gesamtleistung pro Motor' */
  real_T Drehzahl_RL_rads;             /* '<S530>/rpm-rad//s' */
  real_T radsRPM;                      /* '<S565>/rad//s -> RPM' */
  real_T Sum2;                         /* '<S565>/Sum2' */
  real_T RPM1s;                        /* '<S565>/RPM-1//s' */
  real_T Drehzahl_RR_rads;             /* '<S530>/rpm-rad//s1' */
  real_T radsRPM1;                     /* '<S565>/rad//s -> RPM1' */
  real_T Sum3;                         /* '<S565>/Sum3' */
  real_T RPM1s1;                       /* '<S565>/RPM-1//s1' */
  real_T Switch_a[2];                  /* '<S565>/Switch' */
  real_T Uk1_m;                        /* '<S614>/Delay Input1' */
  real_T Uk1_mx;                       /* '<S612>/Delay Input1' */
  real_T Switch1_a;                    /* '<S570>/Switch1' */
  real_T WeightedSampleTime_c;         /* '<S622>/Weighted Sample Time' */
  real_T Divide1_nz;                   /* '<S622>/Divide1' */
  real_T Sum_c3;                       /* '<S622>/Sum' */
  real_T Divide_o;                     /* '<S622>/Divide' */
  real_T Product_mn;                   /* '<S617>/Product' */
  real_T Memory_b;                     /* '<S617>/Memory' */
  real_T Sum_e;                        /* '<S617>/Sum' */
  real_T Product1_j;                   /* '<S617>/Product1' */
  real_T Sum1_ia;                      /* '<S617>/Sum1' */
  real_T Product2_e;                   /* '<S617>/Product2' */
  real_T DataTypeConversion_b;         /* '<S616>/Data Type Conversion' */
  real_T Uk1_j;                        /* '<S615>/Delay Input1' */
  real_T Uk1_d;                        /* '<S613>/Delay Input1' */
  real_T Switch2;                      /* '<S570>/Switch2' */
  real_T WeightedSampleTime_hx;        /* '<S621>/Weighted Sample Time' */
  real_T Divide1_dd;                   /* '<S621>/Divide1' */
  real_T Sum_i;                        /* '<S621>/Sum' */
  real_T Divide_ny;                    /* '<S621>/Divide' */
  real_T Product_fw;                   /* '<S616>/Product' */
  real_T Memory_h;                     /* '<S616>/Memory' */
  real_T Sum_gc;                       /* '<S616>/Sum' */
  real_T Product1_o;                   /* '<S616>/Product1' */
  real_T Sum1_l;                       /* '<S616>/Sum1' */
  real_T Product2_f;                   /* '<S616>/Product2' */
  real_T Switch_o[2];                  /* '<S620>/Switch' */
  real_T Switch2_f[2];                 /* '<S620>/Switch2' */
  real_T Switch_dv[2];                 /* '<S531>/Switch' */
  real_T Gain_d;                       /* '<S50>/Gain' */
  real_T Gain_mj;                      /* '<S51>/Gain' */
  real_T RateTransition[2];            /* '<S10>/Rate Transition' */
  real_T Gain1_o3;                     /* '<S54>/Gain1' */
  real_T Divide1_j;                    /* '<S54>/Divide1' */
  real_T Gain2_l;                      /* '<S54>/Gain2' */
  real_T Divide2_c;                    /* '<S54>/Divide2' */
  real_T RateTransition1_j[2];         /* '<S10>/Rate Transition1' */
  real_T RateTransition_e;             /* '<S11>/Rate Transition' */
  real_T DataTypeConversion1_n;        /* '<S11>/Data Type Conversion1' */
  real_T DataTypeConversion3_m;        /* '<S11>/Data Type Conversion3' */
  real_T SFunction1_o1_bj;             /* '<S266>/S-Function1' */
  real_T SFunction1_o2_jo;             /* '<S266>/S-Function1' */
  real_T SFunction1_o3_o2;             /* '<S266>/S-Function1' */
  real_T SFunction1_o4_llh;            /* '<S266>/S-Function1' */
  real_T SFunction1_o5_l4;             /* '<S266>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S266>/S-Function1' */
  real_T PulseGenerator_p;             /* '<S527>/Pulse Generator' */
  real_T LV_Undervoltage;              /* '<S527>/Switch' */
  real_T DataTypeConversion2_o;        /* '<S11>/Data Type Conversion2' */
  real_T Uk1_n5;                       /* '<S72>/Delay Input1' */
  real_T Uk1_pv;                       /* '<S73>/Delay Input1' */
  real_T Uk1_o;                        /* '<S74>/Delay Input1' */
  real_T Uk1_g;                        /* '<S75>/Delay Input1' */
  real_T SFunction1_o1_jt;             /* '<S183>/S-Function1' */
  real_T SFunction1_o2_ld;             /* '<S183>/S-Function1' */
  real_T SFunction1_o3_bh;             /* '<S183>/S-Function1' */
  real_T SFunction1_o4_if;             /* '<S183>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S183>/S-Function1' */
  real_T SFunction1_o6_gp;             /* '<S183>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S183>/S-Function1' */
  real_T Gain_c;                       /* '<S87>/Gain' */
  real_T SFunction1_o1_ff;             /* '<S184>/S-Function1' */
  real_T SFunction1_o2_je;             /* '<S184>/S-Function1' */
  real_T SFunction1_o3_hv;             /* '<S184>/S-Function1' */
  real_T SFunction1_o4_ac;             /* '<S184>/S-Function1' */
  real_T SFunction1_o5_lz;             /* '<S184>/S-Function1' */
  real_T SFunction1_o6_km;             /* '<S184>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S184>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S185>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S185>/S-Function1' */
  real_T SFunction1_o3_aj;             /* '<S185>/S-Function1' */
  real_T SFunction1_o4_lw;             /* '<S185>/S-Function1' */
  real_T SFunction1_o5_fc;             /* '<S185>/S-Function1' */
  real_T SFunction1_o6_p0;             /* '<S185>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S185>/S-Function1' */
  real_T SFunction1_o1_mg;             /* '<S192>/S-Function1' */
  real_T SFunction1_o2_l2;             /* '<S192>/S-Function1' */
  real_T SFunction1_o3_gq;             /* '<S192>/S-Function1' */
  real_T SFunction1_o4_dl;             /* '<S192>/S-Function1' */
  real_T SFunction1_o5_fb;             /* '<S192>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S192>/S-Function1' */
  real_T SFunction1_o7_hc;             /* '<S192>/S-Function1' */
  real_T SFunction1_o1_if;             /* '<S193>/S-Function1' */
  real_T SFunction1_o2_aa;             /* '<S193>/S-Function1' */
  real_T SFunction1_o3_ey;             /* '<S193>/S-Function1' */
  real_T SFunction1_o4_hbx;            /* '<S193>/S-Function1' */
  real_T SFunction1_o5_e5;             /* '<S193>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S193>/S-Function1' */
  real_T SFunction1_o7_f1;             /* '<S193>/S-Function1' */
  real_T SFunction1_o1_kq;             /* '<S194>/S-Function1' */
  real_T SFunction1_o2_o5;             /* '<S194>/S-Function1' */
  real_T SFunction1_o3_nw;             /* '<S194>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S194>/S-Function1' */
  real_T SFunction1_o5_na;             /* '<S194>/S-Function1' */
  real_T SFunction1_o6_av;             /* '<S194>/S-Function1' */
  real_T SFunction1_o7_mh;             /* '<S194>/S-Function1' */
  real_T SFunction1_o1_e2;             /* '<S203>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S203>/S-Function1' */
  real_T SFunction1_o3_d2;             /* '<S203>/S-Function1' */
  real_T SFunction1_o4_jt;             /* '<S203>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S203>/S-Function1' */
  real_T SFunction1_o6_ns;             /* '<S203>/S-Function1' */
  real_T SFunction1_o7_nj;             /* '<S203>/S-Function1' */
  real_T SFunction1_o1_me;             /* '<S204>/S-Function1' */
  real_T SFunction1_o2_ih;             /* '<S204>/S-Function1' */
  real_T SFunction1_o3_jy;             /* '<S204>/S-Function1' */
  real_T SFunction1_o4_b4;             /* '<S204>/S-Function1' */
  real_T SFunction1_o5_ne;             /* '<S204>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S204>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S204>/S-Function1' */
  real_T SFunction1_o1_gl;             /* '<S205>/S-Function1' */
  real_T SFunction1_o2_jm;             /* '<S205>/S-Function1' */
  real_T SFunction1_o3_lw;             /* '<S205>/S-Function1' */
  real_T SFunction1_o4_f3;             /* '<S205>/S-Function1' */
  real_T SFunction1_o5_g0;             /* '<S205>/S-Function1' */
  real_T SFunction1_o6_an;             /* '<S205>/S-Function1' */
  real_T SFunction1_o7_ps;             /* '<S205>/S-Function1' */
  real_T SFunction1_o1_or;             /* '<S212>/S-Function1' */
  real_T SFunction1_o2_fz;             /* '<S212>/S-Function1' */
  real_T SFunction1_o3_ew;             /* '<S212>/S-Function1' */
  real_T SFunction1_o4_ay;             /* '<S212>/S-Function1' */
  real_T SFunction1_o5_gm;             /* '<S212>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S212>/S-Function1' */
  real_T SFunction1_o7_gc;             /* '<S212>/S-Function1' */
  real_T SFunction1_o1_dm;             /* '<S213>/S-Function1' */
  real_T SFunction1_o2_ot;             /* '<S213>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S213>/S-Function1' */
  real_T SFunction1_o4_cu;             /* '<S213>/S-Function1' */
  real_T SFunction1_o5_j1;             /* '<S213>/S-Function1' */
  real_T SFunction1_o6_j1;             /* '<S213>/S-Function1' */
  real_T SFunction1_o7_kr;             /* '<S213>/S-Function1' */
  real_T SFunction1_o1_nn;             /* '<S214>/S-Function1' */
  real_T SFunction1_o2_jt;             /* '<S214>/S-Function1' */
  real_T SFunction1_o3_bs;             /* '<S214>/S-Function1' */
  real_T SFunction1_o4_bc;             /* '<S214>/S-Function1' */
  real_T SFunction1_o5_nr;             /* '<S214>/S-Function1' */
  real_T SFunction1_o6_c5;             /* '<S214>/S-Function1' */
  real_T SFunction1_o7_bu;             /* '<S214>/S-Function1' */
  real_T SFunction1_o1_hc;             /* '<S223>/S-Function1' */
  real_T SFunction1_o2_mo;             /* '<S223>/S-Function1' */
  real_T SFunction1_o3_oj;             /* '<S223>/S-Function1' */
  real_T SFunction1_o4_im;             /* '<S223>/S-Function1' */
  real_T SFunction1_o5_ms;             /* '<S223>/S-Function1' */
  real_T SFunction1_o6_p2;             /* '<S223>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S223>/S-Function1' */
  real_T SFunction1_o1_pb;             /* '<S224>/S-Function1' */
  real_T SFunction1_o2_l4;             /* '<S224>/S-Function1' */
  real_T SFunction1_o3_ny;             /* '<S224>/S-Function1' */
  real_T SFunction1_o4_dm;             /* '<S224>/S-Function1' */
  real_T SFunction1_o5_es;             /* '<S224>/S-Function1' */
  real_T SFunction1_o6_ez;             /* '<S224>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S224>/S-Function1' */
  real_T SFunction1_o1_ee;             /* '<S225>/S-Function1' */
  real_T SFunction1_o2_pu;             /* '<S225>/S-Function1' */
  real_T SFunction1_o3_da;             /* '<S225>/S-Function1' */
  real_T SFunction1_o4_fs;             /* '<S225>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S225>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S225>/S-Function1' */
  real_T SFunction1_o7_j5;             /* '<S225>/S-Function1' */
  real_T SFunction1_o1_mv;             /* '<S232>/S-Function1' */
  real_T SFunction1_o2_ka;             /* '<S232>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S232>/S-Function1' */
  real_T SFunction1_o4_ix;             /* '<S232>/S-Function1' */
  real_T SFunction1_o5_ex;             /* '<S232>/S-Function1' */
  real_T SFunction1_o6_dj;             /* '<S232>/S-Function1' */
  real_T SFunction1_o7_g3;             /* '<S232>/S-Function1' */
  real_T SFunction1_o1_mez;            /* '<S233>/S-Function1' */
  real_T SFunction1_o2_ee;             /* '<S233>/S-Function1' */
  real_T SFunction1_o3_kx;             /* '<S233>/S-Function1' */
  real_T SFunction1_o4_jw;             /* '<S233>/S-Function1' */
  real_T SFunction1_o5_esb;            /* '<S233>/S-Function1' */
  real_T SFunction1_o6_p4;             /* '<S233>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S233>/S-Function1' */
  real_T SFunction1_o1_e5;             /* '<S234>/S-Function1' */
  real_T SFunction1_o2_hp;             /* '<S234>/S-Function1' */
  real_T SFunction1_o3_mt;             /* '<S234>/S-Function1' */
  real_T SFunction1_o4_nd;             /* '<S234>/S-Function1' */
  real_T SFunction1_o5_mxp;            /* '<S234>/S-Function1' */
  real_T SFunction1_o6_kz;             /* '<S234>/S-Function1' */
  real_T SFunction1_o7_me;             /* '<S234>/S-Function1' */
  real_T SFunction1_o1_o2;             /* '<S243>/S-Function1' */
  real_T SFunction1_o2_kp;             /* '<S243>/S-Function1' */
  real_T SFunction1_o3_k4;             /* '<S243>/S-Function1' */
  real_T SFunction1_o4_fz;             /* '<S243>/S-Function1' */
  real_T SFunction1_o5_pq;             /* '<S243>/S-Function1' */
  real_T SFunction1_o6_jj;             /* '<S243>/S-Function1' */
  real_T SFunction1_o7_jz;             /* '<S243>/S-Function1' */
  real_T SFunction1_o1_od;             /* '<S244>/S-Function1' */
  real_T SFunction1_o2_ls;             /* '<S244>/S-Function1' */
  real_T SFunction1_o3_fw;             /* '<S244>/S-Function1' */
  real_T SFunction1_o4_fm;             /* '<S244>/S-Function1' */
  real_T SFunction1_o5_nm;             /* '<S244>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S244>/S-Function1' */
  real_T SFunction1_o7_ha;             /* '<S244>/S-Function1' */
  real_T SFunction1_o1_in;             /* '<S245>/S-Function1' */
  real_T SFunction1_o2_pg;             /* '<S245>/S-Function1' */
  real_T SFunction1_o3_mg;             /* '<S245>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S245>/S-Function1' */
  real_T SFunction1_o5_em;             /* '<S245>/S-Function1' */
  real_T SFunction1_o6_bd;             /* '<S245>/S-Function1' */
  real_T SFunction1_o7_oi;             /* '<S245>/S-Function1' */
  real_T SFunction1_o1_o5;             /* '<S252>/S-Function1' */
  real_T SFunction1_o2_bz;             /* '<S252>/S-Function1' */
  real_T SFunction1_o3_cr;             /* '<S252>/S-Function1' */
  real_T SFunction1_o4_gl;             /* '<S252>/S-Function1' */
  real_T SFunction1_o5_al;             /* '<S252>/S-Function1' */
  real_T SFunction1_o6_oh;             /* '<S252>/S-Function1' */
  real_T SFunction1_o7_ng;             /* '<S252>/S-Function1' */
  real_T SFunction1_o1_jr;             /* '<S253>/S-Function1' */
  real_T SFunction1_o2_bv;             /* '<S253>/S-Function1' */
  real_T SFunction1_o3_jb;             /* '<S253>/S-Function1' */
  real_T SFunction1_o4_ar;             /* '<S253>/S-Function1' */
  real_T SFunction1_o5_j3;             /* '<S253>/S-Function1' */
  real_T SFunction1_o6_mp;             /* '<S253>/S-Function1' */
  real_T SFunction1_o7_cd;             /* '<S253>/S-Function1' */
  real_T SFunction1_o1_ll;             /* '<S254>/S-Function1' */
  real_T SFunction1_o2_pc;             /* '<S254>/S-Function1' */
  real_T SFunction1_o3_kh;             /* '<S254>/S-Function1' */
  real_T SFunction1_o4_id;             /* '<S254>/S-Function1' */
  real_T SFunction1_o5_of;             /* '<S254>/S-Function1' */
  real_T SFunction1_o6_et;             /* '<S254>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S254>/S-Function1' */
  real_T SFunction1_o1_oe;             /* '<S172>/S-Function1' */
  real_T SFunction1_o2_mv;             /* '<S172>/S-Function1' */
  real_T SFunction1_o3_h1i;            /* '<S172>/S-Function1' */
  real_T SFunction1_o4_jb;             /* '<S172>/S-Function1' */
  real_T SFunction1_o5_jj;             /* '<S172>/S-Function1' */
  real_T SFunction1_o6_c0;             /* '<S172>/S-Function1' */
  real_T SFunction1_o7_j0;             /* '<S172>/S-Function1' */
  real_T SFunction1_o1_gy;             /* '<S173>/S-Function1' */
  real_T SFunction1_o2_i2;             /* '<S173>/S-Function1' */
  real_T SFunction1_o3_mv;             /* '<S173>/S-Function1' */
  real_T SFunction1_o4_oc;             /* '<S173>/S-Function1' */
  real_T SFunction1_o5_as;             /* '<S173>/S-Function1' */
  real_T SFunction1_o6_a1;             /* '<S173>/S-Function1' */
  real_T SFunction1_o7_ou;             /* '<S173>/S-Function1' */
  real_T SFunction1_o1_gm;             /* '<S174>/S-Function1' */
  real_T SFunction1_o2_ng;             /* '<S174>/S-Function1' */
  real_T SFunction1_o3_e2;             /* '<S174>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S174>/S-Function1' */
  real_T SFunction1_o5_cl;             /* '<S174>/S-Function1' */
  real_T SFunction1_o6_od;             /* '<S174>/S-Function1' */
  real_T SFunction1_o7_cz;             /* '<S174>/S-Function1' */
  real_T SFunction1_o1_m2;             /* '<S163>/S-Function1' */
  real_T SFunction1_o2_d3;             /* '<S163>/S-Function1' */
  real_T SFunction1_o3_ep;             /* '<S163>/S-Function1' */
  real_T SFunction1_o4_n4;             /* '<S163>/S-Function1' */
  real_T SFunction1_o5_jd;             /* '<S163>/S-Function1' */
  real_T SFunction1_o6_lx;             /* '<S163>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S163>/S-Function1' */
  real_T SFunction1_o1_lh;             /* '<S164>/S-Function1' */
  real_T SFunction1_o2_l31;            /* '<S164>/S-Function1' */
  real_T SFunction1_o3_crb;            /* '<S164>/S-Function1' */
  real_T SFunction1_o4_kd;             /* '<S164>/S-Function1' */
  real_T SFunction1_o5_nrg;            /* '<S164>/S-Function1' */
  real_T SFunction1_o6_dr;             /* '<S164>/S-Function1' */
  real_T SFunction1_o7_p3;             /* '<S164>/S-Function1' */
  real_T SFunction1_o1_oo;             /* '<S165>/S-Function1' */
  real_T SFunction1_o2_os;             /* '<S165>/S-Function1' */
  real_T SFunction1_o3_pr;             /* '<S165>/S-Function1' */
  real_T SFunction1_o4_fo;             /* '<S165>/S-Function1' */
  real_T SFunction1_o5_od;             /* '<S165>/S-Function1' */
  real_T SFunction1_o6_gf;             /* '<S165>/S-Function1' */
  real_T SFunction1_o7_go;             /* '<S165>/S-Function1' */
  real_T DataTypeConversion_f;         /* '<S77>/Data Type Conversion' */
  real_T SFunction1_o1_fn;             /* '<S89>/S-Function1' */
  real_T SFunction1_o2_m0;             /* '<S89>/S-Function1' */
  real_T SFunction1_o3_dp;             /* '<S89>/S-Function1' */
  real_T SFunction1_o4_od;             /* '<S89>/S-Function1' */
  real_T Precharge_Relay_Status;       /* '<S77>/Gain' */
  real_T SFunction1_o1_ga;             /* '<S262>/S-Function1' */
  real_T SFunction1_o2_hx;             /* '<S262>/S-Function1' */
  real_T SFunction1_o3_mj;             /* '<S262>/S-Function1' */
  real_T SFunction1_o4_nb;             /* '<S262>/S-Function1' */
  real_T CANIOTemp;                    /* '<S78>/1//10 °C' */
  real_T Safetycircuit_State;          /* '<S78>/Gain3' */
  real_T Inv_1_State;                  /* '<S78>/Gain5' */
  real_T Inv_2_State;                  /* '<S78>/Gain6' */
  real_T SFunction1_o1_o5k;            /* '<S269>/S-Function1' */
  real_T SFunction1_o2_jk;             /* '<S269>/S-Function1' */
  real_T SFunction1_o3_mgh;            /* '<S269>/S-Function1' */
  real_T SFunction1_o4_jo;             /* '<S269>/S-Function1' */
  real_T SFunction1_o5_dj;             /* '<S269>/S-Function1' */
  real_T SFunction1_o6_ka;             /* '<S269>/S-Function1' */
  real_T SFunction1_o7_cr;             /* '<S269>/S-Function1' */
  real_T SFunction1_o1_hd;             /* '<S272>/S-Function1' */
  real_T SFunction1_o2_bx;             /* '<S272>/S-Function1' */
  real_T SFunction1_o3_du;             /* '<S272>/S-Function1' */
  real_T SFunction1_o4_jj;             /* '<S272>/S-Function1' */
  real_T SFunction1_o5_bw;             /* '<S272>/S-Function1' */
  real_T SFunction1_o6_n5;             /* '<S272>/S-Function1' */
  real_T SFunction1_o7_kc;             /* '<S272>/S-Function1' */
  real_T SFunction1_o1_aex;            /* '<S273>/S-Function1' */
  real_T SFunction1_o2_pw;             /* '<S273>/S-Function1' */
  real_T SFunction1_o3_k3;             /* '<S273>/S-Function1' */
  real_T SFunction1_o4_p5;             /* '<S273>/S-Function1' */
  real_T SFunction1_o5_ps;             /* '<S273>/S-Function1' */
  real_T SFunction1_o6_gs;             /* '<S273>/S-Function1' */
  real_T SFunction1_o7_e4;             /* '<S273>/S-Function1' */
  real_T SFunction1_o1_aj;             /* '<S274>/S-Function1' */
  real_T SFunction1_o2_o5w;            /* '<S274>/S-Function1' */
  real_T SFunction1_o3_nc;             /* '<S274>/S-Function1' */
  real_T SFunction1_o4_oe;             /* '<S274>/S-Function1' */
  real_T SFunction1_o5_ci;             /* '<S274>/S-Function1' */
  real_T SFunction1_o6_pum;            /* '<S274>/S-Function1' */
  real_T SFunction1_o7_db;             /* '<S274>/S-Function1' */
  real_T Gain_g;                       /* '<S281>/Gain' */
  real_T Yaw_Z_Error;                  /* '<S80>/Errorfield' */
  real_T Gain10;                       /* '<S286>/Gain10' */
  real_T Gain_mjr;                     /* '<S289>/Gain' */
  real_T Gain11;                       /* '<S286>/Gain11' */
  real_T Gain_ct;                      /* '<S290>/Gain' */
  real_T Gain9;                        /* '<S286>/Gain9' */
  real_T Gain_b;                       /* '<S291>/Gain' */
  real_T Gain1_b;                      /* '<S286>/Gain1' */
  real_T Gain_bv;                      /* '<S292>/Gain' */
  real_T Gain2_p;                      /* '<S286>/Gain2' */
  real_T Gain3_a;                      /* '<S286>/Gain3' */
  real_T Gain5_f;                      /* '<S286>/Gain5' */
  real_T Gain6_k;                      /* '<S286>/Gain6' */
  real_T Gain7;                        /* '<S286>/Gain7' */
  real_T Gain8;                        /* '<S286>/Gain8' */
  real_T Gain9_n;                      /* '<S287>/Gain9' */
  real_T Gain_b5;                      /* '<S369>/Gain' */
  real_T Gain1_k;                      /* '<S287>/Gain1' */
  real_T Gain10_p;                     /* '<S287>/Gain10' */
  real_T Gain11_g;                     /* '<S287>/Gain11' */
  real_T Gain2_m;                      /* '<S287>/Gain2' */
  real_T Gain3_f;                      /* '<S287>/Gain3' */
  real_T Gain5_p;                      /* '<S287>/Gain5' */
  real_T Gain6_k0;                     /* '<S287>/Gain6' */
  real_T Gain7_j;                      /* '<S287>/Gain7' */
  real_T Gain8_l;                      /* '<S287>/Gain8' */
  real_T InvCorrection;                /* '<S287>/InvCorrection' */
  real_T Gain_o;                       /* '<S442>/Gain' */
  real_T WeightedSampleTime_gx;        /* '<S467>/Weighted Sample Time' */
  real_T Divide1_pa;                   /* '<S467>/Divide1' */
  real_T Sum_d;                        /* '<S467>/Sum' */
  real_T Divide_ir;                    /* '<S467>/Divide' */
  real_T SFunction1;                   /* '<S454>/S-Function1' */
  real_T UrefADC;                      /* '<S460>/UrefADC' */
  real_T SFunction1_f;                 /* '<S455>/S-Function1' */
  real_T UBatt;                        /* '<S447>/Spannungsteiler' */
  real_T ADCR;                         /* '<S460>/ADC-R' */
  real_T Divide1_f;                    /* '<S462>/Divide1' */
  real_T MathFunction;                 /* '<S462>/Math Function' */
  real_T Divide2_l;                    /* '<S462>/Divide2' */
  real_T Product_b2;                   /* '<S462>/Product' */
  real_T Sum_jf;                       /* '<S462>/Sum' */
  real_T Divide_do;                    /* '<S462>/Divide' */
  real_T Sum1_k;                       /* '<S462>/Sum1' */
  real_T Product_g;                    /* '<S466>/Product' */
  real_T Memory_c;                     /* '<S466>/Memory' */
  real_T Sum_ju;                       /* '<S466>/Sum' */
  real_T Product1_e;                   /* '<S466>/Product1' */
  real_T Sum1_m;                       /* '<S466>/Sum1' */
  real_T Gain_ph;                      /* '<S458>/Gain' */
  real_T Gain_gd;                      /* '<S459>/Gain' */
  real_T SFunction1_b;                 /* '<S450>/S-Function1' */
  real_T SFunction1_m;                 /* '<S451>/S-Function1' */
  real_T SFunction1_d;                 /* '<S452>/S-Function1' */
  real_T SFunction1_i;                 /* '<S453>/S-Function1' */
  real_T SFunction1_l;                 /* '<S456>/S-Function1' */
  real_T SFunction1_g;                 /* '<S457>/S-Function1' */
  real_T WeightedSampleTime_l;         /* '<S469>/Weighted Sample Time' */
  real_T Divide1_lg;                   /* '<S469>/Divide1' */
  real_T Sum_ha;                       /* '<S469>/Sum' */
  real_T Divide_b;                     /* '<S469>/Divide' */
  real_T UrefADC_c;                    /* '<S461>/UrefADC' */
  real_T ADCR_h;                       /* '<S461>/ADC-R' */
  real_T Divide1_b;                    /* '<S463>/Divide1' */
  real_T MathFunction_a;               /* '<S463>/Math Function' */
  real_T Divide2_g;                    /* '<S463>/Divide2' */
  real_T Product_fv;                   /* '<S463>/Product' */
  real_T Sum_en;                       /* '<S463>/Sum' */
  real_T Divide_o5;                    /* '<S463>/Divide' */
  real_T Sum1_p;                       /* '<S463>/Sum1' */
  real_T Product_j;                    /* '<S468>/Product' */
  real_T Memory_n;                     /* '<S468>/Memory' */
  real_T Sum_n2;                       /* '<S468>/Sum' */
  real_T Product1_nj;                  /* '<S468>/Product1' */
  real_T Sum1_b2;                      /* '<S468>/Sum1' */
  real_T Gain_pj[8];                   /* '<S447>/Gain' */
  real_T SFunction1_o2_mm;             /* '<S470>/S-Function1' */
  real_T SFunction1_o3_dc;             /* '<S470>/S-Function1' */
  real_T SFunction1_o4_mo;             /* '<S470>/S-Function1' */
  real_T Crashsensor;                  /* '<S85>/Gain1' */
  real_T Gain_k;                       /* '<S501>/Gain' */
  real_T Gain_cq;                      /* '<S502>/Gain' */
  real_T SFunction1_o1_le;             /* '<S504>/S-Function1' */
  real_T SFunction1_o2_i4;             /* '<S504>/S-Function1' */
  real_T SFunction1_o3_jl;             /* '<S504>/S-Function1' */
  real_T SFunction1_o4_lg;             /* '<S504>/S-Function1' */
  real_T Gain_h;                       /* '<S503>/Gain' */
  real_T Gain_n;                       /* '<S542>/Gain' */
  real_T Gain_a;                       /* '<S543>/Gain' */
  real_T Gain_e;                       /* '<S564>/Gain' */
  real_T ModelReference;               /* '<S582>/ModelReference' */
  real_T Sum_kx;                       /* '<S582>/Sum' */
  real_T Product1_b2;                  /* '<S582>/Product1' */
  real_T Product3;                     /* '<S582>/Product3' */
  real_T Gain_jh;                      /* '<S583>/Gain' */
  real_T ModelReference_l;             /* '<S583>/ModelReference' */
  real_T Sum2_e;                       /* '<S583>/Sum2' */
  real_T Gain1_c;                      /* '<S583>/Gain1' */
  real_T ModelReference3;              /* '<S583>/ModelReference3' */
  real_T Product2_h;                   /* '<S583>/Product2' */
  real_T Product3_c;                   /* '<S583>/Product3' */
  real_T Gain_bh;                      /* '<S584>/Gain' */
  real_T ModelReference_n;             /* '<S584>/ModelReference' */
  real_T Sum2_j;                       /* '<S584>/Sum2' */
  real_T Gain1_d;                      /* '<S584>/Gain1' */
  real_T ModelReference1_f;            /* '<S584>/ModelReference1' */
  real_T ModelReference3_b;            /* '<S584>/ModelReference3' */
  real_T Product2_a;                   /* '<S584>/Product2' */
  real_T Product3_i;                   /* '<S584>/Product3' */
  real_T degrad_d;                     /* '<S589>/deg-rad' */
  real_T Product_h;                    /* '<S589>/Product' */
  real_T sqr;                          /* '<S589>/sqr' */
  real_T Product1_ov;                  /* '<S589>/Product1' */
  real_T Sum_hs;                       /* '<S589>/Sum' */
  real_T Divide_a;                     /* '<S589>/Divide' */
  real_T raddeg;                       /* '<S589>/rad-deg' */
  real_T Gain_mv;                      /* '<S590>/Gain' */
  real_T Sum1_e;                       /* '<S589>/Sum1' */
  real_T TappedDelay[5];               /* '<S589>/Tapped Delay' */
  real_T degrad1_i[5];                 /* '<S589>/deg-rad1' */
  real_T Sum_fz;                       /* '<S591>/Sum' */
  real_T RateTransition_h;             /* '<S591>/Rate Transition' */
  real_T K_OpenLoop1;                  /* '<S591>/K_OpenLoop1' */
  real_T uJzrdynbri;                   /* '<S591>/2*Jz*rdyn//(br*i)' */
  real_T K_ClosedLoop;                 /* '<S591>/K_ClosedLoop' */
  real_T ProportionalGain_p;           /* '<S594>/Proportional Gain' */
  real_T Integrator_e;                 /* '<S594>/Integrator' */
  real_T DerivativeGain;               /* '<S594>/Derivative Gain' */
  real_T Filter;                       /* '<S594>/Filter' */
  real_T SumD;                         /* '<S594>/SumD' */
  real_T FilterCoefficient;            /* '<S594>/Filter Coefficient' */
  real_T Sum_lv;                       /* '<S594>/Sum' */
  real_T ManualSwitch;                 /* '<S591>/Manual Switch' */
  real_T IntegralGain;                 /* '<S594>/Integral Gain' */
  real_T Sum1_is;                      /* '<S591>/Sum1' */
  real_T DerivativeGain_b;             /* '<S595>/Derivative Gain' */
  real_T Filter_p;                     /* '<S595>/Filter' */
  real_T SumD_a;                       /* '<S595>/SumD' */
  real_T FilterCoefficient_e;          /* '<S595>/Filter Coefficient' */
  real_T IntegralGain_e;               /* '<S595>/Integral Gain' */
  real_T Integrator_ef;                /* '<S595>/Integrator' */
  real_T ProportionalGain_c;           /* '<S595>/Proportional Gain' */
  real_T Sum_d2;                       /* '<S595>/Sum' */
  real_T DerivativeGain_bg;            /* '<S596>/Derivative Gain' */
  real_T Filter_n;                     /* '<S596>/Filter' */
  real_T SumD_j;                       /* '<S596>/SumD' */
  real_T FilterCoefficient_n;          /* '<S596>/Filter Coefficient' */
  real_T IntegralGain_b;               /* '<S596>/Integral Gain' */
  real_T Integrator_m;                 /* '<S596>/Integrator' */
  real_T ProportionalGain_pc;          /* '<S596>/Proportional Gain' */
  real_T Sum_b5;                       /* '<S596>/Sum' */
  real_T ModelReference_h;             /* '<S597>/ModelReference' */
  real_T Sum_ht;                       /* '<S597>/Sum' */
  real_T Product1_l;                   /* '<S597>/Product1' */
  real_T Product3_p;                   /* '<S597>/Product3' */
  real_T Gain_l;                       /* '<S598>/Gain' */
  real_T ModelReference_e;             /* '<S598>/ModelReference' */
  real_T Sum2_a;                       /* '<S598>/Sum2' */
  real_T Gain1_n;                      /* '<S598>/Gain1' */
  real_T ModelReference3_j;            /* '<S598>/ModelReference3' */
  real_T Product2_p;                   /* '<S598>/Product2' */
  real_T Product3_d;                   /* '<S598>/Product3' */
  real_T Gain_i;                       /* '<S599>/Gain' */
  real_T ModelReference_d;             /* '<S599>/ModelReference' */
  real_T Sum2_am;                      /* '<S599>/Sum2' */
  real_T Gain1_cd;                     /* '<S599>/Gain1' */
  real_T ModelReference1_i;            /* '<S599>/ModelReference1' */
  real_T ModelReference3_k;            /* '<S599>/ModelReference3' */
  real_T Product2_es;                  /* '<S599>/Product2' */
  real_T Product3_p0;                  /* '<S599>/Product3' */
  real_T degrad_p;                     /* '<S604>/deg-rad' */
  real_T Product_ix;                   /* '<S604>/Product' */
  real_T sqr_m;                        /* '<S604>/sqr' */
  real_T Product1_eb;                  /* '<S604>/Product1' */
  real_T Sum_l5;                       /* '<S604>/Sum' */
  real_T Divide_ci;                    /* '<S604>/Divide' */
  real_T raddeg_g;                     /* '<S604>/rad-deg' */
  real_T Gain_mn;                      /* '<S605>/Gain' */
  real_T Sum1_mx;                      /* '<S604>/Sum1' */
  real_T TappedDelay_f[5];             /* '<S604>/Tapped Delay' */
  real_T degrad1_g[5];                 /* '<S604>/deg-rad1' */
  real_T Sum_cp;                       /* '<S606>/Sum' */
  real_T RateTransition_b;             /* '<S606>/Rate Transition' */
  real_T K_OpenLoop1_g;                /* '<S606>/K_OpenLoop1' */
  real_T uJzrdynbri_n;                 /* '<S606>/2*Jz*rdyn//(br*i)' */
  real_T K_ClosedLoop_k;               /* '<S606>/K_ClosedLoop' */
  real_T ProportionalGain_d;           /* '<S609>/Proportional Gain' */
  real_T Integrator_f;                 /* '<S609>/Integrator' */
  real_T DerivativeGain_j;             /* '<S609>/Derivative Gain' */
  real_T Filter_d;                     /* '<S609>/Filter' */
  real_T SumD_c;                       /* '<S609>/SumD' */
  real_T FilterCoefficient_ey;         /* '<S609>/Filter Coefficient' */
  real_T Sum_hi;                       /* '<S609>/Sum' */
  real_T ManualSwitch_m;               /* '<S606>/Manual Switch' */
  real_T IntegralGain_h;               /* '<S609>/Integral Gain' */
  real_T Sum1_h;                       /* '<S606>/Sum1' */
  real_T DerivativeGain_l;             /* '<S610>/Derivative Gain' */
  real_T Filter_c;                     /* '<S610>/Filter' */
  real_T SumD_d;                       /* '<S610>/SumD' */
  real_T FilterCoefficient_d;          /* '<S610>/Filter Coefficient' */
  real_T IntegralGain_c;               /* '<S610>/Integral Gain' */
  real_T Integrator_o;                 /* '<S610>/Integrator' */
  real_T ProportionalGain_g;           /* '<S610>/Proportional Gain' */
  real_T Sum_m;                        /* '<S610>/Sum' */
  real_T DerivativeGain_c;             /* '<S611>/Derivative Gain' */
  real_T Filter_m;                     /* '<S611>/Filter' */
  real_T SumD_m;                       /* '<S611>/SumD' */
  real_T FilterCoefficient_h;          /* '<S611>/Filter Coefficient' */
  real_T IntegralGain_g;               /* '<S611>/Integral Gain' */
  real_T Integrator_a;                 /* '<S611>/Integrator' */
  real_T ProportionalGain_j;           /* '<S611>/Proportional Gain' */
  real_T Sum_pc;                       /* '<S611>/Sum' */
  real_T Gain_f;                       /* '<S625>/Gain' */
  real_T Switch_pt;                    /* '<S623>/Switch' */
  real_T Switch_k;                     /* '<S624>/Switch' */
  real_T Min;                          /* '<S626>/Min' */
  real_T Gain_hz;                      /* '<S646>/Gain' */
  real_T Gain_de;                      /* '<S647>/Gain' */
  real_T Gain_on;                      /* '<S648>/Gain' */
  real_T Gain_dx;                      /* '<S649>/Gain' */
  real_T Gain_aa;                      /* '<S650>/Gain' */
  real_T Gain_gt;                      /* '<S651>/Gain' */
  real_T Gain_af;                      /* '<S652>/Gain' */
  real_T Gain_aj;                      /* '<S661>/Gain' */
  real_T grer0;                        /* '<S530>/größer 0' */
  real_T Gain_di;                      /* '<S663>/Gain' */
  real_T Gain_lq;                      /* '<S664>/Gain' */
  real_T CurrentConsumption;           /* '<S532>/Discrete-Time Integrator' */
  real_T Gain_p2;                      /* '<S665>/Gain' */
  real_T Gain_om;                      /* '<S666>/Gain' */
  real_T Gain_kf;                      /* '<S667>/Gain' */
  real_T IntegralGain_j;               /* '<S679>/Integral Gain' */
  real_T Gain_nr;                      /* '<S698>/Gain' */
  real_T Gain_at;                      /* '<S699>/Gain' */
  real_T O_U1_RegID;                   /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U2_RegID;                   /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U2_Value32;                 /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U1_Value32;                 /* '<S535>/Fahrzeugsteuerung' */
  real_T O_ErrorNr;                    /* '<S535>/Fahrzeugsteuerung' */
  real_T O_fBlink_Start;               /* '<S535>/Fahrzeugsteuerung' */
  real_T O_State;                      /* '<S535>/Fahrzeugsteuerung' */
  real_T O_InverterFRE;                /* '<S535>/Fahrzeugsteuerung' */
  real_T O_TorqueEnable;               /* '<S535>/Fahrzeugsteuerung' */
  real_T O_InvertersTXActive;          /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U1Init_Reg;                 /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U1Init_Zeit;                /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U2Init_Reg;                 /* '<S535>/Fahrzeugsteuerung' */
  real_T O_U2Init_Zeit;                /* '<S535>/Fahrzeugsteuerung' */
  real_T O_SoundPlayChannel;           /* '<S535>/Fahrzeugsteuerung' */
  real_T O_SpeakerEnable;              /* '<S535>/Fahrzeugsteuerung' */
  real_T O_coolingEnable;              /* '<S535>/Fahrzeugsteuerung' */
  real_T Switch_c;                     /* '<S678>/Switch' */
  real_T uDLookupTable;                /* '<S533>/1-D Lookup Table' */
  real_T Switch_j;                     /* '<S533>/Switch' */
  real_T Sum1_lx;                      /* '<S626>/Sum1' */
  real_T ThrottleMean;                 /* '<S626>/Divide' */
  real_T Gain_hg;                      /* '<S626>/Gain' */
  real_T DeltaMNm;                     /* '<S569>/Multiport Switch TV' */
  real_T Product2_c;                   /* '<S597>/Product2' */
  real_T Product_c;                    /* '<S597>/Product' */
  real_T Sum1_mk;                      /* '<S597>/Sum1' */
  real_T Product4;                     /* '<S599>/Product4' */
  real_T Product_n;                    /* '<S599>/Product' */
  real_T Sum1_it;                      /* '<S599>/Sum1' */
  real_T Product1_ky;                  /* '<S598>/Product1' */
  real_T Product4_o;                   /* '<S598>/Product4' */
  real_T Product_bp;                   /* '<S598>/Product' */
  real_T Sum1_hk;                      /* '<S598>/Sum1' */
  real_T Sum3_o;                       /* '<S598>/Sum3' */
  real_T DeltaMNm_f;                   /* '<S568>/Multiport Switch TV' */
  real_T Product2_er;                  /* '<S582>/Product2' */
  real_T Product_k;                    /* '<S582>/Product' */
  real_T Sum1_ml;                      /* '<S582>/Sum1' */
  real_T Product4_g;                   /* '<S584>/Product4' */
  real_T Product_ba;                   /* '<S584>/Product' */
  real_T Sum1_p5;                      /* '<S584>/Sum1' */
  real_T Product1_gs;                  /* '<S583>/Product1' */
  real_T Product4_n;                   /* '<S583>/Product4' */
  real_T Product_ey;                   /* '<S583>/Product' */
  real_T Sum1_j;                       /* '<S583>/Sum1' */
  real_T Sum3_a;                       /* '<S583>/Sum3' */
  real_T Fcn1;                         /* '<S579>/Fcn1' */
  real_T Saturation1_e;                /* '<S579>/Saturation1' */
  real_T Fcn1_b;                       /* '<S576>/Fcn1' */
  real_T Saturation1_b;                /* '<S576>/Saturation1' */
  real_T Sum5;                         /* '<S565>/Sum5' */
  real_T Divide_f;                     /* '<S565>/Divide' */
  real_T PMotL;                        /* '<S565>/Product' */
  real_T ML;                           /* '<S565>/Divide1' */
  real_T PMotR;                        /* '<S565>/Sum1' */
  real_T MR;                           /* '<S565>/Divide2' */
  real_T Reststrecke_km;               /* '<S571>/Add1' */
  real_T kWhWh;                        /* '<S571>/kWh->Wh' */
  real_T verbleibendeEnergie_Wh;       /* '<S571>/Add' */
  real_T Restreichweite_km;            /* '<S571>/Divide1' */
  real_T deltaStrecke_km;              /* '<S571>/Add2' */
  real_T Saturation_m;                 /* '<S571>/Saturation' */
  real_T LED_BAR_2;                    /* '<S562>/Multiport Switch' */
  real_T Switch_i;                     /* '<S562>/Switch' */
  real_T Product_lz;                   /* '<S562>/Product' */
  real_T Divide2_h;                    /* '<S376>/Divide2' */
  real_T DrehmomentStrangstrominNmArms;/* '<S376>/Drehmoment // Strangstrom in Nm//Arms' */
  real_T WeightedSampleTime_le;        /* '<S381>/Weighted Sample Time' */
  real_T Divide1_k;                    /* '<S381>/Divide1' */
  real_T Sum_gl;                       /* '<S381>/Sum' */
  real_T Divide_el;                    /* '<S381>/Divide' */
  real_T DataTypeConversion1_g;        /* '<S368>/Data Type Conversion1' */
  real_T Product_n0;                   /* '<S379>/Product' */
  real_T Memory_c2;                    /* '<S379>/Memory' */
  real_T Sum_ih;                       /* '<S379>/Sum' */
  real_T Product1_jw;                  /* '<S379>/Product1' */
  real_T Sum1_l3;                      /* '<S379>/Sum1' */
  real_T Product_a;                    /* '<S368>/Product' */
  real_T up60i;                        /* '<S368>/2*p // 60i' */
  real_T Gain_mi;                      /* '<S372>/Gain' */
  real_T Subtract_p;                   /* '<S372>/Subtract' */
  real_T Divide_dg;                    /* '<S372>/Divide' */
  real_T Tempcorrespondingresistance;  /* '<S372>/Temp. corresponding  resistance' */
  real_T Divide2_b;                    /* '<S299>/Divide2' */
  real_T DrehmomentStrangstrominNmArms_d;/* '<S299>/Drehmoment // Strangstrom in Nm//Arms' */
  real_T WeightedSampleTime_n;         /* '<S304>/Weighted Sample Time' */
  real_T Divide1_pv;                   /* '<S304>/Divide1' */
  real_T Sum_d1;                       /* '<S304>/Sum' */
  real_T Divide_az;                    /* '<S304>/Divide' */
  real_T DataTypeConversion1_d;        /* '<S288>/Data Type Conversion1' */
  real_T Product_kp;                   /* '<S302>/Product' */
  real_T Memory_j;                     /* '<S302>/Memory' */
  real_T Sum_h4;                       /* '<S302>/Sum' */
  real_T Product1_gg;                  /* '<S302>/Product1' */
  real_T Sum1_ps;                      /* '<S302>/Sum1' */
  real_T Product_p;                    /* '<S288>/Product' */
  real_T upi60;                        /* '<S288>/2*pi // 60' */
  real_T Gain_dh;                      /* '<S295>/Gain' */
  real_T RawWert2_Motor1;              /* '<S295>/Subtract' */
  real_T Divide_aa;                    /* '<S295>/Divide' */
  real_T Tempcorrespondingresistance_i;/* '<S295>/Temp. corresponding  resistance' */
  real_T SFunction1_o1_la;             /* '<S71>/S-Function1' */
  real_T SFunction1_o2_bxo;            /* '<S71>/S-Function1' */
  real_T SFunction1_o3_os;             /* '<S71>/S-Function1' */
  real_T DataTypeConversion_l;         /* '<S56>/Data Type Conversion' */
  real_T DataTypeConversion1_a;        /* '<S56>/Data Type Conversion1' */
  real_T DataTypeConversion2_j;        /* '<S56>/Data Type Conversion2' */
  real_T SFunction1_o1_h2;             /* '<S67>/S-Function1' */
  real_T SFunction1_o2_ai;             /* '<S67>/S-Function1' */
  real_T SFunction1_o3_cl;             /* '<S67>/S-Function1' */
  real_T SFunction1_o4_p2;             /* '<S67>/S-Function1' */
  real_T RateTransition_p;             /* '<S69>/Rate Transition' */
  real_T RateTransition1_i;            /* '<S69>/Rate Transition1' */
  real_T DataTypeConversion3_n;        /* '<S56>/Data Type Conversion3' */
  real_T DataTypeConversion4_k;        /* '<S56>/Data Type Conversion4' */
  real_T DataTypeConversion5_g;        /* '<S56>/Data Type Conversion5' */
  real_T SFunction1_o1_pw;             /* '<S68>/S-Function1' */
  real_T SFunction1_o2_pk;             /* '<S68>/S-Function1' */
  real_T SFunction1_o3_ii;             /* '<S68>/S-Function1' */
  real_T SFunction1_o4_acu;            /* '<S68>/S-Function1' */
  real_T RateTransition_a;             /* '<S70>/Rate Transition' */
  real_T RateTransition1_m;            /* '<S70>/Rate Transition1' */
  real_T SFunction1_o1_e5n;            /* '<S62>/S-Function1' */
  real_T SFunction1_o2_bs;             /* '<S62>/S-Function1' */
  real_T SFunction1_o3_nwq;            /* '<S62>/S-Function1' */
  real_T SFunction1_o1_cc;             /* '<S63>/S-Function1' */
  real_T SFunction1_o2_ae;             /* '<S63>/S-Function1' */
  real_T SFunction1_o3_ej;             /* '<S63>/S-Function1' */
  real_T SFunction1_o1_pp;             /* '<S45>/S-Function1' */
  real_T SFunction1_o2_jc;             /* '<S45>/S-Function1' */
  real_T SFunction1_o3_li;             /* '<S45>/S-Function1' */
  real_T SFunction1_o1_jp;             /* '<S40>/S-Function1' */
  real_T SFunction1_o2_kd;             /* '<S40>/S-Function1' */
  real_T SFunction1_o3_hk;             /* '<S40>/S-Function1' */
  real_T SFunction1_o1_ji;             /* '<S39>/S-Function1' */
  real_T SFunction1_o2_kt;             /* '<S39>/S-Function1' */
  real_T SFunction1_o3_kw;             /* '<S39>/S-Function1' */
  real_T SFunction1_o1_l0;             /* '<S23>/S-Function1' */
  real_T SFunction1_o2_ph;             /* '<S23>/S-Function1' */
  real_T SFunction1_o3_n2;             /* '<S23>/S-Function1' */
  real_T SFunction1_o1_dg;             /* '<S22>/S-Function1' */
  real_T SFunction1_o2_gu;             /* '<S22>/S-Function1' */
  real_T SFunction1_o3_dd;             /* '<S22>/S-Function1' */
  real_T SFunction1_o1_e1;             /* '<S21>/S-Function1' */
  real_T SFunction1_o2_azh;            /* '<S21>/S-Function1' */
  real_T SFunction1_o3_gw;             /* '<S21>/S-Function1' */
  real_T SFunction1_o1_p1;             /* '<S20>/S-Function1' */
  real_T SFunction1_o2_ey;             /* '<S20>/S-Function1' */
  real_T SFunction1_o3_duc;            /* '<S20>/S-Function1' */
  real_T SFunction1_o1_nc;             /* '<S19>/S-Function1' */
  real_T SFunction1_o2_os0;            /* '<S19>/S-Function1' */
  real_T SFunction1_o3_bp;             /* '<S19>/S-Function1' */
  real_T SFunction1_o1_do;             /* '<S18>/S-Function1' */
  real_T SFunction1_o2_kf;             /* '<S18>/S-Function1' */
  real_T SFunction1_o3_iil;            /* '<S18>/S-Function1' */
  real_T SFunction1_o1_ku;             /* '<S17>/S-Function1' */
  real_T SFunction1_o2_ga;             /* '<S17>/S-Function1' */
  real_T SFunction1_o3_ak;             /* '<S17>/S-Function1' */
  real_T SFunction1_o1_n4;             /* '<S13>/S-Function1' */
  real_T SFunction1_o2_kh;             /* '<S13>/S-Function1' */
  real_T SFunction1_o3_ic;             /* '<S13>/S-Function1' */
  uint64m_T Gain_o2;                   /* '<S638>/Gain' */
  uint64m_T Gain_gp;                   /* '<S573>/Gain' */
  real32_T DataTypeConversion_hf;      /* '<S50>/Data Type Conversion' */
  real32_T DataTypeConversion_k;       /* '<S51>/Data Type Conversion' */
  real32_T DataTypeConversion_a;       /* '<S87>/Data Type Conversion' */
  real32_T DataTypeConversion_kf;      /* '<S281>/Data Type Conversion' */
  real32_T DataTypeConversion_n;       /* '<S289>/Data Type Conversion' */
  real32_T DataTypeConversion_hn;      /* '<S290>/Data Type Conversion' */
  real32_T DataTypeConversion_c;       /* '<S291>/Data Type Conversion' */
  real32_T DataTypeConversion_bv;      /* '<S292>/Data Type Conversion' */
  real32_T DataTypeConversion_i;       /* '<S369>/Data Type Conversion' */
  real32_T DataTypeConversion_m;       /* '<S442>/Data Type Conversion' */
  real32_T DataTypeConversion_mm;      /* '<S458>/Data Type Conversion' */
  real32_T DataTypeConversion_aj;      /* '<S459>/Data Type Conversion' */
  real32_T DataTypeConversion_c4;      /* '<S501>/Data Type Conversion' */
  real32_T DataTypeConversion_e;       /* '<S502>/Data Type Conversion' */
  real32_T DataTypeConversion_h24;     /* '<S503>/Data Type Conversion' */
  real32_T DataTypeConversion_me;      /* '<S542>/Data Type Conversion' */
  real32_T DataTypeConversion_nb;      /* '<S543>/Data Type Conversion' */
  real32_T DataTypeConversion_lx;      /* '<S544>/Data Type Conversion' */
  real32_T DataTypeConversion_bt;      /* '<S564>/Data Type Conversion' */
  real32_T DataTypeConversion_a5;      /* '<S573>/Data Type Conversion' */
  real32_T DataTypeConversion_hnd;     /* '<S590>/Data Type Conversion' */
  real32_T DataTypeConversion_p;       /* '<S605>/Data Type Conversion' */
  real32_T DataTypeConversion_id;      /* '<S625>/Data Type Conversion' */
  real32_T DataTypeConversion_cy;      /* '<S638>/Data Type Conversion' */
  real32_T DataTypeConversion_g;       /* '<S646>/Data Type Conversion' */
  real32_T DataTypeConversion_o;       /* '<S647>/Data Type Conversion' */
  real32_T DataTypeConversion_kg;      /* '<S648>/Data Type Conversion' */
  real32_T DataTypeConversion_aa;      /* '<S649>/Data Type Conversion' */
  real32_T DataTypeConversion_co;      /* '<S650>/Data Type Conversion' */
  real32_T DataTypeConversion_bz;      /* '<S651>/Data Type Conversion' */
  real32_T DataTypeConversion_kb;      /* '<S652>/Data Type Conversion' */
  real32_T DataTypeConversion_f3;      /* '<S661>/Data Type Conversion' */
  real32_T DataTypeConversion_hi;      /* '<S663>/Data Type Conversion' */
  real32_T DataTypeConversion_bi;      /* '<S664>/Data Type Conversion' */
  real32_T DataTypeConversion_g3;      /* '<S665>/Data Type Conversion' */
  real32_T DataTypeConversion_ni;      /* '<S666>/Data Type Conversion' */
  real32_T DataTypeConversion_j;       /* '<S667>/Data Type Conversion' */
  real32_T DataTypeConversion_bc;      /* '<S698>/Data Type Conversion' */
  real32_T DataTypeConversion_hl;      /* '<S699>/Data Type Conversion' */
  uint32_T SFunction1_o1_eo;           /* '<S470>/S-Function1' */
  uint32_T DataTypeConversion1_l;      /* '<S529>/Data Type Conversion1' */
  uint32_T Uk1_gr;                     /* '<S635>/UD' */
  uint32_T Diff;                       /* '<S635>/Diff' */
  uint32_T SFunction1_k;               /* '<S640>/S-Function1' */
  uint32_T Add_p;                      /* '<S529>/Add' */
  uint32_T SFunction1_o1_dj;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o2_np;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o3_ec;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o4_hu;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o5_ee;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o6_ma;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o7_hy;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o8_d;            /* '<S513>/S-Function1' */
  uint32_T SFunction1_o9_o;            /* '<S513>/S-Function1' */
  uint32_T SFunction1_o10_f;           /* '<S513>/S-Function1' */
  uint32_T SFunction1_o1_eu;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o2_jz;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o3_ko;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o4_kg;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o5_fu;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o6_p1;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o7_bo;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o8_j;            /* '<S515>/S-Function1' */
  uint32_T SFunction1_o9_k;            /* '<S515>/S-Function1' */
  uint32_T SFunction1_o10_d;           /* '<S515>/S-Function1' */
  uint32_T SFunction1_o1_kb;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o2_hk;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o3_a1;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o4_jl;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o5_ob;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o6_mn;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o7_oh;           /* '<S517>/S-Function1' */
  uint32_T SFunction1_o8_a;            /* '<S517>/S-Function1' */
  uint32_T SFunction1_o9_a;            /* '<S517>/S-Function1' */
  uint32_T SFunction1_o10_m;           /* '<S517>/S-Function1' */
  uint32_T DataTypeConversion1_p;      /* '<S373>/Data Type Conversion1' */
  uint32_T uHz;                        /* '<S373>/2Hz' */
  uint32_T Brk;                        /* '<S373>/Brk' */
  uint32_T Cal;                        /* '<S373>/Cal' */
  uint32_T Cal0;                       /* '<S373>/Cal0' */
  uint32_T Ena;                        /* '<S373>/Ena' */
  uint32_T NCR0;                       /* '<S373>/NCR0' */
  uint32_T Rsw;                        /* '<S373>/Rsw' */
  uint32_T Tol;                        /* '<S373>/Tol' */
  uint32_T Rdy;                        /* '<S373>/Rdy' */
  uint32_T SIGNMAG;                    /* '<S373>/SIGNMAG' */
  uint32_T Nclip;                      /* '<S373>/Nclip' */
  uint32_T Nclip_o;                    /* '<S373>/Nclip+' */
  uint32_T Nclip_g;                    /* '<S373>/Nclip-' */
  uint32_T Lim;                        /* '<S373>/Lim+' */
  uint32_T IrdDig;                     /* '<S373>/Ird-Dig' */
  uint32_T Iuserchd;                   /* '<S373>/Iuse-rchd' */
  uint32_T IrdN;                       /* '<S373>/Ird-N' */
  uint32_T Ird_TI;                     /* '<S373>/Ird_TI' */
  uint32_T Ird_TIR;                    /* '<S373>/Ird_TIR' */
  uint32_T IrdTM;                      /* '<S373>/Ird-TM' */
  uint32_T IrdANA;                     /* '<S373>/Ird-ANA' */
  uint32_T Iwcns;                      /* '<S373>/Iwcns' */
  uint32_T RFE_plus;                   /* '<S373>/RFE_plus' */
  uint32_T Lim_m;                      /* '<S373>/Lim-' */
  uint32_T frei;                       /* '<S373>/frei' */
  uint32_T Handrad;                    /* '<S373>/Handrad' */
  uint32_T OK;                         /* '<S373>/OK' */
  uint32_T Icns;                       /* '<S373>/Icns' */
  uint32_T TNlim;                      /* '<S373>/T-Nlim' */
  uint32_T PN;                         /* '<S373>/P-N' */
  uint32_T NI;                         /* '<S373>/N-I' */
  uint32_T N0;                         /* '<S373>/N0' */
  uint32_T DataTypeConversion_ot;      /* '<S296>/Data Type Conversion' */
  uint32_T uHz_c;                      /* '<S296>/2Hz' */
  uint32_T Brk_d;                      /* '<S296>/Brk' */
  uint32_T Cal_b;                      /* '<S296>/Cal' */
  uint32_T Cal0_i;                     /* '<S296>/Cal0' */
  uint32_T Ena_l;                      /* '<S296>/Ena' */
  uint32_T NCR0_i;                     /* '<S296>/NCR0' */
  uint32_T Rsw_o;                      /* '<S296>/Rsw' */
  uint32_T Tol_e;                      /* '<S296>/Tol' */
  uint32_T Rdy_o;                      /* '<S296>/Rdy' */
  uint32_T SIGNMAG_j;                  /* '<S296>/SIGNMAG' */
  uint32_T Nclip_d;                    /* '<S296>/Nclip' */
  uint32_T Nclip_k;                    /* '<S296>/Nclip+' */
  uint32_T Nclip_c;                    /* '<S296>/Nclip-' */
  uint32_T Lim_f;                      /* '<S296>/Lim+' */
  uint32_T IrdDig_m;                   /* '<S296>/Ird-Dig' */
  uint32_T Iuserchd_e;                 /* '<S296>/Iuse-rchd' */
  uint32_T IrdN_g;                     /* '<S296>/Ird-N' */
  uint32_T Ird_TI_h;                   /* '<S296>/Ird_TI' */
  uint32_T Ird_TIR_j;                  /* '<S296>/Ird_TIR' */
  uint32_T IrdTM_a;                    /* '<S296>/Ird-TM' */
  uint32_T IrdANA_d;                   /* '<S296>/Ird-ANA' */
  uint32_T Iwcns_n;                    /* '<S296>/Iwcns' */
  uint32_T RFE_plus_j;                 /* '<S296>/RFE_plus' */
  uint32_T Lim_d;                      /* '<S296>/Lim-' */
  uint32_T frei_k;                     /* '<S296>/frei' */
  uint32_T Handrad_a;                  /* '<S296>/Handrad' */
  uint32_T OK_c;                       /* '<S296>/OK' */
  uint32_T Icns_m;                     /* '<S296>/Icns' */
  uint32_T TNlim_e;                    /* '<S296>/T-Nlim' */
  uint32_T PN_d;                       /* '<S296>/P-N' */
  uint32_T NI_j;                       /* '<S296>/N-I' */
  uint32_T N0_p;                       /* '<S296>/N0' */
  int32_T Gain2_i;                     /* '<S376>/Gain2' */
  int32_T Gain2_ii;                    /* '<S299>/Gain2' */
  uint32_T mkm;                        /* '<S571>/m->km' */
  uint32_T Verbrauch_Whkm;             /* '<S571>/Divide' */
  int16_T O_TS_sound;                  /* '<S535>/Fahrzeugsteuerung' */
  int16_T DataTypeConversion3_b;       /* '<S376>/Data Type Conversion3' */
  int16_T DataTypeConversion_ob;       /* '<S368>/Data Type Conversion' */
  int16_T DataTypeConversion4_a;       /* '<S299>/Data Type Conversion4' */
  int16_T DataTypeConversion_ov;       /* '<S288>/Data Type Conversion' */
  uint16_T DataTypeConversion2_ap;     /* '<S529>/Data Type Conversion2' */
  uint16_T Uk1_d2;                     /* '<S637>/UD' */
  uint16_T Diff_n;                     /* '<S637>/Diff' */
  uint16_T SFunction1_dy;              /* '<S641>/S-Function1' */
  uint16_T TagesenergieMABX_Wh;        /* '<S529>/Switch1' */
  uint16_T DataTypeConversion_h1;      /* '<S529>/Data Type Conversion' */
  uint16_T Uk1_iw;                     /* '<S636>/UD' */
  uint16_T SFunction1_a;               /* '<S639>/S-Function1' */
  uint16_T TagesmeterMABX_m;           /* '<S529>/Switch' */
  uint16_T TmpSignalConversionAtSFunctionI[8];/* '<S535>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFunctio_j[8];/* '<S535>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFuncti_jl[8];/* '<S535>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFuncti_ji[8];/* '<S535>/Fahrzeugsteuerung' */
  uint16_T O_Inverter_TX_Mode;         /* '<S535>/Fahrzeugsteuerung' */
  uint16_T Diff_nj;                    /* '<S636>/Diff' */
  uint16_T Add1_o;                     /* '<S529>/Add1' */
  uint16_T Add2;                       /* '<S529>/Add2' */
  uint8_T Compare;                     /* '<S577>/Compare' */
  uint8_T Compare_k;                   /* '<S580>/Compare' */
  uint8_T O_enableTorqueVectoring;     /* '<S535>/Fahrzeugsteuerung' */
  uint8_T O_enableTractionControl;     /* '<S535>/Fahrzeugsteuerung' */
  uint8_T O_AMSIMDFlash;               /* '<S535>/Fahrzeugsteuerung' */
  uint8_T O_SoundEnable;               /* '<S535>/Fahrzeugsteuerung' */
  boolean_T Compare_k2;                /* '<S674>/Compare' */
  boolean_T FixPtRelationalOperator;   /* '<S12>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded;    /* '<S14>/Delta time limit exceeded' */
  boolean_T Mem1;                      /* '<S14>/Mem1' */
  boolean_T Mem2;                      /* '<S14>/Mem2' */
  boolean_T Mem3;                      /* '<S14>/Mem3' */
  boolean_T Mem4;                      /* '<S14>/Mem4' */
  boolean_T Prevmsgnotsent;            /* '<S14>/Prev. msg.  not sent' */
  boolean_T OR;                        /* '<S14>/OR' */
  boolean_T Warn;                      /* '<S14>/Warn' */
  boolean_T Compare_l;                 /* '<S700>/Compare' */
  boolean_T Uk1_dl;                    /* '<S696>/Delay Input1' */
  boolean_T FixPtRelationalOperator_e; /* '<S696>/FixPt Relational Operator' */
  boolean_T BSPD;                      /* '<S84>/Logical Operator' */
  boolean_T A_BSPD;                    /* '<S523>/DT_BPD' */
  boolean_T A_BRAKE_OVERTRAVEL;        /* '<S523>/DT_BRAKEOVERTRAVEL' */
  boolean_T A_NOT_COCKPIT;             /* '<S523>/DT_NOTCOCKPIT' */
  boolean_T A_NOT_LINKS;               /* '<S523>/DT_NOTLINKS' */
  boolean_T A_NOT_RECHTS;              /* '<S523>/DT_NOTRECHTS' */
  boolean_T A_AMS;                     /* '<S523>/DT_AMS' */
  boolean_T DT_IMD;                    /* '<S523>/DT_IMD' */
  boolean_T A_IMD;                     /* '<S523>/Logical Operator2' */
  boolean_T LogicalOperator;           /* '<S523>/Logical Operator' */
  boolean_T A_HVD;                     /* '<S523>/DT_HVD' */
  boolean_T ORSicherheitskreis;        /* '<S523>/OR Sicherheitskreis' */
  boolean_T SFunction1_bo;             /* '<S480>/S-Function1' */
  boolean_T LogicalOperator4;          /* '<S535>/Logical Operator4' */
  boolean_T Compare_n[2];              /* '<S541>/Compare' */
  boolean_T Bremse_bin;                /* '<S524>/Logical Operator' */
  boolean_T RateTransition_ef;         /* '<S7>/Rate Transition' */
  boolean_T Deltatimelimitexceeded_m;  /* '<S24>/Delta time limit exceeded' */
  boolean_T Mem1_c;                    /* '<S24>/Mem1' */
  boolean_T Mem2_f;                    /* '<S24>/Mem2' */
  boolean_T Mem3_n;                    /* '<S24>/Mem3' */
  boolean_T Mem4_p;                    /* '<S24>/Mem4' */
  boolean_T Prevmsgnotsent_b;          /* '<S24>/Prev. msg.  not sent' */
  boolean_T OR_h;                      /* '<S24>/OR' */
  boolean_T Warn_a;                    /* '<S24>/Warn' */
  boolean_T Deltatimelimitexceeded_j;  /* '<S25>/Delta time limit exceeded' */
  boolean_T Mem1_a;                    /* '<S25>/Mem1' */
  boolean_T Mem2_k;                    /* '<S25>/Mem2' */
  boolean_T Mem3_d;                    /* '<S25>/Mem3' */
  boolean_T Mem4_i;                    /* '<S25>/Mem4' */
  boolean_T Prevmsgnotsent_e;          /* '<S25>/Prev. msg.  not sent' */
  boolean_T OR_n;                      /* '<S25>/OR' */
  boolean_T Warn_k;                    /* '<S25>/Warn' */
  boolean_T Deltatimelimitexceeded_h;  /* '<S26>/Delta time limit exceeded' */
  boolean_T Mem1_o;                    /* '<S26>/Mem1' */
  boolean_T Mem2_c;                    /* '<S26>/Mem2' */
  boolean_T Mem3_a;                    /* '<S26>/Mem3' */
  boolean_T Mem4_m;                    /* '<S26>/Mem4' */
  boolean_T Prevmsgnotsent_l;          /* '<S26>/Prev. msg.  not sent' */
  boolean_T OR_hi;                     /* '<S26>/OR' */
  boolean_T Warn_m;                    /* '<S26>/Warn' */
  boolean_T TmpLatchAtJKFlipFlopInport1;/* '<S690>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2;/* '<S690>/K' */
  boolean_T DataTypeConversion_ma;     /* '<S678>/Data Type Conversion' */
  boolean_T TmpLatchAtJKFlipFlopInport1_p;/* '<S688>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2_m;/* '<S688>/K' */
  boolean_T DataTypeConversion_gx;     /* '<S677>/Data Type Conversion' */
  boolean_T FixPtRelationalOperator_n; /* '<S15>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_a;  /* '<S27>/Delta time limit exceeded' */
  boolean_T Mem1_m;                    /* '<S27>/Mem1' */
  boolean_T Mem2_g;                    /* '<S27>/Mem2' */
  boolean_T Mem3_di;                   /* '<S27>/Mem3' */
  boolean_T Mem4_mb;                   /* '<S27>/Mem4' */
  boolean_T Prevmsgnotsent_g;          /* '<S27>/Prev. msg.  not sent' */
  boolean_T OR_g;                      /* '<S27>/OR' */
  boolean_T Warn_f;                    /* '<S27>/Warn' */
  boolean_T TmpLatchAtJKFlipFlopInport1_j;/* '<S686>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2_k;/* '<S686>/K' */
  boolean_T DataTypeConversion_a1;     /* '<S676>/Data Type Conversion' */
  boolean_T Compare_ko;                /* '<S673>/Compare' */
  boolean_T FixPtRelationalOperator_nr;/* '<S16>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_i;  /* '<S28>/Delta time limit exceeded' */
  boolean_T Mem1_k;                    /* '<S28>/Mem1' */
  boolean_T Mem2_ge;                   /* '<S28>/Mem2' */
  boolean_T Mem3_o;                    /* '<S28>/Mem3' */
  boolean_T Mem4_pj;                   /* '<S28>/Mem4' */
  boolean_T Prevmsgnotsent_n;          /* '<S28>/Prev. msg.  not sent' */
  boolean_T OR_d;                      /* '<S28>/OR' */
  boolean_T Warn_g;                    /* '<S28>/Warn' */
  boolean_T Deltatimelimitexceeded_e;  /* '<S29>/Delta time limit exceeded' */
  boolean_T Mem1_h;                    /* '<S29>/Mem1' */
  boolean_T Mem2_e;                    /* '<S29>/Mem2' */
  boolean_T Mem3_l;                    /* '<S29>/Mem3' */
  boolean_T Mem4_f;                    /* '<S29>/Mem4' */
  boolean_T Prevmsgnotsent_m;          /* '<S29>/Prev. msg.  not sent' */
  boolean_T OR_b;                      /* '<S29>/OR' */
  boolean_T Warn_gl;                   /* '<S29>/Warn' */
  boolean_T Deltatimelimitexceeded_mk; /* '<S30>/Delta time limit exceeded' */
  boolean_T Mem1_ce;                   /* '<S30>/Mem1' */
  boolean_T Mem2_n;                    /* '<S30>/Mem2' */
  boolean_T Mem3_f;                    /* '<S30>/Mem3' */
  boolean_T Mem4_d;                    /* '<S30>/Mem4' */
  boolean_T Prevmsgnotsent_a;          /* '<S30>/Prev. msg.  not sent' */
  boolean_T OR_f;                      /* '<S30>/OR' */
  boolean_T Warn_b;                    /* '<S30>/Warn' */
  boolean_T Deltatimelimitexceeded_h3; /* '<S37>/Delta time limit exceeded' */
  boolean_T Mem1_b;                    /* '<S37>/Mem1' */
  boolean_T Mem2_d;                    /* '<S37>/Mem2' */
  boolean_T Mem3_lm;                   /* '<S37>/Mem3' */
  boolean_T Mem4_o;                    /* '<S37>/Mem4' */
  boolean_T Prevmsgnotsent_d;          /* '<S37>/Prev. msg.  not sent' */
  boolean_T OR_k;                      /* '<S37>/OR' */
  boolean_T Warn_mm;                   /* '<S37>/Warn' */
  boolean_T Deltatimelimitexceeded_d;  /* '<S35>/Delta time limit exceeded' */
  boolean_T Mem1_b2;                   /* '<S35>/Mem1' */
  boolean_T Mem2_gb;                   /* '<S35>/Mem2' */
  boolean_T Mem3_c;                    /* '<S35>/Mem3' */
  boolean_T Mem4_n;                    /* '<S35>/Mem4' */
  boolean_T Prevmsgnotsent_db;         /* '<S35>/Prev. msg.  not sent' */
  boolean_T OR_m;                      /* '<S35>/OR' */
  boolean_T Warn_d;                    /* '<S35>/Warn' */
  boolean_T Deltatimelimitexceeded_g;  /* '<S36>/Delta time limit exceeded' */
  boolean_T Mem1_mr;                   /* '<S36>/Mem1' */
  boolean_T Mem2_ek;                   /* '<S36>/Mem2' */
  boolean_T Mem3_p;                    /* '<S36>/Mem3' */
  boolean_T Mem4_b;                    /* '<S36>/Mem4' */
  boolean_T Prevmsgnotsent_ao;         /* '<S36>/Prev. msg.  not sent' */
  boolean_T OR_p;                      /* '<S36>/OR' */
  boolean_T Warn_fn;                   /* '<S36>/Warn' */
  boolean_T Deltatimelimitexceeded_b;  /* '<S38>/Delta time limit exceeded' */
  boolean_T Mem1_l;                    /* '<S38>/Mem1' */
  boolean_T Mem2_nv;                   /* '<S38>/Mem2' */
  boolean_T Mem3_h;                    /* '<S38>/Mem3' */
  boolean_T Mem4_oq;                   /* '<S38>/Mem4' */
  boolean_T Prevmsgnotsent_nj;         /* '<S38>/Prev. msg.  not sent' */
  boolean_T OR_e;                      /* '<S38>/OR' */
  boolean_T Warn_ge;                   /* '<S38>/Warn' */
  boolean_T FixPtRelationalOperator_l; /* '<S41>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_ba; /* '<S46>/Delta time limit exceeded' */
  boolean_T Mem1_g;                    /* '<S46>/Mem1' */
  boolean_T Mem2_nk;                   /* '<S46>/Mem2' */
  boolean_T Mem3_lk;                   /* '<S46>/Mem3' */
  boolean_T Mem4_bq;                   /* '<S46>/Mem4' */
  boolean_T Prevmsgnotsent_nz;         /* '<S46>/Prev. msg.  not sent' */
  boolean_T OR_fz;                     /* '<S46>/OR' */
  boolean_T Warn_c;                    /* '<S46>/Warn' */
  boolean_T FixPtRelationalOperator_i; /* '<S42>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_c;  /* '<S47>/Delta time limit exceeded' */
  boolean_T Mem1_j;                    /* '<S47>/Mem1' */
  boolean_T Mem2_d3;                   /* '<S47>/Mem2' */
  boolean_T Mem3_fd;                   /* '<S47>/Mem3' */
  boolean_T Mem4_nw;                   /* '<S47>/Mem4' */
  boolean_T Prevmsgnotsent_g0;         /* '<S47>/Prev. msg.  not sent' */
  boolean_T OR_j;                      /* '<S47>/OR' */
  boolean_T Warn_h;                    /* '<S47>/Warn' */
  boolean_T Deltatimelimitexceeded_iq; /* '<S48>/Delta time limit exceeded' */
  boolean_T Mem1_p;                    /* '<S48>/Mem1' */
  boolean_T Mem2_ed;                   /* '<S48>/Mem2' */
  boolean_T Mem3_ox;                   /* '<S48>/Mem3' */
  boolean_T Mem4_j;                    /* '<S48>/Mem4' */
  boolean_T Prevmsgnotsent_l1;         /* '<S48>/Prev. msg.  not sent' */
  boolean_T OR_l;                      /* '<S48>/OR' */
  boolean_T Warn_bj;                   /* '<S48>/Warn' */
  boolean_T FixPtRelationalOperator_k[8];/* '<S43>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_c2; /* '<S49>/Delta time limit exceeded' */
  boolean_T Mem1_f;                    /* '<S49>/Mem1' */
  boolean_T Mem2_fu;                   /* '<S49>/Mem2' */
  boolean_T Mem3_g;                    /* '<S49>/Mem3' */
  boolean_T Mem4_bf;                   /* '<S49>/Mem4' */
  boolean_T Prevmsgnotsent_dd;         /* '<S49>/Prev. msg.  not sent' */
  boolean_T OR_k5;                     /* '<S49>/OR' */
  boolean_T Warn_c5;                   /* '<S49>/Warn' */
  boolean_T Compare_kz;                /* '<S551>/Compare' */
  boolean_T Compare_p;                 /* '<S552>/Compare' */
  boolean_T LogicalOperator_g;         /* '<S546>/Logical Operator' */
  boolean_T Compare_pz;                /* '<S553>/Compare' */
  boolean_T Compare_p4;                /* '<S554>/Compare' */
  boolean_T LogicalOperator1;          /* '<S546>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S555>/Compare' */
  boolean_T Compare_c;                 /* '<S556>/Compare' */
  boolean_T LogicalOperator3;          /* '<S546>/Logical Operator3' */
  boolean_T Compare_m;                 /* '<S558>/Compare' */
  boolean_T Memory_ee;                 /* '<S560>/Memory' */
  boolean_T Logic[2];                  /* '<S560>/Logic' */
  boolean_T LogicalOperator2;          /* '<S546>/Logical Operator2' */
  boolean_T Compare_nq;                /* '<S557>/Compare' */
  boolean_T BRInplausible;             /* '<S523>/DT_BRAKEINPLAUSIBLE' */
  boolean_T GasTimeout;                /* '<S523>/DT_GASTIMEOUT' */
  boolean_T BremseTimeout;             /* '<S523>/DT_BRAKETIMEOUT' */
  boolean_T Gas1Status;                /* '<S523>/DT_GAS1STATUS' */
  boolean_T Gas2Status;                /* '<S523>/DT_GAS2STATUS' */
  boolean_T BremseVorneStatus;         /* '<S523>/DT_BRFRONTSTATUS' */
  boolean_T BremseHintenStatus;        /* '<S523>/DT_BRREARSTATUS' */
  boolean_T DrehzahlTimeout;           /* '<S523>/DT_DrehzahlTIMEOUT' */
  boolean_T LenkwinkelTimeout;         /* '<S523>/DT_LENKWINKELTIMEOUT' */
  boolean_T Compare_dh;                /* '<S537>/Compare' */
  boolean_T LogicalOperator1_m;        /* '<S523>/Logical Operator1' */
  boolean_T LogicalOperator_gt;        /* '<S617>/Logical Operator' */
  boolean_T DataTypeConversion_bo;     /* '<S576>/Data Type Conversion' */
  boolean_T Compare_k3;                /* '<S632>/Compare' */
  boolean_T RelationalOperator;        /* '<S576>/Relational Operator' */
  boolean_T Memory_ba;                 /* '<S578>/Memory' */
  boolean_T Logic_j[2];                /* '<S578>/Logic' */
  boolean_T SafetyTVoff;               /* '<S568>/Safety TV off' */
  boolean_T LogicalOperator1_a;        /* '<S568>/Logical Operator1' */
  boolean_T DataTypeConversion_jv;     /* '<S579>/Data Type Conversion' */
  boolean_T RelationalOperator_h;      /* '<S579>/Relational Operator' */
  boolean_T Memory_et;                 /* '<S581>/Memory' */
  boolean_T Logic_e[2];                /* '<S581>/Logic' */
  boolean_T SafetyTVoff_k;             /* '<S569>/Safety TV off' */
  boolean_T LogicalOperator1_mr;       /* '<S569>/Logical Operator1' */
  boolean_T Start_Derating_0_1;        /* '<S571>/Relational Operator' */
  boolean_T Compare_a;                 /* '<S572>/Compare' */
  boolean_T LogicalOperator_a;         /* '<S571>/Logical Operator' */
  boolean_T RelationalOperator_g;      /* '<S565>/Relational Operator' */
  boolean_T FixPtRelationalOperator_m; /* '<S614>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_j; /* '<S612>/FixPt Relational Operator' */
  boolean_T Memory_f;                  /* '<S618>/Memory' */
  boolean_T Logic_i[2];                /* '<S618>/Logic' */
  boolean_T LogicalOperator_e;         /* '<S616>/Logical Operator' */
  boolean_T FixPtRelationalOperator_a; /* '<S615>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_aw;/* '<S613>/FixPt Relational Operator' */
  boolean_T Memory_fq;                 /* '<S619>/Memory' */
  boolean_T Logic_b[2];                /* '<S619>/Logic' */
  boolean_T LowerRelop1[2];            /* '<S620>/LowerRelop1' */
  boolean_T UpperRelop[2];             /* '<S620>/UpperRelop' */
  boolean_T or;                        /* '<S1>/or' */
  boolean_T FixPtRelationalOperator_jo;/* '<S72>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_iq;/* '<S73>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S74>/FixPt Relational Operator' */
  boolean_T LogicalOperator_et;        /* '<S11>/Logical Operator' */
  boolean_T FixPtRelationalOperator_au;/* '<S75>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_em; /* '<S76>/Delta time limit exceeded' */
  boolean_T Mem1_h4;                   /* '<S76>/Mem1' */
  boolean_T Mem2_m;                    /* '<S76>/Mem2' */
  boolean_T Mem3_ch;                   /* '<S76>/Mem3' */
  boolean_T Mem4_m2;                   /* '<S76>/Mem4' */
  boolean_T Prevmsgnotsent_p;          /* '<S76>/Prev. msg.  not sent' */
  boolean_T OR_np;                     /* '<S76>/OR' */
  boolean_T Warn_g2;                   /* '<S76>/Warn' */
  boolean_T LogicalOperator_m;         /* '<S181>/Logical Operator' */
  boolean_T LogicalOperator_gp;        /* '<S182>/Logical Operator' */
  boolean_T LogicalOperator_n;         /* '<S95>/Logical Operator' */
  boolean_T LogicalOperator_o;         /* '<S201>/Logical Operator' */
  boolean_T LogicalOperator_l;         /* '<S202>/Logical Operator' */
  boolean_T LogicalOperator_nz;        /* '<S96>/Logical Operator' */
  boolean_T LogicalOperator_i;         /* '<S221>/Logical Operator' */
  boolean_T LogicalOperator_of;        /* '<S222>/Logical Operator' */
  boolean_T LogicalOperator_c;         /* '<S97>/Logical Operator' */
  boolean_T LogicalOperator_lx;        /* '<S241>/Logical Operator' */
  boolean_T LogicalOperator_b;         /* '<S242>/Logical Operator' */
  boolean_T LogicalOperator_nc;        /* '<S98>/Logical Operator' */
  boolean_T LogicalOperator_j;         /* '<S162>/Logical Operator' */
  boolean_T LogicalOperator_k;         /* '<S161>/Logical Operator' */
  boolean_T LogicalOperator_b1;        /* '<S94>/Logical Operator' */
  boolean_T BMSTimeoutError;           /* '<S77>/BMS Timout Error' */
  boolean_T Deltatimelimitexceeded_dt; /* '<S90>/Delta time limit exceeded' */
  boolean_T Mem1_hb;                   /* '<S90>/Mem1' */
  boolean_T Mem2_fux;                  /* '<S90>/Mem2' */
  boolean_T Mem3_b;                    /* '<S90>/Mem3' */
  boolean_T Mem4_mr;                   /* '<S90>/Mem4' */
  boolean_T Prevmsgnotsent_bp;         /* '<S90>/Prev. msg.  not sent' */
  boolean_T OR_a;                      /* '<S90>/OR' */
  boolean_T Warn_e;                    /* '<S90>/Warn' */
  boolean_T LogicalOperator12;         /* '<S92>/Logical Operator12' */
  boolean_T LogicalOperator9;          /* '<S92>/Logical Operator9' */
  boolean_T LogicalOperator8;          /* '<S92>/Logical Operator8' */
  boolean_T LogicalOperator7;          /* '<S92>/Logical Operator7' */
  boolean_T LogicalOperator6;          /* '<S92>/Logical Operator6' */
  boolean_T LogicalOperator5;          /* '<S92>/Logical Operator5' */
  boolean_T LogicalOperator4_h;        /* '<S92>/Logical Operator4' */
  boolean_T LogicalOperator3_o;        /* '<S92>/Logical Operator3' */
  boolean_T LogicalOperator2_i;        /* '<S92>/Logical Operator2' */
  boolean_T LogicalOperator1_d;        /* '<S92>/Logical Operator1' */
  boolean_T LogicalOperator12_j;       /* '<S93>/Logical Operator12' */
  boolean_T LogicalOperator9_j;        /* '<S93>/Logical Operator9' */
  boolean_T LogicalOperator8_o;        /* '<S93>/Logical Operator8' */
  boolean_T LogicalOperator7_k;        /* '<S93>/Logical Operator7' */
  boolean_T LogicalOperator6_p;        /* '<S93>/Logical Operator6' */
  boolean_T LogicalOperator5_d;        /* '<S93>/Logical Operator5' */
  boolean_T LogicalOperator4_d;        /* '<S93>/Logical Operator4' */
  boolean_T LogicalOperator3_b;        /* '<S93>/Logical Operator3' */
  boolean_T LogicalOperator2_e;        /* '<S93>/Logical Operator2' */
  boolean_T LogicalOperator1_p;        /* '<S93>/Logical Operator1' */
  boolean_T Deltatimelimitexceeded_f;  /* '<S263>/Delta time limit exceeded' */
  boolean_T Mem1_ok;                   /* '<S263>/Mem1' */
  boolean_T Mem2_kb;                   /* '<S263>/Mem2' */
  boolean_T Mem3_m;                    /* '<S263>/Mem3' */
  boolean_T Mem4_l;                    /* '<S263>/Mem4' */
  boolean_T Prevmsgnotsent_mv;         /* '<S263>/Prev. msg.  not sent' */
  boolean_T OR_bk;                     /* '<S263>/OR' */
  boolean_T Warn_et;                   /* '<S263>/Warn' */
  boolean_T Deltatimelimitexceeded_e4; /* '<S264>/Delta time limit exceeded' */
  boolean_T Mem1_f1;                   /* '<S264>/Mem1' */
  boolean_T Mem2_a;                    /* '<S264>/Mem2' */
  boolean_T Mem3_pu;                   /* '<S264>/Mem3' */
  boolean_T Mem4_g;                    /* '<S264>/Mem4' */
  boolean_T Prevmsgnotsent_lh;         /* '<S264>/Prev. msg.  not sent' */
  boolean_T OR_j0;                     /* '<S264>/OR' */
  boolean_T Warn_n;                    /* '<S264>/Warn' */
  boolean_T Deltatimelimitexceeded_l;  /* '<S267>/Delta time limit exceeded' */
  boolean_T Mem1_pz;                   /* '<S267>/Mem1' */
  boolean_T Mem2_h;                    /* '<S267>/Mem2' */
  boolean_T Mem3_oo;                   /* '<S267>/Mem3' */
  boolean_T Mem4_lm;                   /* '<S267>/Mem4' */
  boolean_T Prevmsgnotsent_k;          /* '<S267>/Prev. msg.  not sent' */
  boolean_T OR_o;                      /* '<S267>/OR' */
  boolean_T Warn_hi;                   /* '<S267>/Warn' */
  boolean_T LogicalOperator2_j;        /* '<S268>/Logical Operator2' */
  boolean_T LogicalOperator1_l;        /* '<S268>/Logical Operator1' */
  boolean_T Nodata;                    /* '<S298>/No data' */
  boolean_T Newdata;                   /* '<S298>/New data' */
  boolean_T Deltatimelimitexceeded_he; /* '<S298>/Delta time limit exceeded' */
  boolean_T AND;                       /* '<S298>/AND' */
  boolean_T OR_f4;                     /* '<S298>/OR' */
  boolean_T Mem1_fn;                   /* '<S298>/Mem1' */
  boolean_T Mem2_fz;                   /* '<S298>/Mem2' */
  boolean_T Mem3_e;                    /* '<S298>/Mem3' */
  boolean_T Mem4_px;                   /* '<S298>/Mem4' */
  boolean_T Mem5;                      /* '<S298>/Mem5' */
  boolean_T Warn_hy;                   /* '<S298>/Warn' */
  boolean_T Nodata_l;                  /* '<S375>/No data' */
  boolean_T Newdata_l;                 /* '<S375>/New data' */
  boolean_T Deltatimelimitexceeded_iu; /* '<S375>/Delta time limit exceeded' */
  boolean_T AND_g;                     /* '<S375>/AND' */
  boolean_T OR_bz;                     /* '<S375>/OR' */
  boolean_T Mem1_cq;                   /* '<S375>/Mem1' */
  boolean_T Mem2_a2;                   /* '<S375>/Mem2' */
  boolean_T Mem3_bs;                   /* '<S375>/Mem3' */
  boolean_T Mem4_io;                   /* '<S375>/Mem4' */
  boolean_T Mem5_l;                    /* '<S375>/Mem5' */
  boolean_T Warn_da;                   /* '<S375>/Warn' */
  boolean_T SFunction1_bk;             /* '<S471>/S-Function1' */
  boolean_T SFunction1_by;             /* '<S472>/S-Function1' */
  boolean_T SFunction1_is;             /* '<S473>/S-Function1' */
  boolean_T SFunction1_ih;             /* '<S474>/S-Function1' */
  boolean_T SFunction1_bn;             /* '<S475>/S-Function1' */
  boolean_T SFunction1_n;              /* '<S476>/S-Function1' */
  boolean_T SFunction1_j;              /* '<S477>/S-Function1' */
  boolean_T SFunction1_h;              /* '<S478>/S-Function1' */
  boolean_T SFunction1_c;              /* '<S479>/S-Function1' */
  boolean_T Deltatimelimitexceeded_m1; /* '<S484>/Delta time limit exceeded' */
  boolean_T Mem1_mh;                   /* '<S484>/Mem1' */
  boolean_T Mem2_gi;                   /* '<S484>/Mem2' */
  boolean_T Mem3_i;                    /* '<S484>/Mem3' */
  boolean_T Mem4_e;                    /* '<S484>/Mem4' */
  boolean_T Prevmsgnotsent_h;          /* '<S484>/Prev. msg.  not sent' */
  boolean_T OR_fm;                     /* '<S484>/OR' */
  boolean_T Warn_l;                    /* '<S484>/Warn' */
  boolean_T Deltatimelimitexceeded_o;  /* '<S485>/Delta time limit exceeded' */
  boolean_T Mem1_e;                    /* '<S485>/Mem1' */
  boolean_T Mem2_j;                    /* '<S485>/Mem2' */
  boolean_T Mem3_df;                   /* '<S485>/Mem3' */
  boolean_T Mem4_mi;                   /* '<S485>/Mem4' */
  boolean_T Prevmsgnotsent_kk;         /* '<S485>/Prev. msg.  not sent' */
  boolean_T OR_jt;                     /* '<S485>/OR' */
  boolean_T Warn_j;                    /* '<S485>/Warn' */
  boolean_T Deltatimelimitexceeded_jd; /* '<S486>/Delta time limit exceeded' */
  boolean_T Mem1_kb;                   /* '<S486>/Mem1' */
  boolean_T Mem2_ki;                   /* '<S486>/Mem2' */
  boolean_T Mem3_c5;                   /* '<S486>/Mem3' */
  boolean_T Mem4_h;                    /* '<S486>/Mem4' */
  boolean_T Prevmsgnotsent_ec;         /* '<S486>/Prev. msg.  not sent' */
  boolean_T OR_bp;                     /* '<S486>/OR' */
  boolean_T Warn_b4;                   /* '<S486>/Warn' */
  boolean_T Deltatimelimitexceeded_bp; /* '<S497>/Delta time limit exceeded' */
  boolean_T Mem1_n;                    /* '<S497>/Mem1' */
  boolean_T Mem2_mb;                   /* '<S497>/Mem2' */
  boolean_T Mem3_gx;                   /* '<S497>/Mem3' */
  boolean_T Mem4_c;                    /* '<S497>/Mem4' */
  boolean_T Prevmsgnotsent_g5;         /* '<S497>/Prev. msg.  not sent' */
  boolean_T OR_bc;                     /* '<S497>/OR' */
  boolean_T Warn_dp;                   /* '<S497>/Warn' */
  boolean_T Deltatimelimitexceeded_js; /* '<S498>/Delta time limit exceeded' */
  boolean_T Mem1_c2;                   /* '<S498>/Mem1' */
  boolean_T Mem2_hh;                   /* '<S498>/Mem2' */
  boolean_T Mem3_hh;                   /* '<S498>/Mem3' */
  boolean_T Mem4_k;                    /* '<S498>/Mem4' */
  boolean_T Prevmsgnotsent_hr;         /* '<S498>/Prev. msg.  not sent' */
  boolean_T OR_o2;                     /* '<S498>/OR' */
  boolean_T Warn_p;                    /* '<S498>/Warn' */
  boolean_T Deltatimelimitexceeded_k;  /* '<S506>/Delta time limit exceeded' */
  boolean_T Mem1_em;                   /* '<S506>/Mem1' */
  boolean_T Mem2_i;                    /* '<S506>/Mem2' */
  boolean_T Mem3_gt;                   /* '<S506>/Mem3' */
  boolean_T Mem4_eg;                   /* '<S506>/Mem4' */
  boolean_T Prevmsgnotsent_i;          /* '<S506>/Prev. msg.  not sent' */
  boolean_T OR_m1;                     /* '<S506>/OR' */
  boolean_T Warn_ln;                   /* '<S506>/Warn' */
  boolean_T Deltatimelimitexceeded_kf; /* '<S507>/Delta time limit exceeded' */
  boolean_T Mem1_nx;                   /* '<S507>/Mem1' */
  boolean_T Mem2_jr;                   /* '<S507>/Mem2' */
  boolean_T Mem3_hm;                   /* '<S507>/Mem3' */
  boolean_T Mem4_nn;                   /* '<S507>/Mem4' */
  boolean_T Prevmsgnotsent_pg;         /* '<S507>/Prev. msg.  not sent' */
  boolean_T OR_c;                      /* '<S507>/OR' */
  boolean_T Warn_lt;                   /* '<S507>/Warn' */
  boolean_T Deltatimelimitexceeded_n;  /* '<S508>/Delta time limit exceeded' */
  boolean_T Mem1_bp;                   /* '<S508>/Mem1' */
  boolean_T Mem2_o;                    /* '<S508>/Mem2' */
  boolean_T Mem3_gf;                   /* '<S508>/Mem3' */
  boolean_T Mem4_gq;                   /* '<S508>/Mem4' */
  boolean_T Prevmsgnotsent_j;          /* '<S508>/Prev. msg.  not sent' */
  boolean_T OR_oh;                     /* '<S508>/OR' */
  boolean_T Warn_i;                    /* '<S508>/Warn' */
  boolean_T LogicalOperator1_j;        /* '<S538>/Logical Operator1' */
  boolean_T LogicalOperator2_j1;       /* '<S538>/Logical Operator2' */
  boolean_T LogicalOperator_el;        /* '<S538>/Logical Operator' */
  boolean_T Compare_mh;                /* '<S627>/Compare' */
  boolean_T Compare_cz;                /* '<S628>/Compare' */
  boolean_T O_Sicherheitskreis_Enable; /* '<S535>/Fahrzeugsteuerung' */
  boolean_T O_Precharge_Enable;        /* '<S535>/Fahrzeugsteuerung' */
  boolean_T e_Error;                   /* '<S535>/Fahrzeugsteuerung' */
  boolean_T e_ACTIVE;                  /* '<S535>/Fahrzeugsteuerung' */
  boolean_T e_clearPowervoltage;       /* '<S535>/Fahrzeugsteuerung' */
  boolean_T Compare_f;                 /* '<S685>/Compare' */
  boolean_T Compare_cu;                /* '<S684>/Compare' */
  boolean_T Compare_dr;                /* '<S683>/Compare' */
  boolean_T Compare_li;                /* '<S682>/Compare' */
  boolean_T LogicalOperator_ju;        /* '<S533>/Logical Operator' */
  boolean_T Memory_i;                  /* '<S539>/Memory' */
  boolean_T Logic_f[2];                /* '<S539>/Logic' */
  boolean_T Memory_a;                  /* '<S540>/Memory' */
  boolean_T Logic_fh[2];               /* '<S540>/Logic' */
  boolean_T Compare_e;                 /* '<S383>/Compare' */
  boolean_T Compare_fu;                /* '<S384>/Compare' */
  boolean_T Compare_nw;                /* '<S385>/Compare' */
  boolean_T Compare_h;                 /* '<S386>/Compare' */
  boolean_T Compare_du;                /* '<S387>/Compare' */
  boolean_T Compare_b;                 /* '<S388>/Compare' */
  boolean_T Compare_g;                 /* '<S389>/Compare' */
  boolean_T Compare_kl;                /* '<S390>/Compare' */
  boolean_T Compare_cw;                /* '<S391>/Compare' */
  boolean_T Compare_cz0;               /* '<S392>/Compare' */
  boolean_T Compare_dx;                /* '<S393>/Compare' */
  boolean_T Compare_j;                 /* '<S394>/Compare' */
  boolean_T Compare_cx;                /* '<S395>/Compare' */
  boolean_T Compare_ak;                /* '<S396>/Compare' */
  boolean_T Compare_i;                 /* '<S397>/Compare' */
  boolean_T Compare_bl;                /* '<S398>/Compare' */
  boolean_T Compare_k0;                /* '<S399>/Compare' */
  boolean_T Compare_o;                 /* '<S400>/Compare' */
  boolean_T Compare_np;                /* '<S401>/Compare' */
  boolean_T Compare_dc;                /* '<S402>/Compare' */
  boolean_T Compare_ds;                /* '<S403>/Compare' */
  boolean_T Compare_ey;                /* '<S404>/Compare' */
  boolean_T Compare_gq;                /* '<S405>/Compare' */
  boolean_T Compare_ij;                /* '<S406>/Compare' */
  boolean_T Compare_d3;                /* '<S407>/Compare' */
  boolean_T Compare_pzp;               /* '<S408>/Compare' */
  boolean_T Compare_fp;                /* '<S409>/Compare' */
  boolean_T Compare_dv;                /* '<S410>/Compare' */
  boolean_T Compare_ml;                /* '<S411>/Compare' */
  boolean_T Compare_nc;                /* '<S412>/Compare' */
  boolean_T Compare_av;                /* '<S413>/Compare' */
  boolean_T Compare_hb;                /* '<S414>/Compare' */
  boolean_T Compare_i2;                /* '<S309>/Compare' */
  boolean_T Compare_bq;                /* '<S310>/Compare' */
  boolean_T Compare_bk;                /* '<S311>/Compare' */
  boolean_T Compare_it;                /* '<S312>/Compare' */
  boolean_T Compare_gl;                /* '<S313>/Compare' */
  boolean_T Compare_er;                /* '<S314>/Compare' */
  boolean_T Compare_jl;                /* '<S315>/Compare' */
  boolean_T Compare_hb3;               /* '<S316>/Compare' */
  boolean_T Compare_om;                /* '<S317>/Compare' */
  boolean_T Compare_gx;                /* '<S318>/Compare' */
  boolean_T Compare_lc;                /* '<S319>/Compare' */
  boolean_T Compare_cc;                /* '<S320>/Compare' */
  boolean_T Compare_mb;                /* '<S321>/Compare' */
  boolean_T Compare_ar;                /* '<S322>/Compare' */
  boolean_T Compare_pq;                /* '<S323>/Compare' */
  boolean_T Compare_ef;                /* '<S324>/Compare' */
  boolean_T Compare_ex;                /* '<S325>/Compare' */
  boolean_T Compare_dp;                /* '<S326>/Compare' */
  boolean_T Compare_bf;                /* '<S327>/Compare' */
  boolean_T Compare_bs;                /* '<S328>/Compare' */
  boolean_T Compare_jw;                /* '<S329>/Compare' */
  boolean_T Compare_f3;                /* '<S330>/Compare' */
  boolean_T Compare_di;                /* '<S331>/Compare' */
  boolean_T Compare_jwf;               /* '<S332>/Compare' */
  boolean_T Compare_oa;                /* '<S333>/Compare' */
  boolean_T Compare_ns;                /* '<S334>/Compare' */
  boolean_T Compare_bv;                /* '<S335>/Compare' */
  boolean_T Compare_ok;                /* '<S336>/Compare' */
  boolean_T Compare_bvf;               /* '<S337>/Compare' */
  boolean_T Compare_a2;                /* '<S338>/Compare' */
  boolean_T Compare_gg;                /* '<S339>/Compare' */
  boolean_T Compare_i4;                /* '<S340>/Compare' */
  boolean_T Deltatimelimitexceeded_hu; /* '<S69>/Delta time limit exceeded' */
  boolean_T Mem1_ob;                   /* '<S69>/Mem1' */
  boolean_T Mem2_nb;                   /* '<S69>/Mem2' */
  boolean_T Mem3_k;                    /* '<S69>/Mem3' */
  boolean_T Mem4_gu;                   /* '<S69>/Mem4' */
  boolean_T Prevmsgnotsent_im;         /* '<S69>/Prev. msg.  not sent' */
  boolean_T OR_bf;                     /* '<S69>/OR' */
  boolean_T Warn_ej;                   /* '<S69>/Warn' */
  boolean_T Deltatimelimitexceeded_ku; /* '<S70>/Delta time limit exceeded' */
  boolean_T Mem1_la;                   /* '<S70>/Mem1' */
  boolean_T Mem2_fi;                   /* '<S70>/Mem2' */
  boolean_T Mem3_ib;                   /* '<S70>/Mem3' */
  boolean_T Mem4_a;                    /* '<S70>/Mem4' */
  boolean_T Prevmsgnotsent_ly;         /* '<S70>/Prev. msg.  not sent' */
  boolean_T OR_p1;                     /* '<S70>/OR' */
  boolean_T Warn_kj;                   /* '<S70>/Warn' */
  boolean_T O_Universal;               /* '<S10>/TX Mode Management' */
  boolean_T O_Init;                    /* '<S10>/TX Mode Management' */
  boolean_T O_Torque;                  /* '<S10>/TX Mode Management' */
  boolean_T Deltatimelimitexceeded_np; /* '<S65>/Delta time limit exceeded' */
  boolean_T Mem1_cqr;                  /* '<S65>/Mem1' */
  boolean_T Mem2_j4;                   /* '<S65>/Mem2' */
  boolean_T Mem3_iw;                   /* '<S65>/Mem3' */
  boolean_T Mem4_ki;                   /* '<S65>/Mem4' */
  boolean_T Prevmsgnotsent_hi;         /* '<S65>/Prev. msg.  not sent' */
  boolean_T OR_pz;                     /* '<S65>/OR' */
  boolean_T Warn_nt;                   /* '<S65>/Warn' */
  boolean_T Deltatimelimitexceeded_fo; /* '<S66>/Delta time limit exceeded' */
  boolean_T Mem1_ax;                   /* '<S66>/Mem1' */
  boolean_T Mem2_ol;                   /* '<S66>/Mem2' */
  boolean_T Mem3_pj;                   /* '<S66>/Mem3' */
  boolean_T Mem4_oz;                   /* '<S66>/Mem4' */
  boolean_T Prevmsgnotsent_es;         /* '<S66>/Prev. msg.  not sent' */
  boolean_T OR_nv;                     /* '<S66>/OR' */
  boolean_T Warn_j1;                   /* '<S66>/Warn' */
  uint8_T Gain_bt;                     /* '<S286>/Gain' */
  uint8_T Gain_aw;                     /* '<S287>/Gain' */
  uint8_T Gain_fn;                     /* '<S544>/Gain' */
  uint8_T Gain_afl;                    /* '<S538>/Gain' */
  uint8_T Gain1_a;                     /* '<S538>/Gain1' */
  uint8_T Gain2_b;                     /* '<S538>/Gain2' */
  uint8_T Gain3_k;                     /* '<S538>/Gain3' */
  uint8_T Gain4_d;                     /* '<S538>/Gain4' */
  uint8_T Gain5_h;                     /* '<S538>/Gain5' */
  uint8_T Gain6_b;                     /* '<S538>/Gain6' */
  uint8_T Gain7_f;                     /* '<S538>/Gain7' */
  uint8_T Gain10_f;                    /* '<S538>/Gain10' */
  uint8_T Gain11_d;                    /* '<S538>/Gain11' */
  uint8_T Gain12;                      /* '<S538>/Gain12' */
  uint8_T Gain13;                      /* '<S538>/Gain13' */
  uint8_T Gain8_k;                     /* '<S538>/Gain8' */
  uint8_T Gain9_d;                     /* '<S538>/Gain9' */
  uint8_T MinMax_f;                    /* '<S538>/MinMax' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S690>/J-K Flip-Flop' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S688>/J-K Flip-Flop' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S686>/J-K Flip-Flop' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S496>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S488>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S487>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S443>/Triggered Subsystem' */
  B_Inverter_Temp_DR18E_Testpul_T Inverter_Temp_e;/* '<S287>/Inverter_Temp' */
  B_U_DC_DR18E_Testpult_T U_DC_o;      /* '<S287>/U_DC' */
  B_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_c;/* '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  B_WirkstromIq_DR18E_Testpult_T WirkstromIq_e;/* '<S287>/Wirkstrom Iq' */
  B_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl_k;/* '<S368>/Skalierung Drehzahl' */
  B_Inverter_Temp_DR18E_Testpul_T Inverter_Temp;/* '<S286>/Inverter_Temp' */
  B_U_DC_DR18E_Testpult_T U_DC;        /* '<S286>/U_DC' */
  B_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_f;/* '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  B_WirkstromIq_DR18E_Testpult_T WirkstromIq;/* '<S286>/Wirkstrom Iq' */
  B_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl;/* '<S288>/Skalierung Drehzahl' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S282>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S277>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S276>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S275>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S270>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S257>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S256>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S255>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S248>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S247>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S246>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S237>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S236>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S235>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S228>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S227>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S226>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S217>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S216>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S215>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S208>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S207>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S206>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S197>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S196>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S195>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S188>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem;/* '<S187>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S186>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S177>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S176>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S175>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S168>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S167>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S166>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S150>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S149>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S148>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S147>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S146>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S145>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S144>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S143>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S142>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S141>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S120>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S119>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S118>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S117>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S116>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S115>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S114>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S113>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S112>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S111>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S91>/Subsystem' */
} B_DR18E_Testpult_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S12>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S15>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S679>/Integrator' */
  real_T DelayInput1_DSTATE_f;         /* '<S16>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S41>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S42>/Delay Input1' */
  real_T DelayInput1_DSTATE_e[8];      /* '<S43>/Delay Input1' */
  real_T Delay_DSTATE;                 /* '<S576>/Delay' */
  real_T Delay_DSTATE_k;               /* '<S579>/Delay' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S532>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S653>/Discrete-Time Integrator' */
  real_T DelayInput1_DSTATE_jg;        /* '<S614>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S612>/Delay Input1' */
  real_T DelayInput1_DSTATE_f2;        /* '<S615>/Delay Input1' */
  real_T DelayInput1_DSTATE_nw;        /* '<S613>/Delay Input1' */
  real_T DelayInput1_DSTATE_f2m;       /* '<S72>/Delay Input1' */
  real_T DelayInput1_DSTATE_ot;        /* '<S73>/Delay Input1' */
  real_T DelayInput1_DSTATE_m;         /* '<S74>/Delay Input1' */
  real_T DelayInput1_DSTATE_a;         /* '<S75>/Delay Input1' */
  real_T TappedDelay_X[5];             /* '<S589>/Tapped Delay' */
  real_T Integrator_DSTATE_b;          /* '<S594>/Integrator' */
  real_T Filter_DSTATE;                /* '<S594>/Filter' */
  real_T Filter_DSTATE_m;              /* '<S595>/Filter' */
  real_T Integrator_DSTATE_e;          /* '<S595>/Integrator' */
  real_T Filter_DSTATE_l;              /* '<S596>/Filter' */
  real_T Integrator_DSTATE_c;          /* '<S596>/Integrator' */
  real_T TappedDelay_X_l[5];           /* '<S604>/Tapped Delay' */
  real_T Integrator_DSTATE_f;          /* '<S609>/Integrator' */
  real_T Filter_DSTATE_n;              /* '<S609>/Filter' */
  real_T Filter_DSTATE_i;              /* '<S610>/Filter' */
  real_T Integrator_DSTATE_p;          /* '<S610>/Integrator' */
  real_T Filter_DSTATE_ma;             /* '<S611>/Filter' */
  real_T Integrator_DSTATE_ps;         /* '<S611>/Integrator' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S532>/Discrete-Time Integrator' */
  real_T Memory_PreviousInput[2];      /* '<S545>/Memory' */
  real_T Memory_PreviousInput_k;       /* '<S681>/Memory' */
  real_T Memory_PreviousInput_j;       /* '<S680>/Memory' */
  real_T Memory_PreviousInput_i;       /* '<S559>/Memory' */
  real_T TimeStampA;                   /* '<S576>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S576>/Derivative' */
  real_T TimeStampB;                   /* '<S576>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S576>/Derivative' */
  real_T Add_DWORK1;                   /* '<S576>/Add' */
  real_T Memory_PreviousInput_i0;      /* '<S630>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S631>/Memory' */
  real_T TimeStampA_o;                 /* '<S583>/Derivative' */
  real_T LastUAtTimeA_m;               /* '<S583>/Derivative' */
  real_T TimeStampB_h;                 /* '<S583>/Derivative' */
  real_T LastUAtTimeB_h;               /* '<S583>/Derivative' */
  real_T RateTransition1_Buffer0;      /* '<S591>/Rate Transition1' */
  real_T TimeStampA_os;                /* '<S579>/Derivative' */
  real_T LastUAtTimeA_n;               /* '<S579>/Derivative' */
  real_T TimeStampB_j;                 /* '<S579>/Derivative' */
  real_T LastUAtTimeB_c;               /* '<S579>/Derivative' */
  real_T TimeStampA_o0;                /* '<S598>/Derivative' */
  real_T LastUAtTimeA_p;               /* '<S598>/Derivative' */
  real_T TimeStampB_p;                 /* '<S598>/Derivative' */
  real_T LastUAtTimeB_f;               /* '<S598>/Derivative' */
  real_T RateTransition1_Buffer0_k;    /* '<S606>/Rate Transition1' */
  real_T Memory_PreviousInput_g;       /* '<S617>/Memory' */
  real_T Memory_PreviousInput_kf;      /* '<S616>/Memory' */
  real_T Memory_PreviousInput_n;       /* '<S466>/Memory' */
  real_T Memory_PreviousInput_d;       /* '<S468>/Memory' */
  real_T Add1_DWORK1;                  /* '<S571>/Add1' */
  real_T Memory_PreviousInput_oz;      /* '<S379>/Memory' */
  real_T Memory_PreviousInput_nz;      /* '<S302>/Memory' */
  real_T RateTransition_Buffer0;       /* '<S69>/Rate Transition' */
  real_T RateTransition1_Buffer0_l;    /* '<S69>/Rate Transition1' */
  real_T RateTransition_Buffer0_n;     /* '<S70>/Rate Transition' */
  real_T RateTransition1_Buffer0_i;    /* '<S70>/Rate Transition1' */
  uint32_T UD_DSTATE;                  /* '<S635>/UD' */
  int32_T clockTickCounter;            /* '<S533>/Pulse Generator' */
  int32_T clockTickCounter_j;          /* '<S562>/Pulse Generator' */
  int32_T clockTickCounter_d;          /* '<S527>/Pulse Generator' */
  uint32_T e_ErrorEventCounter;        /* '<S535>/Fahrzeugsteuerung' */
  uint32_T e_ACTIVEEventCounter;       /* '<S535>/Fahrzeugsteuerung' */
  uint32_T e_clearPowervoltageEventCounter;/* '<S535>/Fahrzeugsteuerung' */
  int_T SFunction1_IWORK[2];           /* '<S512>/S-Function1' */
  int_T SFunction1_IWORK_c[2];         /* '<S514>/S-Function1' */
  int_T SFunction1_IWORK_j[2];         /* '<S516>/S-Function1' */
  uint16_T UD_DSTATE_h;                /* '<S637>/UD' */
  uint16_T UD_DSTATE_hj;               /* '<S636>/UD' */
  uint16_T temporalCounter_i1;         /* '<S535>/Fahrzeugsteuerung' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S696>/Delay Input1' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S286>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_p; /* '<S287>/Switch Case' */
  int8_T Integrator_PrevResetState;    /* '<S679>/Integrator' */
  int8_T i;                            /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_active_c3_DR18E_Testpult; /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_c3_DR18E_Testpult;        /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_Init;                     /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_UmrichterInit;            /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_Check_Safety;             /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_TS_init;                  /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_Precharge;                /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_Check_Safety1;            /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_Sound;                    /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_TS_active;                /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_SafetyShutdown;           /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_NormalShutdown;           /* '<S535>/Fahrzeugsteuerung' */
  uint8_T is_active_c4_DR18E_Testpult; /* '<S10>/TX Mode Management' */
  uint8_T is_c4_DR18E_Testpult;        /* '<S10>/TX Mode Management' */
  boolean_T Mem1_PreviousInput;        /* '<S14>/Mem1' */
  boolean_T Mem2_PreviousInput;        /* '<S14>/Mem2' */
  boolean_T Mem3_PreviousInput;        /* '<S14>/Mem3' */
  boolean_T Mem4_PreviousInput;        /* '<S14>/Mem4' */
  boolean_T Mem1_PreviousInput_p;      /* '<S24>/Mem1' */
  boolean_T Mem2_PreviousInput_b;      /* '<S24>/Mem2' */
  boolean_T Mem3_PreviousInput_a;      /* '<S24>/Mem3' */
  boolean_T Mem4_PreviousInput_h;      /* '<S24>/Mem4' */
  boolean_T Mem1_PreviousInput_k;      /* '<S25>/Mem1' */
  boolean_T Mem2_PreviousInput_c;      /* '<S25>/Mem2' */
  boolean_T Mem3_PreviousInput_c;      /* '<S25>/Mem3' */
  boolean_T Mem4_PreviousInput_d;      /* '<S25>/Mem4' */
  boolean_T Mem1_PreviousInput_e;      /* '<S26>/Mem1' */
  boolean_T Mem2_PreviousInput_h;      /* '<S26>/Mem2' */
  boolean_T Mem3_PreviousInput_a0;     /* '<S26>/Mem3' */
  boolean_T Mem4_PreviousInput_e;      /* '<S26>/Mem4' */
  boolean_T TmpLatchAtJKFlipFlopInport1_Pre;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport2_Pre;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport1_P_d;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport2_P_f;/* synthesized block */
  boolean_T Mem1_PreviousInput_h;      /* '<S27>/Mem1' */
  boolean_T Mem2_PreviousInput_k;      /* '<S27>/Mem2' */
  boolean_T Mem3_PreviousInput_n;      /* '<S27>/Mem3' */
  boolean_T Mem4_PreviousInput_n;      /* '<S27>/Mem4' */
  boolean_T TmpLatchAtJKFlipFlopInport1_P_b;/* synthesized block */
  boolean_T TmpLatchAtJKFlipFlopInport2_P_k;/* synthesized block */
  boolean_T Mem1_PreviousInput_m;      /* '<S28>/Mem1' */
  boolean_T Mem2_PreviousInput_n;      /* '<S28>/Mem2' */
  boolean_T Mem3_PreviousInput_e;      /* '<S28>/Mem3' */
  boolean_T Mem4_PreviousInput_c;      /* '<S28>/Mem4' */
  boolean_T Mem1_PreviousInput_d;      /* '<S29>/Mem1' */
  boolean_T Mem2_PreviousInput_hu;     /* '<S29>/Mem2' */
  boolean_T Mem3_PreviousInput_f;      /* '<S29>/Mem3' */
  boolean_T Mem4_PreviousInput_dp;     /* '<S29>/Mem4' */
  boolean_T Mem1_PreviousInput_l;      /* '<S30>/Mem1' */
  boolean_T Mem2_PreviousInput_j;      /* '<S30>/Mem2' */
  boolean_T Mem3_PreviousInput_o;      /* '<S30>/Mem3' */
  boolean_T Mem4_PreviousInput_n1;     /* '<S30>/Mem4' */
  boolean_T Mem1_PreviousInput_i;      /* '<S37>/Mem1' */
  boolean_T Mem2_PreviousInput_o;      /* '<S37>/Mem2' */
  boolean_T Mem3_PreviousInput_g;      /* '<S37>/Mem3' */
  boolean_T Mem4_PreviousInput_f;      /* '<S37>/Mem4' */
  boolean_T Mem1_PreviousInput_ia;     /* '<S35>/Mem1' */
  boolean_T Mem2_PreviousInput_e;      /* '<S35>/Mem2' */
  boolean_T Mem3_PreviousInput_nc;     /* '<S35>/Mem3' */
  boolean_T Mem4_PreviousInput_cj;     /* '<S35>/Mem4' */
  boolean_T Mem1_PreviousInput_b;      /* '<S36>/Mem1' */
  boolean_T Mem2_PreviousInput_k4;     /* '<S36>/Mem2' */
  boolean_T Mem3_PreviousInput_b;      /* '<S36>/Mem3' */
  boolean_T Mem4_PreviousInput_fb;     /* '<S36>/Mem4' */
  boolean_T Mem1_PreviousInput_dg;     /* '<S38>/Mem1' */
  boolean_T Mem2_PreviousInput_l;      /* '<S38>/Mem2' */
  boolean_T Mem3_PreviousInput_go;     /* '<S38>/Mem3' */
  boolean_T Mem4_PreviousInput_l;      /* '<S38>/Mem4' */
  boolean_T Mem1_PreviousInput_is;     /* '<S46>/Mem1' */
  boolean_T Mem2_PreviousInput_nj;     /* '<S46>/Mem2' */
  boolean_T Mem3_PreviousInput_bm;     /* '<S46>/Mem3' */
  boolean_T Mem4_PreviousInput_p;      /* '<S46>/Mem4' */
  boolean_T Mem1_PreviousInput_m4;     /* '<S47>/Mem1' */
  boolean_T Mem2_PreviousInput_m;      /* '<S47>/Mem2' */
  boolean_T Mem3_PreviousInput_oq;     /* '<S47>/Mem3' */
  boolean_T Mem4_PreviousInput_m;      /* '<S47>/Mem4' */
  boolean_T Mem1_PreviousInput_f;      /* '<S48>/Mem1' */
  boolean_T Mem2_PreviousInput_g;      /* '<S48>/Mem2' */
  boolean_T Mem3_PreviousInput_i;      /* '<S48>/Mem3' */
  boolean_T Mem4_PreviousInput_ne;     /* '<S48>/Mem4' */
  boolean_T Mem1_PreviousInput_ig;     /* '<S49>/Mem1' */
  boolean_T Mem2_PreviousInput_hk;     /* '<S49>/Mem2' */
  boolean_T Mem3_PreviousInput_if;     /* '<S49>/Mem3' */
  boolean_T Mem4_PreviousInput_la;     /* '<S49>/Mem4' */
  boolean_T Memory_PreviousInput_op;   /* '<S560>/Memory' */
  boolean_T Relay_Mode;                /* '<S576>/Relay' */
  boolean_T Memory_PreviousInput_a;    /* '<S578>/Memory' */
  boolean_T Relay_Mode_f;              /* '<S579>/Relay' */
  boolean_T Memory_PreviousInput_aa;   /* '<S581>/Memory' */
  boolean_T Memory_PreviousInput_m;    /* '<S618>/Memory' */
  boolean_T Memory_PreviousInput_e;    /* '<S619>/Memory' */
  boolean_T Mem1_PreviousInput_fm;     /* '<S76>/Mem1' */
  boolean_T Mem2_PreviousInput_ma;     /* '<S76>/Mem2' */
  boolean_T Mem3_PreviousInput_j;      /* '<S76>/Mem3' */
  boolean_T Mem4_PreviousInput_lt;     /* '<S76>/Mem4' */
  boolean_T Mem1_PreviousInput_o;      /* '<S90>/Mem1' */
  boolean_T Mem2_PreviousInput_a;      /* '<S90>/Mem2' */
  boolean_T Mem3_PreviousInput_e2;     /* '<S90>/Mem3' */
  boolean_T Mem4_PreviousInput_o;      /* '<S90>/Mem4' */
  boolean_T Mem1_PreviousInput_a;      /* '<S263>/Mem1' */
  boolean_T Mem2_PreviousInput_d;      /* '<S263>/Mem2' */
  boolean_T Mem3_PreviousInput_ou;     /* '<S263>/Mem3' */
  boolean_T Mem4_PreviousInput_lx;     /* '<S263>/Mem4' */
  boolean_T Mem1_PreviousInput_n;      /* '<S264>/Mem1' */
  boolean_T Mem2_PreviousInput_gl;     /* '<S264>/Mem2' */
  boolean_T Mem3_PreviousInput_k;      /* '<S264>/Mem3' */
  boolean_T Mem4_PreviousInput_k;      /* '<S264>/Mem4' */
  boolean_T Mem1_PreviousInput_oh;     /* '<S267>/Mem1' */
  boolean_T Mem2_PreviousInput_a3;     /* '<S267>/Mem2' */
  boolean_T Mem3_PreviousInput_g3;     /* '<S267>/Mem3' */
  boolean_T Mem4_PreviousInput_mx;     /* '<S267>/Mem4' */
  boolean_T Mem1_PreviousInput_mt;     /* '<S298>/Mem1' */
  boolean_T Mem2_PreviousInput_i;      /* '<S298>/Mem2' */
  boolean_T Mem3_PreviousInput_kb;     /* '<S298>/Mem3' */
  boolean_T Mem4_PreviousInput_ne0;    /* '<S298>/Mem4' */
  boolean_T Mem5_PreviousInput;        /* '<S298>/Mem5' */
  boolean_T Mem1_PreviousInput_fe;     /* '<S375>/Mem1' */
  boolean_T Mem2_PreviousInput_lp;     /* '<S375>/Mem2' */
  boolean_T Mem3_PreviousInput_fr;     /* '<S375>/Mem3' */
  boolean_T Mem4_PreviousInput_p3;     /* '<S375>/Mem4' */
  boolean_T Mem5_PreviousInput_f;      /* '<S375>/Mem5' */
  boolean_T Mem1_PreviousInput_ip;     /* '<S484>/Mem1' */
  boolean_T Mem2_PreviousInput_ii;     /* '<S484>/Mem2' */
  boolean_T Mem3_PreviousInput_a4;     /* '<S484>/Mem3' */
  boolean_T Mem4_PreviousInput_fj;     /* '<S484>/Mem4' */
  boolean_T Mem1_PreviousInput_pt;     /* '<S485>/Mem1' */
  boolean_T Mem2_PreviousInput_ak;     /* '<S485>/Mem2' */
  boolean_T Mem3_PreviousInput_fc;     /* '<S485>/Mem3' */
  boolean_T Mem4_PreviousInput_h3;     /* '<S485>/Mem4' */
  boolean_T Mem1_PreviousInput_e5;     /* '<S486>/Mem1' */
  boolean_T Mem2_PreviousInput_at;     /* '<S486>/Mem2' */
  boolean_T Mem3_PreviousInput_ii;     /* '<S486>/Mem3' */
  boolean_T Mem4_PreviousInput_kr;     /* '<S486>/Mem4' */
  boolean_T Mem1_PreviousInput_pc;     /* '<S497>/Mem1' */
  boolean_T Mem2_PreviousInput_c2;     /* '<S497>/Mem2' */
  boolean_T Mem3_PreviousInput_ah;     /* '<S497>/Mem3' */
  boolean_T Mem4_PreviousInput_fw;     /* '<S497>/Mem4' */
  boolean_T Mem1_PreviousInput_bw;     /* '<S498>/Mem1' */
  boolean_T Mem2_PreviousInput_cz;     /* '<S498>/Mem2' */
  boolean_T Mem3_PreviousInput_os;     /* '<S498>/Mem3' */
  boolean_T Mem4_PreviousInput_i;      /* '<S498>/Mem4' */
  boolean_T Mem1_PreviousInput_hl;     /* '<S506>/Mem1' */
  boolean_T Mem2_PreviousInput_ls;     /* '<S506>/Mem2' */
  boolean_T Mem3_PreviousInput_p;      /* '<S506>/Mem3' */
  boolean_T Mem4_PreviousInput_dpj;    /* '<S506>/Mem4' */
  boolean_T Mem1_PreviousInput_g;      /* '<S507>/Mem1' */
  boolean_T Mem2_PreviousInput_ez;     /* '<S507>/Mem2' */
  boolean_T Mem3_PreviousInput_nb;     /* '<S507>/Mem3' */
  boolean_T Mem4_PreviousInput_j;      /* '<S507>/Mem4' */
  boolean_T Mem1_PreviousInput_ba;     /* '<S508>/Mem1' */
  boolean_T Mem2_PreviousInput_p;      /* '<S508>/Mem2' */
  boolean_T Mem3_PreviousInput_ip;     /* '<S508>/Mem3' */
  boolean_T Mem4_PreviousInput_iq;     /* '<S508>/Mem4' */
  boolean_T Init_complete;             /* '<S535>/Fahrzeugsteuerung' */
  boolean_T Memory_PreviousInput_eq;   /* '<S539>/Memory' */
  boolean_T Memory_PreviousInput_oa;   /* '<S540>/Memory' */
  boolean_T Mem1_PreviousInput_p3;     /* '<S69>/Mem1' */
  boolean_T Mem2_PreviousInput_pz;     /* '<S69>/Mem2' */
  boolean_T Mem3_PreviousInput_m;      /* '<S69>/Mem3' */
  boolean_T Mem4_PreviousInput_g;      /* '<S69>/Mem4' */
  boolean_T Mem1_PreviousInput_bf;     /* '<S70>/Mem1' */
  boolean_T Mem2_PreviousInput_ee;     /* '<S70>/Mem2' */
  boolean_T Mem3_PreviousInput_pq;     /* '<S70>/Mem3' */
  boolean_T Mem4_PreviousInput_cg;     /* '<S70>/Mem4' */
  boolean_T Mem1_PreviousInput_iax;    /* '<S65>/Mem1' */
  boolean_T Mem2_PreviousInput_g2;     /* '<S65>/Mem2' */
  boolean_T Mem3_PreviousInput_cj;     /* '<S65>/Mem3' */
  boolean_T Mem4_PreviousInput_b;      /* '<S65>/Mem4' */
  boolean_T Mem1_PreviousInput_n3;     /* '<S66>/Mem1' */
  boolean_T Mem2_PreviousInput_bd;     /* '<S66>/Mem2' */
  boolean_T Mem3_PreviousInput_d;      /* '<S66>/Mem3' */
  boolean_T Mem4_PreviousInput_kp;     /* '<S66>/Mem4' */
  boolean_T AMSIMD_Latching_MODE;      /* '<S523>/AMSIMD_Latching' */
  boolean_T SIG_PUMP_MODE;             /* '<S7>/SIG_PUMP' */
  boolean_T SIG_FAN_MODE;              /* '<S7>/SIG_FAN' */
  boolean_T LED_BAR_MODE;              /* '<S9>/LED_BAR' */
  boolean_T InvertersTXTorque_MODE;    /* '<S10>/Inverters TXTorque' */
  boolean_T InvertersTXUniversal_MODE; /* '<S10>/Inverters TXUniversal' */
  boolean_T UmrichterInit_MODE;        /* '<S10>/Umrichter Init' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S690>/J-K Flip-Flop' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S688>/J-K Flip-Flop' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S686>/J-K Flip-Flop' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S496>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S488>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S487>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S443>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S282>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S277>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S276>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S275>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S270>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S257>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S256>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S255>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S248>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S247>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S246>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S237>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S236>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S235>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S228>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S227>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S226>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S217>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S216>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S215>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S208>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S207>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S206>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S197>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S196>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S195>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S188>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem;/* '<S187>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S186>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S177>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S176>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S175>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S168>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S167>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S166>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S150>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S149>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S148>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S147>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S146>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S145>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S144>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S143>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S142>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S141>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S120>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S119>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S118>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S117>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S116>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S115>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S114>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S113>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S112>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S111>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S91>/Subsystem' */
} DW_DR18E_Testpult_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T emGM_CSTATE;                  /* '<S582>/em*GM' */
  real_T emGMX_CSTATE;                 /* '<S582>/em*GM*X²' */
  real_T ModelReference4_CSTATE;       /* '<S584>/ModelReference4' */
  real_T ModelReference2_CSTATE;       /* '<S584>/ModelReference2' */
  real_T ModelReference4_CSTATE_b;     /* '<S583>/ModelReference4' */
  real_T ModelReference2_CSTATE_o;     /* '<S583>/ModelReference2' */
  real_T ModelReference1_CSTATE;       /* '<S583>/ModelReference1' */
  real_T emGM_CSTATE_d;                /* '<S597>/em*GM' */
  real_T emGMX_CSTATE_a;               /* '<S597>/em*GM*X²' */
  real_T ModelReference4_CSTATE_l;     /* '<S599>/ModelReference4' */
  real_T ModelReference2_CSTATE_a;     /* '<S599>/ModelReference2' */
  real_T ModelReference4_CSTATE_d;     /* '<S598>/ModelReference4' */
  real_T ModelReference2_CSTATE_m;     /* '<S598>/ModelReference2' */
  real_T ModelReference1_CSTATE_k;     /* '<S598>/ModelReference1' */
  real_T ModelReference_CSTATE;        /* '<S582>/ModelReference' */
  real_T ModelReference_CSTATE_i;      /* '<S583>/ModelReference' */
  real_T ModelReference3_CSTATE;       /* '<S583>/ModelReference3' */
  real_T ModelReference_CSTATE_l;      /* '<S584>/ModelReference' */
  real_T ModelReference1_CSTATE_i;     /* '<S584>/ModelReference1' */
  real_T ModelReference3_CSTATE_b;     /* '<S584>/ModelReference3' */
  real_T ModelReference_CSTATE_g;      /* '<S597>/ModelReference' */
  real_T ModelReference_CSTATE_d;      /* '<S598>/ModelReference' */
  real_T ModelReference3_CSTATE_k;     /* '<S598>/ModelReference3' */
  real_T ModelReference_CSTATE_m;      /* '<S599>/ModelReference' */
  real_T ModelReference1_CSTATE_a;     /* '<S599>/ModelReference1' */
  real_T ModelReference3_CSTATE_e;     /* '<S599>/ModelReference3' */
} X_DR18E_Testpult_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T emGM_CSTATE;                  /* '<S582>/em*GM' */
  real_T emGMX_CSTATE;                 /* '<S582>/em*GM*X²' */
  real_T ModelReference4_CSTATE;       /* '<S584>/ModelReference4' */
  real_T ModelReference2_CSTATE;       /* '<S584>/ModelReference2' */
  real_T ModelReference4_CSTATE_b;     /* '<S583>/ModelReference4' */
  real_T ModelReference2_CSTATE_o;     /* '<S583>/ModelReference2' */
  real_T ModelReference1_CSTATE;       /* '<S583>/ModelReference1' */
  real_T emGM_CSTATE_d;                /* '<S597>/em*GM' */
  real_T emGMX_CSTATE_a;               /* '<S597>/em*GM*X²' */
  real_T ModelReference4_CSTATE_l;     /* '<S599>/ModelReference4' */
  real_T ModelReference2_CSTATE_a;     /* '<S599>/ModelReference2' */
  real_T ModelReference4_CSTATE_d;     /* '<S598>/ModelReference4' */
  real_T ModelReference2_CSTATE_m;     /* '<S598>/ModelReference2' */
  real_T ModelReference1_CSTATE_k;     /* '<S598>/ModelReference1' */
  real_T ModelReference_CSTATE;        /* '<S582>/ModelReference' */
  real_T ModelReference_CSTATE_i;      /* '<S583>/ModelReference' */
  real_T ModelReference3_CSTATE;       /* '<S583>/ModelReference3' */
  real_T ModelReference_CSTATE_l;      /* '<S584>/ModelReference' */
  real_T ModelReference1_CSTATE_i;     /* '<S584>/ModelReference1' */
  real_T ModelReference3_CSTATE_b;     /* '<S584>/ModelReference3' */
  real_T ModelReference_CSTATE_g;      /* '<S597>/ModelReference' */
  real_T ModelReference_CSTATE_d;      /* '<S598>/ModelReference' */
  real_T ModelReference3_CSTATE_k;     /* '<S598>/ModelReference3' */
  real_T ModelReference_CSTATE_m;      /* '<S599>/ModelReference' */
  real_T ModelReference1_CSTATE_a;     /* '<S599>/ModelReference1' */
  real_T ModelReference3_CSTATE_e;     /* '<S599>/ModelReference3' */
} XDot_DR18E_Testpult_T;

/* State disabled  */
typedef struct {
  boolean_T emGM_CSTATE;               /* '<S582>/em*GM' */
  boolean_T emGMX_CSTATE;              /* '<S582>/em*GM*X²' */
  boolean_T ModelReference4_CSTATE;    /* '<S584>/ModelReference4' */
  boolean_T ModelReference2_CSTATE;    /* '<S584>/ModelReference2' */
  boolean_T ModelReference4_CSTATE_b;  /* '<S583>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_o;  /* '<S583>/ModelReference2' */
  boolean_T ModelReference1_CSTATE;    /* '<S583>/ModelReference1' */
  boolean_T emGM_CSTATE_d;             /* '<S597>/em*GM' */
  boolean_T emGMX_CSTATE_a;            /* '<S597>/em*GM*X²' */
  boolean_T ModelReference4_CSTATE_l;  /* '<S599>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_a;  /* '<S599>/ModelReference2' */
  boolean_T ModelReference4_CSTATE_d;  /* '<S598>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_m;  /* '<S598>/ModelReference2' */
  boolean_T ModelReference1_CSTATE_k;  /* '<S598>/ModelReference1' */
  boolean_T ModelReference_CSTATE;     /* '<S582>/ModelReference' */
  boolean_T ModelReference_CSTATE_i;   /* '<S583>/ModelReference' */
  boolean_T ModelReference3_CSTATE;    /* '<S583>/ModelReference3' */
  boolean_T ModelReference_CSTATE_l;   /* '<S584>/ModelReference' */
  boolean_T ModelReference1_CSTATE_i;  /* '<S584>/ModelReference1' */
  boolean_T ModelReference3_CSTATE_b;  /* '<S584>/ModelReference3' */
  boolean_T ModelReference_CSTATE_g;   /* '<S597>/ModelReference' */
  boolean_T ModelReference_CSTATE_d;   /* '<S598>/ModelReference' */
  boolean_T ModelReference3_CSTATE_k;  /* '<S598>/ModelReference3' */
  boolean_T ModelReference_CSTATE_m;   /* '<S599>/ModelReference' */
  boolean_T ModelReference1_CSTATE_a;  /* '<S599>/ModelReference1' */
  boolean_T ModelReference3_CSTATE_e;  /* '<S599>/ModelReference3' */
} XDis_DR18E_Testpult_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S690>/J-K Flip-Flop' */
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S688>/J-K Flip-Flop' */
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S686>/J-K Flip-Flop' */
  ZCSigState CAN_TYPE1_BOR_M2_C1_Trig_ZCE;/* '<S3>/CAN_TYPE1_BOR_M2_C1' */
  ZCSigState SIG_SHUTDOWN_Trig_ZCE;    /* '<S7>/SIG_SHUTDOWN' */
  ZCSigState SIG_PRECHARGE_Trig_ZCE;   /* '<S7>/SIG_PRECHARGE' */
  ZCSigState SIG_Inverter_Enable_Trig_ZCE;/* '<S7>/SIG_Inverter_Enable' */
  ZCSigState SIG_Buzzer_Trig_ZCE;      /* '<S7>/SIG_Buzzer' */
  ZCSigState SIG_Brakelight_Trig_ZCE;  /* '<S7>/SIG_Brakelight' */
} PrevZCX_DR18E_Testpult_T;

#ifndef ODE1_INTG
#define ODE1_INTG

/* ODE1 Integration Data */
typedef struct {
  real_T *f[1];                        /* derivatives */
} ODE1_IntgData;

#endif

/* Parameters for system: '<S91>/Subsystem' */
struct P_Subsystem_DR18E_Testpult_T_ {
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S100>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S100>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S100>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S100>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S100>/Delay'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S100>/Switch'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S100>/Delay'
                                        */
};

/* Parameters for system: '<S288>/Skalierung Drehzahl' */
struct P_SkalierungDrehzahl_DR18E_Te_T_ {
  real_T Gain_Gain;                    /* Expression: 4000/2^15
                                        * Referenced by: '<S303>/Gain'
                                        */
};

/* Parameters for system: '<S286>/Wirkstrom Iq' */
struct P_WirkstromIq_DR18E_Testpult_T_ {
  real_T WirkstromIqinAU1_Y0;          /* Computed Parameter: WirkstromIqinAU1_Y0
                                        * Referenced by: '<S301>/Wirkstrom Iq in A U1'
                                        */
  real_T DrehmomentinNmausIqU1_Y0;     /* Computed Parameter: DrehmomentinNmausIqU1_Y0
                                        * Referenced by: '<S301>/Drehmoment in Nm aus Iq U1'
                                        */
  real_T Constant2_Value;              /* Expression: 560
                                        * Referenced by: '<S301>/Constant2'
                                        */
  real_T Faktor32_Value;               /* Expression: 1.5
                                        * Referenced by: '<S301>/Faktor 3//2'
                                        */
  real_T Polpaarzahlp_Value;           /* Expression: 10
                                        * Referenced by: '<S301>/Polpaarzahl p'
                                        */
  real_T magnertischerFluPsiinVs_Value;/* Expression: 0.053
                                        * Referenced by: '<S301>/magnertischer Fluß Psi in Vs'
                                        */
  int16_T Gain3_Gain;                  /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S301>/Gain3'
                                        */
};

/* Parameters for system: '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
struct P_RegID0x8FERRORWarningRegist_T_ {
  uint32_T BADPARAS_BitMask;           /* Mask Parameter: BADPARAS_BitMask
                                        * Referenced by: '<S297>/BADPARAS'
                                        */
  uint32_T BALLAST_BitMask;            /* Mask Parameter: BALLAST_BitMask
                                        * Referenced by: '<S297>/BALLAST'
                                        */
  uint32_T BUSTIMEOUT_BitMask;         /* Mask Parameter: BUSTIMEOUT_BitMask
                                        * Referenced by: '<S297>/BUS TIMEOUT'
                                        */
  uint32_T POWERFAULT_BitMask;         /* Mask Parameter: POWERFAULT_BitMask
                                        * Referenced by: '<S297>/POWER FAULT'
                                        */
  uint32_T RACEAWAY_BitMask;           /* Mask Parameter: RACEAWAY_BitMask
                                        * Referenced by: '<S297>/RACEAWAY'
                                        */
  uint32_T USER_BitMask;               /* Mask Parameter: USER_BitMask
                                        * Referenced by: '<S297>/USER'
                                        */
  uint32_T I2R_BitMask;                /* Mask Parameter: I2R_BitMask
                                        * Referenced by: '<S297>/I2R'
                                        */
  uint32_T WarnWARNING_0_BitMask;      /* Mask Parameter: WarnWARNING_0_BitMask
                                        * Referenced by: '<S297>/WarnWARNING_0'
                                        */
  uint32_T HW_FAIL_BitMask;            /* Mask Parameter: HW_FAIL_BitMask
                                        * Referenced by: '<S297>/HW_FAIL'
                                        */
  uint32_T SammelWarnung_BitMask;      /* Mask Parameter: SammelWarnung_BitMask
                                        * Referenced by: '<S297>/Sammel Warnung'
                                        */
  uint32_T RFEFault_BitMask;           /* Mask Parameter: RFEFault_BitMask
                                        * Referenced by: '<S297>/RFE Fault'
                                        */
  uint32_T WarnILLEGAL_STATUS_BitMask; /* Mask Parameter: WarnILLEGAL_STATUS_BitMask
                                        * Referenced by: '<S297>/WarnILLEGAL_STATUS'
                                        */
  uint32_T WarnWARNING_2_BitMask;      /* Mask Parameter: WarnWARNING_2_BitMask
                                        * Referenced by: '<S297>/WarnWARNING_2'
                                        */
  uint32_T SammelError_BitMask;        /* Mask Parameter: SammelError_BitMask
                                        * Referenced by: '<S297>/Sammel Error'
                                        */
  uint32_T WarnPOWERVOLTAGE_BitMask;   /* Mask Parameter: WarnPOWERVOLTAGE_BitMask
                                        * Referenced by: '<S297>/WarnPOWERVOLTAGE'
                                        */
  uint32_T WarnMOTORTEMP_BitMask;      /* Mask Parameter: WarnMOTORTEMP_BitMask
                                        * Referenced by: '<S297>/WarnMOTORTEMP'
                                        */
  uint32_T WarnDEVICETEMP_BitMask;     /* Mask Parameter: WarnDEVICETEMP_BitMask
                                        * Referenced by: '<S297>/WarnDEVICETEMP'
                                        */
  uint32_T WarnOVERVOLTAGE_BitMask;    /* Mask Parameter: WarnOVERVOLTAGE_BitMask
                                        * Referenced by: '<S297>/WarnOVERVOLTAGE'
                                        */
  uint32_T WarnI_peak_BitMask;         /* Mask Parameter: WarnI_peak_BitMask
                                        * Referenced by: '<S297>/WarnI_peak'
                                        */
  uint32_T WarnI2R_BitMask;            /* Mask Parameter: WarnI2R_BitMask
                                        * Referenced by: '<S297>/WarnI2R'
                                        */
  uint32_T WarnBALLAST_BitMask;        /* Mask Parameter: WarnBALLAST_BitMask
                                        * Referenced by: '<S297>/WarnBALLAST'
                                        */
  uint32_T FEEDBACK_BitMask;           /* Mask Parameter: FEEDBACK_BitMask
                                        * Referenced by: '<S297>/FEEDBACK'
                                        */
  uint32_T POWERVOLTAGE_BitMask;       /* Mask Parameter: POWERVOLTAGE_BitMask
                                        * Referenced by: '<S297>/POWERVOLTAGE'
                                        */
  uint32_T MOTORTEMP_BitMask;          /* Mask Parameter: MOTORTEMP_BitMask
                                        * Referenced by: '<S297>/MOTORTEMP'
                                        */
  uint32_T DEVICETEMP_BitMask;         /* Mask Parameter: DEVICETEMP_BitMask
                                        * Referenced by: '<S297>/DEVICETEMP'
                                        */
  uint32_T OVERVOLTAGE_BitMask;        /* Mask Parameter: OVERVOLTAGE_BitMask
                                        * Referenced by: '<S297>/OVERVOLTAGE'
                                        */
  uint32_T I_PEAK_BitMask;             /* Mask Parameter: I_PEAK_BitMask
                                        * Referenced by: '<S297>/I_PEAK'
                                        */
  uint32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S341>/Constant'
                                        */
  uint32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S342>/Constant'
                                        */
  uint32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S343>/Constant'
                                        */
  uint32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S344>/Constant'
                                        */
  uint32_T Constant_Value_k2;          /* Computed Parameter: Constant_Value_k2
                                        * Referenced by: '<S345>/Constant'
                                        */
  uint32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S346>/Constant'
                                        */
  uint32_T Constant_Value_ec;          /* Computed Parameter: Constant_Value_ec
                                        * Referenced by: '<S347>/Constant'
                                        */
  uint32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S348>/Constant'
                                        */
  uint32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S349>/Constant'
                                        */
  uint32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S350>/Constant'
                                        */
  uint32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S351>/Constant'
                                        */
  uint32_T Constant_Value_ka;          /* Computed Parameter: Constant_Value_ka
                                        * Referenced by: '<S352>/Constant'
                                        */
  uint32_T Constant_Value_dz;          /* Computed Parameter: Constant_Value_dz
                                        * Referenced by: '<S353>/Constant'
                                        */
  uint32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S354>/Constant'
                                        */
  uint32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S355>/Constant'
                                        */
  uint32_T Constant_Value_co;          /* Computed Parameter: Constant_Value_co
                                        * Referenced by: '<S356>/Constant'
                                        */
  uint32_T Constant_Value_mf;          /* Computed Parameter: Constant_Value_mf
                                        * Referenced by: '<S357>/Constant'
                                        */
  uint32_T Constant_Value_dv;          /* Computed Parameter: Constant_Value_dv
                                        * Referenced by: '<S358>/Constant'
                                        */
  uint32_T Constant_Value_ce;          /* Computed Parameter: Constant_Value_ce
                                        * Referenced by: '<S359>/Constant'
                                        */
  uint32_T Constant_Value_m4;          /* Computed Parameter: Constant_Value_m4
                                        * Referenced by: '<S360>/Constant'
                                        */
  uint32_T Constant_Value_cn;          /* Computed Parameter: Constant_Value_cn
                                        * Referenced by: '<S361>/Constant'
                                        */
  uint32_T Constant_Value_nq;          /* Computed Parameter: Constant_Value_nq
                                        * Referenced by: '<S362>/Constant'
                                        */
  uint32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S363>/Constant'
                                        */
  uint32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S364>/Constant'
                                        */
  uint32_T Constant_Value_k5;          /* Computed Parameter: Constant_Value_k5
                                        * Referenced by: '<S365>/Constant'
                                        */
  uint32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S366>/Constant'
                                        */
  uint32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S367>/Constant'
                                        */
  boolean_T _BADPARAS_Y0;              /* Computed Parameter: _BADPARAS_Y0
                                        * Referenced by: '<S297>/_BADPARAS'
                                        */
  boolean_T _POWERFAULT_Y0;            /* Computed Parameter: _POWERFAULT_Y0
                                        * Referenced by: '<S297>/_POWER FAULT'
                                        */
  boolean_T _BUSTIMEOUT_Y0;            /* Computed Parameter: _BUSTIMEOUT_Y0
                                        * Referenced by: '<S297>/_BUS TIMEOUT'
                                        */
  boolean_T _FEEDBACK_Y0;              /* Computed Parameter: _FEEDBACK_Y0
                                        * Referenced by: '<S297>/_FEEDBACK'
                                        */
  boolean_T _POWERVOLTAGE_Y0;          /* Computed Parameter: _POWERVOLTAGE_Y0
                                        * Referenced by: '<S297>/_POWERVOLTAGE'
                                        */
  boolean_T _MOTORTEMP_Y0;             /* Computed Parameter: _MOTORTEMP_Y0
                                        * Referenced by: '<S297>/_MOTORTEMP'
                                        */
  boolean_T _DEVICETEMP_Y0;            /* Computed Parameter: _DEVICETEMP_Y0
                                        * Referenced by: '<S297>/_DEVICETEMP'
                                        */
  boolean_T _OVERVOLTAGE_Y0;           /* Computed Parameter: _OVERVOLTAGE_Y0
                                        * Referenced by: '<S297>/_OVERVOLTAGE'
                                        */
  boolean_T _i_peak_Y0;                /* Computed Parameter: _i_peak_Y0
                                        * Referenced by: '<S297>/_i_peak'
                                        */
  boolean_T _RACEAWAY_Y0;              /* Computed Parameter: _RACEAWAY_Y0
                                        * Referenced by: '<S297>/_RACEAWAY'
                                        */
  boolean_T _USER_Y0;                  /* Computed Parameter: _USER_Y0
                                        * Referenced by: '<S297>/_USER'
                                        */
  boolean_T _I2R_Y0;                   /* Computed Parameter: _I2R_Y0
                                        * Referenced by: '<S297>/_I2R'
                                        */
  boolean_T _HW_FAIL_Y0;               /* Computed Parameter: _HW_FAIL_Y0
                                        * Referenced by: '<S297>/_HW_FAIL'
                                        */
  boolean_T _BALLAST_Y0;               /* Computed Parameter: _BALLAST_Y0
                                        * Referenced by: '<S297>/_BALLAST'
                                        */
  boolean_T _WarnPOWERVOLTAGE_Y0;      /* Computed Parameter: _WarnPOWERVOLTAGE_Y0
                                        * Referenced by: '<S297>/_WarnPOWERVOLTAGE'
                                        */
  boolean_T _WarnMOTORTEMP_Y0;         /* Computed Parameter: _WarnMOTORTEMP_Y0
                                        * Referenced by: '<S297>/_WarnMOTORTEMP'
                                        */
  boolean_T _WarnDEVICETEMP_Y0;        /* Computed Parameter: _WarnDEVICETEMP_Y0
                                        * Referenced by: '<S297>/_WarnDEVICETEMP'
                                        */
  boolean_T _WarnOVERVOLTAGE_Y0;       /* Computed Parameter: _WarnOVERVOLTAGE_Y0
                                        * Referenced by: '<S297>/_WarnOVERVOLTAGE'
                                        */
  boolean_T _WarnI_peak_Y0;            /* Computed Parameter: _WarnI_peak_Y0
                                        * Referenced by: '<S297>/_WarnI_peak'
                                        */
  boolean_T _WarnI2R_Y0;               /* Computed Parameter: _WarnI2R_Y0
                                        * Referenced by: '<S297>/_WarnI2R'
                                        */
  boolean_T _WarnBALLAST_Y0;           /* Computed Parameter: _WarnBALLAST_Y0
                                        * Referenced by: '<S297>/_WarnBALLAST'
                                        */
  boolean_T _SAMMEL_ERROR_Y0;          /* Computed Parameter: _SAMMEL_ERROR_Y0
                                        * Referenced by: '<S297>/_SAMMEL_ERROR'
                                        */
  boolean_T _SAMMEL_WARNUNG_Y0;        /* Computed Parameter: _SAMMEL_WARNUNG_Y0
                                        * Referenced by: '<S297>/_SAMMEL_WARNUNG'
                                        */
  boolean_T _RFEFAULT_Y0;              /* Computed Parameter: _RFEFAULT_Y0
                                        * Referenced by: '<S297>/_RFE FAULT'
                                        */
  boolean_T _WarnWARNING_0_Y0;         /* Computed Parameter: _WarnWARNING_0_Y0
                                        * Referenced by: '<S297>/_WarnWARNING_0'
                                        */
  boolean_T _WarnILLEGAL_STATUS_Y0;    /* Computed Parameter: _WarnILLEGAL_STATUS_Y0
                                        * Referenced by: '<S297>/_WarnILLEGAL_STATUS'
                                        */
  boolean_T _WarnWARNING_2_Y0;         /* Computed Parameter: _WarnWARNING_2_Y0
                                        * Referenced by: '<S297>/_WarnWARNING_2'
                                        */
};

/* Parameters for system: '<S286>/U_DC' */
struct P_U_DC_DR18E_Testpult_T_ {
  real_T U_DC_Y0;                      /* Computed Parameter: U_DC_Y0
                                        * Referenced by: '<S300>/U_DC'
                                        */
  real_T UmrechnungRegisterSpannungManua;/* Expression: 1/31.499
                                          * Referenced by: '<S300>/Umrechnung Register--> Spannung Manual BAMOCAR PG D3 S. 47'
                                          */
};

/* Parameters for system: '<S286>/Inverter_Temp' */
struct P_Inverter_Temp_DR18E_Testpul_T_ {
  real_T Inverter_Temp_Y0;             /* Computed Parameter: Inverter_Temp_Y0
                                        * Referenced by: '<S294>/Inverter_Temp'
                                        */
  real_T BAMOCARPGD3ManualS48_tableData[21];/* Expression: [0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100]
                                             * Referenced by: '<S294>/BAMOCAR PG D3 Manual S. 48 '
                                             */
  real_T BAMOCARPGD3ManualS48_bp01Data[21];/* Expression: [17151,17400,17688,18017,18387,18797,19247,19733,20250,20793,21357,21933,22515,23097,23671,24232,24775,25296,25792,26261,26702]
                                            * Referenced by: '<S294>/BAMOCAR PG D3 Manual S. 48 '
                                            */
};

/* Parameters for system: '<S686>/J-K Flip-Flop' */
struct P_JKFlipFlop_DR18E_Testpult_T_ {
  boolean_T Q_Y0;                      /* Expression: initial_condition
                                        * Referenced by: '<S687>/Q'
                                        */
  boolean_T Q_Y0_a;                    /* Expression: ~initial_condition
                                        * Referenced by: '<S687>/!Q'
                                        */
  boolean_T Memory_X0;                 /* Expression: initial_condition
                                        * Referenced by: '<S687>/Memory'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S687>/Logic'
                                        */
};

/* Parameters (auto storage) */
struct P_DR18E_Testpult_T_ {
  real_T PID_fromGA_D;                 /* Mask Parameter: PID_fromGA_D
                                        * Referenced by: '<S594>/Derivative Gain'
                                        */
  real_T PID_fromOptim_D;              /* Mask Parameter: PID_fromOptim_D
                                        * Referenced by: '<S595>/Derivative Gain'
                                        */
  real_T PID_from_BJ_D;                /* Mask Parameter: PID_from_BJ_D
                                        * Referenced by: '<S596>/Derivative Gain'
                                        */
  real_T PID_fromGA_D_j;               /* Mask Parameter: PID_fromGA_D_j
                                        * Referenced by: '<S609>/Derivative Gain'
                                        */
  real_T PID_fromOptim_D_a;            /* Mask Parameter: PID_fromOptim_D_a
                                        * Referenced by: '<S610>/Derivative Gain'
                                        */
  real_T PID_from_BJ_D_i;              /* Mask Parameter: PID_from_BJ_D_i
                                        * Referenced by: '<S611>/Derivative Gain'
                                        */
  real_T PID_fromGA_I;                 /* Mask Parameter: PID_fromGA_I
                                        * Referenced by: '<S594>/Integral Gain'
                                        */
  real_T PID_fromOptim_I;              /* Mask Parameter: PID_fromOptim_I
                                        * Referenced by: '<S595>/Integral Gain'
                                        */
  real_T PID_from_BJ_I;                /* Mask Parameter: PID_from_BJ_I
                                        * Referenced by: '<S596>/Integral Gain'
                                        */
  real_T PID_fromGA_I_n;               /* Mask Parameter: PID_fromGA_I_n
                                        * Referenced by: '<S609>/Integral Gain'
                                        */
  real_T PID_fromOptim_I_d;            /* Mask Parameter: PID_fromOptim_I_d
                                        * Referenced by: '<S610>/Integral Gain'
                                        */
  real_T PID_from_BJ_I_f;              /* Mask Parameter: PID_from_BJ_I_f
                                        * Referenced by: '<S611>/Integral Gain'
                                        */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S679>/Integral Gain'
                                        */
  real_T PID_fromGA_N;                 /* Mask Parameter: PID_fromGA_N
                                        * Referenced by: '<S594>/Filter Coefficient'
                                        */
  real_T PID_fromOptim_N;              /* Mask Parameter: PID_fromOptim_N
                                        * Referenced by: '<S595>/Filter Coefficient'
                                        */
  real_T PID_from_BJ_N;                /* Mask Parameter: PID_from_BJ_N
                                        * Referenced by: '<S596>/Filter Coefficient'
                                        */
  real_T PID_fromGA_N_b;               /* Mask Parameter: PID_fromGA_N_b
                                        * Referenced by: '<S609>/Filter Coefficient'
                                        */
  real_T PID_fromOptim_N_o;            /* Mask Parameter: PID_fromOptim_N_o
                                        * Referenced by: '<S610>/Filter Coefficient'
                                        */
  real_T PID_from_BJ_N_b;              /* Mask Parameter: PID_from_BJ_N_b
                                        * Referenced by: '<S611>/Filter Coefficient'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S679>/Proportional Gain'
                                        */
  real_T PID_fromGA_P;                 /* Mask Parameter: PID_fromGA_P
                                        * Referenced by: '<S594>/Proportional Gain'
                                        */
  real_T PID_fromOptim_P;              /* Mask Parameter: PID_fromOptim_P
                                        * Referenced by: '<S595>/Proportional Gain'
                                        */
  real_T PID_from_BJ_P;                /* Mask Parameter: PID_from_BJ_P
                                        * Referenced by: '<S596>/Proportional Gain'
                                        */
  real_T PID_fromGA_P_k;               /* Mask Parameter: PID_fromGA_P_k
                                        * Referenced by: '<S609>/Proportional Gain'
                                        */
  real_T PID_fromOptim_P_d;            /* Mask Parameter: PID_fromOptim_P_d
                                        * Referenced by: '<S610>/Proportional Gain'
                                        */
  real_T PID_from_BJ_P_o;              /* Mask Parameter: PID_from_BJ_P_o
                                        * Referenced by: '<S611>/Proportional Gain'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S674>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S541>/Constant'
                                        */
  real_T VergleichmitGrenzTemp_const;  /* Mask Parameter: VergleichmitGrenzTemp_const
                                        * Referenced by: '<S682>/Constant'
                                        */
  real_T VergleichmitGrenzTemp1_const; /* Mask Parameter: VergleichmitGrenzTemp1_const
                                        * Referenced by: '<S683>/Constant'
                                        */
  real_T VergleichmitGrenzTemp2_const; /* Mask Parameter: VergleichmitGrenzTemp2_const
                                        * Referenced by: '<S684>/Constant'
                                        */
  real_T VergleichmitGrenzTemp3_const; /* Mask Parameter: VergleichmitGrenzTemp3_const
                                        * Referenced by: '<S685>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S673>/Constant'
                                        */
  real_T CompareToConstant_const_f;    /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S551>/Constant'
                                        */
  real_T CompareToConstant1_const_i;   /* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S552>/Constant'
                                        */
  real_T CompareToConstant2_const;     /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S553>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S554>/Constant'
                                        */
  real_T CompareToConstant4_const;     /* Mask Parameter: CompareToConstant4_const
                                        * Referenced by: '<S555>/Constant'
                                        */
  real_T CompareToConstant5_const;     /* Mask Parameter: CompareToConstant5_const
                                        * Referenced by: '<S556>/Constant'
                                        */
  real_T CompareToConstant7_const;     /* Mask Parameter: CompareToConstant7_const
                                        * Referenced by: '<S558>/Constant'
                                        */
  real_T CompareToConstant6_const;     /* Mask Parameter: CompareToConstant6_const
                                        * Referenced by: '<S557>/Constant'
                                        */
  real_T CompareToConstant_const_k;    /* Mask Parameter: CompareToConstant_const_k
                                        * Referenced by: '<S537>/Constant'
                                        */
  real_T CompareToConstant_const_a;    /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S577>/Constant'
                                        */
  real_T RuleT1039_const;              /* Mask Parameter: RuleT1039_const
                                        * Referenced by: '<S632>/Constant'
                                        */
  real_T CompareToConstant_const_n;    /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S580>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S572>/Constant'
                                        */
  real_T JKFlipFlop_initial_condition; /* Mask Parameter: JKFlipFlop_initial_condition
                                        * Referenced by: '<S690>/J-K Flip-Flop'
                                        */
  real_T JKFlipFlop_initial_condition_o;/* Mask Parameter: JKFlipFlop_initial_condition_o
                                         * Referenced by: '<S688>/J-K Flip-Flop'
                                         */
  real_T JKFlipFlop_initial_condition_or;/* Mask Parameter: JKFlipFlop_initial_condition_or
                                          * Referenced by: '<S686>/J-K Flip-Flop'
                                          */
  real_T DetectChange1_vinit;          /* Mask Parameter: DetectChange1_vinit
                                        * Referenced by: '<S12>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_m;        /* Mask Parameter: DetectChange1_vinit_m
                                        * Referenced by: '<S15>/Delay Input1'
                                        */
  real_T DetectChange2_vinit;          /* Mask Parameter: DetectChange2_vinit
                                        * Referenced by: '<S16>/Delay Input1'
                                        */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S41>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_l;        /* Mask Parameter: DetectChange1_vinit_l
                                        * Referenced by: '<S42>/Delay Input1'
                                        */
  real_T DetectChange2_vinit_i;        /* Mask Parameter: DetectChange2_vinit_i
                                        * Referenced by: '<S43>/Delay Input1'
                                        */
  real_T DetectIncrease_vinit;         /* Mask Parameter: DetectIncrease_vinit
                                        * Referenced by: '<S614>/Delay Input1'
                                        */
  real_T DetectDecrease_vinit;         /* Mask Parameter: DetectDecrease_vinit
                                        * Referenced by: '<S612>/Delay Input1'
                                        */
  real_T DetectIncrease1_vinit;        /* Mask Parameter: DetectIncrease1_vinit
                                        * Referenced by: '<S615>/Delay Input1'
                                        */
  real_T DetectDecrease1_vinit;        /* Mask Parameter: DetectDecrease1_vinit
                                        * Referenced by: '<S613>/Delay Input1'
                                        */
  real_T DetectChange_vinit_l;         /* Mask Parameter: DetectChange_vinit_l
                                        * Referenced by: '<S72>/Delay Input1'
                                        */
  real_T DetectChange1_vinit_i;        /* Mask Parameter: DetectChange1_vinit_i
                                        * Referenced by: '<S73>/Delay Input1'
                                        */
  real_T DetectChange2_vinit_d;        /* Mask Parameter: DetectChange2_vinit_d
                                        * Referenced by: '<S74>/Delay Input1'
                                        */
  real_T DetectChange3_vinit;          /* Mask Parameter: DetectChange3_vinit
                                        * Referenced by: '<S75>/Delay Input1'
                                        */
  real_T TappedDelay_vinit;            /* Mask Parameter: TappedDelay_vinit
                                        * Referenced by: '<S589>/Tapped Delay'
                                        */
  real_T TappedDelay_vinit_g;          /* Mask Parameter: TappedDelay_vinit_g
                                        * Referenced by: '<S604>/Tapped Delay'
                                        */
  uint32_T uHz_BitMask;                /* Mask Parameter: uHz_BitMask
                                        * Referenced by: '<S296>/2Hz'
                                        */
  uint32_T Brk_BitMask;                /* Mask Parameter: Brk_BitMask
                                        * Referenced by: '<S296>/Brk'
                                        */
  uint32_T Cal_BitMask;                /* Mask Parameter: Cal_BitMask
                                        * Referenced by: '<S296>/Cal'
                                        */
  uint32_T Cal0_BitMask;               /* Mask Parameter: Cal0_BitMask
                                        * Referenced by: '<S296>/Cal0'
                                        */
  uint32_T Ena_BitMask;                /* Mask Parameter: Ena_BitMask
                                        * Referenced by: '<S296>/Ena'
                                        */
  uint32_T NCR0_BitMask;               /* Mask Parameter: NCR0_BitMask
                                        * Referenced by: '<S296>/NCR0'
                                        */
  uint32_T Rsw_BitMask;                /* Mask Parameter: Rsw_BitMask
                                        * Referenced by: '<S296>/Rsw'
                                        */
  uint32_T Tol_BitMask;                /* Mask Parameter: Tol_BitMask
                                        * Referenced by: '<S296>/Tol'
                                        */
  uint32_T Rdy_BitMask;                /* Mask Parameter: Rdy_BitMask
                                        * Referenced by: '<S296>/Rdy'
                                        */
  uint32_T SIGNMAG_BitMask;            /* Mask Parameter: SIGNMAG_BitMask
                                        * Referenced by: '<S296>/SIGNMAG'
                                        */
  uint32_T Nclip_BitMask;              /* Mask Parameter: Nclip_BitMask
                                        * Referenced by: '<S296>/Nclip'
                                        */
  uint32_T Nclip_BitMask_j;            /* Mask Parameter: Nclip_BitMask_j
                                        * Referenced by: '<S296>/Nclip+'
                                        */
  uint32_T Nclip_BitMask_h;            /* Mask Parameter: Nclip_BitMask_h
                                        * Referenced by: '<S296>/Nclip-'
                                        */
  uint32_T Lim_BitMask;                /* Mask Parameter: Lim_BitMask
                                        * Referenced by: '<S296>/Lim+'
                                        */
  uint32_T IrdDig_BitMask;             /* Mask Parameter: IrdDig_BitMask
                                        * Referenced by: '<S296>/Ird-Dig'
                                        */
  uint32_T Iuserchd_BitMask;           /* Mask Parameter: Iuserchd_BitMask
                                        * Referenced by: '<S296>/Iuse-rchd'
                                        */
  uint32_T IrdN_BitMask;               /* Mask Parameter: IrdN_BitMask
                                        * Referenced by: '<S296>/Ird-N'
                                        */
  uint32_T Ird_TI_BitMask;             /* Mask Parameter: Ird_TI_BitMask
                                        * Referenced by: '<S296>/Ird_TI'
                                        */
  uint32_T Ird_TIR_BitMask;            /* Mask Parameter: Ird_TIR_BitMask
                                        * Referenced by: '<S296>/Ird_TIR'
                                        */
  uint32_T IrdTM_BitMask;              /* Mask Parameter: IrdTM_BitMask
                                        * Referenced by: '<S296>/Ird-TM'
                                        */
  uint32_T IrdANA_BitMask;             /* Mask Parameter: IrdANA_BitMask
                                        * Referenced by: '<S296>/Ird-ANA'
                                        */
  uint32_T Iwcns_BitMask;              /* Mask Parameter: Iwcns_BitMask
                                        * Referenced by: '<S296>/Iwcns'
                                        */
  uint32_T RFE_plus_BitMask;           /* Mask Parameter: RFE_plus_BitMask
                                        * Referenced by: '<S296>/RFE_plus'
                                        */
  uint32_T Lim_BitMask_e;              /* Mask Parameter: Lim_BitMask_e
                                        * Referenced by: '<S296>/Lim-'
                                        */
  uint32_T frei_BitMask;               /* Mask Parameter: frei_BitMask
                                        * Referenced by: '<S296>/frei'
                                        */
  uint32_T Handrad_BitMask;            /* Mask Parameter: Handrad_BitMask
                                        * Referenced by: '<S296>/Handrad'
                                        */
  uint32_T OK_BitMask;                 /* Mask Parameter: OK_BitMask
                                        * Referenced by: '<S296>/OK'
                                        */
  uint32_T Icns_BitMask;               /* Mask Parameter: Icns_BitMask
                                        * Referenced by: '<S296>/Icns'
                                        */
  uint32_T TNlim_BitMask;              /* Mask Parameter: TNlim_BitMask
                                        * Referenced by: '<S296>/T-Nlim'
                                        */
  uint32_T PN_BitMask;                 /* Mask Parameter: PN_BitMask
                                        * Referenced by: '<S296>/P-N'
                                        */
  uint32_T NI_BitMask;                 /* Mask Parameter: NI_BitMask
                                        * Referenced by: '<S296>/N-I'
                                        */
  uint32_T N0_BitMask;                 /* Mask Parameter: N0_BitMask
                                        * Referenced by: '<S296>/N0'
                                        */
  uint32_T uHz_BitMask_i;              /* Mask Parameter: uHz_BitMask_i
                                        * Referenced by: '<S373>/2Hz'
                                        */
  uint32_T Brk_BitMask_n;              /* Mask Parameter: Brk_BitMask_n
                                        * Referenced by: '<S373>/Brk'
                                        */
  uint32_T Cal_BitMask_h;              /* Mask Parameter: Cal_BitMask_h
                                        * Referenced by: '<S373>/Cal'
                                        */
  uint32_T Cal0_BitMask_a;             /* Mask Parameter: Cal0_BitMask_a
                                        * Referenced by: '<S373>/Cal0'
                                        */
  uint32_T Ena_BitMask_b;              /* Mask Parameter: Ena_BitMask_b
                                        * Referenced by: '<S373>/Ena'
                                        */
  uint32_T NCR0_BitMask_h;             /* Mask Parameter: NCR0_BitMask_h
                                        * Referenced by: '<S373>/NCR0'
                                        */
  uint32_T Rsw_BitMask_d;              /* Mask Parameter: Rsw_BitMask_d
                                        * Referenced by: '<S373>/Rsw'
                                        */
  uint32_T Tol_BitMask_l;              /* Mask Parameter: Tol_BitMask_l
                                        * Referenced by: '<S373>/Tol'
                                        */
  uint32_T Rdy_BitMask_d;              /* Mask Parameter: Rdy_BitMask_d
                                        * Referenced by: '<S373>/Rdy'
                                        */
  uint32_T SIGNMAG_BitMask_h;          /* Mask Parameter: SIGNMAG_BitMask_h
                                        * Referenced by: '<S373>/SIGNMAG'
                                        */
  uint32_T Nclip_BitMask_m;            /* Mask Parameter: Nclip_BitMask_m
                                        * Referenced by: '<S373>/Nclip'
                                        */
  uint32_T Nclip_BitMask_g;            /* Mask Parameter: Nclip_BitMask_g
                                        * Referenced by: '<S373>/Nclip+'
                                        */
  uint32_T Nclip_BitMask_e;            /* Mask Parameter: Nclip_BitMask_e
                                        * Referenced by: '<S373>/Nclip-'
                                        */
  uint32_T Lim_BitMask_a;              /* Mask Parameter: Lim_BitMask_a
                                        * Referenced by: '<S373>/Lim+'
                                        */
  uint32_T IrdDig_BitMask_e;           /* Mask Parameter: IrdDig_BitMask_e
                                        * Referenced by: '<S373>/Ird-Dig'
                                        */
  uint32_T Iuserchd_BitMask_c;         /* Mask Parameter: Iuserchd_BitMask_c
                                        * Referenced by: '<S373>/Iuse-rchd'
                                        */
  uint32_T IrdN_BitMask_p;             /* Mask Parameter: IrdN_BitMask_p
                                        * Referenced by: '<S373>/Ird-N'
                                        */
  uint32_T Ird_TI_BitMask_n;           /* Mask Parameter: Ird_TI_BitMask_n
                                        * Referenced by: '<S373>/Ird_TI'
                                        */
  uint32_T Ird_TIR_BitMask_k;          /* Mask Parameter: Ird_TIR_BitMask_k
                                        * Referenced by: '<S373>/Ird_TIR'
                                        */
  uint32_T IrdTM_BitMask_i;            /* Mask Parameter: IrdTM_BitMask_i
                                        * Referenced by: '<S373>/Ird-TM'
                                        */
  uint32_T IrdANA_BitMask_d;           /* Mask Parameter: IrdANA_BitMask_d
                                        * Referenced by: '<S373>/Ird-ANA'
                                        */
  uint32_T Iwcns_BitMask_a;            /* Mask Parameter: Iwcns_BitMask_a
                                        * Referenced by: '<S373>/Iwcns'
                                        */
  uint32_T RFE_plus_BitMask_g;         /* Mask Parameter: RFE_plus_BitMask_g
                                        * Referenced by: '<S373>/RFE_plus'
                                        */
  uint32_T Lim_BitMask_ee;             /* Mask Parameter: Lim_BitMask_ee
                                        * Referenced by: '<S373>/Lim-'
                                        */
  uint32_T frei_BitMask_e;             /* Mask Parameter: frei_BitMask_e
                                        * Referenced by: '<S373>/frei'
                                        */
  uint32_T Handrad_BitMask_a;          /* Mask Parameter: Handrad_BitMask_a
                                        * Referenced by: '<S373>/Handrad'
                                        */
  uint32_T OK_BitMask_k;               /* Mask Parameter: OK_BitMask_k
                                        * Referenced by: '<S373>/OK'
                                        */
  uint32_T Icns_BitMask_i;             /* Mask Parameter: Icns_BitMask_i
                                        * Referenced by: '<S373>/Icns'
                                        */
  uint32_T TNlim_BitMask_d;            /* Mask Parameter: TNlim_BitMask_d
                                        * Referenced by: '<S373>/T-Nlim'
                                        */
  uint32_T PN_BitMask_d;               /* Mask Parameter: PN_BitMask_d
                                        * Referenced by: '<S373>/P-N'
                                        */
  uint32_T NI_BitMask_g;               /* Mask Parameter: NI_BitMask_g
                                        * Referenced by: '<S373>/N-I'
                                        */
  uint32_T N0_BitMask_a;               /* Mask Parameter: N0_BitMask_a
                                        * Referenced by: '<S373>/N0'
                                        */
  uint32_T Difference_ICPrevInput;     /* Mask Parameter: Difference_ICPrevInput
                                        * Referenced by: '<S635>/UD'
                                        */
  uint16_T Difference2_ICPrevInput;    /* Mask Parameter: Difference2_ICPrevInput
                                        * Referenced by: '<S637>/UD'
                                        */
  uint16_T Difference1_ICPrevInput;    /* Mask Parameter: Difference1_ICPrevInput
                                        * Referenced by: '<S636>/UD'
                                        */
  boolean_T SRFlipFlop_initial_condition;/* Mask Parameter: SRFlipFlop_initial_condition
                                          * Referenced by: '<S539>/Memory'
                                          */
  boolean_T SRFlipFlop1_initial_condition;/* Mask Parameter: SRFlipFlop1_initial_condition
                                           * Referenced by: '<S540>/Memory'
                                           */
  boolean_T SRFlipFlop_initial_condition_f;/* Mask Parameter: SRFlipFlop_initial_condition_f
                                            * Referenced by: '<S560>/Memory'
                                            */
  boolean_T SRFlipFlop_initial_condition_i;/* Mask Parameter: SRFlipFlop_initial_condition_i
                                            * Referenced by: '<S578>/Memory'
                                            */
  boolean_T SRFlipFlop_initial_condition_l;/* Mask Parameter: SRFlipFlop_initial_condition_l
                                            * Referenced by: '<S581>/Memory'
                                            */
  boolean_T SRFlipFlop_initial_condition_k;/* Mask Parameter: SRFlipFlop_initial_condition_k
                                            * Referenced by: '<S618>/Memory'
                                            */
  boolean_T SRFlipFlop1_initial_condition_k;/* Mask Parameter: SRFlipFlop1_initial_condition_k
                                             * Referenced by: '<S619>/Memory'
                                             */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S696>/Delay Input1'
                                        */
  real_T TXstatus_Y0;                  /* Computed Parameter: TXstatus_Y0
                                        * Referenced by: '<S13>/TX status'
                                        */
  real_T TXtime_Y0;                    /* Computed Parameter: TXtime_Y0
                                        * Referenced by: '<S13>/TX time'
                                        */
  real_T TXdeltatime_Y0;               /* Computed Parameter: TXdeltatime_Y0
                                        * Referenced by: '<S13>/TX delta time'
                                        */
  real_T TXstatus_Y0_d;                /* Computed Parameter: TXstatus_Y0_d
                                        * Referenced by: '<S17>/TX status'
                                        */
  real_T TXtime_Y0_m;                  /* Computed Parameter: TXtime_Y0_m
                                        * Referenced by: '<S17>/TX time'
                                        */
  real_T TXdeltatime_Y0_l;             /* Computed Parameter: TXdeltatime_Y0_l
                                        * Referenced by: '<S17>/TX delta time'
                                        */
  real_T TXstatus_Y0_f;                /* Computed Parameter: TXstatus_Y0_f
                                        * Referenced by: '<S18>/TX status'
                                        */
  real_T TXtime_Y0_g;                  /* Computed Parameter: TXtime_Y0_g
                                        * Referenced by: '<S18>/TX time'
                                        */
  real_T TXdeltatime_Y0_n;             /* Computed Parameter: TXdeltatime_Y0_n
                                        * Referenced by: '<S18>/TX delta time'
                                        */
  real_T TXstatus_Y0_b;                /* Computed Parameter: TXstatus_Y0_b
                                        * Referenced by: '<S19>/TX status'
                                        */
  real_T TXtime_Y0_i;                  /* Computed Parameter: TXtime_Y0_i
                                        * Referenced by: '<S19>/TX time'
                                        */
  real_T TXdeltatime_Y0_h;             /* Computed Parameter: TXdeltatime_Y0_h
                                        * Referenced by: '<S19>/TX delta time'
                                        */
  real_T TXstatus_Y0_k;                /* Computed Parameter: TXstatus_Y0_k
                                        * Referenced by: '<S20>/TX status'
                                        */
  real_T TXtime_Y0_l;                  /* Computed Parameter: TXtime_Y0_l
                                        * Referenced by: '<S20>/TX time'
                                        */
  real_T TXdeltatime_Y0_e;             /* Computed Parameter: TXdeltatime_Y0_e
                                        * Referenced by: '<S20>/TX delta time'
                                        */
  real_T TXstatus_Y0_i;                /* Computed Parameter: TXstatus_Y0_i
                                        * Referenced by: '<S21>/TX status'
                                        */
  real_T TXtime_Y0_a;                  /* Computed Parameter: TXtime_Y0_a
                                        * Referenced by: '<S21>/TX time'
                                        */
  real_T TXdeltatime_Y0_a;             /* Computed Parameter: TXdeltatime_Y0_a
                                        * Referenced by: '<S21>/TX delta time'
                                        */
  real_T TXstatus_Y0_fi;               /* Computed Parameter: TXstatus_Y0_fi
                                        * Referenced by: '<S22>/TX status'
                                        */
  real_T TXtime_Y0_f;                  /* Computed Parameter: TXtime_Y0_f
                                        * Referenced by: '<S22>/TX time'
                                        */
  real_T TXdeltatime_Y0_ec;            /* Computed Parameter: TXdeltatime_Y0_ec
                                        * Referenced by: '<S22>/TX delta time'
                                        */
  real_T TXstatus_Y0_g;                /* Computed Parameter: TXstatus_Y0_g
                                        * Referenced by: '<S23>/TX status'
                                        */
  real_T TXtime_Y0_ie;                 /* Computed Parameter: TXtime_Y0_ie
                                        * Referenced by: '<S23>/TX time'
                                        */
  real_T TXdeltatime_Y0_g;             /* Computed Parameter: TXdeltatime_Y0_g
                                        * Referenced by: '<S23>/TX delta time'
                                        */
  real_T TXstatus_Y0_m;                /* Computed Parameter: TXstatus_Y0_m
                                        * Referenced by: '<S39>/TX status'
                                        */
  real_T TXtime_Y0_p;                  /* Computed Parameter: TXtime_Y0_p
                                        * Referenced by: '<S39>/TX time'
                                        */
  real_T TXdeltatime_Y0_ly;            /* Computed Parameter: TXdeltatime_Y0_ly
                                        * Referenced by: '<S39>/TX delta time'
                                        */
  real_T TXstatus_Y0_ik;               /* Computed Parameter: TXstatus_Y0_ik
                                        * Referenced by: '<S40>/TX status'
                                        */
  real_T TXtime_Y0_md;                 /* Computed Parameter: TXtime_Y0_md
                                        * Referenced by: '<S40>/TX time'
                                        */
  real_T TXdeltatime_Y0_lp;            /* Computed Parameter: TXdeltatime_Y0_lp
                                        * Referenced by: '<S40>/TX delta time'
                                        */
  real_T TXstatus_Y0_o;                /* Computed Parameter: TXstatus_Y0_o
                                        * Referenced by: '<S45>/TX status'
                                        */
  real_T TXtime_Y0_b;                  /* Computed Parameter: TXtime_Y0_b
                                        * Referenced by: '<S45>/TX time'
                                        */
  real_T TXdeltatime_Y0_p;             /* Computed Parameter: TXdeltatime_Y0_p
                                        * Referenced by: '<S45>/TX delta time'
                                        */
  real_T Deltatimelimit_Value;         /* Expression: 0.055
                                        * Referenced by: '<S65>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value;       /* Expression: 1
                                        * Referenced by: '<S65>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_h;       /* Expression: 0.055
                                        * Referenced by: '<S66>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_o;     /* Expression: 1
                                        * Referenced by: '<S66>/Prev. msg. sent value'
                                        */
  real_T Constant_Value;               /* Expression: hex2dec('3d')
                                        * Referenced by: '<S56>/Constant'
                                        */
  real_T Deltatimelimit_Value_n;       /* Expression: 2
                                        * Referenced by: '<S69>/Delta time limit'
                                        */
  real_T RateTransition_X0;            /* Expression: 0
                                        * Referenced by: '<S69>/Rate Transition'
                                        */
  real_T RateTransition1_X0;           /* Expression: 0
                                        * Referenced by: '<S69>/Rate Transition1'
                                        */
  real_T Prevmsgsentvalue_Value_m;     /* Expression: 1
                                        * Referenced by: '<S69>/Prev. msg. sent value'
                                        */
  real_T Constant1_Value;              /* Expression: hex2dec('3d')
                                        * Referenced by: '<S56>/Constant1'
                                        */
  real_T Deltatimelimit_Value_g;       /* Expression: 2
                                        * Referenced by: '<S70>/Delta time limit'
                                        */
  real_T RateTransition_X0_c;          /* Expression: 0
                                        * Referenced by: '<S70>/Rate Transition'
                                        */
  real_T RateTransition1_X0_c;         /* Expression: 0
                                        * Referenced by: '<S70>/Rate Transition1'
                                        */
  real_T Prevmsgsentvalue_Value_k;     /* Expression: 1
                                        * Referenced by: '<S70>/Prev. msg. sent value'
                                        */
  real_T TXstatus_Y0_ip;               /* Computed Parameter: TXstatus_Y0_ip
                                        * Referenced by: '<S71>/TX status'
                                        */
  real_T TXtime_Y0_i3;                 /* Computed Parameter: TXtime_Y0_i3
                                        * Referenced by: '<S71>/TX time'
                                        */
  real_T TXdeltatime_Y0_i;             /* Computed Parameter: TXdeltatime_Y0_i
                                        * Referenced by: '<S71>/TX delta time'
                                        */
  real_T Motor1_Temp_Y0;               /* Computed Parameter: Motor1_Temp_Y0
                                        * Referenced by: '<S295>/Motor1_Temp'
                                        */
  real_T Motor1_Temp_Raw_Y0;           /* Computed Parameter: Motor1_Temp_Raw_Y0
                                        * Referenced by: '<S295>/Motor1_Temp_Raw '
                                        */
  real_T Constant2_Value;              /* Expression: 37175
                                        * Referenced by: '<S295>/Constant2'
                                        */
  real_T Gain_Gain;                    /* Expression: 4700
                                        * Referenced by: '<S295>/Gain'
                                        */
  real_T Tempcorrespondingresistance_tab[23];/* Expression: [-50,-40,-30,-20,-10,0,10,20,25,30,40,50,60,70,80,90,100,110,120,125,130,140,150]
                                              * Referenced by: '<S295>/Temp. corresponding  resistance'
                                              */
  real_T Tempcorrespondingresistance_bp0[23];/* Expression: [1030,1135,1247,1367,1495,1630,1772,1922,2000,2080,2245,2417,2597,2785,2980,3182,3392,3607,3817,3915,4008,4166,4280]
                                              * Referenced by: '<S295>/Temp. corresponding  resistance'
                                              */
  real_T Drehzahlin1minU1_Y0;          /* Computed Parameter: Drehzahlin1minU1_Y0
                                        * Referenced by: '<S288>/Drehzahl in 1//min U1'
                                        */
  real_T MotorleistunginWU1_Y0;        /* Computed Parameter: MotorleistunginWU1_Y0
                                        * Referenced by: '<S288>/Motorleistung in W U1'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S304>/Constant'
                                        */
  real_T TFilterDrehzahl_Value;        /* Expression: 0.01
                                        * Referenced by: '<S288>/TFilterDrehzahl'
                                        */
  real_T WeightedSampleTime_WtEt;      /* Computed Parameter: WeightedSampleTime_WtEt
                                        * Referenced by: '<S304>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_i;            /* Expression: 1
                                        * Referenced by: '<S304>/Constant2'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S288>/Constant1'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S302>/Memory'
                                        */
  real_T upi60_Gain;                   /* Expression: 1.8*6.283185 / 60
                                        * Referenced by: '<S288>/2*pi // 60'
                                        */
  real_T StrangstromI_rmsinAU1_Y0;     /* Computed Parameter: StrangstromI_rmsinAU1_Y0
                                        * Referenced by: '<S299>/Strangstrom I_rms in A U1'
                                        */
  real_T DrehmomentMinNmU1_Y0;         /* Computed Parameter: DrehmomentMinNmU1_Y0
                                        * Referenced by: '<S299>/Drehmoment M in Nm U1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 560
                                        * Referenced by: '<S299>/Constant2'
                                        */
  real_T DrehmomentStrangstrominNmArms_G;/* Expression: 0.75
                                          * Referenced by: '<S299>/Drehmoment // Strangstrom in Nm//Arms'
                                          */
  real_T Motor1_Temp_Y0_l;             /* Computed Parameter: Motor1_Temp_Y0_l
                                        * Referenced by: '<S372>/Motor1_Temp'
                                        */
  real_T Motor1_R_Y0;                  /* Computed Parameter: Motor1_R_Y0
                                        * Referenced by: '<S372>/Motor1_R '
                                        */
  real_T Constant2_Value_e;            /* Expression: 37175
                                        * Referenced by: '<S372>/Constant2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 4700
                                        * Referenced by: '<S372>/Gain'
                                        */
  real_T Tempcorrespondingresistance_t_h[23];/* Expression: [-50,-40,-30,-20,-10,0,10,20,25,30,40,50,60,70,80,90,100,110,120,125,130,140,150]
                                              * Referenced by: '<S372>/Temp. corresponding  resistance'
                                              */
  real_T Tempcorrespondingresistance_b_f[23];/* Expression: [1030,1135,1247,1367,1495,1630,1772,1922,2000,2080,2245,2417,2597,2785,2980,3182,3392,3607,3817,3915,4008,4166,4280]
                                              * Referenced by: '<S372>/Temp. corresponding  resistance'
                                              */
  real_T Drehzahlin1minU1_Y0_d;        /* Computed Parameter: Drehzahlin1minU1_Y0_d
                                        * Referenced by: '<S368>/Drehzahl in 1//min U1'
                                        */
  real_T MotorleistunginWU1_Y0_i;      /* Computed Parameter: MotorleistunginWU1_Y0_i
                                        * Referenced by: '<S368>/Motorleistung in W U1'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S381>/Constant'
                                        */
  real_T TFilterDrehzahl_Value_n;      /* Expression: 0.01
                                        * Referenced by: '<S368>/TFilterDrehzahl'
                                        */
  real_T WeightedSampleTime_WtEt_p;    /* Computed Parameter: WeightedSampleTime_WtEt_p
                                        * Referenced by: '<S381>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_j;            /* Expression: 1
                                        * Referenced by: '<S381>/Constant2'
                                        */
  real_T Constant1_Value_f;            /* Expression: -1
                                        * Referenced by: '<S368>/Constant1'
                                        */
  real_T Memory_X0_p;                  /* Expression: 0
                                        * Referenced by: '<S379>/Memory'
                                        */
  real_T up60i_Gain;                   /* Expression: 1.8*6.283185 / 60
                                        * Referenced by: '<S368>/2*p // 60i'
                                        */
  real_T StrangstromI_rmsinAU1_Y0_d;   /* Computed Parameter: StrangstromI_rmsinAU1_Y0_d
                                        * Referenced by: '<S376>/Strangstrom I_rms in A U1'
                                        */
  real_T DrehmomentMinNmU1_Y0_g;       /* Computed Parameter: DrehmomentMinNmU1_Y0_g
                                        * Referenced by: '<S376>/Drehmoment M in Nm U1'
                                        */
  real_T Constant2_Value_l;            /* Expression: 560
                                        * Referenced by: '<S376>/Constant2'
                                        */
  real_T DrehmomentStrangstrominNmArms_c;/* Expression: 0.75
                                          * Referenced by: '<S376>/Drehmoment // Strangstrom in Nm//Arms'
                                          */
  real_T LEDgelb_Value;                /* Expression: 3
                                        * Referenced by: '<S562>/LED gelb'
                                        */
  real_T LEDgruen_Value;               /* Expression: 2
                                        * Referenced by: '<S562>/LED gruen'
                                        */
  real_T LEDrot_Value;                 /* Expression: 1
                                        * Referenced by: '<S562>/LED rot'
                                        */
  real_T LEDaus_Value;                 /* Expression: 0
                                        * Referenced by: '<S562>/LED aus'
                                        */
  real_T LEDFarbe_Value;               /* Expression: 3
                                        * Referenced by: '<S525>/LED Farbe'
                                        */
  real_T Safety1_Value;                /* Expression: 0
                                        * Referenced by: '<S571>/Safety1'
                                        */
  real_T Constant1_Value_o;            /* Expression: Strecke_Endu_km
                                        * Referenced by: '<S571>/Constant1'
                                        */
  real_T Constant_Value_f;             /* Expression: Kapazitaet_HV_Battery_kWh
                                        * Referenced by: '<S571>/Constant'
                                        */
  real_T kWhWh_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S571>/kWh->Wh'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 10
                                        * Referenced by: '<S571>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S571>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S576>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S576>/Saturation1'
                                        */
  real_T Saturation1_UpperSat_b;       /* Expression: 1
                                        * Referenced by: '<S579>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S579>/Saturation1'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S591>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S586>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S606>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S601>/Constant'
                                        */
  real_T Cubatt_Value;                 /* Expression: 0
                                        * Referenced by: '<S527>/Cubatt'
                                        */
  real_T Constant_Value_n;             /* Expression: hex2dec('AA')
                                        * Referenced by: '<S623>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: hex2dec('AA')
                                        * Referenced by: '<S624>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 2
                                        * Referenced by: '<S626>/Constant3'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/100
                                        * Referenced by: '<S626>/Gain'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S626>/Constant'
                                        */
  real_T VolleLfterleistung2_Value;    /* Expression: 0
                                        * Referenced by: '<S533>/Volle Lüfterleistung2'
                                        */
  real_T VolleLfterleistung1_Value;    /* Expression: 1.0
                                        * Referenced by: '<S533>/Volle Lüfterleistung1'
                                        */
  real_T VolleLfterleistung_Value;     /* Expression: 1.0
                                        * Referenced by: '<S533>/Volle Lüfterleistung'
                                        */
  real_T CP1Ch4Lfter_Value;            /* Expression: 0
                                        * Referenced by: '<S533>/CP1Ch4 Lüfter'
                                        */
  real_T uDLookupTable_tableData[8];   /* Expression: [0.2,0.2,0.2,0.4,0.6,0.8,1,1]
                                        * Referenced by: '<S533>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [0,20,28,35,40,45,50,100]
                                        * Referenced by: '<S533>/1-D Lookup Table'
                                        */
  real_T CP1Ch3Wasserpumpe_Value;      /* Expression: 0
                                        * Referenced by: '<S533>/CP1Ch3 Wasserpumpe'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 255
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T Deltatimelimit_Value_k;       /* Expression: 0.055
                                        * Referenced by: '<S14>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_ov;    /* Expression: 1
                                        * Referenced by: '<S14>/Prev. msg. sent value'
                                        */
  real_T Gain2_Gain;                   /* Expression: 1/255
                                        * Referenced by: '<S85>/Gain2'
                                        */
  real_T Constant_Value_af;            /* Expression: 0
                                        * Referenced by: '<S700>/Constant'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/255
                                        * Referenced by: '<S84>/Gain1'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 1/255
                                        * Referenced by: '<S84>/Gain'
                                        */
  real_T Gain_Gain_df;                 /* Expression: 1/255
                                        * Referenced by: '<S85>/Gain'
                                        */
  real_T Gain_Gain_dq;                 /* Expression: 1/255
                                        * Referenced by: '<S86>/Gain'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 1/255
                                        * Referenced by: '<S86>/Gain1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1/255
                                        * Referenced by: '<S78>/Gain4'
                                        */
  real_T Step_Time;                    /* Expression: 5
                                        * Referenced by: '<S523>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S523>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S523>/Step'
                                        */
  real_T InvCorrection_Gain;           /* Expression: 1.11764706
                                        * Referenced by: '<S286>/InvCorrection'
                                        */
  real_T Drive_Mode_Value;             /* Expression: Drive_Mode
                                        * Referenced by: '<S535>/Drive_Mode'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S550>/Constant'
                                        */
  real_T TFilterGas1_Value;            /* Expression: 0.1
                                        * Referenced by: '<S524>/TFilterGas1'
                                        */
  real_T WeightedSampleTime_WtEt_pu;   /* Computed Parameter: WeightedSampleTime_WtEt_pu
                                        * Referenced by: '<S550>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_d;            /* Expression: 1
                                        * Referenced by: '<S550>/Constant2'
                                        */
  real_T Constant1_Value_fr;           /* Expression: 1
                                        * Referenced by: '<S524>/Constant1'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S545>/Memory'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: 255
                                        * Referenced by: '<S7>/Gain2'
                                        */
  real_T Deltatimelimit_Value_nx;      /* Expression: 0.055
                                        * Referenced by: '<S24>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_om;    /* Expression: 1
                                        * Referenced by: '<S24>/Prev. msg. sent value'
                                        */
  real_T Gain3_Gain;                   /* Expression: 255
                                        * Referenced by: '<S7>/Gain3'
                                        */
  real_T Deltatimelimit_Value_m;       /* Expression: 0.055
                                        * Referenced by: '<S25>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mx;    /* Expression: 1
                                        * Referenced by: '<S25>/Prev. msg. sent value'
                                        */
  real_T Gain4_Gain_d;                 /* Expression: 255
                                        * Referenced by: '<S7>/Gain4'
                                        */
  real_T Deltatimelimit_Value_nm;      /* Expression: 0.055
                                        * Referenced by: '<S26>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_j;     /* Expression: 1
                                        * Referenced by: '<S26>/Prev. msg. sent value'
                                        */
  real_T Constant_Value_fs;            /* Expression: 1
                                        * Referenced by: '<S693>/Constant'
                                        */
  real_T TPumpe_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S533>/TPumpe'
                                        */
  real_T WeightedSampleTime_WtEt_j;    /* Computed Parameter: WeightedSampleTime_WtEt_j
                                        * Referenced by: '<S693>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_g;            /* Expression: 1
                                        * Referenced by: '<S693>/Constant2'
                                        */
  real_T KPumpe_Value;                 /* Expression: 1
                                        * Referenced by: '<S533>/KPumpe'
                                        */
  real_T PumpeManEntlueften_Value;     /* Expression: 0
                                        * Referenced by: '<S533>/PumpeMan//Entlueften'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S533>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S533>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S533>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S533>/Pulse Generator'
                                        */
  real_T PumpeManAut_Value;            /* Expression: 0
                                        * Referenced by: '<S533>/PumpeMan//Aut'
                                        */
  real_T Memory_X0_h;                  /* Expression: 0
                                        * Referenced by: '<S681>/Memory'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S533>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S533>/Saturation2'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 255
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Deltatimelimit_Value_l;       /* Expression: 0.055
                                        * Referenced by: '<S27>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_je;    /* Expression: 1
                                        * Referenced by: '<S27>/Prev. msg. sent value'
                                        */
  real_T Constant_Value_bj;            /* Expression: 1
                                        * Referenced by: '<S692>/Constant'
                                        */
  real_T Tluefter_Value;               /* Expression: 0.5
                                        * Referenced by: '<S533>/Tluefter'
                                        */
  real_T WeightedSampleTime_WtEt_a;    /* Computed Parameter: WeightedSampleTime_WtEt_a
                                        * Referenced by: '<S692>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S692>/Constant2'
                                        */
  real_T KLuefter_Value;               /* Expression: 1
                                        * Referenced by: '<S533>/KLuefter'
                                        */
  real_T LfterManAut_Value;            /* Expression: 0
                                        * Referenced by: '<S533>/LüfterMan//Aut'
                                        */
  real_T T_SOLL_Value;                 /* Expression: KW_T_Soll
                                        * Referenced by: '<S533>/T_SOLL'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S679>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S679>/Integrator'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 1
                                        * Referenced by: '<S533>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S533>/Saturation'
                                        */
  real_T Memory_X0_l;                  /* Expression: 0
                                        * Referenced by: '<S680>/Memory'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 1
                                        * Referenced by: '<S533>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_c;       /* Expression: 0
                                        * Referenced by: '<S533>/Saturation1'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 255
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real_T Deltatimelimit_Value_m5;      /* Expression: 0.055
                                        * Referenced by: '<S28>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_jej;   /* Expression: 1
                                        * Referenced by: '<S28>/Prev. msg. sent value'
                                        */
  real_T Gain5_Gain;                   /* Expression: 255
                                        * Referenced by: '<S7>/Gain5'
                                        */
  real_T Deltatimelimit_Value_o;       /* Expression: 0.055
                                        * Referenced by: '<S29>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mxc;   /* Expression: 1
                                        * Referenced by: '<S29>/Prev. msg. sent value'
                                        */
  real_T Gain6_Gain;                   /* Expression: 255
                                        * Referenced by: '<S7>/Gain6'
                                        */
  real_T Deltatimelimit_Value_oc;      /* Expression: 0.055
                                        * Referenced by: '<S30>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_g;     /* Expression: 1
                                        * Referenced by: '<S30>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_i;       /* Expression: 0.055
                                        * Referenced by: '<S37>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_p;     /* Expression: 1
                                        * Referenced by: '<S37>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_e;       /* Expression: 0.055
                                        * Referenced by: '<S35>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mb;    /* Expression: 1
                                        * Referenced by: '<S35>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_f;       /* Expression: 0.055
                                        * Referenced by: '<S36>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_ky;    /* Expression: 1
                                        * Referenced by: '<S36>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_p;       /* Expression: 0.055
                                        * Referenced by: '<S38>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_ka;    /* Expression: 1
                                        * Referenced by: '<S38>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_c;       /* Expression: 0.055
                                        * Referenced by: '<S46>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_a;     /* Expression: 1
                                        * Referenced by: '<S46>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_d;       /* Expression: 0.055
                                        * Referenced by: '<S47>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_c;     /* Expression: 1
                                        * Referenced by: '<S47>/Prev. msg. sent value'
                                        */
  real_T Constant1_Value_c;            /* Expression: M_max
                                        * Referenced by: '<S526>/Constant1'
                                        */
  real_T Deltatimelimit_Value_ly;      /* Expression: 0.055
                                        * Referenced by: '<S48>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_l;     /* Expression: 1
                                        * Referenced by: '<S48>/Prev. msg. sent value'
                                        */
  real_T PulseGenerator_Amp_p;         /* Expression: 1
                                        * Referenced by: '<S562>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_i;      /* Computed Parameter: PulseGenerator_Period_i
                                        * Referenced by: '<S562>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_p;        /* Computed Parameter: PulseGenerator_Duty_p
                                        * Referenced by: '<S562>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_l;  /* Expression: 0
                                        * Referenced by: '<S562>/Pulse Generator'
                                        */
  real_T Deltatimelimit_Value_mc;      /* Expression: 0.055
                                        * Referenced by: '<S49>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_b;     /* Expression: 1
                                        * Referenced by: '<S49>/Prev. msg. sent value'
                                        */
  real_T Constant_Value_hx[2];         /* Expression: [0;0]
                                        * Referenced by: '<S531>/Constant'
                                        */
  real_T Constant_Value_e4;            /* Expression: 1
                                        * Referenced by: '<S561>/Constant'
                                        */
  real_T TPlaus_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S546>/TPlaus'
                                        */
  real_T WeightedSampleTime_WtEt_b;    /* Computed Parameter: WeightedSampleTime_WtEt_b
                                        * Referenced by: '<S561>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_c;            /* Expression: 1
                                        * Referenced by: '<S561>/Constant2'
                                        */
  real_T KPlaus_Value;                 /* Expression: 1
                                        * Referenced by: '<S546>/KPlaus'
                                        */
  real_T Memory_X0_b;                  /* Expression: 0
                                        * Referenced by: '<S559>/Memory'
                                        */
  real_T GasTimeout_Value;             /* Expression: 500
                                        * Referenced by: '<S84>/GasTimeout'
                                        */
  real_T BremseTimeout_Value;          /* Expression: 500
                                        * Referenced by: '<S84>/BremseTimeout'
                                        */
  real_T DrehzahlTimeout_Value;        /* Expression: 1100
                                        * Referenced by: '<S85>/DrehzahlTimeout'
                                        */
  real_T GyroTimeout_Value;            /* Expression: 1000
                                        * Referenced by: '<S82>/Gyro Timeout'
                                        */
  real_T M_max_Value;                  /* Expression: M_max
                                        * Referenced by: '<S570>/M_max'
                                        */
  real_T Constant_Value_hb;            /* Expression: 1
                                        * Referenced by: '<S622>/Constant'
                                        */
  real_T TFilterTorqueRise_Value;      /* Expression: 0.1
                                        * Referenced by: '<S570>/TFilterTorqueRise'
                                        */
  real_T Gain_Gain_lc;                 /* Expression: 1/i_Getriebe
                                        * Referenced by: '<S530>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S530>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S530>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: TC_Relay_On
                                        * Referenced by: '<S576>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: TC_Relay_Off
                                        * Referenced by: '<S576>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S576>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S576>/Relay'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S576>/Delay'
                                        */
  real_T Constant_Value_nb;            /* Expression: 1
                                        * Referenced by: '<S633>/Constant'
                                        */
  real_T TFilterGas1_Value_f;          /* Expression: 0.1
                                        * Referenced by: '<S626>/TFilterGas1'
                                        */
  real_T WeightedSampleTime_WtEt_f;    /* Computed Parameter: WeightedSampleTime_WtEt_f
                                        * Referenced by: '<S633>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_f;            /* Expression: 1
                                        * Referenced by: '<S633>/Constant2'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S626>/Constant1'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: 100
                                        * Referenced by: '<S626>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S626>/Saturation'
                                        */
  real_T Memory_X0_lp;                 /* Expression: 0
                                        * Referenced by: '<S630>/Memory'
                                        */
  real_T Constant_Value_cr;            /* Expression: 1
                                        * Referenced by: '<S634>/Constant'
                                        */
  real_T TFilterGas2_Value;            /* Expression: 0.1
                                        * Referenced by: '<S626>/TFilterGas2'
                                        */
  real_T WeightedSampleTime_WtEt_m;    /* Computed Parameter: WeightedSampleTime_WtEt_m
                                        * Referenced by: '<S634>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S634>/Constant2'
                                        */
  real_T Constant2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S626>/Constant2'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 100
                                        * Referenced by: '<S626>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S626>/Saturation1'
                                        */
  real_T Memory_X0_n;                  /* Expression: 0
                                        * Referenced by: '<S631>/Memory'
                                        */
  real_T Saturation01_UpperSat;        /* Expression: 1
                                        * Referenced by: '<S528>/Saturation 0-1'
                                        */
  real_T Saturation01_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S528>/Saturation 0-1'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 1
                                        * Referenced by: '<S576>/Saturation'
                                        */
  real_T Saturation_LowerSat_ji;       /* Expression: 0
                                        * Referenced by: '<S576>/Saturation'
                                        */
  real_T Constant2_Value_gz;           /* Expression: TC_On
                                        * Referenced by: '<S526>/Constant2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S566>/Switch'
                                        */
  real_T Constant2_Value_m;            /* Expression: TV_Mode
                                        * Referenced by: '<S568>/Constant2'
                                        */
  real_T muRoad_Value;                 /* Expression: 1.6
                                        * Referenced by: '<S586>/muRoad'
                                        */
  real_T Gravity_Gain;                 /* Expression: 9.81
                                        * Referenced by: '<S586>/Gravity'
                                        */
  real_T Override_Gain;                /* Expression: TV_Override
                                        * Referenced by: '<S586>/Override'
                                        */
  real_T vomegar_Gain;                 /* Expression: 0.5 * 2* pi *(1/60)*Reifenradius
                                        * Referenced by: '<S530>/v = omega*r'
                                        */
  real_T mskmh_Gain;                   /* Expression: 3.6
                                        * Referenced by: '<S530>/m//s -> km//h'
                                        */
  real_T kmhms_Gain;                   /* Expression: 1/3.6
                                        * Referenced by: '<S568>/kmh-ms'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S586>/Switch'
                                        */
  real_T GyroZeroOffset_Value;         /* Expression: 0
                                        * Referenced by: '<S80>/Gyro Zero Offset'
                                        */
  real_T Bitdegs_Gain;                 /* Expression: 1
                                        * Referenced by: '<S80>/Bit-->deg//s'
                                        */
  real_T degrad_Gain;                  /* Expression: 2*pi/360
                                        * Referenced by: '<S568>/deg-rad'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S586>/Gain'
                                        */
  real_T LookupTable_XData[13];        /* Expression: [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1,2,3,4]
                                        * Referenced by: '<S586>/Lookup Table'
                                        */
  real_T LookupTable_YData[13];        /* Expression: [0,0,0.05,0.1,0.2,0.3,0.4,0.5,0.6,0.7,1,1,1]
                                        * Referenced by: '<S586>/Lookup Table'
                                        */
  real_T Gain1_Gain_j5;                /* Expression: M_max
                                        * Referenced by: '<S586>/Gain1'
                                        */
  real_T LenkwinkelRadeinschlagwinkel_Ga;/* Expression: 1/i_Lenkgetriebe
                                          * Referenced by: '<S568>/Lenkwinkel-->Radeinschlagwinkel'
                                          */
  real_T degrad1_Gain;                 /* Expression: 2*pi/360
                                        * Referenced by: '<S568>/deg-rad1'
                                        */
  real_T Radstand_Value;               /* Expression: lr+lf
                                        * Referenced by: '<S587>/Radstand'
                                        */
  real_T Eigenlenkgradient_Value;      /* Expression: m*(cr*lr-cf*lf)/(cr*cf*(lr+lf))
                                        * Referenced by: '<S587>/Eigenlenkgradient'
                                        */
  real_T Faktor_Value;                 /* Expression: 1
                                        * Referenced by: '<S587>/Faktor'
                                        */
  real_T Gravity2_Gain;                /* Expression: K_SET
                                        * Referenced by: '<S568>/Gravity2'
                                        */
  real_T emGM_A;                       /* Computed Parameter: emGM_A
                                        * Referenced by: '<S582>/em*GM'
                                        */
  real_T emGM_C;                       /* Computed Parameter: emGM_C
                                        * Referenced by: '<S582>/em*GM'
                                        */
  real_T emGMX_A;                      /* Computed Parameter: emGMX_A
                                        * Referenced by: '<S582>/em*GM*X²'
                                        */
  real_T emGMX_C;                      /* Computed Parameter: emGMX_C
                                        * Referenced by: '<S582>/em*GM*X²'
                                        */
  real_T ModelReference4_A;            /* Computed Parameter: ModelReference4_A
                                        * Referenced by: '<S584>/ModelReference4'
                                        */
  real_T ModelReference4_C;            /* Computed Parameter: ModelReference4_C
                                        * Referenced by: '<S584>/ModelReference4'
                                        */
  real_T ModelReference2_A;            /* Computed Parameter: ModelReference2_A
                                        * Referenced by: '<S584>/ModelReference2'
                                        */
  real_T ModelReference2_C;            /* Computed Parameter: ModelReference2_C
                                        * Referenced by: '<S584>/ModelReference2'
                                        */
  real_T ModelReference4_A_j;          /* Computed Parameter: ModelReference4_A_j
                                        * Referenced by: '<S583>/ModelReference4'
                                        */
  real_T ModelReference4_C_e;          /* Computed Parameter: ModelReference4_C_e
                                        * Referenced by: '<S583>/ModelReference4'
                                        */
  real_T ModelReference2_A_g;          /* Computed Parameter: ModelReference2_A_g
                                        * Referenced by: '<S583>/ModelReference2'
                                        */
  real_T ModelReference2_C_l;          /* Computed Parameter: ModelReference2_C_l
                                        * Referenced by: '<S583>/ModelReference2'
                                        */
  real_T ModelReference1_A;            /* Computed Parameter: ModelReference1_A
                                        * Referenced by: '<S583>/ModelReference1'
                                        */
  real_T ModelReference1_C;            /* Computed Parameter: ModelReference1_C
                                        * Referenced by: '<S583>/ModelReference1'
                                        */
  real_T RateTransition1_X0_k;         /* Expression: 0
                                        * Referenced by: '<S591>/Rate Transition1'
                                        */
  real_T Saturation_UpperSat_ol;       /* Expression: M_max
                                        * Referenced by: '<S585>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -M_max
                                        * Referenced by: '<S585>/Saturation'
                                        */
  real_T Gainlinks_Gain;               /* Expression: 1
                                        * Referenced by: '<S588>/Gain links'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 0
                                        * Referenced by: '<S585>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_ar;      /* Expression: -M_max
                                        * Referenced by: '<S585>/Saturation1'
                                        */
  real_T Constant3_Value_p;            /* Expression: 0
                                        * Referenced by: '<S568>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: TV_On
                                        * Referenced by: '<S568>/Constant4'
                                        */
  real_T GyroTimeout_Value_e;          /* Expression: 1000
                                        * Referenced by: '<S80>/Gyro Timeout'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S568>/Constant1'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: -g
                                        * Referenced by: '<S526>/Gain2'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 0
                                        * Referenced by: '<S526>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: -M_max
                                        * Referenced by: '<S526>/Saturation'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: M_max
                                        * Referenced by: '<S526>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S526>/Saturation1'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 1/i_Getriebe
                                        * Referenced by: '<S530>/Gain1'
                                        */
  real_T Saturation1_UpperSat_b4;      /* Expression: 1
                                        * Referenced by: '<S530>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_e;       /* Expression: 0
                                        * Referenced by: '<S530>/Saturation1'
                                        */
  real_T Relay_OnVal_c;                /* Expression: TC_Relay_On
                                        * Referenced by: '<S579>/Relay'
                                        */
  real_T Relay_OffVal_g;               /* Expression: TC_Relay_Off
                                        * Referenced by: '<S579>/Relay'
                                        */
  real_T Relay_YOn_p;                  /* Expression: 1
                                        * Referenced by: '<S579>/Relay'
                                        */
  real_T Relay_YOff_i;                 /* Expression: 0
                                        * Referenced by: '<S579>/Relay'
                                        */
  real_T Delay_InitialCondition_n;     /* Expression: 0
                                        * Referenced by: '<S579>/Delay'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 1
                                        * Referenced by: '<S579>/Saturation'
                                        */
  real_T Saturation_LowerSat_ax;       /* Expression: 0
                                        * Referenced by: '<S579>/Saturation'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S567>/Switch'
                                        */
  real_T Constant2_Value_k;            /* Expression: TV_Mode
                                        * Referenced by: '<S569>/Constant2'
                                        */
  real_T muRoad_Value_e;               /* Expression: 1.6
                                        * Referenced by: '<S601>/muRoad'
                                        */
  real_T Gravity_Gain_i;               /* Expression: 9.81
                                        * Referenced by: '<S601>/Gravity'
                                        */
  real_T Override_Gain_i;              /* Expression: TV_Override
                                        * Referenced by: '<S601>/Override'
                                        */
  real_T kmhms_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S569>/kmh-ms'
                                        */
  real_T Switch_Threshold_i;           /* Expression: 0
                                        * Referenced by: '<S601>/Switch'
                                        */
  real_T degrad_Gain_n;                /* Expression: 2*pi/360
                                        * Referenced by: '<S569>/deg-rad'
                                        */
  real_T Gain_Gain_c;                  /* Expression: -1
                                        * Referenced by: '<S601>/Gain'
                                        */
  real_T LookupTable_XData_m[13];      /* Expression: [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1,2,3,4]
                                        * Referenced by: '<S601>/Lookup Table'
                                        */
  real_T LookupTable_YData_a[13];      /* Expression: [0,0,0.05,0.1,0.2,0.3,0.4,0.5,0.6,0.7,1,1,1]
                                        * Referenced by: '<S601>/Lookup Table'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: M_max
                                        * Referenced by: '<S601>/Gain1'
                                        */
  real_T LenkwinkelRadeinschlagwinkel__j;/* Expression: 1/i_Lenkgetriebe
                                          * Referenced by: '<S569>/Lenkwinkel-->Radeinschlagwinkel'
                                          */
  real_T degrad1_Gain_c;               /* Expression: 2*pi/360
                                        * Referenced by: '<S569>/deg-rad1'
                                        */
  real_T Radstand_Value_n;             /* Expression: lr+lf
                                        * Referenced by: '<S602>/Radstand'
                                        */
  real_T Eigenlenkgradient_Value_m;    /* Expression: m*(cr*lr-cf*lf)/(cr*cf*(lr+lf))
                                        * Referenced by: '<S602>/Eigenlenkgradient'
                                        */
  real_T Faktor_Value_n;               /* Expression: 1
                                        * Referenced by: '<S602>/Faktor'
                                        */
  real_T Gravity2_Gain_e;              /* Expression: K_SET
                                        * Referenced by: '<S569>/Gravity2'
                                        */
  real_T emGM_A_e;                     /* Computed Parameter: emGM_A_e
                                        * Referenced by: '<S597>/em*GM'
                                        */
  real_T emGM_C_i;                     /* Computed Parameter: emGM_C_i
                                        * Referenced by: '<S597>/em*GM'
                                        */
  real_T emGMX_A_c;                    /* Computed Parameter: emGMX_A_c
                                        * Referenced by: '<S597>/em*GM*X²'
                                        */
  real_T emGMX_C_m;                    /* Computed Parameter: emGMX_C_m
                                        * Referenced by: '<S597>/em*GM*X²'
                                        */
  real_T ModelReference4_A_p;          /* Computed Parameter: ModelReference4_A_p
                                        * Referenced by: '<S599>/ModelReference4'
                                        */
  real_T ModelReference4_C_m;          /* Computed Parameter: ModelReference4_C_m
                                        * Referenced by: '<S599>/ModelReference4'
                                        */
  real_T ModelReference2_A_k;          /* Computed Parameter: ModelReference2_A_k
                                        * Referenced by: '<S599>/ModelReference2'
                                        */
  real_T ModelReference2_C_g;          /* Computed Parameter: ModelReference2_C_g
                                        * Referenced by: '<S599>/ModelReference2'
                                        */
  real_T ModelReference4_A_c;          /* Computed Parameter: ModelReference4_A_c
                                        * Referenced by: '<S598>/ModelReference4'
                                        */
  real_T ModelReference4_C_c;          /* Computed Parameter: ModelReference4_C_c
                                        * Referenced by: '<S598>/ModelReference4'
                                        */
  real_T ModelReference2_A_f;          /* Computed Parameter: ModelReference2_A_f
                                        * Referenced by: '<S598>/ModelReference2'
                                        */
  real_T ModelReference2_C_a;          /* Computed Parameter: ModelReference2_C_a
                                        * Referenced by: '<S598>/ModelReference2'
                                        */
  real_T ModelReference1_A_n;          /* Computed Parameter: ModelReference1_A_n
                                        * Referenced by: '<S598>/ModelReference1'
                                        */
  real_T ModelReference1_C_a;          /* Computed Parameter: ModelReference1_C_a
                                        * Referenced by: '<S598>/ModelReference1'
                                        */
  real_T RateTransition1_X0_a;         /* Expression: 0
                                        * Referenced by: '<S606>/Rate Transition1'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: M_max
                                        * Referenced by: '<S600>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -M_max
                                        * Referenced by: '<S600>/Saturation'
                                        */
  real_T Gainrechts_Gain;              /* Expression: 1
                                        * Referenced by: '<S603>/Gain rechts'
                                        */
  real_T Saturation1_UpperSat_i4;      /* Expression: 0
                                        * Referenced by: '<S600>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a1;      /* Expression: -M_max
                                        * Referenced by: '<S600>/Saturation1'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S569>/Constant3'
                                        */
  real_T Constant4_Value_b;            /* Expression: TV_On
                                        * Referenced by: '<S569>/Constant4'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S569>/Constant1'
                                        */
  real_T Gain4_Gain_i;                 /* Expression: g
                                        * Referenced by: '<S526>/Gain4'
                                        */
  real_T Saturation2_UpperSat_f;       /* Expression: 0
                                        * Referenced by: '<S526>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_c;       /* Expression: -M_max
                                        * Referenced by: '<S526>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: M_max
                                        * Referenced by: '<S526>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S526>/Saturation3'
                                        */
  real_T u1Abit_Gain;                  /* Expression: 1/10
                                        * Referenced by: '<S84>/0,1 A//bit'
                                        */
  real_T Constant2_Value_n;            /* Expression: HV_Power_max
                                        * Referenced by: '<S563>/Constant2'
                                        */
  real_T u80_UpperSat;                 /* Expression: 80
                                        * Referenced by: '<S563>/0-80'
                                        */
  real_T u80_LowerSat;                 /* Expression: 0
                                        * Referenced by: '<S563>/0-80'
                                        */
  real_T ResetTageswerte_Value;        /* Expression: 0
                                        * Referenced by: '<S529>/Reset Tageswerte'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S532>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S532>/Discrete-Time Integrator1'
                                        */
  real_T WsWh_Gain;                    /* Expression: 1/3600
                                        * Referenced by: '<S532>/Ws->Wh'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S529>/Switch1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S653>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S653>/Discrete-Time Integrator'
                                        */
  real_T s_m_Gain;                     /* Expression: 1
                                        * Referenced by: '<S653>/s_m'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S529>/Switch'
                                        */
  real_T Constant4_Value_k;            /* Expression: Derating_Start_km
                                        * Referenced by: '<S571>/Constant4'
                                        */
  real_T Safety_Derateing_Value;       /* Expression: 1
                                        * Referenced by: '<S571>/Safety_Derateing'
                                        */
  real_T Constant3_Value_i;            /* Expression: Derating_HV_Battery_Kapa
                                        * Referenced by: '<S571>/Constant3'
                                        */
  real_T Constant2_Value_cq;           /* Expression: Drive_Mode
                                        * Referenced by: '<S571>/Constant2'
                                        */
  real_T Map_Reichweite_Derating_Rev1_ta[11];/* Expression: [1;0.9;0.8;0.8;0.8;0.8;0.8;0.7;0.7;0.7;0.7]
                                              * Referenced by: '<S571>/Map_Reichweite_Derating_Rev1'
                                              */
  real_T Map_Reichweite_Derating_Rev1_bp[11];/* Expression: [0;1;2;3;4;5;6;7;8;9;10]
                                              * Referenced by: '<S571>/Map_Reichweite_Derating_Rev1'
                                              */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S563>/0-1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S563>/0-1'
                                        */
  real_T kWW_Gain;                     /* Expression: 1000
                                        * Referenced by: '<S565>/kW-W'
                                        */
  real_T PowerLimitkW2_Value;          /* Expression: 0.1
                                        * Referenced by: '<S565>/PowerLimit [kW]2'
                                        */
  real_T halbeGesamtleistungproMotor_Gai;/* Expression: 0.5
                                          * Referenced by: '<S565>/halbe Gesamtleistung pro Motor'
                                          */
  real_T rpmrads_Gain;                 /* Expression: 2*pi/60
                                        * Referenced by: '<S530>/rpm-rad//s'
                                        */
  real_T radsRPM_Gain;                 /* Expression: 60/2*pi
                                        * Referenced by: '<S565>/rad//s -> RPM'
                                        */
  real_T eps_Value;                    /* Expression: 0.1
                                        * Referenced by: '<S565>/eps'
                                        */
  real_T RPM1s_Gain;                   /* Expression: 2*pi/(60)
                                        * Referenced by: '<S565>/RPM-1//s'
                                        */
  real_T rpmrads1_Gain;                /* Expression: 2*pi/60
                                        * Referenced by: '<S530>/rpm-rad//s1'
                                        */
  real_T radsRPM1_Gain;                /* Expression: 60/2*pi
                                        * Referenced by: '<S565>/rad//s -> RPM1'
                                        */
  real_T RPM1s1_Gain;                  /* Expression: 2*pi/(60)
                                        * Referenced by: '<S565>/RPM-1//s1'
                                        */
  real_T TFilterTorqueFall_Value;      /* Expression: 0.01
                                        * Referenced by: '<S570>/TFilterTorqueFall'
                                        */
  real_T WeightedSampleTime_WtEt_c;    /* Computed Parameter: WeightedSampleTime_WtEt_c
                                        * Referenced by: '<S622>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_o;            /* Expression: 1
                                        * Referenced by: '<S622>/Constant2'
                                        */
  real_T Constant2_Value_bg;           /* Expression: 1
                                        * Referenced by: '<S570>/Constant2'
                                        */
  real_T Memory_X0_i;                  /* Expression: 0
                                        * Referenced by: '<S617>/Memory'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S621>/Constant'
                                        */
  real_T WeightedSampleTime_WtEt_pa;   /* Computed Parameter: WeightedSampleTime_WtEt_pa
                                        * Referenced by: '<S621>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ip;           /* Expression: 1
                                        * Referenced by: '<S621>/Constant2'
                                        */
  real_T Constant1_Value_fa;           /* Expression: 1
                                        * Referenced by: '<S570>/Constant1'
                                        */
  real_T Memory_X0_k;                  /* Expression: 0
                                        * Referenced by: '<S616>/Memory'
                                        */
  real_T MinTorque_Value;              /* Expression: 0
                                        * Referenced by: '<S570>/MinTorque'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 1
                                        * Referenced by: '<S50>/Gain'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 1
                                        * Referenced by: '<S51>/Gain'
                                        */
  real_T RegID_Torque_Value[2];        /* Expression: [hex2dec('90');hex2dec('90')]
                                        * Referenced by: '<S10>/RegID_Torque'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: -32767
                                        * Referenced by: '<S54>/Gain1'
                                        */
  real_T Constant1_Value_p;            /* Expression: 200
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 32767
                                        * Referenced by: '<S54>/Gain2'
                                        */
  real_T Constant2_Value_ge;           /* Expression: 200
                                        * Referenced by: '<S54>/Constant2'
                                        */
  real_T PulseGenerator_Amp_o;         /* Expression: 1
                                        * Referenced by: '<S527>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_c;      /* Computed Parameter: PulseGenerator_Period_c
                                        * Referenced by: '<S527>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_h;        /* Computed Parameter: PulseGenerator_Duty_h
                                        * Referenced by: '<S527>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_j;  /* Expression: 0
                                        * Referenced by: '<S527>/Pulse Generator'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 11
                                        * Referenced by: '<S527>/Switch'
                                        */
  real_T Deltatimelimit_Value_fq;      /* Expression: 0.055
                                        * Referenced by: '<S76>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_jb;    /* Expression: 1
                                        * Referenced by: '<S76>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_fm;                 /* Expression: 1
                                        * Referenced by: '<S87>/Gain'
                                        */
  real_T Timeoutsamples_Value;         /* Expression: 2000
                                        * Referenced by: '<S77>/Timeout//samples'
                                        */
  real_T Gain_Gain_kl;                 /* Expression: 1/255
                                        * Referenced by: '<S77>/Gain'
                                        */
  real_T Deltatimelimit_Value_j;       /* Expression: 0.055
                                        * Referenced by: '<S90>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_gg;    /* Expression: 1
                                        * Referenced by: '<S90>/Prev. msg. sent value'
                                        */
  real_T u10C_Gain;                    /* Expression: 1/10
                                        * Referenced by: '<S78>/1//10 °C'
                                        */
  real_T Gain3_Gain_k;                 /* Expression: 1/255
                                        * Referenced by: '<S78>/Gain3'
                                        */
  real_T Gain5_Gain_c;                 /* Expression: 1/255
                                        * Referenced by: '<S78>/Gain5'
                                        */
  real_T Gain6_Gain_m;                 /* Expression: 1/255
                                        * Referenced by: '<S78>/Gain6'
                                        */
  real_T Deltatimelimit_Value_od;      /* Expression: 0.055
                                        * Referenced by: '<S263>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_b2;    /* Expression: 1
                                        * Referenced by: '<S263>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_df;      /* Expression: 0.055
                                        * Referenced by: '<S264>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mr;    /* Expression: 1
                                        * Referenced by: '<S264>/Prev. msg. sent value'
                                        */
  real_T Timeoutsamples_Value_e;       /* Expression: 2000
                                        * Referenced by: '<S79>/Timeout//samples'
                                        */
  real_T Deltatimelimit_Value_oz;      /* Expression: 0.055
                                        * Referenced by: '<S267>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_pd;    /* Expression: 1
                                        * Referenced by: '<S267>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_fn;                 /* Expression: 1
                                        * Referenced by: '<S281>/Gain'
                                        */
  real_T Errorfield_Gain;              /* Expression: 1
                                        * Referenced by: '<S80>/Errorfield'
                                        */
  real_T Gain10_Gain;                  /* Expression: 1
                                        * Referenced by: '<S286>/Gain10'
                                        */
  real_T Gain_Gain_da;                 /* Expression: 1
                                        * Referenced by: '<S289>/Gain'
                                        */
  real_T Gain11_Gain;                  /* Expression: 1
                                        * Referenced by: '<S286>/Gain11'
                                        */
  real_T Gain_Gain_pm;                 /* Expression: 1
                                        * Referenced by: '<S290>/Gain'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1
                                        * Referenced by: '<S286>/Gain9'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 1
                                        * Referenced by: '<S291>/Gain'
                                        */
  real_T Gain1_Gain_jw;                /* Expression: 1
                                        * Referenced by: '<S286>/Gain1'
                                        */
  real_T Gain_Gain_p1;                 /* Expression: 1
                                        * Referenced by: '<S292>/Gain'
                                        */
  real_T Nodatavalue_Value;            /* Expression: 0
                                        * Referenced by: '<S298>/No data value'
                                        */
  real_T Newdatavalue_Value;           /* Expression: 1
                                        * Referenced by: '<S298>/New data value'
                                        */
  real_T Deltatimelimit_Value_oi;      /* Expression: 0.055
                                        * Referenced by: '<S298>/Delta time limit'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 1
                                        * Referenced by: '<S286>/Gain2'
                                        */
  real_T Gain3_Gain_j;                 /* Expression: 1
                                        * Referenced by: '<S286>/Gain3'
                                        */
  real_T Gain5_Gain_m;                 /* Expression: 1
                                        * Referenced by: '<S286>/Gain5'
                                        */
  real_T Gain6_Gain_k;                 /* Expression: 1
                                        * Referenced by: '<S286>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1
                                        * Referenced by: '<S286>/Gain7'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1
                                        * Referenced by: '<S286>/Gain8'
                                        */
  real_T Gain9_Gain_g;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain9'
                                        */
  real_T Gain_Gain_f5;                 /* Expression: 1
                                        * Referenced by: '<S369>/Gain'
                                        */
  real_T Nodatavalue_Value_l;          /* Expression: 0
                                        * Referenced by: '<S375>/No data value'
                                        */
  real_T Newdatavalue_Value_a;         /* Expression: 1
                                        * Referenced by: '<S375>/New data value'
                                        */
  real_T Deltatimelimit_Value_nb;      /* Expression: 0.055
                                        * Referenced by: '<S375>/Delta time limit'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain1'
                                        */
  real_T Gain10_Gain_i;                /* Expression: 1
                                        * Referenced by: '<S287>/Gain10'
                                        */
  real_T Gain11_Gain_a;                /* Expression: 1
                                        * Referenced by: '<S287>/Gain11'
                                        */
  real_T Gain2_Gain_h;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain2'
                                        */
  real_T Gain3_Gain_jv;                /* Expression: 1
                                        * Referenced by: '<S287>/Gain3'
                                        */
  real_T Gain5_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain5'
                                        */
  real_T Gain6_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain6'
                                        */
  real_T Gain7_Gain_g;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain7'
                                        */
  real_T Gain8_Gain_h;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain8'
                                        */
  real_T InvCorrection_Gain_d;         /* Expression: 1.11764706
                                        * Referenced by: '<S287>/InvCorrection'
                                        */
  real_T Gain_Gain_ow;                 /* Expression: 1
                                        * Referenced by: '<S442>/Gain'
                                        */
  real_T Constant_Value_jw;            /* Expression: 1
                                        * Referenced by: '<S467>/Constant'
                                        */
  real_T TTemp_Value;                  /* Expression: 0.5
                                        * Referenced by: '<S462>/TTemp'
                                        */
  real_T WeightedSampleTime_WtEt_fn;   /* Computed Parameter: WeightedSampleTime_WtEt_fn
                                        * Referenced by: '<S467>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_mh;           /* Expression: 1
                                        * Referenced by: '<S467>/Constant2'
                                        */
  real_T KTemp_Value;                  /* Expression: 1
                                        * Referenced by: '<S462>/KTemp'
                                        */
  real_T T1_Value;                     /* Expression: 298.15
                                        * Referenced by: '<S462>/T1'
                                        */
  real_T T2_Value;                     /* Expression: 1
                                        * Referenced by: '<S462>/T2'
                                        */
  real_T R25_Value;                    /* Expression: 10000
                                        * Referenced by: '<S462>/R25'
                                        */
  real_T UrefADC_Gain;                 /* Expression: 5.0
                                        * Referenced by: '<S460>/UrefADC'
                                        */
  real_T Spannungsteiler_Gain;         /* Expression: 5 * 5.512195 * 1.06451
                                        * Referenced by: '<S447>/Spannungsteiler'
                                        */
  real_T T25_Value;                    /* Expression: 298.15
                                        * Referenced by: '<S462>/T25'
                                        */
  real_T BETA_Value;                   /* Expression: 3976
                                        * Referenced by: '<S462>/BETA'
                                        */
  real_T T0_Value;                     /* Expression: 273.15
                                        * Referenced by: '<S462>/T0'
                                        */
  real_T Memory_X0_a;                  /* Expression: 0
                                        * Referenced by: '<S466>/Memory'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 1
                                        * Referenced by: '<S458>/Gain'
                                        */
  real_T Gain_Gain_gm;                 /* Expression: 1
                                        * Referenced by: '<S459>/Gain'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S469>/Constant'
                                        */
  real_T TTemp_Value_i;                /* Expression: 0.2
                                        * Referenced by: '<S463>/TTemp'
                                        */
  real_T WeightedSampleTime_WtEt_az;   /* Computed Parameter: WeightedSampleTime_WtEt_az
                                        * Referenced by: '<S469>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ef;           /* Expression: 1
                                        * Referenced by: '<S469>/Constant2'
                                        */
  real_T KTemp_Value_f;                /* Expression: 1
                                        * Referenced by: '<S463>/KTemp'
                                        */
  real_T T1_Value_l;                   /* Expression: 298.15
                                        * Referenced by: '<S463>/T1'
                                        */
  real_T T2_Value_g;                   /* Expression: 1
                                        * Referenced by: '<S463>/T2'
                                        */
  real_T R25_Value_h;                  /* Expression: 10000
                                        * Referenced by: '<S463>/R25'
                                        */
  real_T UrefADC_Gain_m;               /* Expression: 5.0
                                        * Referenced by: '<S461>/UrefADC'
                                        */
  real_T T25_Value_n;                  /* Expression: 298.15
                                        * Referenced by: '<S463>/T25'
                                        */
  real_T BETA_Value_k;                 /* Expression: 3976
                                        * Referenced by: '<S463>/BETA'
                                        */
  real_T T0_Value_j;                   /* Expression: 273.15
                                        * Referenced by: '<S463>/T0'
                                        */
  real_T Memory_X0_aj;                 /* Expression: 0
                                        * Referenced by: '<S468>/Memory'
                                        */
  real_T Gain_Gain_gn;                 /* Expression: 1
                                        * Referenced by: '<S447>/Gain'
                                        */
  real_T Deltatimelimit_Value_kj;      /* Expression: 0.055
                                        * Referenced by: '<S484>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_e;     /* Expression: 1
                                        * Referenced by: '<S484>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_lh;      /* Expression: 0.055
                                        * Referenced by: '<S485>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_j1;    /* Expression: 1
                                        * Referenced by: '<S485>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_ma;      /* Expression: 0.055
                                        * Referenced by: '<S486>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mk;    /* Expression: 1
                                        * Referenced by: '<S486>/Prev. msg. sent value'
                                        */
  real_T Gain1_Gain_oi;                /* Expression: 1/255
                                        * Referenced by: '<S85>/Gain1'
                                        */
  real_T Deltatimelimit_Value_hl;      /* Expression: 0.055
                                        * Referenced by: '<S497>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_of;    /* Expression: 1
                                        * Referenced by: '<S497>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_ea;      /* Expression: 0.055
                                        * Referenced by: '<S498>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_n;     /* Expression: 1
                                        * Referenced by: '<S498>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_dc;                 /* Expression: 1
                                        * Referenced by: '<S501>/Gain'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 1
                                        * Referenced by: '<S502>/Gain'
                                        */
  real_T Gain_Gain_fq;                 /* Expression: 1
                                        * Referenced by: '<S503>/Gain'
                                        */
  real_T Deltatimelimit_Value_eq;      /* Expression: 0.055
                                        * Referenced by: '<S506>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_ej;    /* Expression: 1
                                        * Referenced by: '<S506>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_e3;      /* Expression: 0.055
                                        * Referenced by: '<S507>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_i;     /* Expression: 1
                                        * Referenced by: '<S507>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_or;      /* Expression: 0.055
                                        * Referenced by: '<S508>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_p2;    /* Expression: 1
                                        * Referenced by: '<S508>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_dau;                /* Expression: 1
                                        * Referenced by: '<S542>/Gain'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1
                                        * Referenced by: '<S543>/Gain'
                                        */
  real_T Gain_Gain_or;                 /* Expression: 1
                                        * Referenced by: '<S564>/Gain'
                                        */
  real_T ModelReference_A;             /* Computed Parameter: ModelReference_A
                                        * Referenced by: '<S582>/ModelReference'
                                        */
  real_T ModelReference_C;             /* Computed Parameter: ModelReference_C
                                        * Referenced by: '<S582>/ModelReference'
                                        */
  real_T Gain_Gain_k3;                 /* Expression: -1
                                        * Referenced by: '<S583>/Gain'
                                        */
  real_T ModelReference_A_h;           /* Computed Parameter: ModelReference_A_h
                                        * Referenced by: '<S583>/ModelReference'
                                        */
  real_T ModelReference_C_p;           /* Computed Parameter: ModelReference_C_p
                                        * Referenced by: '<S583>/ModelReference'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: y
                                        * Referenced by: '<S583>/Gain1'
                                        */
  real_T ModelReference3_A;            /* Computed Parameter: ModelReference3_A
                                        * Referenced by: '<S583>/ModelReference3'
                                        */
  real_T ModelReference3_C;            /* Computed Parameter: ModelReference3_C
                                        * Referenced by: '<S583>/ModelReference3'
                                        */
  real_T Gain_Gain_l2;                 /* Expression: -1
                                        * Referenced by: '<S584>/Gain'
                                        */
  real_T ModelReference_A_i;           /* Computed Parameter: ModelReference_A_i
                                        * Referenced by: '<S584>/ModelReference'
                                        */
  real_T ModelReference_C_g;           /* Computed Parameter: ModelReference_C_g
                                        * Referenced by: '<S584>/ModelReference'
                                        */
  real_T Gain1_Gain_dn;                /* Expression: y
                                        * Referenced by: '<S584>/Gain1'
                                        */
  real_T ModelReference1_A_i;          /* Computed Parameter: ModelReference1_A_i
                                        * Referenced by: '<S584>/ModelReference1'
                                        */
  real_T ModelReference1_C_i;          /* Computed Parameter: ModelReference1_C_i
                                        * Referenced by: '<S584>/ModelReference1'
                                        */
  real_T ModelReference3_A_c;          /* Computed Parameter: ModelReference3_A_c
                                        * Referenced by: '<S584>/ModelReference3'
                                        */
  real_T ModelReference3_C_b;          /* Computed Parameter: ModelReference3_C_b
                                        * Referenced by: '<S584>/ModelReference3'
                                        */
  real_T degrad_Gain_b;                /* Expression: 2*pi/360
                                        * Referenced by: '<S589>/deg-rad'
                                        */
  real_T EGEinlenkgradient_Value;      /* Expression: 0.0025
                                        * Referenced by: '<S589>/EG Einlenkgradient'
                                        */
  real_T lRadstand_Value;              /* Expression: 1.53
                                        * Referenced by: '<S589>/l Radstand'
                                        */
  real_T raddeg_Gain;                  /* Expression: 360/(2*pi)
                                        * Referenced by: '<S589>/rad-deg'
                                        */
  real_T Gain_Gain_pn;                 /* Expression: 1
                                        * Referenced by: '<S590>/Gain'
                                        */
  real_T degrad1_Gain_d;               /* Expression: 1/5
                                        * Referenced by: '<S589>/deg-rad1'
                                        */
  real_T K_OpenLoop1_Gain;             /* Expression: 0.25
                                        * Referenced by: '<S591>/K_OpenLoop1'
                                        */
  real_T uJzrdynbri_Gain;              /* Expression: 2*105.33*0.228/(1.15*1.8)
                                        * Referenced by: '<S591>/2*Jz*rdyn//(br*i)'
                                        */
  real_T K_ClosedLoop_Gain;            /* Expression: 1
                                        * Referenced by: '<S591>/K_ClosedLoop'
                                        */
  real_T Integrator_gainval_n;         /* Computed Parameter: Integrator_gainval_n
                                        * Referenced by: '<S594>/Integrator'
                                        */
  real_T Integrator_IC_b;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S594>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S594>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S594>/Filter'
                                        */
  real_T Filter_gainval_b;             /* Computed Parameter: Filter_gainval_b
                                        * Referenced by: '<S595>/Filter'
                                        */
  real_T Filter_IC_n;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S595>/Filter'
                                        */
  real_T Integrator_gainval_g;         /* Computed Parameter: Integrator_gainval_g
                                        * Referenced by: '<S595>/Integrator'
                                        */
  real_T Integrator_IC_o;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S595>/Integrator'
                                        */
  real_T Filter_gainval_p;             /* Computed Parameter: Filter_gainval_p
                                        * Referenced by: '<S596>/Filter'
                                        */
  real_T Filter_IC_l;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S596>/Filter'
                                        */
  real_T Integrator_gainval_h;         /* Computed Parameter: Integrator_gainval_h
                                        * Referenced by: '<S596>/Integrator'
                                        */
  real_T Integrator_IC_h;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S596>/Integrator'
                                        */
  real_T ModelReference_A_m;           /* Computed Parameter: ModelReference_A_m
                                        * Referenced by: '<S597>/ModelReference'
                                        */
  real_T ModelReference_C_go;          /* Computed Parameter: ModelReference_C_go
                                        * Referenced by: '<S597>/ModelReference'
                                        */
  real_T Gain_Gain_n;                  /* Expression: -1
                                        * Referenced by: '<S598>/Gain'
                                        */
  real_T ModelReference_A_l;           /* Computed Parameter: ModelReference_A_l
                                        * Referenced by: '<S598>/ModelReference'
                                        */
  real_T ModelReference_C_n;           /* Computed Parameter: ModelReference_C_n
                                        * Referenced by: '<S598>/ModelReference'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: y
                                        * Referenced by: '<S598>/Gain1'
                                        */
  real_T ModelReference3_A_f;          /* Computed Parameter: ModelReference3_A_f
                                        * Referenced by: '<S598>/ModelReference3'
                                        */
  real_T ModelReference3_C_l;          /* Computed Parameter: ModelReference3_C_l
                                        * Referenced by: '<S598>/ModelReference3'
                                        */
  real_T Gain_Gain_cw;                 /* Expression: -1
                                        * Referenced by: '<S599>/Gain'
                                        */
  real_T ModelReference_A_a;           /* Computed Parameter: ModelReference_A_a
                                        * Referenced by: '<S599>/ModelReference'
                                        */
  real_T ModelReference_C_a;           /* Computed Parameter: ModelReference_C_a
                                        * Referenced by: '<S599>/ModelReference'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: y
                                        * Referenced by: '<S599>/Gain1'
                                        */
  real_T ModelReference1_A_k;          /* Computed Parameter: ModelReference1_A_k
                                        * Referenced by: '<S599>/ModelReference1'
                                        */
  real_T ModelReference1_C_f;          /* Computed Parameter: ModelReference1_C_f
                                        * Referenced by: '<S599>/ModelReference1'
                                        */
  real_T ModelReference3_A_j;          /* Computed Parameter: ModelReference3_A_j
                                        * Referenced by: '<S599>/ModelReference3'
                                        */
  real_T ModelReference3_C_o;          /* Computed Parameter: ModelReference3_C_o
                                        * Referenced by: '<S599>/ModelReference3'
                                        */
  real_T degrad_Gain_nd;               /* Expression: 2*pi/360
                                        * Referenced by: '<S604>/deg-rad'
                                        */
  real_T EGEinlenkgradient_Value_h;    /* Expression: 0.0025
                                        * Referenced by: '<S604>/EG Einlenkgradient'
                                        */
  real_T lRadstand_Value_a;            /* Expression: 1.53
                                        * Referenced by: '<S604>/l Radstand'
                                        */
  real_T raddeg_Gain_o;                /* Expression: 360/(2*pi)
                                        * Referenced by: '<S604>/rad-deg'
                                        */
  real_T Gain_Gain_l2x;                /* Expression: 1
                                        * Referenced by: '<S605>/Gain'
                                        */
  real_T degrad1_Gain_g;               /* Expression: 1/5
                                        * Referenced by: '<S604>/deg-rad1'
                                        */
  real_T K_OpenLoop1_Gain_d;           /* Expression: 0.25
                                        * Referenced by: '<S606>/K_OpenLoop1'
                                        */
  real_T uJzrdynbri_Gain_h;            /* Expression: 2*105.33*0.228/(1.15*1.8)
                                        * Referenced by: '<S606>/2*Jz*rdyn//(br*i)'
                                        */
  real_T K_ClosedLoop_Gain_m;          /* Expression: 1
                                        * Referenced by: '<S606>/K_ClosedLoop'
                                        */
  real_T Integrator_gainval_gy;        /* Computed Parameter: Integrator_gainval_gy
                                        * Referenced by: '<S609>/Integrator'
                                        */
  real_T Integrator_IC_k;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S609>/Integrator'
                                        */
  real_T Filter_gainval_f;             /* Computed Parameter: Filter_gainval_f
                                        * Referenced by: '<S609>/Filter'
                                        */
  real_T Filter_IC_o;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S609>/Filter'
                                        */
  real_T Filter_gainval_c;             /* Computed Parameter: Filter_gainval_c
                                        * Referenced by: '<S610>/Filter'
                                        */
  real_T Filter_IC_g;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S610>/Filter'
                                        */
  real_T Integrator_gainval_f;         /* Computed Parameter: Integrator_gainval_f
                                        * Referenced by: '<S610>/Integrator'
                                        */
  real_T Integrator_IC_e;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S610>/Integrator'
                                        */
  real_T Filter_gainval_k;             /* Computed Parameter: Filter_gainval_k
                                        * Referenced by: '<S611>/Filter'
                                        */
  real_T Filter_IC_j;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S611>/Filter'
                                        */
  real_T Integrator_gainval_hd;        /* Computed Parameter: Integrator_gainval_hd
                                        * Referenced by: '<S611>/Integrator'
                                        */
  real_T Integrator_IC_b1;             /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S611>/Integrator'
                                        */
  real_T Gain_Gain_p5;                 /* Expression: 100
                                        * Referenced by: '<S625>/Gain'
                                        */
  real_T Constant_Value_ma;            /* Expression: 0
                                        * Referenced by: '<S627>/Constant'
                                        */
  real_T Constant_Value_i2;            /* Expression: 0
                                        * Referenced by: '<S628>/Constant'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1
                                        * Referenced by: '<S646>/Gain'
                                        */
  real_T Gain_Gain_jl;                 /* Expression: 1
                                        * Referenced by: '<S647>/Gain'
                                        */
  real_T Gain_Gain_dh;                 /* Expression: 1
                                        * Referenced by: '<S648>/Gain'
                                        */
  real_T Gain_Gain_mo;                 /* Expression: 1
                                        * Referenced by: '<S649>/Gain'
                                        */
  real_T Gain_Gain_pr;                 /* Expression: 1
                                        * Referenced by: '<S650>/Gain'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 1
                                        * Referenced by: '<S651>/Gain'
                                        */
  real_T Gain_Gain_n2;                 /* Expression: 1
                                        * Referenced by: '<S652>/Gain'
                                        */
  real_T Gain_Gain_lh;                 /* Expression: 1
                                        * Referenced by: '<S661>/Gain'
                                        */
  real_T grer0_UpperSat;               /* Expression: 100
                                        * Referenced by: '<S530>/größer 0'
                                        */
  real_T grer0_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S530>/größer 0'
                                        */
  real_T Gain_Gain_em;                 /* Expression: 1
                                        * Referenced by: '<S663>/Gain'
                                        */
  real_T Gain_Gain_jj;                 /* Expression: 1
                                        * Referenced by: '<S664>/Gain'
                                        */
  real_T DiscreteTimeIntegrator_gainva_a;/* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                                          * Referenced by: '<S532>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_g;  /* Expression: 0
                                        * Referenced by: '<S532>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_if;                 /* Expression: 1
                                        * Referenced by: '<S665>/Gain'
                                        */
  real_T Gain_Gain_he;                 /* Expression: 1
                                        * Referenced by: '<S666>/Gain'
                                        */
  real_T Gain_Gain_pp;                 /* Expression: 1
                                        * Referenced by: '<S667>/Gain'
                                        */
  real_T Gain_Gain_oo;                 /* Expression: 1
                                        * Referenced by: '<S698>/Gain'
                                        */
  real_T Gain_Gain_an;                 /* Expression: 1
                                        * Referenced by: '<S699>/Gain'
                                        */
  real_T CAN1Recovery_Value;           /* Expression: 0
                                        * Referenced by: '<S3>/CAN 1 Recovery'
                                        */
  uint32_T Constant_Value_fe;          /* Computed Parameter: Constant_Value_fe
                                        * Referenced by: '<S309>/Constant'
                                        */
  uint32_T Constant_Value_cc;          /* Computed Parameter: Constant_Value_cc
                                        * Referenced by: '<S310>/Constant'
                                        */
  uint32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S311>/Constant'
                                        */
  uint32_T Constant_Value_fw;          /* Computed Parameter: Constant_Value_fw
                                        * Referenced by: '<S312>/Constant'
                                        */
  uint32_T Constant_Value_f5;          /* Computed Parameter: Constant_Value_f5
                                        * Referenced by: '<S313>/Constant'
                                        */
  uint32_T Constant_Value_ce;          /* Computed Parameter: Constant_Value_ce
                                        * Referenced by: '<S314>/Constant'
                                        */
  uint32_T Constant_Value_ij;          /* Computed Parameter: Constant_Value_ij
                                        * Referenced by: '<S315>/Constant'
                                        */
  uint32_T Constant_Value_a1;          /* Computed Parameter: Constant_Value_a1
                                        * Referenced by: '<S316>/Constant'
                                        */
  uint32_T Constant_Value_aw;          /* Computed Parameter: Constant_Value_aw
                                        * Referenced by: '<S317>/Constant'
                                        */
  uint32_T Constant_Value_ed;          /* Computed Parameter: Constant_Value_ed
                                        * Referenced by: '<S318>/Constant'
                                        */
  uint32_T Constant_Value_mn;          /* Computed Parameter: Constant_Value_mn
                                        * Referenced by: '<S319>/Constant'
                                        */
  uint32_T Constant_Value_ln;          /* Computed Parameter: Constant_Value_ln
                                        * Referenced by: '<S320>/Constant'
                                        */
  uint32_T Constant_Value_in;          /* Computed Parameter: Constant_Value_in
                                        * Referenced by: '<S321>/Constant'
                                        */
  uint32_T Constant_Value_b3;          /* Computed Parameter: Constant_Value_b3
                                        * Referenced by: '<S322>/Constant'
                                        */
  uint32_T Constant_Value_pf;          /* Computed Parameter: Constant_Value_pf
                                        * Referenced by: '<S323>/Constant'
                                        */
  uint32_T Constant_Value_ie;          /* Computed Parameter: Constant_Value_ie
                                        * Referenced by: '<S324>/Constant'
                                        */
  uint32_T Constant_Value_awf;         /* Computed Parameter: Constant_Value_awf
                                        * Referenced by: '<S325>/Constant'
                                        */
  uint32_T Constant_Value_fz;          /* Computed Parameter: Constant_Value_fz
                                        * Referenced by: '<S326>/Constant'
                                        */
  uint32_T Constant_Value_mo;          /* Computed Parameter: Constant_Value_mo
                                        * Referenced by: '<S327>/Constant'
                                        */
  uint32_T Constant_Value_ir;          /* Computed Parameter: Constant_Value_ir
                                        * Referenced by: '<S328>/Constant'
                                        */
  uint32_T Constant_Value_ct;          /* Computed Parameter: Constant_Value_ct
                                        * Referenced by: '<S329>/Constant'
                                        */
  uint32_T Constant_Value_hk;          /* Computed Parameter: Constant_Value_hk
                                        * Referenced by: '<S330>/Constant'
                                        */
  uint32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S331>/Constant'
                                        */
  uint32_T Constant_Value_jv;          /* Computed Parameter: Constant_Value_jv
                                        * Referenced by: '<S332>/Constant'
                                        */
  uint32_T Constant_Value_ax;          /* Computed Parameter: Constant_Value_ax
                                        * Referenced by: '<S333>/Constant'
                                        */
  uint32_T Constant_Value_es;          /* Computed Parameter: Constant_Value_es
                                        * Referenced by: '<S334>/Constant'
                                        */
  uint32_T Constant_Value_nc;          /* Computed Parameter: Constant_Value_nc
                                        * Referenced by: '<S335>/Constant'
                                        */
  uint32_T Constant_Value_aa;          /* Computed Parameter: Constant_Value_aa
                                        * Referenced by: '<S336>/Constant'
                                        */
  uint32_T Constant_Value_ih;          /* Computed Parameter: Constant_Value_ih
                                        * Referenced by: '<S337>/Constant'
                                        */
  uint32_T Constant_Value_ni;          /* Computed Parameter: Constant_Value_ni
                                        * Referenced by: '<S338>/Constant'
                                        */
  uint32_T Constant_Value_ef;          /* Computed Parameter: Constant_Value_ef
                                        * Referenced by: '<S339>/Constant'
                                        */
  uint32_T Constant_Value_le;          /* Computed Parameter: Constant_Value_le
                                        * Referenced by: '<S340>/Constant'
                                        */
  uint32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S383>/Constant'
                                        */
  uint32_T Constant_Value_ih0;         /* Computed Parameter: Constant_Value_ih0
                                        * Referenced by: '<S384>/Constant'
                                        */
  uint32_T Constant_Value_be;          /* Computed Parameter: Constant_Value_be
                                        * Referenced by: '<S385>/Constant'
                                        */
  uint32_T Constant_Value_ph;          /* Computed Parameter: Constant_Value_ph
                                        * Referenced by: '<S386>/Constant'
                                        */
  uint32_T Constant_Value_jl;          /* Computed Parameter: Constant_Value_jl
                                        * Referenced by: '<S387>/Constant'
                                        */
  uint32_T Constant_Value_dm;          /* Computed Parameter: Constant_Value_dm
                                        * Referenced by: '<S388>/Constant'
                                        */
  uint32_T Constant_Value_au;          /* Computed Parameter: Constant_Value_au
                                        * Referenced by: '<S389>/Constant'
                                        */
  uint32_T Constant_Value_fu;          /* Computed Parameter: Constant_Value_fu
                                        * Referenced by: '<S390>/Constant'
                                        */
  uint32_T Constant_Value_dt;          /* Computed Parameter: Constant_Value_dt
                                        * Referenced by: '<S391>/Constant'
                                        */
  uint32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S392>/Constant'
                                        */
  uint32_T Constant_Value_lnh;         /* Computed Parameter: Constant_Value_lnh
                                        * Referenced by: '<S393>/Constant'
                                        */
  uint32_T Constant_Value_bo;          /* Computed Parameter: Constant_Value_bo
                                        * Referenced by: '<S394>/Constant'
                                        */
  uint32_T Constant_Value_bx;          /* Computed Parameter: Constant_Value_bx
                                        * Referenced by: '<S395>/Constant'
                                        */
  uint32_T Constant_Value_hy;          /* Computed Parameter: Constant_Value_hy
                                        * Referenced by: '<S396>/Constant'
                                        */
  uint32_T Constant_Value_jwe;         /* Computed Parameter: Constant_Value_jwe
                                        * Referenced by: '<S397>/Constant'
                                        */
  uint32_T Constant_Value_al;          /* Computed Parameter: Constant_Value_al
                                        * Referenced by: '<S398>/Constant'
                                        */
  uint32_T Constant_Value_hf;          /* Computed Parameter: Constant_Value_hf
                                        * Referenced by: '<S399>/Constant'
                                        */
  uint32_T Constant_Value_il;          /* Computed Parameter: Constant_Value_il
                                        * Referenced by: '<S400>/Constant'
                                        */
  uint32_T Constant_Value_ky;          /* Computed Parameter: Constant_Value_ky
                                        * Referenced by: '<S401>/Constant'
                                        */
  uint32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S402>/Constant'
                                        */
  uint32_T Constant_Value_hv;          /* Computed Parameter: Constant_Value_hv
                                        * Referenced by: '<S403>/Constant'
                                        */
  uint32_T Constant_Value_jr;          /* Computed Parameter: Constant_Value_jr
                                        * Referenced by: '<S404>/Constant'
                                        */
  uint32_T Constant_Value_k5;          /* Computed Parameter: Constant_Value_k5
                                        * Referenced by: '<S405>/Constant'
                                        */
  uint32_T Constant_Value_p1;          /* Computed Parameter: Constant_Value_p1
                                        * Referenced by: '<S406>/Constant'
                                        */
  uint32_T Constant_Value_da;          /* Computed Parameter: Constant_Value_da
                                        * Referenced by: '<S407>/Constant'
                                        */
  uint32_T Constant_Value_kt;          /* Computed Parameter: Constant_Value_kt
                                        * Referenced by: '<S408>/Constant'
                                        */
  uint32_T Constant_Value_ay;          /* Computed Parameter: Constant_Value_ay
                                        * Referenced by: '<S409>/Constant'
                                        */
  uint32_T Constant_Value_md;          /* Computed Parameter: Constant_Value_md
                                        * Referenced by: '<S410>/Constant'
                                        */
  uint32_T Constant_Value_oe;          /* Computed Parameter: Constant_Value_oe
                                        * Referenced by: '<S411>/Constant'
                                        */
  uint32_T Constant_Value_kw;          /* Computed Parameter: Constant_Value_kw
                                        * Referenced by: '<S412>/Constant'
                                        */
  uint32_T Constant_Value_it;          /* Computed Parameter: Constant_Value_it
                                        * Referenced by: '<S413>/Constant'
                                        */
  uint32_T Constant_Value_ba;          /* Computed Parameter: Constant_Value_ba
                                        * Referenced by: '<S414>/Constant'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S576>/Delay'
                                        */
  uint32_T Delay_DelayLength_h;        /* Computed Parameter: Delay_DelayLength_h
                                        * Referenced by: '<S579>/Delay'
                                        */
  uint32_T Gain_Gain_l5;               /* Computed Parameter: Gain_Gain_l5
                                        * Referenced by: '<S573>/Gain'
                                        */
  uint32_T Gain_Gain_kh;               /* Computed Parameter: Gain_Gain_kh
                                        * Referenced by: '<S638>/Gain'
                                        */
  uint16_T ResetValue1_Value;          /* Computed Parameter: ResetValue1_Value
                                        * Referenced by: '<S529>/Reset Value1'
                                        */
  uint16_T ResetValue_Value;           /* Computed Parameter: ResetValue_Value
                                        * Referenced by: '<S529>/Reset Value'
                                        */
  uint16_T TXReg1_Value;               /* Computed Parameter: TXReg1_Value
                                        * Referenced by: '<S694>/TXReg1'
                                        */
  uint16_T TXReg2_Value;               /* Computed Parameter: TXReg2_Value
                                        * Referenced by: '<S694>/TXReg2'
                                        */
  uint16_T TXReg3_Value;               /* Computed Parameter: TXReg3_Value
                                        * Referenced by: '<S694>/TXReg3'
                                        */
  uint16_T TXReg4_Value;               /* Computed Parameter: TXReg4_Value
                                        * Referenced by: '<S694>/TXReg4'
                                        */
  uint16_T TXReg5_Value;               /* Computed Parameter: TXReg5_Value
                                        * Referenced by: '<S694>/TXReg5'
                                        */
  uint16_T TXReg6_Value;               /* Computed Parameter: TXReg6_Value
                                        * Referenced by: '<S694>/TXReg6'
                                        */
  uint16_T TXReg7_Value;               /* Computed Parameter: TXReg7_Value
                                        * Referenced by: '<S694>/TXReg7'
                                        */
  uint16_T TXReg8_Value;               /* Computed Parameter: TXReg8_Value
                                        * Referenced by: '<S694>/TXReg8'
                                        */
  uint16_T TXZeit1_Value;              /* Computed Parameter: TXZeit1_Value
                                        * Referenced by: '<S694>/TXZeit1'
                                        */
  uint16_T TXZeit2_Value;              /* Computed Parameter: TXZeit2_Value
                                        * Referenced by: '<S694>/TXZeit2'
                                        */
  uint16_T TXZeit3_Value;              /* Computed Parameter: TXZeit3_Value
                                        * Referenced by: '<S694>/TXZeit3'
                                        */
  uint16_T TXZeit4_Value;              /* Computed Parameter: TXZeit4_Value
                                        * Referenced by: '<S694>/TXZeit4'
                                        */
  uint16_T TXZeit5_Value;              /* Computed Parameter: TXZeit5_Value
                                        * Referenced by: '<S694>/TXZeit5'
                                        */
  uint16_T TXZeit6_Value;              /* Computed Parameter: TXZeit6_Value
                                        * Referenced by: '<S694>/TXZeit6'
                                        */
  uint16_T TXZeit7_Value;              /* Computed Parameter: TXZeit7_Value
                                        * Referenced by: '<S694>/TXZeit7'
                                        */
  uint16_T TXZeit8_Value;              /* Computed Parameter: TXZeit8_Value
                                        * Referenced by: '<S694>/TXZeit8'
                                        */
  uint16_T TXReg1_Value_h;             /* Computed Parameter: TXReg1_Value_h
                                        * Referenced by: '<S695>/TXReg1'
                                        */
  uint16_T TXReg2_Value_i;             /* Computed Parameter: TXReg2_Value_i
                                        * Referenced by: '<S695>/TXReg2'
                                        */
  uint16_T TXReg3_Value_d;             /* Computed Parameter: TXReg3_Value_d
                                        * Referenced by: '<S695>/TXReg3'
                                        */
  uint16_T TXReg4_Value_b;             /* Computed Parameter: TXReg4_Value_b
                                        * Referenced by: '<S695>/TXReg4'
                                        */
  uint16_T TXReg5_Value_k;             /* Computed Parameter: TXReg5_Value_k
                                        * Referenced by: '<S695>/TXReg5'
                                        */
  uint16_T TXReg6_Value_k;             /* Computed Parameter: TXReg6_Value_k
                                        * Referenced by: '<S695>/TXReg6'
                                        */
  uint16_T TXReg7_Value_h;             /* Computed Parameter: TXReg7_Value_h
                                        * Referenced by: '<S695>/TXReg7'
                                        */
  uint16_T TXReg8_Value_k;             /* Computed Parameter: TXReg8_Value_k
                                        * Referenced by: '<S695>/TXReg8'
                                        */
  uint16_T TXZeit1_Value_n;            /* Computed Parameter: TXZeit1_Value_n
                                        * Referenced by: '<S695>/TXZeit1'
                                        */
  uint16_T TXZeit2_Value_d;            /* Computed Parameter: TXZeit2_Value_d
                                        * Referenced by: '<S695>/TXZeit2'
                                        */
  uint16_T TXZeit3_Value_e;            /* Computed Parameter: TXZeit3_Value_e
                                        * Referenced by: '<S695>/TXZeit3'
                                        */
  uint16_T TXZeit4_Value_e;            /* Computed Parameter: TXZeit4_Value_e
                                        * Referenced by: '<S695>/TXZeit4'
                                        */
  uint16_T TXZeit5_Value_p;            /* Computed Parameter: TXZeit5_Value_p
                                        * Referenced by: '<S695>/TXZeit5'
                                        */
  uint16_T TXZeit6_Value_g;            /* Computed Parameter: TXZeit6_Value_g
                                        * Referenced by: '<S695>/TXZeit6'
                                        */
  uint16_T TXZeit7_Value_p;            /* Computed Parameter: TXZeit7_Value_p
                                        * Referenced by: '<S695>/TXZeit7'
                                        */
  uint16_T TXZeit8_Value_h;            /* Computed Parameter: TXZeit8_Value_h
                                        * Referenced by: '<S695>/TXZeit8'
                                        */
  int16_T Gain2_Gain_p;                /* Computed Parameter: Gain2_Gain_p
                                        * Referenced by: '<S299>/Gain2'
                                        */
  int16_T Gain2_Gain_dr;               /* Computed Parameter: Gain2_Gain_dr
                                        * Referenced by: '<S376>/Gain2'
                                        */
  uint16_T mkm_Gain;                   /* Computed Parameter: mkm_Gain
                                        * Referenced by: '<S571>/m->km'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S591>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_c;/* Computed Parameter: ManualSwitch_CurrentSetting_c
                                         * Referenced by: '<S606>/Manual Switch'
                                         */
  boolean_T Mem1_X0;                   /* Computed Parameter: Mem1_X0
                                        * Referenced by: '<S65>/Mem1'
                                        */
  boolean_T Mem2_X0;                   /* Computed Parameter: Mem2_X0
                                        * Referenced by: '<S65>/Mem2'
                                        */
  boolean_T Mem3_X0;                   /* Computed Parameter: Mem3_X0
                                        * Referenced by: '<S65>/Mem3'
                                        */
  boolean_T Mem4_X0;                   /* Computed Parameter: Mem4_X0
                                        * Referenced by: '<S65>/Mem4'
                                        */
  boolean_T Mem1_X0_d;                 /* Computed Parameter: Mem1_X0_d
                                        * Referenced by: '<S66>/Mem1'
                                        */
  boolean_T Mem2_X0_d;                 /* Computed Parameter: Mem2_X0_d
                                        * Referenced by: '<S66>/Mem2'
                                        */
  boolean_T Mem3_X0_h;                 /* Computed Parameter: Mem3_X0_h
                                        * Referenced by: '<S66>/Mem3'
                                        */
  boolean_T Mem4_X0_p;                 /* Computed Parameter: Mem4_X0_p
                                        * Referenced by: '<S66>/Mem4'
                                        */
  boolean_T Mem1_X0_e;                 /* Computed Parameter: Mem1_X0_e
                                        * Referenced by: '<S69>/Mem1'
                                        */
  boolean_T Mem2_X0_k;                 /* Computed Parameter: Mem2_X0_k
                                        * Referenced by: '<S69>/Mem2'
                                        */
  boolean_T Mem3_X0_hx;                /* Computed Parameter: Mem3_X0_hx
                                        * Referenced by: '<S69>/Mem3'
                                        */
  boolean_T Mem4_X0_o;                 /* Computed Parameter: Mem4_X0_o
                                        * Referenced by: '<S69>/Mem4'
                                        */
  boolean_T Mem1_X0_o;                 /* Computed Parameter: Mem1_X0_o
                                        * Referenced by: '<S70>/Mem1'
                                        */
  boolean_T Mem2_X0_km;                /* Computed Parameter: Mem2_X0_km
                                        * Referenced by: '<S70>/Mem2'
                                        */
  boolean_T Mem3_X0_c;                 /* Computed Parameter: Mem3_X0_c
                                        * Referenced by: '<S70>/Mem3'
                                        */
  boolean_T Mem4_X0_k;                 /* Computed Parameter: Mem4_X0_k
                                        * Referenced by: '<S70>/Mem4'
                                        */
  boolean_T _Ena_Y0;                   /* Computed Parameter: _Ena_Y0
                                        * Referenced by: '<S296>/_Ena'
                                        */
  boolean_T _NCR0_Y0;                  /* Computed Parameter: _NCR0_Y0
                                        * Referenced by: '<S296>/_NCR0'
                                        */
  boolean_T _Lim_Y0;                   /* Computed Parameter: _Lim_Y0
                                        * Referenced by: '<S296>/_Lim+'
                                        */
  boolean_T _Lim_Y0_j;                 /* Computed Parameter: _Lim_Y0_j
                                        * Referenced by: '<S296>/_Lim-'
                                        */
  boolean_T _OK_Y0;                    /* Computed Parameter: _OK_Y0
                                        * Referenced by: '<S296>/_OK'
                                        */
  boolean_T _Icns_Y0;                  /* Computed Parameter: _Icns_Y0
                                        * Referenced by: '<S296>/_Icns'
                                        */
  boolean_T _TNlim_Y0;                 /* Computed Parameter: _TNlim_Y0
                                        * Referenced by: '<S296>/_T-Nlim'
                                        */
  boolean_T _PN_Y0;                    /* Computed Parameter: _PN_Y0
                                        * Referenced by: '<S296>/_P-N'
                                        */
  boolean_T _NI_Y0;                    /* Computed Parameter: _NI_Y0
                                        * Referenced by: '<S296>/_N-I'
                                        */
  boolean_T _N0_Y0;                    /* Computed Parameter: _N0_Y0
                                        * Referenced by: '<S296>/_N0'
                                        */
  boolean_T _Rsw_Y0;                   /* Computed Parameter: _Rsw_Y0
                                        * Referenced by: '<S296>/_Rsw'
                                        */
  boolean_T _Cal0_Y0;                  /* Computed Parameter: _Cal0_Y0
                                        * Referenced by: '<S296>/_Cal0'
                                        */
  boolean_T _Cal_Y0;                   /* Computed Parameter: _Cal_Y0
                                        * Referenced by: '<S296>/_Cal'
                                        */
  boolean_T _Tol_Y0;                   /* Computed Parameter: _Tol_Y0
                                        * Referenced by: '<S296>/_Tol'
                                        */
  boolean_T _Rdy_Y0;                   /* Computed Parameter: _Rdy_Y0
                                        * Referenced by: '<S296>/_Rdy'
                                        */
  boolean_T _Brk_Y0;                   /* Computed Parameter: _Brk_Y0
                                        * Referenced by: '<S296>/_Brk'
                                        */
  boolean_T _SIGNMAG_Y0;               /* Computed Parameter: _SIGNMAG_Y0
                                        * Referenced by: '<S296>/_SIGNMAG'
                                        */
  boolean_T _Nclip_Y0;                 /* Computed Parameter: _Nclip_Y0
                                        * Referenced by: '<S296>/_Nclip'
                                        */
  boolean_T _Nclip_Y0_b;               /* Computed Parameter: _Nclip_Y0_b
                                        * Referenced by: '<S296>/_Nclip+'
                                        */
  boolean_T _Nclip_Y0_l;               /* Computed Parameter: _Nclip_Y0_l
                                        * Referenced by: '<S296>/_Nclip-'
                                        */
  boolean_T _IrdDig_Y0;                /* Computed Parameter: _IrdDig_Y0
                                        * Referenced by: '<S296>/_Ird-Dig'
                                        */
  boolean_T _Irdrchd_Y0;               /* Computed Parameter: _Irdrchd_Y0
                                        * Referenced by: '<S296>/_Ird-rchd'
                                        */
  boolean_T _IrdN_Y0;                  /* Computed Parameter: _IrdN_Y0
                                        * Referenced by: '<S296>/_Ird-N'
                                        */
  boolean_T _Ird_TI_Y0;                /* Computed Parameter: _Ird_TI_Y0
                                        * Referenced by: '<S296>/_Ird_TI'
                                        */
  boolean_T _Ird_TIR_Y0;               /* Computed Parameter: _Ird_TIR_Y0
                                        * Referenced by: '<S296>/_Ird_TIR'
                                        */
  boolean_T _2Hz_Y0;                   /* Computed Parameter: _2Hz_Y0
                                        * Referenced by: '<S296>/_2Hz'
                                        */
  boolean_T _IrdTM_Y0;                 /* Computed Parameter: _IrdTM_Y0
                                        * Referenced by: '<S296>/_Ird-TM'
                                        */
  boolean_T _IrdANA_Y0;                /* Computed Parameter: _IrdANA_Y0
                                        * Referenced by: '<S296>/_Ird-ANA'
                                        */
  boolean_T _Iwcns_Y0;                 /* Computed Parameter: _Iwcns_Y0
                                        * Referenced by: '<S296>/_Iwcns'
                                        */
  boolean_T _RFE_plus_Y0;              /* Computed Parameter: _RFE_plus_Y0
                                        * Referenced by: '<S296>/_RFE_plus'
                                        */
  boolean_T _frei_Y0;                  /* Computed Parameter: _frei_Y0
                                        * Referenced by: '<S296>/_frei'
                                        */
  boolean_T _Handrad_Y0;               /* Computed Parameter: _Handrad_Y0
                                        * Referenced by: '<S296>/_Handrad'
                                        */
  boolean_T _Ena_Y0_l;                 /* Computed Parameter: _Ena_Y0_l
                                        * Referenced by: '<S373>/_Ena'
                                        */
  boolean_T _NCR0_Y0_j;                /* Computed Parameter: _NCR0_Y0_j
                                        * Referenced by: '<S373>/_NCR0'
                                        */
  boolean_T _Lim_Y0_h;                 /* Computed Parameter: _Lim_Y0_h
                                        * Referenced by: '<S373>/_Lim+'
                                        */
  boolean_T _Lim_Y0_c;                 /* Computed Parameter: _Lim_Y0_c
                                        * Referenced by: '<S373>/_Lim-'
                                        */
  boolean_T _OK_Y0_f;                  /* Computed Parameter: _OK_Y0_f
                                        * Referenced by: '<S373>/_OK'
                                        */
  boolean_T _Icns_Y0_a;                /* Computed Parameter: _Icns_Y0_a
                                        * Referenced by: '<S373>/_Icns'
                                        */
  boolean_T _TNlim_Y0_p;               /* Computed Parameter: _TNlim_Y0_p
                                        * Referenced by: '<S373>/_T-Nlim'
                                        */
  boolean_T _PN_Y0_b;                  /* Computed Parameter: _PN_Y0_b
                                        * Referenced by: '<S373>/_P-N'
                                        */
  boolean_T _NI_Y0_g;                  /* Computed Parameter: _NI_Y0_g
                                        * Referenced by: '<S373>/_N-I'
                                        */
  boolean_T _N0_Y0_k;                  /* Computed Parameter: _N0_Y0_k
                                        * Referenced by: '<S373>/_N0'
                                        */
  boolean_T _Rsw_Y0_l;                 /* Computed Parameter: _Rsw_Y0_l
                                        * Referenced by: '<S373>/_Rsw'
                                        */
  boolean_T _Cal0_Y0_c;                /* Computed Parameter: _Cal0_Y0_c
                                        * Referenced by: '<S373>/_Cal0'
                                        */
  boolean_T _Cal_Y0_f;                 /* Computed Parameter: _Cal_Y0_f
                                        * Referenced by: '<S373>/_Cal'
                                        */
  boolean_T _Tol_Y0_e;                 /* Computed Parameter: _Tol_Y0_e
                                        * Referenced by: '<S373>/_Tol'
                                        */
  boolean_T _Rdy_Y0_b;                 /* Computed Parameter: _Rdy_Y0_b
                                        * Referenced by: '<S373>/_Rdy'
                                        */
  boolean_T _Brk_Y0_b;                 /* Computed Parameter: _Brk_Y0_b
                                        * Referenced by: '<S373>/_Brk'
                                        */
  boolean_T _SIGNMAG_Y0_d;             /* Computed Parameter: _SIGNMAG_Y0_d
                                        * Referenced by: '<S373>/_SIGNMAG'
                                        */
  boolean_T _Nclip_Y0_p;               /* Computed Parameter: _Nclip_Y0_p
                                        * Referenced by: '<S373>/_Nclip'
                                        */
  boolean_T _Nclip_Y0_bj;              /* Computed Parameter: _Nclip_Y0_bj
                                        * Referenced by: '<S373>/_Nclip+'
                                        */
  boolean_T _Nclip_Y0_k;               /* Computed Parameter: _Nclip_Y0_k
                                        * Referenced by: '<S373>/_Nclip-'
                                        */
  boolean_T _IrdDig_Y0_g;              /* Computed Parameter: _IrdDig_Y0_g
                                        * Referenced by: '<S373>/_Ird-Dig'
                                        */
  boolean_T _Irdrchd_Y0_j;             /* Computed Parameter: _Irdrchd_Y0_j
                                        * Referenced by: '<S373>/_Ird-rchd'
                                        */
  boolean_T _IrdN_Y0_o;                /* Computed Parameter: _IrdN_Y0_o
                                        * Referenced by: '<S373>/_Ird-N'
                                        */
  boolean_T _Ird_TI_Y0_a;              /* Computed Parameter: _Ird_TI_Y0_a
                                        * Referenced by: '<S373>/_Ird_TI'
                                        */
  boolean_T _Ird_TIR_Y0_d;             /* Computed Parameter: _Ird_TIR_Y0_d
                                        * Referenced by: '<S373>/_Ird_TIR'
                                        */
  boolean_T _2Hz_Y0_l;                 /* Computed Parameter: _2Hz_Y0_l
                                        * Referenced by: '<S373>/_2Hz'
                                        */
  boolean_T _IrdTM_Y0_i;               /* Computed Parameter: _IrdTM_Y0_i
                                        * Referenced by: '<S373>/_Ird-TM'
                                        */
  boolean_T _IrdANA_Y0_g;              /* Computed Parameter: _IrdANA_Y0_g
                                        * Referenced by: '<S373>/_Ird-ANA'
                                        */
  boolean_T _Iwcns_Y0_a;               /* Computed Parameter: _Iwcns_Y0_a
                                        * Referenced by: '<S373>/_Iwcns'
                                        */
  boolean_T _RFEplus_Y0;               /* Computed Parameter: _RFEplus_Y0
                                        * Referenced by: '<S373>/_RFE-plus'
                                        */
  boolean_T _frei_Y0_i;                /* Computed Parameter: _frei_Y0_i
                                        * Referenced by: '<S373>/_frei'
                                        */
  boolean_T _Handrad_Y0_i;             /* Computed Parameter: _Handrad_Y0_i
                                        * Referenced by: '<S373>/_Handrad'
                                        */
  boolean_T AMS_ErrorOut_Y0;           /* Computed Parameter: AMS_ErrorOut_Y0
                                        * Referenced by: '<S536>/AMS_ErrorOut'
                                        */
  boolean_T IMD_ErrorOut_Y0;           /* Computed Parameter: IMD_ErrorOut_Y0
                                        * Referenced by: '<S536>/IMD_ErrorOut'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S539>/Logic'
                                        */
  boolean_T Logic_table_k[16];         /* Computed Parameter: Logic_table_k
                                        * Referenced by: '<S540>/Logic'
                                        */
  boolean_T Constant_Value_m2;         /* Computed Parameter: Constant_Value_m2
                                        * Referenced by: '<S562>/Constant '
                                        */
  boolean_T LEDBarblinken_Value;       /* Computed Parameter: LEDBarblinken_Value
                                        * Referenced by: '<S525>/LED Bar blinken'
                                        */
  boolean_T Mem1_X0_g;                 /* Computed Parameter: Mem1_X0_g
                                        * Referenced by: '<S14>/Mem1'
                                        */
  boolean_T Mem2_X0_h;                 /* Computed Parameter: Mem2_X0_h
                                        * Referenced by: '<S14>/Mem2'
                                        */
  boolean_T Mem3_X0_hg;                /* Computed Parameter: Mem3_X0_hg
                                        * Referenced by: '<S14>/Mem3'
                                        */
  boolean_T Mem4_X0_g;                 /* Computed Parameter: Mem4_X0_g
                                        * Referenced by: '<S14>/Mem4'
                                        */
  boolean_T Constant1_Value_l2;        /* Computed Parameter: Constant1_Value_l2
                                        * Referenced by: '<S523>/Constant1'
                                        */
  boolean_T Constant14_Value;          /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S523>/Constant14'
                                        */
  boolean_T Mem1_X0_gm;                /* Computed Parameter: Mem1_X0_gm
                                        * Referenced by: '<S24>/Mem1'
                                        */
  boolean_T Mem2_X0_l;                 /* Computed Parameter: Mem2_X0_l
                                        * Referenced by: '<S24>/Mem2'
                                        */
  boolean_T Mem3_X0_o;                 /* Computed Parameter: Mem3_X0_o
                                        * Referenced by: '<S24>/Mem3'
                                        */
  boolean_T Mem4_X0_kv;                /* Computed Parameter: Mem4_X0_kv
                                        * Referenced by: '<S24>/Mem4'
                                        */
  boolean_T Mem1_X0_p;                 /* Computed Parameter: Mem1_X0_p
                                        * Referenced by: '<S25>/Mem1'
                                        */
  boolean_T Mem2_X0_o;                 /* Computed Parameter: Mem2_X0_o
                                        * Referenced by: '<S25>/Mem2'
                                        */
  boolean_T Mem3_X0_a;                 /* Computed Parameter: Mem3_X0_a
                                        * Referenced by: '<S25>/Mem3'
                                        */
  boolean_T Mem4_X0_j;                 /* Computed Parameter: Mem4_X0_j
                                        * Referenced by: '<S25>/Mem4'
                                        */
  boolean_T Mem1_X0_f;                 /* Computed Parameter: Mem1_X0_f
                                        * Referenced by: '<S26>/Mem1'
                                        */
  boolean_T Mem2_X0_dt;                /* Computed Parameter: Mem2_X0_dt
                                        * Referenced by: '<S26>/Mem2'
                                        */
  boolean_T Mem3_X0_e;                 /* Computed Parameter: Mem3_X0_e
                                        * Referenced by: '<S26>/Mem3'
                                        */
  boolean_T Mem4_X0_f;                 /* Computed Parameter: Mem4_X0_f
                                        * Referenced by: '<S26>/Mem4'
                                        */
  boolean_T TmpLatchAtJKFlipFlopInport1_X0;/* Computed Parameter: TmpLatchAtJKFlipFlopInport1_X0
                                            * Referenced by: synthesized block
                                            */
  boolean_T TmpLatchAtJKFlipFlopInport2_X0;/* Computed Parameter: TmpLatchAtJKFlipFlopInport2_X0
                                            * Referenced by: synthesized block
                                            */
  boolean_T TmpLatchAtJKFlipFlopInport1_X_h;/* Computed Parameter: TmpLatchAtJKFlipFlopInport1_X_h
                                             * Referenced by: synthesized block
                                             */
  boolean_T TmpLatchAtJKFlipFlopInport2_X_h;/* Computed Parameter: TmpLatchAtJKFlipFlopInport2_X_h
                                             * Referenced by: synthesized block
                                             */
  boolean_T Mem1_X0_e0;                /* Computed Parameter: Mem1_X0_e0
                                        * Referenced by: '<S27>/Mem1'
                                        */
  boolean_T Mem2_X0_j;                 /* Computed Parameter: Mem2_X0_j
                                        * Referenced by: '<S27>/Mem2'
                                        */
  boolean_T Mem3_X0_p;                 /* Computed Parameter: Mem3_X0_p
                                        * Referenced by: '<S27>/Mem3'
                                        */
  boolean_T Mem4_X0_l;                 /* Computed Parameter: Mem4_X0_l
                                        * Referenced by: '<S27>/Mem4'
                                        */
  boolean_T TmpLatchAtJKFlipFlopInport1_X_c;/* Computed Parameter: TmpLatchAtJKFlipFlopInport1_X_c
                                             * Referenced by: synthesized block
                                             */
  boolean_T TmpLatchAtJKFlipFlopInport2_X_c;/* Computed Parameter: TmpLatchAtJKFlipFlopInport2_X_c
                                             * Referenced by: synthesized block
                                             */
  boolean_T Mem1_X0_j;                 /* Computed Parameter: Mem1_X0_j
                                        * Referenced by: '<S28>/Mem1'
                                        */
  boolean_T Mem2_X0_jg;                /* Computed Parameter: Mem2_X0_jg
                                        * Referenced by: '<S28>/Mem2'
                                        */
  boolean_T Mem3_X0_j;                 /* Computed Parameter: Mem3_X0_j
                                        * Referenced by: '<S28>/Mem3'
                                        */
  boolean_T Mem4_X0_fy;                /* Computed Parameter: Mem4_X0_fy
                                        * Referenced by: '<S28>/Mem4'
                                        */
  boolean_T Mem1_X0_n;                 /* Computed Parameter: Mem1_X0_n
                                        * Referenced by: '<S29>/Mem1'
                                        */
  boolean_T Mem2_X0_f;                 /* Computed Parameter: Mem2_X0_f
                                        * Referenced by: '<S29>/Mem2'
                                        */
  boolean_T Mem3_X0_pl;                /* Computed Parameter: Mem3_X0_pl
                                        * Referenced by: '<S29>/Mem3'
                                        */
  boolean_T Mem4_X0_c;                 /* Computed Parameter: Mem4_X0_c
                                        * Referenced by: '<S29>/Mem4'
                                        */
  boolean_T Mem1_X0_l;                 /* Computed Parameter: Mem1_X0_l
                                        * Referenced by: '<S30>/Mem1'
                                        */
  boolean_T Mem2_X0_e;                 /* Computed Parameter: Mem2_X0_e
                                        * Referenced by: '<S30>/Mem2'
                                        */
  boolean_T Mem3_X0_p1;                /* Computed Parameter: Mem3_X0_p1
                                        * Referenced by: '<S30>/Mem3'
                                        */
  boolean_T Mem4_X0_n;                 /* Computed Parameter: Mem4_X0_n
                                        * Referenced by: '<S30>/Mem4'
                                        */
  boolean_T Mem1_X0_i;                 /* Computed Parameter: Mem1_X0_i
                                        * Referenced by: '<S37>/Mem1'
                                        */
  boolean_T Mem2_X0_i;                 /* Computed Parameter: Mem2_X0_i
                                        * Referenced by: '<S37>/Mem2'
                                        */
  boolean_T Mem3_X0_ai;                /* Computed Parameter: Mem3_X0_ai
                                        * Referenced by: '<S37>/Mem3'
                                        */
  boolean_T Mem4_X0_nu;                /* Computed Parameter: Mem4_X0_nu
                                        * Referenced by: '<S37>/Mem4'
                                        */
  boolean_T Mem1_X0_dl;                /* Computed Parameter: Mem1_X0_dl
                                        * Referenced by: '<S35>/Mem1'
                                        */
  boolean_T Mem2_X0_g;                 /* Computed Parameter: Mem2_X0_g
                                        * Referenced by: '<S35>/Mem2'
                                        */
  boolean_T Mem3_X0_l;                 /* Computed Parameter: Mem3_X0_l
                                        * Referenced by: '<S35>/Mem3'
                                        */
  boolean_T Mem4_X0_ps;                /* Computed Parameter: Mem4_X0_ps
                                        * Referenced by: '<S35>/Mem4'
                                        */
  boolean_T Mem1_X0_ea;                /* Computed Parameter: Mem1_X0_ea
                                        * Referenced by: '<S36>/Mem1'
                                        */
  boolean_T Mem2_X0_m;                 /* Computed Parameter: Mem2_X0_m
                                        * Referenced by: '<S36>/Mem2'
                                        */
  boolean_T Mem3_X0_f;                 /* Computed Parameter: Mem3_X0_f
                                        * Referenced by: '<S36>/Mem3'
                                        */
  boolean_T Mem4_X0_a;                 /* Computed Parameter: Mem4_X0_a
                                        * Referenced by: '<S36>/Mem4'
                                        */
  boolean_T Mem1_X0_pg;                /* Computed Parameter: Mem1_X0_pg
                                        * Referenced by: '<S38>/Mem1'
                                        */
  boolean_T Mem2_X0_dx;                /* Computed Parameter: Mem2_X0_dx
                                        * Referenced by: '<S38>/Mem2'
                                        */
  boolean_T Mem3_X0_d;                 /* Computed Parameter: Mem3_X0_d
                                        * Referenced by: '<S38>/Mem3'
                                        */
  boolean_T Mem4_X0_oa;                /* Computed Parameter: Mem4_X0_oa
                                        * Referenced by: '<S38>/Mem4'
                                        */
  boolean_T Mem1_X0_pv;                /* Computed Parameter: Mem1_X0_pv
                                        * Referenced by: '<S46>/Mem1'
                                        */
  boolean_T Mem2_X0_of;                /* Computed Parameter: Mem2_X0_of
                                        * Referenced by: '<S46>/Mem2'
                                        */
  boolean_T Mem3_X0_fy;                /* Computed Parameter: Mem3_X0_fy
                                        * Referenced by: '<S46>/Mem3'
                                        */
  boolean_T Mem4_X0_m;                 /* Computed Parameter: Mem4_X0_m
                                        * Referenced by: '<S46>/Mem4'
                                        */
  boolean_T Mem1_X0_h;                 /* Computed Parameter: Mem1_X0_h
                                        * Referenced by: '<S47>/Mem1'
                                        */
  boolean_T Mem2_X0_e2;                /* Computed Parameter: Mem2_X0_e2
                                        * Referenced by: '<S47>/Mem2'
                                        */
  boolean_T Mem3_X0_jb;                /* Computed Parameter: Mem3_X0_jb
                                        * Referenced by: '<S47>/Mem3'
                                        */
  boolean_T Mem4_X0_c0;                /* Computed Parameter: Mem4_X0_c0
                                        * Referenced by: '<S47>/Mem4'
                                        */
  boolean_T Mem1_X0_px;                /* Computed Parameter: Mem1_X0_px
                                        * Referenced by: '<S48>/Mem1'
                                        */
  boolean_T Mem2_X0_ee;                /* Computed Parameter: Mem2_X0_ee
                                        * Referenced by: '<S48>/Mem2'
                                        */
  boolean_T Mem3_X0_m;                 /* Computed Parameter: Mem3_X0_m
                                        * Referenced by: '<S48>/Mem3'
                                        */
  boolean_T Mem4_X0_a2;                /* Computed Parameter: Mem4_X0_a2
                                        * Referenced by: '<S48>/Mem4'
                                        */
  boolean_T LEDBarMode_Value;          /* Computed Parameter: LEDBarMode_Value
                                        * Referenced by: '<S525>/LED Bar Mode'
                                        */
  boolean_T Mem1_X0_jt;                /* Computed Parameter: Mem1_X0_jt
                                        * Referenced by: '<S49>/Mem1'
                                        */
  boolean_T Mem2_X0_hk;                /* Computed Parameter: Mem2_X0_hk
                                        * Referenced by: '<S49>/Mem2'
                                        */
  boolean_T Mem3_X0_jp;                /* Computed Parameter: Mem3_X0_jp
                                        * Referenced by: '<S49>/Mem3'
                                        */
  boolean_T Mem4_X0_kp;                /* Computed Parameter: Mem4_X0_kp
                                        * Referenced by: '<S49>/Mem4'
                                        */
  boolean_T Logic_table_m[16];         /* Computed Parameter: Logic_table_m
                                        * Referenced by: '<S560>/Logic'
                                        */
  boolean_T Constant4_Value_j;         /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S523>/Constant4'
                                        */
  boolean_T Constant5_Value;           /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S523>/Constant5'
                                        */
  boolean_T Constant6_Value;           /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S523>/Constant6'
                                        */
  boolean_T Constant7_Value;           /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S523>/Constant7'
                                        */
  boolean_T Constant8_Value;           /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S523>/Constant8'
                                        */
  boolean_T Constant9_Value;           /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S523>/Constant9'
                                        */
  boolean_T Constant10_Value;          /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<S523>/Constant10'
                                        */
  boolean_T Constant11_Value;          /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S523>/Constant11'
                                        */
  boolean_T Constant12_Value;          /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<S523>/Constant12'
                                        */
  boolean_T Logic_table_p[16];         /* Computed Parameter: Logic_table_p
                                        * Referenced by: '<S578>/Logic'
                                        */
  boolean_T Logic_table_c[16];         /* Computed Parameter: Logic_table_c
                                        * Referenced by: '<S581>/Logic'
                                        */
  boolean_T Logic_table_cf[16];        /* Computed Parameter: Logic_table_cf
                                        * Referenced by: '<S618>/Logic'
                                        */
  boolean_T Logic_table_kb[16];        /* Computed Parameter: Logic_table_kb
                                        * Referenced by: '<S619>/Logic'
                                        */
  boolean_T Mem1_X0_i0;                /* Computed Parameter: Mem1_X0_i0
                                        * Referenced by: '<S76>/Mem1'
                                        */
  boolean_T Mem2_X0_c;                 /* Computed Parameter: Mem2_X0_c
                                        * Referenced by: '<S76>/Mem2'
                                        */
  boolean_T Mem3_X0_b;                 /* Computed Parameter: Mem3_X0_b
                                        * Referenced by: '<S76>/Mem3'
                                        */
  boolean_T Mem4_X0_b;                 /* Computed Parameter: Mem4_X0_b
                                        * Referenced by: '<S76>/Mem4'
                                        */
  boolean_T Mem1_X0_b;                 /* Computed Parameter: Mem1_X0_b
                                        * Referenced by: '<S90>/Mem1'
                                        */
  boolean_T Mem2_X0_f3;                /* Computed Parameter: Mem2_X0_f3
                                        * Referenced by: '<S90>/Mem2'
                                        */
  boolean_T Mem3_X0_fa;                /* Computed Parameter: Mem3_X0_fa
                                        * Referenced by: '<S90>/Mem3'
                                        */
  boolean_T Mem4_X0_fk;                /* Computed Parameter: Mem4_X0_fk
                                        * Referenced by: '<S90>/Mem4'
                                        */
  boolean_T Mem1_X0_m;                 /* Computed Parameter: Mem1_X0_m
                                        * Referenced by: '<S263>/Mem1'
                                        */
  boolean_T Mem2_X0_n;                 /* Computed Parameter: Mem2_X0_n
                                        * Referenced by: '<S263>/Mem2'
                                        */
  boolean_T Mem3_X0_cz;                /* Computed Parameter: Mem3_X0_cz
                                        * Referenced by: '<S263>/Mem3'
                                        */
  boolean_T Mem4_X0_kq;                /* Computed Parameter: Mem4_X0_kq
                                        * Referenced by: '<S263>/Mem4'
                                        */
  boolean_T Mem1_X0_g1;                /* Computed Parameter: Mem1_X0_g1
                                        * Referenced by: '<S264>/Mem1'
                                        */
  boolean_T Mem2_X0_p;                 /* Computed Parameter: Mem2_X0_p
                                        * Referenced by: '<S264>/Mem2'
                                        */
  boolean_T Mem3_X0_lz;                /* Computed Parameter: Mem3_X0_lz
                                        * Referenced by: '<S264>/Mem3'
                                        */
  boolean_T Mem4_X0_c0l;               /* Computed Parameter: Mem4_X0_c0l
                                        * Referenced by: '<S264>/Mem4'
                                        */
  boolean_T Mem1_X0_nd;                /* Computed Parameter: Mem1_X0_nd
                                        * Referenced by: '<S267>/Mem1'
                                        */
  boolean_T Mem2_X0_ov;                /* Computed Parameter: Mem2_X0_ov
                                        * Referenced by: '<S267>/Mem2'
                                        */
  boolean_T Mem3_X0_en;                /* Computed Parameter: Mem3_X0_en
                                        * Referenced by: '<S267>/Mem3'
                                        */
  boolean_T Mem4_X0_jb;                /* Computed Parameter: Mem4_X0_jb
                                        * Referenced by: '<S267>/Mem4'
                                        */
  boolean_T Mem1_X0_he;                /* Computed Parameter: Mem1_X0_he
                                        * Referenced by: '<S298>/Mem1'
                                        */
  boolean_T Mem2_X0_ca;                /* Computed Parameter: Mem2_X0_ca
                                        * Referenced by: '<S298>/Mem2'
                                        */
  boolean_T Mem3_X0_or;                /* Computed Parameter: Mem3_X0_or
                                        * Referenced by: '<S298>/Mem3'
                                        */
  boolean_T Mem4_X0_i;                 /* Computed Parameter: Mem4_X0_i
                                        * Referenced by: '<S298>/Mem4'
                                        */
  boolean_T Mem5_X0;                   /* Computed Parameter: Mem5_X0
                                        * Referenced by: '<S298>/Mem5'
                                        */
  boolean_T Mem1_X0_a;                 /* Computed Parameter: Mem1_X0_a
                                        * Referenced by: '<S375>/Mem1'
                                        */
  boolean_T Mem2_X0_fl;                /* Computed Parameter: Mem2_X0_fl
                                        * Referenced by: '<S375>/Mem2'
                                        */
  boolean_T Mem3_X0_i;                 /* Computed Parameter: Mem3_X0_i
                                        * Referenced by: '<S375>/Mem3'
                                        */
  boolean_T Mem4_X0_d;                 /* Computed Parameter: Mem4_X0_d
                                        * Referenced by: '<S375>/Mem4'
                                        */
  boolean_T Mem5_X0_a;                 /* Computed Parameter: Mem5_X0_a
                                        * Referenced by: '<S375>/Mem5'
                                        */
  boolean_T Mem1_X0_hc;                /* Computed Parameter: Mem1_X0_hc
                                        * Referenced by: '<S484>/Mem1'
                                        */
  boolean_T Mem2_X0_hk3;               /* Computed Parameter: Mem2_X0_hk3
                                        * Referenced by: '<S484>/Mem2'
                                        */
  boolean_T Mem3_X0_lq;                /* Computed Parameter: Mem3_X0_lq
                                        * Referenced by: '<S484>/Mem3'
                                        */
  boolean_T Mem4_X0_mc;                /* Computed Parameter: Mem4_X0_mc
                                        * Referenced by: '<S484>/Mem4'
                                        */
  boolean_T Mem1_X0_mr;                /* Computed Parameter: Mem1_X0_mr
                                        * Referenced by: '<S485>/Mem1'
                                        */
  boolean_T Mem2_X0_ia;                /* Computed Parameter: Mem2_X0_ia
                                        * Referenced by: '<S485>/Mem2'
                                        */
  boolean_T Mem3_X0_g;                 /* Computed Parameter: Mem3_X0_g
                                        * Referenced by: '<S485>/Mem3'
                                        */
  boolean_T Mem4_X0_e;                 /* Computed Parameter: Mem4_X0_e
                                        * Referenced by: '<S485>/Mem4'
                                        */
  boolean_T Mem1_X0_oy;                /* Computed Parameter: Mem1_X0_oy
                                        * Referenced by: '<S486>/Mem1'
                                        */
  boolean_T Mem2_X0_pt;                /* Computed Parameter: Mem2_X0_pt
                                        * Referenced by: '<S486>/Mem2'
                                        */
  boolean_T Mem3_X0_aj;                /* Computed Parameter: Mem3_X0_aj
                                        * Referenced by: '<S486>/Mem3'
                                        */
  boolean_T Mem4_X0_k1;                /* Computed Parameter: Mem4_X0_k1
                                        * Referenced by: '<S486>/Mem4'
                                        */
  boolean_T Mem1_X0_oa;                /* Computed Parameter: Mem1_X0_oa
                                        * Referenced by: '<S497>/Mem1'
                                        */
  boolean_T Mem2_X0_gr;                /* Computed Parameter: Mem2_X0_gr
                                        * Referenced by: '<S497>/Mem2'
                                        */
  boolean_T Mem3_X0_jn;                /* Computed Parameter: Mem3_X0_jn
                                        * Referenced by: '<S497>/Mem3'
                                        */
  boolean_T Mem4_X0_jh;                /* Computed Parameter: Mem4_X0_jh
                                        * Referenced by: '<S497>/Mem4'
                                        */
  boolean_T Mem1_X0_lc;                /* Computed Parameter: Mem1_X0_lc
                                        * Referenced by: '<S498>/Mem1'
                                        */
  boolean_T Mem2_X0_pm;                /* Computed Parameter: Mem2_X0_pm
                                        * Referenced by: '<S498>/Mem2'
                                        */
  boolean_T Mem3_X0_ie;                /* Computed Parameter: Mem3_X0_ie
                                        * Referenced by: '<S498>/Mem3'
                                        */
  boolean_T Mem4_X0_i4;                /* Computed Parameter: Mem4_X0_i4
                                        * Referenced by: '<S498>/Mem4'
                                        */
  boolean_T Mem1_X0_h4;                /* Computed Parameter: Mem1_X0_h4
                                        * Referenced by: '<S506>/Mem1'
                                        */
  boolean_T Mem2_X0_nr;                /* Computed Parameter: Mem2_X0_nr
                                        * Referenced by: '<S506>/Mem2'
                                        */
  boolean_T Mem3_X0_iy;                /* Computed Parameter: Mem3_X0_iy
                                        * Referenced by: '<S506>/Mem3'
                                        */
  boolean_T Mem4_X0_bf;                /* Computed Parameter: Mem4_X0_bf
                                        * Referenced by: '<S506>/Mem4'
                                        */
  boolean_T Mem1_X0_lt;                /* Computed Parameter: Mem1_X0_lt
                                        * Referenced by: '<S507>/Mem1'
                                        */
  boolean_T Mem2_X0_m1;                /* Computed Parameter: Mem2_X0_m1
                                        * Referenced by: '<S507>/Mem2'
                                        */
  boolean_T Mem3_X0_oo;                /* Computed Parameter: Mem3_X0_oo
                                        * Referenced by: '<S507>/Mem3'
                                        */
  boolean_T Mem4_X0_fa;                /* Computed Parameter: Mem4_X0_fa
                                        * Referenced by: '<S507>/Mem4'
                                        */
  boolean_T Mem1_X0_k;                 /* Computed Parameter: Mem1_X0_k
                                        * Referenced by: '<S508>/Mem1'
                                        */
  boolean_T Mem2_X0_ns;                /* Computed Parameter: Mem2_X0_ns
                                        * Referenced by: '<S508>/Mem2'
                                        */
  boolean_T Mem3_X0_p0;                /* Computed Parameter: Mem3_X0_p0
                                        * Referenced by: '<S508>/Mem3'
                                        */
  boolean_T Mem4_X0_lq;                /* Computed Parameter: Mem4_X0_lq
                                        * Referenced by: '<S508>/Mem4'
                                        */
  boolean_T Constant_Value_day;        /* Computed Parameter: Constant_Value_day
                                        * Referenced by: '<S676>/Constant'
                                        */
  boolean_T Constant_Value_k2;         /* Computed Parameter: Constant_Value_k2
                                        * Referenced by: '<S677>/Constant'
                                        */
  boolean_T Constant_Value_c3;         /* Computed Parameter: Constant_Value_c3
                                        * Referenced by: '<S678>/Constant'
                                        */
  uint8_T Gain_Gain_dz;                /* Computed Parameter: Gain_Gain_dz
                                        * Referenced by: '<S286>/Gain'
                                        */
  uint8_T Gain_Gain_nt;                /* Computed Parameter: Gain_Gain_nt
                                        * Referenced by: '<S287>/Gain'
                                        */
  uint8_T Gain_Gain_ix;                /* Computed Parameter: Gain_Gain_ix
                                        * Referenced by: '<S544>/Gain'
                                        */
  uint8_T Gain_Gain_ood;               /* Computed Parameter: Gain_Gain_ood
                                        * Referenced by: '<S538>/Gain'
                                        */
  uint8_T Gain1_Gain_h;                /* Computed Parameter: Gain1_Gain_h
                                        * Referenced by: '<S538>/Gain1'
                                        */
  uint8_T Gain2_Gain_c;                /* Computed Parameter: Gain2_Gain_c
                                        * Referenced by: '<S538>/Gain2'
                                        */
  uint8_T Gain3_Gain_b;                /* Computed Parameter: Gain3_Gain_b
                                        * Referenced by: '<S538>/Gain3'
                                        */
  uint8_T Gain4_Gain_p;                /* Computed Parameter: Gain4_Gain_p
                                        * Referenced by: '<S538>/Gain4'
                                        */
  uint8_T Gain5_Gain_d;                /* Computed Parameter: Gain5_Gain_d
                                        * Referenced by: '<S538>/Gain5'
                                        */
  uint8_T Gain6_Gain_cw;               /* Computed Parameter: Gain6_Gain_cw
                                        * Referenced by: '<S538>/Gain6'
                                        */
  uint8_T Gain7_Gain_k;                /* Computed Parameter: Gain7_Gain_k
                                        * Referenced by: '<S538>/Gain7'
                                        */
  uint8_T Gain10_Gain_b;               /* Computed Parameter: Gain10_Gain_b
                                        * Referenced by: '<S538>/Gain10'
                                        */
  uint8_T Gain11_Gain_g;               /* Computed Parameter: Gain11_Gain_g
                                        * Referenced by: '<S538>/Gain11'
                                        */
  uint8_T Gain12_Gain;                 /* Computed Parameter: Gain12_Gain
                                        * Referenced by: '<S538>/Gain12'
                                        */
  uint8_T Gain13_Gain;                 /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<S538>/Gain13'
                                        */
  uint8_T Gain8_Gain_j;                /* Computed Parameter: Gain8_Gain_j
                                        * Referenced by: '<S538>/Gain8'
                                        */
  uint8_T Gain9_Gain_k;                /* Computed Parameter: Gain9_Gain_k
                                        * Referenced by: '<S538>/Gain9'
                                        */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S690>/J-K Flip-Flop' */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S688>/J-K Flip-Flop' */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S686>/J-K Flip-Flop' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S496>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S488>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S487>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S443>/Triggered Subsystem' */
  P_Inverter_Temp_DR18E_Testpul_T Inverter_Temp_e;/* '<S287>/Inverter_Temp' */
  P_U_DC_DR18E_Testpult_T U_DC_o;      /* '<S287>/U_DC' */
  P_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_c;/* '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  P_WirkstromIq_DR18E_Testpult_T WirkstromIq_e;/* '<S287>/Wirkstrom Iq' */
  P_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl_k;/* '<S368>/Skalierung Drehzahl' */
  P_Inverter_Temp_DR18E_Testpul_T Inverter_Temp;/* '<S286>/Inverter_Temp' */
  P_U_DC_DR18E_Testpult_T U_DC;        /* '<S286>/U_DC' */
  P_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_f;/* '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  P_WirkstromIq_DR18E_Testpult_T WirkstromIq;/* '<S286>/Wirkstrom Iq' */
  P_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl;/* '<S288>/Skalierung Drehzahl' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S282>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S277>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S276>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S275>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S270>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S257>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S256>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S255>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S248>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S247>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S246>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S237>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S236>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S235>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S228>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S227>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S226>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S217>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S216>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S215>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S208>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S207>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S206>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S197>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S196>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S195>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S188>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem;/* '<S187>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S186>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S177>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S176>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S175>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S168>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S167>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S166>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S150>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S149>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S148>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S147>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S146>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S145>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S144>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S143>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S142>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S141>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S120>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S119>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S118>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S117>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S116>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S115>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S114>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S113>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S112>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S111>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S91>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_DR18E_Testpult_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_DR18E_Testpult_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T blkStateChange;
  real_T odeF[1][26];
  ODE1_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint16_T TID[8];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[8];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_DR18E_Testpult_T DR18E_Testpult_P;

/* Block signals (auto storage) */
extern B_DR18E_Testpult_T DR18E_Testpult_B;

/* Continuous states (auto storage) */
extern X_DR18E_Testpult_T DR18E_Testpult_X;

/* Block states (auto storage) */
extern DW_DR18E_Testpult_T DR18E_Testpult_DW;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_DR18E_Testpult_T DR18E_Testpult_PrevZCX;

/* Model entry point functions */
extern void DR18E_Testpult_initialize(void);
extern void DR18E_Testpult_output(void);
extern void DR18E_Testpult_update(void);
extern void DR18E_Testpult_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DR18E_Testpult_T *const DR18E_Testpult_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DR18E_Testpult'
 * '<S1>'   : 'DR18E_Testpult/Ausgabe'
 * '<S2>'   : 'DR18E_Testpult/Eingabe Fahrzeug'
 * '<S3>'   : 'DR18E_Testpult/Pre Setup'
 * '<S4>'   : 'DR18E_Testpult/RTI Data'
 * '<S5>'   : 'DR18E_Testpult/Verarbeitung'
 * '<S6>'   : 'DR18E_Testpult/Ausgabe/AMS'
 * '<S7>'   : 'DR18E_Testpult/Ausgabe/CANIO'
 * '<S8>'   : 'DR18E_Testpult/Ausgabe/Diagnose'
 * '<S9>'   : 'DR18E_Testpult/Ausgabe/Display'
 * '<S10>'  : 'DR18E_Testpult/Ausgabe/Inverter TX'
 * '<S11>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte'
 * '<S12>'  : 'DR18E_Testpult/Ausgabe/AMS/Detect Change1'
 * '<S13>'  : 'DR18E_Testpult/Ausgabe/AMS/SIG_FAN_HVBATTERY'
 * '<S14>'  : 'DR18E_Testpult/Ausgabe/AMS/Transmit OK Detection3'
 * '<S15>'  : 'DR18E_Testpult/Ausgabe/CANIO/Detect Change1'
 * '<S16>'  : 'DR18E_Testpult/Ausgabe/CANIO/Detect Change2'
 * '<S17>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_Brakelight'
 * '<S18>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_Buzzer'
 * '<S19>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_FAN'
 * '<S20>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_Inverter_Enable'
 * '<S21>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_PRECHARGE'
 * '<S22>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_PUMP'
 * '<S23>'  : 'DR18E_Testpult/Ausgabe/CANIO/SIG_SHUTDOWN'
 * '<S24>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection'
 * '<S25>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection1'
 * '<S26>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection2'
 * '<S27>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection3'
 * '<S28>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection4'
 * '<S29>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection5'
 * '<S30>'  : 'DR18E_Testpult/Ausgabe/CANIO/Transmit OK Detection6'
 * '<S31>'  : 'DR18E_Testpult/Ausgabe/Diagnose/IGBT_1_Temp'
 * '<S32>'  : 'DR18E_Testpult/Ausgabe/Diagnose/IGBT_2_Temp'
 * '<S33>'  : 'DR18E_Testpult/Ausgabe/Diagnose/MOTOR_1_Temp'
 * '<S34>'  : 'DR18E_Testpult/Ausgabe/Diagnose/MOTOR_2_Temp'
 * '<S35>'  : 'DR18E_Testpult/Ausgabe/Diagnose/Transmit OK Detection1'
 * '<S36>'  : 'DR18E_Testpult/Ausgabe/Diagnose/Transmit OK Detection2'
 * '<S37>'  : 'DR18E_Testpult/Ausgabe/Diagnose/Transmit OK Detection3'
 * '<S38>'  : 'DR18E_Testpult/Ausgabe/Diagnose/Transmit OK Detection4'
 * '<S39>'  : 'DR18E_Testpult/Ausgabe/Display/Car_State'
 * '<S40>'  : 'DR18E_Testpult/Ausgabe/Display/DISP_Error_Code'
 * '<S41>'  : 'DR18E_Testpult/Ausgabe/Display/Detect Change'
 * '<S42>'  : 'DR18E_Testpult/Ausgabe/Display/Detect Change1'
 * '<S43>'  : 'DR18E_Testpult/Ausgabe/Display/Detect Change2'
 * '<S44>'  : 'DR18E_Testpult/Ausgabe/Display/Drive_Torque_Max'
 * '<S45>'  : 'DR18E_Testpult/Ausgabe/Display/LED_BAR'
 * '<S46>'  : 'DR18E_Testpult/Ausgabe/Display/Transmit OK Detection'
 * '<S47>'  : 'DR18E_Testpult/Ausgabe/Display/Transmit OK Detection1'
 * '<S48>'  : 'DR18E_Testpult/Ausgabe/Display/Transmit OK Detection2'
 * '<S49>'  : 'DR18E_Testpult/Ausgabe/Display/Transmit OK Detection3'
 * '<S50>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/FlightRecorder'
 * '<S51>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/FlightRecorder1'
 * '<S52>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXTorque'
 * '<S53>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal'
 * '<S54>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Skalierung Drehmoment'
 * '<S55>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/TX Mode Management'
 * '<S56>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Umrichter Init'
 * '<S57>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S58>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S59>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXTorque/INV_1_TX'
 * '<S60>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXTorque/INV_2_TX'
 * '<S61>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXTorque/TorqueMessage'
 * '<S62>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal/INV_1_TX'
 * '<S63>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal/INV_2_TX'
 * '<S64>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal/TorqueMessage'
 * '<S65>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal/Transmit OK Detection1'
 * '<S66>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Inverters TXUniversal/Transmit OK Detection2'
 * '<S67>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Umrichter Init/TX MessageInit'
 * '<S68>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Umrichter Init/TX MessageInit1'
 * '<S69>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Umrichter Init/Transmit OK Detection'
 * '<S70>'  : 'DR18E_Testpult/Ausgabe/Inverter TX/Umrichter Init/Transmit OK Detection1'
 * '<S71>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Dashboard_LEDs'
 * '<S72>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Detect Change'
 * '<S73>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Detect Change1'
 * '<S74>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Detect Change2'
 * '<S75>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Detect Change3'
 * '<S76>'  : 'DR18E_Testpult/Ausgabe/SensorboardMitte/Transmit OK Detection'
 * '<S77>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS'
 * '<S78>'  : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO'
 * '<S79>'  : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS '
 * '<S80>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro'
 * '<S81>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages'
 * '<S82>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber'
 * '<S83>'  : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox'
 * '<S84>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front'
 * '<S85>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte'
 * '<S86>'  : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear'
 * '<S87>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/FlightRecorder4'
 * '<S88>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/HV_AMS_STATE'
 * '<S89>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Precharge_Status'
 * '<S90>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX OK Detection4'
 * '<S91>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX Timeout Detection2'
 * '<S92>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp '
 * '<S93>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp'
 * '<S94>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10'
 * '<S95>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2'
 * '<S96>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4'
 * '<S97>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6'
 * '<S98>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8'
 * '<S99>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S100>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX Timeout Detection2/Subsystem'
 * '<S101>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK1A_Temp'
 * '<S102>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK1B_Temp'
 * '<S103>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK2A_Temp'
 * '<S104>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK2B_Temp'
 * '<S105>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK3A_Temp'
 * '<S106>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK3B_Temp'
 * '<S107>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK4A_Temp'
 * '<S108>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK4B_Temp'
 * '<S109>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK5A_Temp'
 * '<S110>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK5B_Temp'
 * '<S111>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection1'
 * '<S112>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection10'
 * '<S113>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection2'
 * '<S114>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection3'
 * '<S115>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection4'
 * '<S116>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection5'
 * '<S117>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection6'
 * '<S118>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection7'
 * '<S119>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection8'
 * '<S120>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection9'
 * '<S121>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection1/Subsystem'
 * '<S122>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection10/Subsystem'
 * '<S123>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection2/Subsystem'
 * '<S124>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection3/Subsystem'
 * '<S125>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection4/Subsystem'
 * '<S126>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection5/Subsystem'
 * '<S127>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection6/Subsystem'
 * '<S128>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection7/Subsystem'
 * '<S129>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection8/Subsystem'
 * '<S130>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection9/Subsystem'
 * '<S131>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK10A_Temp'
 * '<S132>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK10B_Temp'
 * '<S133>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK6A_Temp'
 * '<S134>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK6B_Temp'
 * '<S135>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK7A_Temp'
 * '<S136>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK7B_Temp'
 * '<S137>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK8A_Temp'
 * '<S138>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK8B_Temp'
 * '<S139>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK9A_Temp'
 * '<S140>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK9B_Temp'
 * '<S141>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection1'
 * '<S142>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection10'
 * '<S143>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection2'
 * '<S144>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection3'
 * '<S145>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection4'
 * '<S146>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection5'
 * '<S147>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection6'
 * '<S148>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection7'
 * '<S149>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection8'
 * '<S150>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection9'
 * '<S151>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection1/Subsystem'
 * '<S152>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection10/Subsystem'
 * '<S153>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection2/Subsystem'
 * '<S154>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection3/Subsystem'
 * '<S155>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection4/Subsystem'
 * '<S156>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection5/Subsystem'
 * '<S157>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection6/Subsystem'
 * '<S158>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection7/Subsystem'
 * '<S159>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection8/Subsystem'
 * '<S160>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection9/Subsystem'
 * '<S161>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10'
 * '<S162>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9'
 * '<S163>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10A'
 * '<S164>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10B'
 * '<S165>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10C'
 * '<S166>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection'
 * '<S167>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection1'
 * '<S168>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection2'
 * '<S169>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection/Subsystem'
 * '<S170>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection1/Subsystem'
 * '<S171>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection2/Subsystem'
 * '<S172>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9A'
 * '<S173>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9B'
 * '<S174>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9C'
 * '<S175>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection'
 * '<S176>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection1'
 * '<S177>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection2'
 * '<S178>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection/Subsystem'
 * '<S179>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection1/Subsystem'
 * '<S180>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection2/Subsystem'
 * '<S181>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1'
 * '<S182>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2'
 * '<S183>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1A'
 * '<S184>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1B'
 * '<S185>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1C'
 * '<S186>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection'
 * '<S187>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection1'
 * '<S188>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection2'
 * '<S189>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection/Subsystem'
 * '<S190>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection1/Subsystem'
 * '<S191>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection2/Subsystem'
 * '<S192>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2A'
 * '<S193>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2B'
 * '<S194>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2C'
 * '<S195>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection'
 * '<S196>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection1'
 * '<S197>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection2'
 * '<S198>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection/Subsystem'
 * '<S199>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection1/Subsystem'
 * '<S200>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection2/Subsystem'
 * '<S201>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3'
 * '<S202>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4'
 * '<S203>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3A'
 * '<S204>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3B'
 * '<S205>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3C'
 * '<S206>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection'
 * '<S207>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection1'
 * '<S208>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection2'
 * '<S209>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection/Subsystem'
 * '<S210>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection1/Subsystem'
 * '<S211>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection2/Subsystem'
 * '<S212>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4A'
 * '<S213>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4B'
 * '<S214>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4C'
 * '<S215>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection'
 * '<S216>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection1'
 * '<S217>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection2'
 * '<S218>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection/Subsystem'
 * '<S219>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection1/Subsystem'
 * '<S220>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection2/Subsystem'
 * '<S221>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5'
 * '<S222>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6'
 * '<S223>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5A'
 * '<S224>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5B'
 * '<S225>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5C'
 * '<S226>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection'
 * '<S227>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection1'
 * '<S228>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection2'
 * '<S229>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection/Subsystem'
 * '<S230>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection1/Subsystem'
 * '<S231>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection2/Subsystem'
 * '<S232>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6A'
 * '<S233>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6B'
 * '<S234>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6C'
 * '<S235>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection'
 * '<S236>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection1'
 * '<S237>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection2'
 * '<S238>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection/Subsystem'
 * '<S239>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection1/Subsystem'
 * '<S240>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection2/Subsystem'
 * '<S241>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7'
 * '<S242>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8'
 * '<S243>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7A'
 * '<S244>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7B'
 * '<S245>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7C'
 * '<S246>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection'
 * '<S247>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection1'
 * '<S248>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection2'
 * '<S249>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection/Subsystem'
 * '<S250>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection1/Subsystem'
 * '<S251>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection2/Subsystem'
 * '<S252>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8A'
 * '<S253>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8B'
 * '<S254>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8C'
 * '<S255>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection'
 * '<S256>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection1'
 * '<S257>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection2'
 * '<S258>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection/Subsystem'
 * '<S259>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection1/Subsystem'
 * '<S260>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection2/Subsystem'
 * '<S261>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/CANIO_AUX'
 * '<S262>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/CANIO_Temperature'
 * '<S263>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/RX OK Detection1'
 * '<S264>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/RX OK Detection3'
 * '<S265>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4'
 * '<S266>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /GLV_AMS_STATe'
 * '<S267>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /RX OK Detection3'
 * '<S268>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV '
 * '<S269>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/GLV_Cells'
 * '<S270>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/RX Timeout Detection1'
 * '<S271>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/RX Timeout Detection1/Subsystem'
 * '<S272>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV Temp_2'
 * '<S273>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV Temp_3'
 * '<S274>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV_TEMP'
 * '<S275>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection1'
 * '<S276>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection2'
 * '<S277>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection3'
 * '<S278>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection1/Subsystem'
 * '<S279>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection2/Subsystem'
 * '<S280>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection3/Subsystem'
 * '<S281>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/FlightRecorder4'
 * '<S282>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/RX Timeout Detection'
 * '<S283>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/Yaw_Rate'
 * '<S284>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S285>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/RX Timeout Detection/Triggered Subsystem'
 * '<S286>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen '
 * '<S287>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen'
 * '<S288>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl'
 * '<S289>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder1'
 * '<S290>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder2'
 * '<S291>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder3'
 * '<S292>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder4'
 * '<S293>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /INV_1_Recieve'
 * '<S294>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Inverter_Temp'
 * '<S295>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Motortemperatur'
 * '<S296>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung'
 * '<S297>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 * '<S298>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Sender OK Detection'
 * '<S299>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Strom'
 * '<S300>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /U_DC'
 * '<S301>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Wirkstrom Iq'
 * '<S302>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/PT1 Discrete2'
 * '<S303>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/Skalierung Drehzahl'
 * '<S304>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/PT1 Discrete2/Subsystem'
 * '<S305>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S306>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S307>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S308>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S309>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero'
 * '<S310>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero1'
 * '<S311>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero10'
 * '<S312>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero11'
 * '<S313>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero12'
 * '<S314>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero13'
 * '<S315>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero14'
 * '<S316>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero15'
 * '<S317>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero16'
 * '<S318>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero17'
 * '<S319>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero18'
 * '<S320>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero19'
 * '<S321>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero2'
 * '<S322>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero20'
 * '<S323>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero21'
 * '<S324>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero22'
 * '<S325>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero23'
 * '<S326>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero24'
 * '<S327>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero25'
 * '<S328>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero26'
 * '<S329>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero27'
 * '<S330>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero28'
 * '<S331>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero29'
 * '<S332>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero3'
 * '<S333>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero30'
 * '<S334>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero31'
 * '<S335>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero4'
 * '<S336>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero5'
 * '<S337>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero6'
 * '<S338>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero7'
 * '<S339>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero8'
 * '<S340>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero9'
 * '<S341>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero'
 * '<S342>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero1'
 * '<S343>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero10'
 * '<S344>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero11'
 * '<S345>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero12'
 * '<S346>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero13'
 * '<S347>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero14'
 * '<S348>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero15'
 * '<S349>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero16'
 * '<S350>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero17'
 * '<S351>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero18'
 * '<S352>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero19'
 * '<S353>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero2'
 * '<S354>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero20'
 * '<S355>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero21'
 * '<S356>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero22'
 * '<S357>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero23'
 * '<S358>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero24'
 * '<S359>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero27'
 * '<S360>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero3'
 * '<S361>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero30'
 * '<S362>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero4'
 * '<S363>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero5'
 * '<S364>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero6'
 * '<S365>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero7'
 * '<S366>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero8'
 * '<S367>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero9'
 * '<S368>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl'
 * '<S369>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/FlightRecorder2'
 * '<S370>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/INV_2_Recieve'
 * '<S371>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Inverter_Temp'
 * '<S372>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Motortemperatur'
 * '<S373>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung'
 * '<S374>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 * '<S375>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Sender OK Detection'
 * '<S376>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Strom'
 * '<S377>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/U_DC'
 * '<S378>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Wirkstrom Iq'
 * '<S379>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/PT1 Discrete2'
 * '<S380>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/Skalierung Drehzahl'
 * '<S381>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/PT1 Discrete2/Subsystem'
 * '<S382>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S383>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero'
 * '<S384>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero1'
 * '<S385>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero10'
 * '<S386>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero11'
 * '<S387>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero12'
 * '<S388>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero13'
 * '<S389>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero14'
 * '<S390>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero15'
 * '<S391>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero16'
 * '<S392>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero17'
 * '<S393>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero18'
 * '<S394>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero19'
 * '<S395>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero2'
 * '<S396>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero20'
 * '<S397>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero21'
 * '<S398>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero22'
 * '<S399>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero23'
 * '<S400>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero24'
 * '<S401>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero25'
 * '<S402>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero26'
 * '<S403>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero27'
 * '<S404>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero28'
 * '<S405>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero29'
 * '<S406>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero3'
 * '<S407>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero30'
 * '<S408>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero31'
 * '<S409>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero4'
 * '<S410>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero5'
 * '<S411>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero6'
 * '<S412>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero7'
 * '<S413>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero8'
 * '<S414>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero9'
 * '<S415>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero'
 * '<S416>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero1'
 * '<S417>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero10'
 * '<S418>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero11'
 * '<S419>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero12'
 * '<S420>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero13'
 * '<S421>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero14'
 * '<S422>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero15'
 * '<S423>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero16'
 * '<S424>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero17'
 * '<S425>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero18'
 * '<S426>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero19'
 * '<S427>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero2'
 * '<S428>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero20'
 * '<S429>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero21'
 * '<S430>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero22'
 * '<S431>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero23'
 * '<S432>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero24'
 * '<S433>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero27'
 * '<S434>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero3'
 * '<S435>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero30'
 * '<S436>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero4'
 * '<S437>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero5'
 * '<S438>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero6'
 * '<S439>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero7'
 * '<S440>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero8'
 * '<S441>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero9'
 * '<S442>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/FlightRecorder'
 * '<S443>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/RX Timeout Detection'
 * '<S444>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/Steering'
 * '<S445>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S446>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/RX Timeout Detection/Triggered Subsystem'
 * '<S447>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI'
 * '<S448>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/Beschleunigungssensor'
 * '<S449>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI'
 * '<S450>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL1'
 * '<S451>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL2'
 * '<S452>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL3'
 * '<S453>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL4'
 * '<S454>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL5'
 * '<S455>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL6'
 * '<S456>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL7'
 * '<S457>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL8'
 * '<S458>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder1'
 * '<S459>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder4'
 * '<S460>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung ADC-Widerstand'
 * '<S461>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung ADC-Widerstand1'
 * '<S462>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC'
 * '<S463>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1'
 * '<S464>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S465>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S466>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC/PT1 Discrete1'
 * '<S467>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC/PT1 Discrete1/Subsystem'
 * '<S468>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1/PT1 Discrete1'
 * '<S469>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1/PT1 Discrete1/Subsystem'
 * '<S470>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/Beschleunigungssensor/DS1401_ACCEL_READ_BL1'
 * '<S471>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL1'
 * '<S472>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL10'
 * '<S473>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL2'
 * '<S474>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL3'
 * '<S475>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL4'
 * '<S476>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL5'
 * '<S477>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL6'
 * '<S478>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL7'
 * '<S479>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL8'
 * '<S480>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL9'
 * '<S481>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/BOTS_Status'
 * '<S482>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/BSPD_Status'
 * '<S483>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Brake_Value'
 * '<S484>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection1'
 * '<S485>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection3'
 * '<S486>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection4'
 * '<S487>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection'
 * '<S488>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection1'
 * '<S489>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Sensor_Current'
 * '<S490>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Throttle'
 * '<S491>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection/Triggered Subsystem'
 * '<S492>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection1/Triggered Subsystem'
 * '<S493>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Dashboard_AUX'
 * '<S494>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Dashboard_Buttons'
 * '<S495>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RPM_Front'
 * '<S496>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RX Timeout Detection'
 * '<S497>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Transmit OK Detection3'
 * '<S498>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Transmit OK Detection4'
 * '<S499>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RX Timeout Detection/Triggered Subsystem'
 * '<S500>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/ES_rear'
 * '<S501>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder1'
 * '<S502>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder2'
 * '<S503>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder3'
 * '<S504>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Oiltemperature'
 * '<S505>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Sensor_Watertemp'
 * '<S506>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection1'
 * '<S507>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection3'
 * '<S508>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection4'
 * '<S509>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S510>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S511>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S512>' : 'DR18E_Testpult/Pre Setup/CAN 1 - Body'
 * '<S513>' : 'DR18E_Testpult/Pre Setup/CAN1 Status'
 * '<S514>' : 'DR18E_Testpult/Pre Setup/CAN2 - Inv 1 links'
 * '<S515>' : 'DR18E_Testpult/Pre Setup/CAN2 Status'
 * '<S516>' : 'DR18E_Testpult/Pre Setup/CAN3 - Inv 2 rechts'
 * '<S517>' : 'DR18E_Testpult/Pre Setup/CAN3 Status'
 * '<S518>' : 'DR18E_Testpult/Pre Setup/CAN_TYPE1_BOR_M2_C1'
 * '<S519>' : 'DR18E_Testpult/Pre Setup/USB_FLIGHT_REC_SETUP'
 * '<S520>' : 'DR18E_Testpult/RTI Data/RTI Data Store'
 * '<S521>' : 'DR18E_Testpult/RTI Data/RTI Data Store/RTI Data Store'
 * '<S522>' : 'DR18E_Testpult/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S523>' : 'DR18E_Testpult/Verarbeitung/Alarme'
 * '<S524>' : 'DR18E_Testpult/Verarbeitung/Bremse'
 * '<S525>' : 'DR18E_Testpult/Verarbeitung/DIS'
 * '<S526>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control'
 * '<S527>' : 'DR18E_Testpult/Verarbeitung/GLV-Undervoltage'
 * '<S528>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check'
 * '<S529>' : 'DR18E_Testpult/Verarbeitung/MABX RAM'
 * '<S530>' : 'DR18E_Testpult/Verarbeitung/Precalculations'
 * '<S531>' : 'DR18E_Testpult/Verarbeitung/SafetyShutdown'
 * '<S532>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC'
 * '<S533>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1'
 * '<S534>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config'
 * '<S535>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine'
 * '<S536>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching'
 * '<S537>' : 'DR18E_Testpult/Verarbeitung/Alarme/Compare To Constant'
 * '<S538>' : 'DR18E_Testpult/Verarbeitung/Alarme/ErrorCodeTX'
 * '<S539>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching/S-R Flip-Flop'
 * '<S540>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching/S-R Flip-Flop1'
 * '<S541>' : 'DR18E_Testpult/Verarbeitung/Bremse/Compare To Constant'
 * '<S542>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder'
 * '<S543>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder1'
 * '<S544>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder2'
 * '<S545>' : 'DR18E_Testpult/Verarbeitung/Bremse/PT1 Discrete2'
 * '<S546>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck'
 * '<S547>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S548>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S549>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S550>' : 'DR18E_Testpult/Verarbeitung/Bremse/PT1 Discrete2/Subsystem'
 * '<S551>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant'
 * '<S552>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant1'
 * '<S553>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant2'
 * '<S554>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant3'
 * '<S555>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant4'
 * '<S556>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant5'
 * '<S557>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant6'
 * '<S558>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant7'
 * '<S559>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/PT1 Discrete1'
 * '<S560>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/S-R Flip-Flop'
 * '<S561>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/PT1 Discrete1/Subsystem'
 * '<S562>' : 'DR18E_Testpult/Verarbeitung/DIS/LED Bar Blinken Subsystem'
 * '<S563>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating'
 * '<S564>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/FlightRecorder'
 * '<S565>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Power Limit'
 * '<S566>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL'
 * '<S567>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR'
 * '<S568>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL'
 * '<S569>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR'
 * '<S570>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter'
 * '<S571>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite'
 * '<S572>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Compare To Constant'
 * '<S573>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Verbrauch_Wh//km'
 * '<S574>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Verbrauch_Wh//km/USB_FLIGHT_REC_BL1'
 * '<S575>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S576>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL'
 * '<S577>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL/Compare To Constant'
 * '<S578>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL/S-R Flip-Flop'
 * '<S579>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR'
 * '<S580>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR/Compare To Constant'
 * '<S581>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR/S-R Flip-Flop'
 * '<S582>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_Lyapunov'
 * '<S583>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_MIT_DIFF'
 * '<S584>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_MIT_NORM'
 * '<S585>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E'
 * '<S586>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV IPG'
 * '<S587>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/YawRate SET_NEW '
 * '<S588>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Drehmomentverteilung links//rechts'
 * '<S589>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Ermittlung Sollgierrate'
 * '<S590>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/FlightRecorder4'
 * '<S591>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID'
 * '<S592>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S593>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID'
 * '<S594>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_fromGA'
 * '<S595>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_fromOptim'
 * '<S596>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_from_BJ'
 * '<S597>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_Lyapunov'
 * '<S598>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_MIT_DIFF'
 * '<S599>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_MIT_NORM'
 * '<S600>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E'
 * '<S601>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV IPG'
 * '<S602>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/YawRate SET_NEW '
 * '<S603>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Drehmomentverteilung links//rechts'
 * '<S604>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Ermittlung Sollgierrate'
 * '<S605>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/FlightRecorder4'
 * '<S606>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID'
 * '<S607>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S608>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID'
 * '<S609>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_fromGA'
 * '<S610>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_fromOptim'
 * '<S611>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_from_BJ'
 * '<S612>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Decrease'
 * '<S613>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Decrease1'
 * '<S614>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Increase'
 * '<S615>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Increase1'
 * '<S616>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete1'
 * '<S617>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete3'
 * '<S618>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/S-R Flip-Flop'
 * '<S619>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/S-R Flip-Flop1'
 * '<S620>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Saturation Dynamic'
 * '<S621>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete1/Subsystem'
 * '<S622>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete3/Subsystem'
 * '<S623>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning'
 * '<S624>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning1'
 * '<S625>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/FlightRecorder'
 * '<S626>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck'
 * '<S627>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning/Compare To Zero'
 * '<S628>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning1/Compare To Zero'
 * '<S629>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S630>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete'
 * '<S631>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete1'
 * '<S632>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/Rule: T10.3.9'
 * '<S633>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete/Subsystem'
 * '<S634>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete1/Subsystem'
 * '<S635>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference'
 * '<S636>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference1'
 * '<S637>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference2'
 * '<S638>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/FlightRecorder5'
 * '<S639>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Gesamtkilometerzähler Byte 1+2'
 * '<S640>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Gesamtkilometerzähler Byte 10+4'
 * '<S641>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Tagesenergiezähler Byte 4+2'
 * '<S642>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Gesamtmeterzähler m Byte 10+4'
 * '<S643>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Tagesmeterzähler Wh Byte 4+2'
 * '<S644>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Tagesmeterzähler m Byte 1+2'
 * '<S645>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/FlightRecorder5/USB_FLIGHT_REC_BL1'
 * '<S646>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder'
 * '<S647>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder1'
 * '<S648>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder2'
 * '<S649>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder3'
 * '<S650>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder4'
 * '<S651>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder5'
 * '<S652>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder6'
 * '<S653>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking'
 * '<S654>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S655>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S656>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S657>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S658>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S659>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder5/USB_FLIGHT_REC_BL1'
 * '<S660>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder6/USB_FLIGHT_REC_BL1'
 * '<S661>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking/FlightRecorder1'
 * '<S662>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S663>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVIRecorder'
 * '<S664>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVURecorder'
 * '<S665>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/currentConsumptionRecorder'
 * '<S666>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerConsumtionRecorder'
 * '<S667>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerRecorder'
 * '<S668>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVIRecorder/USB_FLIGHT_REC_BL1'
 * '<S669>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVURecorder/USB_FLIGHT_REC_BL1'
 * '<S670>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/currentConsumptionRecorder/USB_FLIGHT_REC_BL1'
 * '<S671>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerConsumtionRecorder/USB_FLIGHT_REC_BL1'
 * '<S672>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerRecorder/USB_FLIGHT_REC_BL1'
 * '<S673>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Compare To Constant'
 * '<S674>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Compare To Constant1'
 * '<S675>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Detect Max Temp'
 * '<S676>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect'
 * '<S677>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1'
 * '<S678>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2'
 * '<S679>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PI Controller'
 * '<S680>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete'
 * '<S681>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete1'
 * '<S682>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp'
 * '<S683>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp1'
 * '<S684>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp2'
 * '<S685>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp3'
 * '<S686>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect/J-K Flip-Flop'
 * '<S687>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect/J-K Flip-Flop/J-K Flip-Flop'
 * '<S688>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1/J-K Flip-Flop'
 * '<S689>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1/J-K Flip-Flop/J-K Flip-Flop'
 * '<S690>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2/J-K Flip-Flop'
 * '<S691>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2/J-K Flip-Flop/J-K Flip-Flop'
 * '<S692>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete/Subsystem'
 * '<S693>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete1/Subsystem'
 * '<S694>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config/Umrichter 1 Init Config'
 * '<S695>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config/Umrichter 2 Init Config'
 * '<S696>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Detect Rise Positive'
 * '<S697>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung'
 * '<S698>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder'
 * '<S699>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder1'
 * '<S700>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Detect Rise Positive/Positive'
 * '<S701>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S702>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder1/USB_FLIGHT_REC_BL1'
 */
#endif                                 /* RTW_HEADER_DR18E_Testpult_h_ */
