/*
 * DR18E_Testpult.h
 *
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * Code generation for model "DR18E_Testpult".
 *
 * Model version              : 1.228
 * Simulink Coder version : 8.12 (R2017a) 16-Feb-2017
 * C source code generated on : Sat Feb 23 14:54:45 2019
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

/* Block signals for system '<S92>/Subsystem' */
typedef struct {
  real_T Delay;                        /* '<S101>/Delay' */
  real_T Switch;                       /* '<S101>/Switch' */
  real_T Switch1;                      /* '<S101>/Switch1' */
  real_T Sum;                          /* '<S101>/Sum' */
  boolean_T RelationalOperator;        /* '<S101>/Relational Operator' */
} B_Subsystem_DR18E_Testpult_T;

/* Block states (auto storage) for system '<S92>/Subsystem' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S101>/Delay' */
} DW_Subsystem_DR18E_Testpult_T;

/* Block signals for system '<S289>/Skalierung Drehzahl' */
typedef struct {
  real_T Gain;                         /* '<S304>/Gain' */
} B_SkalierungDrehzahl_DR18E_Te_T;

/* Block signals for system '<S287>/Wirkstrom Iq' */
typedef struct {
  real_T Divide2;                      /* '<S302>/Divide2' */
  real_T Product;                      /* '<S302>/Product' */
  int32_T Gain3;                       /* '<S302>/Gain3' */
  int16_T DataTypeConversion1;         /* '<S302>/Data Type Conversion1' */
} B_WirkstromIq_DR18E_Testpult_T;

/* Block signals for system '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
typedef struct {
  uint32_T DataTypeConversion;         /* '<S298>/Data Type Conversion' */
  uint32_T BADPARAS;                   /* '<S298>/BADPARAS' */
  uint32_T BALLAST;                    /* '<S298>/BALLAST' */
  uint32_T BUSTIMEOUT;                 /* '<S298>/BUS TIMEOUT' */
  uint32_T POWERFAULT;                 /* '<S298>/POWER FAULT' */
  uint32_T RACEAWAY;                   /* '<S298>/RACEAWAY' */
  uint32_T USER;                       /* '<S298>/USER' */
  uint32_T I2R;                        /* '<S298>/I2R' */
  uint32_T WarnWARNING_0;              /* '<S298>/WarnWARNING_0' */
  uint32_T HW_FAIL;                    /* '<S298>/HW_FAIL' */
  uint32_T SammelWarnung;              /* '<S298>/Sammel Warnung' */
  uint32_T RFEFault;                   /* '<S298>/RFE Fault' */
  uint32_T WarnILLEGAL_STATUS;         /* '<S298>/WarnILLEGAL_STATUS' */
  uint32_T WarnWARNING_2;              /* '<S298>/WarnWARNING_2' */
  uint32_T SammelError;                /* '<S298>/Sammel Error' */
  uint32_T WarnPOWERVOLTAGE;           /* '<S298>/WarnPOWERVOLTAGE' */
  uint32_T WarnMOTORTEMP;              /* '<S298>/WarnMOTORTEMP' */
  uint32_T WarnDEVICETEMP;             /* '<S298>/WarnDEVICETEMP' */
  uint32_T WarnOVERVOLTAGE;            /* '<S298>/WarnOVERVOLTAGE' */
  uint32_T WarnI_peak;                 /* '<S298>/WarnI_peak' */
  uint32_T WarnI2R;                    /* '<S298>/WarnI2R' */
  uint32_T WarnBALLAST;                /* '<S298>/WarnBALLAST' */
  uint32_T FEEDBACK;                   /* '<S298>/FEEDBACK' */
  uint32_T POWERVOLTAGE;               /* '<S298>/POWERVOLTAGE' */
  uint32_T MOTORTEMP;                  /* '<S298>/MOTORTEMP' */
  uint32_T DEVICETEMP;                 /* '<S298>/DEVICETEMP' */
  uint32_T OVERVOLTAGE;                /* '<S298>/OVERVOLTAGE' */
  uint32_T I_PEAK;                     /* '<S298>/I_PEAK' */
  boolean_T Compare;                   /* '<S342>/Compare' */
  boolean_T Compare_p;                 /* '<S343>/Compare' */
  boolean_T Compare_d;                 /* '<S344>/Compare' */
  boolean_T Compare_dz;                /* '<S345>/Compare' */
  boolean_T Compare_m;                 /* '<S346>/Compare' */
  boolean_T Compare_b;                 /* '<S347>/Compare' */
  boolean_T Compare_mb;                /* '<S348>/Compare' */
  boolean_T Compare_br;                /* '<S349>/Compare' */
  boolean_T Compare_o;                 /* '<S350>/Compare' */
  boolean_T Compare_e;                 /* '<S351>/Compare' */
  boolean_T Compare_l;                 /* '<S352>/Compare' */
  boolean_T Compare_ph;                /* '<S353>/Compare' */
  boolean_T Compare_i;                 /* '<S354>/Compare' */
  boolean_T Compare_lz;                /* '<S355>/Compare' */
  boolean_T Compare_n;                 /* '<S356>/Compare' */
  boolean_T Compare_ee;                /* '<S357>/Compare' */
  boolean_T Compare_lj;                /* '<S358>/Compare' */
  boolean_T Compare_h;                 /* '<S359>/Compare' */
  boolean_T Compare_la;                /* '<S360>/Compare' */
  boolean_T Compare_mj;                /* '<S361>/Compare' */
  boolean_T Compare_e4;                /* '<S362>/Compare' */
  boolean_T Compare_c;                 /* '<S363>/Compare' */
  boolean_T Compare_lg;                /* '<S364>/Compare' */
  boolean_T Compare_k;                 /* '<S365>/Compare' */
  boolean_T Compare_kp;                /* '<S366>/Compare' */
  boolean_T Compare_lq;                /* '<S367>/Compare' */
  boolean_T Compare_g;                 /* '<S368>/Compare' */
} B_RegID0x8FERRORWarningRegist_T;

/* Block signals for system '<S287>/U_DC' */
typedef struct {
  real_T UmrechnungRegisterSpannungManua;/* '<S301>/Umrechnung Register--> Spannung Manual BAMOCAR PG D3 S. 47' */
} B_U_DC_DR18E_Testpult_T;

/* Block signals for system '<S287>/Inverter_Temp' */
typedef struct {
  real_T BAMOCARPGD3ManualS48;         /* '<S295>/BAMOCAR PG D3 Manual S. 48 ' */
} B_Inverter_Temp_DR18E_Testpul_T;

/* Block signals for system '<S689>/J-K Flip-Flop' */
typedef struct {
  boolean_T Memory;                    /* '<S690>/Memory' */
  boolean_T Logic[2];                  /* '<S690>/Logic' */
  boolean_T OutportBufferForQ;         /* '<S690>/Demux' */
} B_JKFlipFlop_DR18E_Testpult_T;

/* Block states (auto storage) for system '<S689>/J-K Flip-Flop' */
typedef struct {
  boolean_T Memory_PreviousInput;      /* '<S690>/Memory' */
} DW_JKFlipFlop_DR18E_Testpult_T;

/* Zero-crossing (trigger) state for system '<S689>/J-K Flip-Flop' */
typedef struct {
  ZCSigState JKFlipFlop_Trig_ZCE;      /* '<S689>/J-K Flip-Flop' */
} ZCE_JKFlipFlop_DR18E_Testpult_T;

/* Block signals (auto storage) */
typedef struct {
  real_T SFunction1_o1;                /* '<S102>/S-Function1' */
  real_T SFunction1_o2;                /* '<S102>/S-Function1' */
  real_T SFunction1_o3;                /* '<S102>/S-Function1' */
  real_T SFunction1_o4;                /* '<S102>/S-Function1' */
  real_T SFunction1_o5;                /* '<S102>/S-Function1' */
  real_T SFunction1_o6;                /* '<S102>/S-Function1' */
  real_T SFunction1_o7;                /* '<S102>/S-Function1' */
  real_T SFunction1_o1_a;              /* '<S103>/S-Function1' */
  real_T SFunction1_o2_l;              /* '<S103>/S-Function1' */
  real_T SFunction1_o3_n;              /* '<S103>/S-Function1' */
  real_T SFunction1_o4_p;              /* '<S103>/S-Function1' */
  real_T SFunction1_o1_d;              /* '<S104>/S-Function1' */
  real_T SFunction1_o2_f;              /* '<S104>/S-Function1' */
  real_T SFunction1_o3_m;              /* '<S104>/S-Function1' */
  real_T SFunction1_o4_h;              /* '<S104>/S-Function1' */
  real_T SFunction1_o5_j;              /* '<S104>/S-Function1' */
  real_T SFunction1_o6_p;              /* '<S104>/S-Function1' */
  real_T SFunction1_o7_b;              /* '<S104>/S-Function1' */
  real_T SFunction1_o1_e;              /* '<S105>/S-Function1' */
  real_T SFunction1_o2_o;              /* '<S105>/S-Function1' */
  real_T SFunction1_o3_l;              /* '<S105>/S-Function1' */
  real_T SFunction1_o4_i;              /* '<S105>/S-Function1' */
  real_T SFunction1_o1_al;             /* '<S106>/S-Function1' */
  real_T SFunction1_o2_p;              /* '<S106>/S-Function1' */
  real_T SFunction1_o3_ns;             /* '<S106>/S-Function1' */
  real_T SFunction1_o4_c;              /* '<S106>/S-Function1' */
  real_T SFunction1_o5_f;              /* '<S106>/S-Function1' */
  real_T SFunction1_o6_pf;             /* '<S106>/S-Function1' */
  real_T SFunction1_o7_a;              /* '<S106>/S-Function1' */
  real_T SFunction1_o1_m;              /* '<S107>/S-Function1' */
  real_T SFunction1_o2_h;              /* '<S107>/S-Function1' */
  real_T SFunction1_o3_h;              /* '<S107>/S-Function1' */
  real_T SFunction1_o4_l;              /* '<S107>/S-Function1' */
  real_T SFunction1_o1_p;              /* '<S108>/S-Function1' */
  real_T SFunction1_o2_g;              /* '<S108>/S-Function1' */
  real_T SFunction1_o3_nm;             /* '<S108>/S-Function1' */
  real_T SFunction1_o4_l4;             /* '<S108>/S-Function1' */
  real_T SFunction1_o5_m;              /* '<S108>/S-Function1' */
  real_T SFunction1_o6_d;              /* '<S108>/S-Function1' */
  real_T SFunction1_o7_af;             /* '<S108>/S-Function1' */
  real_T SFunction1_o1_ez;             /* '<S109>/S-Function1' */
  real_T SFunction1_o2_a;              /* '<S109>/S-Function1' */
  real_T SFunction1_o3_i;              /* '<S109>/S-Function1' */
  real_T SFunction1_o4_k;              /* '<S109>/S-Function1' */
  real_T SFunction1_o1_dl;             /* '<S110>/S-Function1' */
  real_T SFunction1_o2_oa;             /* '<S110>/S-Function1' */
  real_T SFunction1_o3_d;              /* '<S110>/S-Function1' */
  real_T SFunction1_o4_f;              /* '<S110>/S-Function1' */
  real_T SFunction1_o5_g;              /* '<S110>/S-Function1' */
  real_T SFunction1_o6_a;              /* '<S110>/S-Function1' */
  real_T SFunction1_o7_n;              /* '<S110>/S-Function1' */
  real_T SFunction1_o1_j;              /* '<S111>/S-Function1' */
  real_T SFunction1_o2_e;              /* '<S111>/S-Function1' */
  real_T SFunction1_o3_a;              /* '<S111>/S-Function1' */
  real_T SFunction1_o4_d;              /* '<S111>/S-Function1' */
  real_T MinMax;                       /* '<S678>/MinMax' */
  real_T SFunction1_o1_c;              /* '<S134>/S-Function1' */
  real_T SFunction1_o2_c;              /* '<S134>/S-Function1' */
  real_T SFunction1_o3_e;              /* '<S134>/S-Function1' */
  real_T SFunction1_o4_n;              /* '<S134>/S-Function1' */
  real_T SFunction1_o5_mv;             /* '<S134>/S-Function1' */
  real_T SFunction1_o6_k;              /* '<S134>/S-Function1' */
  real_T SFunction1_o7_bx;             /* '<S134>/S-Function1' */
  real_T SFunction1_o1_da;             /* '<S135>/S-Function1' */
  real_T SFunction1_o2_hl;             /* '<S135>/S-Function1' */
  real_T SFunction1_o3_e3;             /* '<S135>/S-Function1' */
  real_T SFunction1_o4_a;              /* '<S135>/S-Function1' */
  real_T SFunction1_o1_g;              /* '<S136>/S-Function1' */
  real_T SFunction1_o2_d;              /* '<S136>/S-Function1' */
  real_T SFunction1_o3_h1;             /* '<S136>/S-Function1' */
  real_T SFunction1_o4_fc;             /* '<S136>/S-Function1' */
  real_T SFunction1_o5_o;              /* '<S136>/S-Function1' */
  real_T SFunction1_o6_f;              /* '<S136>/S-Function1' */
  real_T SFunction1_o7_n5;             /* '<S136>/S-Function1' */
  real_T SFunction1_o1_h;              /* '<S137>/S-Function1' */
  real_T SFunction1_o2_eo;             /* '<S137>/S-Function1' */
  real_T SFunction1_o3_f;              /* '<S137>/S-Function1' */
  real_T SFunction1_o4_lz;             /* '<S137>/S-Function1' */
  real_T SFunction1_o1_o;              /* '<S138>/S-Function1' */
  real_T SFunction1_o2_l3;             /* '<S138>/S-Function1' */
  real_T SFunction1_o3_g;              /* '<S138>/S-Function1' */
  real_T SFunction1_o4_j;              /* '<S138>/S-Function1' */
  real_T SFunction1_o5_jq;             /* '<S138>/S-Function1' */
  real_T SFunction1_o6_kx;             /* '<S138>/S-Function1' */
  real_T SFunction1_o7_o;              /* '<S138>/S-Function1' */
  real_T SFunction1_o1_b;              /* '<S139>/S-Function1' */
  real_T SFunction1_o2_e3;             /* '<S139>/S-Function1' */
  real_T SFunction1_o3_ea;             /* '<S139>/S-Function1' */
  real_T SFunction1_o4_hb;             /* '<S139>/S-Function1' */
  real_T SFunction1_o1_l;              /* '<S140>/S-Function1' */
  real_T SFunction1_o2_k;              /* '<S140>/S-Function1' */
  real_T SFunction1_o3_de;             /* '<S140>/S-Function1' */
  real_T SFunction1_o4_g;              /* '<S140>/S-Function1' */
  real_T SFunction1_o5_l;              /* '<S140>/S-Function1' */
  real_T SFunction1_o6_d1;             /* '<S140>/S-Function1' */
  real_T SFunction1_o7_m;              /* '<S140>/S-Function1' */
  real_T SFunction1_o1_n;              /* '<S141>/S-Function1' */
  real_T SFunction1_o2_ho;             /* '<S141>/S-Function1' */
  real_T SFunction1_o3_lb;             /* '<S141>/S-Function1' */
  real_T SFunction1_o4_la;             /* '<S141>/S-Function1' */
  real_T SFunction1_o1_i;              /* '<S132>/S-Function1' */
  real_T SFunction1_o2_dz;             /* '<S132>/S-Function1' */
  real_T SFunction1_o3_gs;             /* '<S132>/S-Function1' */
  real_T SFunction1_o4_as;             /* '<S132>/S-Function1' */
  real_T SFunction1_o5_js;             /* '<S132>/S-Function1' */
  real_T SFunction1_o6_g;              /* '<S132>/S-Function1' */
  real_T SFunction1_o7_k;              /* '<S132>/S-Function1' */
  real_T SFunction1_o1_f;              /* '<S133>/S-Function1' */
  real_T SFunction1_o2_ew;             /* '<S133>/S-Function1' */
  real_T SFunction1_o3_ht;             /* '<S133>/S-Function1' */
  real_T SFunction1_o4_m;              /* '<S133>/S-Function1' */
  real_T MinMax1;                      /* '<S678>/MinMax1' */
  real_T MinMax2;                      /* '<S678>/MinMax2' */
  real_T Switch1;                      /* '<S535>/Switch1' */
  real_T DataTypeConversion4;          /* '<S6>/Data Type Conversion4' */
  real_T Uk1;                          /* '<S12>/Delay Input1' */
  real_T Gain;                         /* '<S6>/Gain' */
  real_T SFunction1_o1_av;             /* '<S495>/S-Function1' */
  real_T SFunction1_o2_ay;             /* '<S495>/S-Function1' */
  real_T SFunction1_o3_j;              /* '<S495>/S-Function1' */
  real_T SFunction1_o4_lu;             /* '<S495>/S-Function1' */
  real_T Starttaster;                  /* '<S85>/Gain2' */
  real_T SFunction1_o1_fs;             /* '<S483>/S-Function1' */
  real_T SFunction1_o2_f5;             /* '<S483>/S-Function1' */
  real_T SFunction1_o3_gv;             /* '<S483>/S-Function1' */
  real_T SFunction1_o4_cb;             /* '<S483>/S-Function1' */
  real_T BSPD;                         /* '<S84>/Gain1' */
  real_T SFunction1_o1_id;             /* '<S482>/S-Function1' */
  real_T SFunction1_o2_pb;             /* '<S482>/S-Function1' */
  real_T SFunction1_o3_k;              /* '<S482>/S-Function1' */
  real_T SFunction1_o4_f1;             /* '<S482>/S-Function1' */
  real_T BOTS;                         /* '<S84>/Gain' */
  real_T SFunction1_o1_ib;             /* '<S494>/S-Function1' */
  real_T SFunction1_o2_c1;             /* '<S494>/S-Function1' */
  real_T SFunction1_o3_ni;             /* '<S494>/S-Function1' */
  real_T SFunction1_o4_go;             /* '<S494>/S-Function1' */
  real_T SFunction1_o5_f4;             /* '<S494>/S-Function1' */
  real_T Notaus_Cockpit;               /* '<S85>/Gain' */
  real_T SFunction1_o1_ds;             /* '<S501>/S-Function1' */
  real_T SFunction1_o2_ed;             /* '<S501>/S-Function1' */
  real_T SFunction1_o3_lo;             /* '<S501>/S-Function1' */
  real_T SFunction1_o4_e;              /* '<S501>/S-Function1' */
  real_T SFunction1_o5_jw;             /* '<S501>/S-Function1' */
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
  real_T SFunction1_o1_gb;             /* '<S262>/S-Function1' */
  real_T SFunction1_o2_i;              /* '<S262>/S-Function1' */
  real_T SFunction1_o3_jz;             /* '<S262>/S-Function1' */
  real_T SFunction1_o4_as5;            /* '<S262>/S-Function1' */
  real_T SFunction1_o5_e;              /* '<S262>/S-Function1' */
  real_T SFunction1_o6_o;              /* '<S262>/S-Function1' */
  real_T SFunction1_o7_ap;             /* '<S262>/S-Function1' */
  real_T IMD_State;                    /* '<S78>/Gain4' */
  real_T Step;                         /* '<S524>/Step' */
  real_T SFunction1_o1_ft;             /* '<S294>/S-Function1' */
  real_T SFunction1_o2_ao;             /* '<S294>/S-Function1' */
  real_T SFunction1_o3_lz;             /* '<S294>/S-Function1' */
  real_T SFunction1_o4_dc;             /* '<S294>/S-Function1' */
  real_T SFunction1_o5_a;              /* '<S294>/S-Function1' */
  real_T SFunction1_o6_pu;             /* '<S294>/S-Function1' */
  real_T UDCcorr;                      /* '<S287>/InvCorrection' */
  real_T WeightedSampleTime;           /* '<S552>/Weighted Sample Time' */
  real_T Divide1;                      /* '<S552>/Divide1' */
  real_T Sum;                          /* '<S552>/Sum' */
  real_T Divide;                       /* '<S552>/Divide' */
  real_T SFunction1_o1_mm;             /* '<S484>/S-Function1' */
  real_T SFunction1_o2_o3;             /* '<S484>/S-Function1' */
  real_T SFunction1_o3_lop;            /* '<S484>/S-Function1' */
  real_T SFunction1_o4_ll;             /* '<S484>/S-Function1' */
  real_T SFunction1_o5_ag;             /* '<S484>/S-Function1' */
  real_T SFunction1_o6_j;              /* '<S484>/S-Function1' */
  real_T SFunction1_o7_ne;             /* '<S484>/S-Function1' */
  real_T Product[2];                   /* '<S547>/Product' */
  real_T Memory[2];                    /* '<S547>/Memory' */
  real_T Sum_j[2];                     /* '<S547>/Sum' */
  real_T Product1[2];                  /* '<S547>/Product1' */
  real_T Sum1[2];                      /* '<S547>/Sum1' */
  real_T DataTypeConversion1;          /* '<S7>/Data Type Conversion1' */
  real_T Gain2;                        /* '<S7>/Gain2' */
  real_T DataTypeConversion2;          /* '<S7>/Data Type Conversion2' */
  real_T Gain3;                        /* '<S7>/Gain3' */
  real_T DataTypeConversion3;          /* '<S7>/Data Type Conversion3' */
  real_T Gain4;                        /* '<S7>/Gain4' */
  real_T WeightedSampleTime_g;         /* '<S696>/Weighted Sample Time' */
  real_T Divide1_d;                    /* '<S696>/Divide1' */
  real_T Sum_b;                        /* '<S696>/Sum' */
  real_T Divide_i;                     /* '<S696>/Divide' */
  real_T PulseGenerator;               /* '<S535>/Pulse Generator' */
  real_T SFunction1_o1_ae;             /* '<S506>/S-Function1' */
  real_T SFunction1_o2_k2;             /* '<S506>/S-Function1' */
  real_T SFunction1_o3_de3;            /* '<S506>/S-Function1' */
  real_T SFunction1_o4_l2;             /* '<S506>/S-Function1' */
  real_T SFunction1_o5_p;              /* '<S506>/S-Function1' */
  real_T Switch;                       /* '<S680>/Switch' */
  real_T Product_b;                    /* '<S684>/Product' */
  real_T Memory_g;                     /* '<S684>/Memory' */
  real_T Sum_n;                        /* '<S684>/Sum' */
  real_T Product1_p;                   /* '<S684>/Product1' */
  real_T Sum1_g;                       /* '<S684>/Sum1' */
  real_T Product2;                     /* '<S535>/Product2' */
  real_T Saturation2;                  /* '<S535>/Saturation2' */
  real_T DataTypeConversion4_m;        /* '<S7>/Data Type Conversion4' */
  real_T Uk1_i;                        /* '<S15>/Delay Input1' */
  real_T Gain_p;                       /* '<S7>/Gain' */
  real_T WeightedSampleTime_a;         /* '<S695>/Weighted Sample Time' */
  real_T Divide1_g;                    /* '<S695>/Divide1' */
  real_T Sum_k;                        /* '<S695>/Sum' */
  real_T Divide_g;                     /* '<S695>/Divide' */
  real_T SFunction1_o1_eb;             /* '<S371>/S-Function1' */
  real_T SFunction1_o2_a0;             /* '<S371>/S-Function1' */
  real_T SFunction1_o3_b;              /* '<S371>/S-Function1' */
  real_T SFunction1_o4_pa;             /* '<S371>/S-Function1' */
  real_T SFunction1_o5_mx;             /* '<S371>/S-Function1' */
  real_T Sum_h;                        /* '<S535>/Sum' */
  real_T ProportionalGain;             /* '<S682>/Proportional Gain' */
  real_T Integrator;                   /* '<S682>/Integrator' */
  real_T Sum_o;                        /* '<S682>/Sum' */
  real_T Saturation;                   /* '<S535>/Saturation' */
  real_T Switch_h;                     /* '<S679>/Switch' */
  real_T Product_l;                    /* '<S683>/Product' */
  real_T Memory_e;                     /* '<S683>/Memory' */
  real_T Sum_f;                        /* '<S683>/Sum' */
  real_T Product1_g;                   /* '<S683>/Product1' */
  real_T Sum1_i;                       /* '<S683>/Sum1' */
  real_T Product1_n;                   /* '<S535>/Product1' */
  real_T Saturation1;                  /* '<S535>/Saturation1' */
  real_T DataTypeConversion5;          /* '<S7>/Data Type Conversion5' */
  real_T Uk1_p;                        /* '<S16>/Delay Input1' */
  real_T Gain1;                        /* '<S7>/Gain1' */
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
  real_T PulseGenerator_g;             /* '<S564>/Pulse Generator' */
  real_T LEDBarVektor[8];              /* '<S527>/Multiport Switch' */
  real_T WeightedSampleTime_h;         /* '<S563>/Weighted Sample Time' */
  real_T Divide1_p;                    /* '<S563>/Divide1' */
  real_T Sum_p;                        /* '<S563>/Sum' */
  real_T Divide_c;                     /* '<S563>/Divide' */
  real_T MinMax_a;                     /* '<S548>/MinMax' */
  real_T SFunction1_o1_hb;             /* '<S491>/S-Function1' */
  real_T SFunction1_o2_ij;             /* '<S491>/S-Function1' */
  real_T SFunction1_o3_jr;             /* '<S491>/S-Function1' */
  real_T SFunction1_o4_pw;             /* '<S491>/S-Function1' */
  real_T SFunction1_o5_b;              /* '<S491>/S-Function1' */
  real_T SFunction1_o6_kr;             /* '<S491>/S-Function1' */
  real_T SFunction1_o7_oo;             /* '<S491>/S-Function1' */
  real_T MinMax1_e;                    /* '<S548>/MinMax1' */
  real_T DataTypeConversion_h;         /* '<S548>/Data Type Conversion' */
  real_T Product_e;                    /* '<S561>/Product' */
  real_T Memory_p;                     /* '<S561>/Memory' */
  real_T Sum_l;                        /* '<S561>/Sum' */
  real_T Product1_c;                   /* '<S561>/Product1' */
  real_T Sum1_d;                       /* '<S561>/Sum1' */
  real_T SFunction1_o1_b3;             /* '<S496>/S-Function1' */
  real_T SFunction1_o2_it;             /* '<S496>/S-Function1' */
  real_T SFunction1_o3_ik;             /* '<S496>/S-Function1' */
  real_T SFunction1_o4_g2;             /* '<S496>/S-Function1' */
  real_T SFunction1_o5_c;              /* '<S496>/S-Function1' */
  real_T SFunction1_o1_ey;             /* '<S445>/S-Function1' */
  real_T SFunction1_o2_ha;             /* '<S445>/S-Function1' */
  real_T SFunction1_o3_nx;             /* '<S445>/S-Function1' */
  real_T SFunction1_o4_kt;             /* '<S445>/S-Function1' */
  real_T MultiportSwitch;              /* '<S533>/Multiport Switch' */
  real_T Gain_m;                       /* '<S532>/Gain' */
  real_T WheelslipCalculationLeft;     /* '<S532>/Wheelslip Calculation Left' */
  real_T Saturation_p;                 /* '<S532>/Saturation' */
  real_T Relay;                        /* '<S578>/Relay' */
  real_T Derivative;                   /* '<S578>/Derivative' */
  real_T Add;                          /* '<S578>/Add' */
  real_T Delay;                        /* '<S578>/Delay' */
  real_T Fcn;                          /* '<S578>/Fcn' */
  real_T WeightedSampleTime_hg;        /* '<S636>/Weighted Sample Time' */
  real_T Divide1_p0;                   /* '<S636>/Divide1' */
  real_T Sum_bz;                       /* '<S636>/Sum' */
  real_T Divide_n;                     /* '<S636>/Divide' */
  real_T Saturation_g;                 /* '<S628>/Saturation' */
  real_T Product_m;                    /* '<S633>/Product' */
  real_T Memory_k;                     /* '<S633>/Memory' */
  real_T Sum_ls;                       /* '<S633>/Sum' */
  real_T Product1_k;                   /* '<S633>/Product1' */
  real_T Sum1_b;                       /* '<S633>/Sum1' */
  real_T WeightedSampleTime_ap;        /* '<S637>/Weighted Sample Time' */
  real_T Divide1_n;                    /* '<S637>/Divide1' */
  real_T Sum_nv;                       /* '<S637>/Sum' */
  real_T Divide_m;                     /* '<S637>/Divide' */
  real_T Saturation1_n;                /* '<S628>/Saturation1' */
  real_T Product_d;                    /* '<S634>/Product' */
  real_T Memory_ky;                    /* '<S634>/Memory' */
  real_T Sum_fn;                       /* '<S634>/Sum' */
  real_T Product1_i;                   /* '<S634>/Product1' */
  real_T Sum1_bz;                      /* '<S634>/Sum1' */
  real_T MultiportSwitch_d;            /* '<S530>/Multiport Switch' */
  real_T Gas_01;                       /* '<S530>/Saturation 0-1' */
  real_T Switch_l;                     /* '<S578>/Switch' */
  real_T Fcn2;                         /* '<S578>/Fcn2' */
  real_T Saturation_e;                 /* '<S578>/Saturation' */
  real_T MultiportSwitch_do;           /* '<S578>/Multiport Switch' */
  real_T Switch_e;                     /* '<S568>/Switch' */
  real_T Product_ec;                   /* '<S528>/Product' */
  real_T Gravity;                      /* '<S588>/Gravity' */
  real_T Override;                     /* '<S588>/Override' */
  real_T Sum_c;                        /* '<S532>/Sum' */
  real_T vomegar;                      /* '<S532>/v = omega*r' */
  real_T mskmh;                        /* '<S532>/m//s -> km//h' */
  real_T kmhms;                        /* '<S570>/kmh-ms' */
  real_T Switch_p;                     /* '<S588>/Switch' */
  real_T Abs;                          /* '<S588>/Abs' */
  real_T Divide_d;                     /* '<S588>/Divide' */
  real_T SFunction1_o1_ln;             /* '<S284>/S-Function1' */
  real_T SFunction1_o2_az;             /* '<S284>/S-Function1' */
  real_T SFunction1_o3_fx;             /* '<S284>/S-Function1' */
  real_T SFunction1_o4_a1;             /* '<S284>/S-Function1' */
  real_T SFunction1_o5_f1;             /* '<S284>/S-Function1' */
  real_T Bitdegs;                      /* '<S80>/Bit-->deg//s' */
  real_T Yaw_Z;                        /* '<S80>/Sum' */
  real_T degrad;                       /* '<S570>/deg-rad' */
  real_T Abs2;                         /* '<S588>/Abs2' */
  real_T Subtract;                     /* '<S588>/Subtract' */
  real_T Gain_j;                       /* '<S588>/Gain' */
  real_T LookupTable;                  /* '<S588>/Lookup Table' */
  real_T Product_lf;                   /* '<S588>/Product' */
  real_T Torque_AC_OLD_RL;             /* '<S588>/Gain1' */
  real_T LenkwinkelRadeinschlagwinkel; /* '<S570>/Lenkwinkel-->Radeinschlagwinkel' */
  real_T degrad1;                      /* '<S570>/deg-rad1' */
  real_T Product_i;                    /* '<S589>/Product' */
  real_T sqr2;                         /* '<S589>/sqr2' */
  real_T Divide2;                      /* '<S589>/Divide2' */
  real_T Divide1_l;                    /* '<S589>/Divide1' */
  real_T Sum_n5;                       /* '<S589>/Sum' */
  real_T Product1_b;                   /* '<S589>/Product1' */
  real_T Divide_e;                     /* '<S589>/Divide' */
  real_T Gravity2;                     /* '<S570>/Gravity2' */
  real_T emGM;                         /* '<S584>/em*GM' */
  real_T emGMX;                        /* '<S584>/em*GM*X²' */
  real_T ModelReference4;              /* '<S586>/ModelReference4' */
  real_T ModelReference2;              /* '<S586>/ModelReference2' */
  real_T ModelReference4_n;            /* '<S585>/ModelReference4' */
  real_T ModelReference2_e;            /* '<S585>/ModelReference2' */
  real_T Derivative_e;                 /* '<S585>/Derivative' */
  real_T ModelReference1;              /* '<S585>/ModelReference1' */
  real_T RateTransition1;              /* '<S593>/Rate Transition1' */
  real_T Saturation_o;                 /* '<S587>/Saturation' */
  real_T Gainlinks;                    /* '<S590>/Gain links' */
  real_T Saturation1_p;                /* '<S587>/Saturation1' */
  real_T Switch_b;                     /* '<S570>/Switch' */
  real_T Torque_RL;                    /* '<S528>/Gain2' */
  real_T Saturation_h;                 /* '<S528>/Saturation' */
  real_T Add_i;                        /* '<S528>/Add' */
  real_T TQ_left_after_TCTV_Nm;        /* '<S528>/Saturation1' */
  real_T Gain1_o;                      /* '<S532>/Gain1' */
  real_T WheelslipCalulationRight;     /* '<S532>/Wheelslip Calulation Right' */
  real_T Saturation1_h;                /* '<S532>/Saturation1' */
  real_T Relay_o;                      /* '<S581>/Relay' */
  real_T Derivative_o;                 /* '<S581>/Derivative' */
  real_T Add_n;                        /* '<S581>/Add' */
  real_T Delay_c;                      /* '<S581>/Delay' */
  real_T Fcn_h;                        /* '<S581>/Fcn' */
  real_T Switch_g;                     /* '<S581>/Switch' */
  real_T Fcn2_k;                       /* '<S581>/Fcn2' */
  real_T Saturation_c;                 /* '<S581>/Saturation' */
  real_T MultiportSwitch_c;            /* '<S581>/Multiport Switch' */
  real_T Switch_d;                     /* '<S569>/Switch' */
  real_T Product1_be;                  /* '<S528>/Product1' */
  real_T Gravity_o;                    /* '<S603>/Gravity' */
  real_T Override_i;                   /* '<S603>/Override' */
  real_T kmhms_e;                      /* '<S571>/kmh-ms' */
  real_T Switch_h4;                    /* '<S603>/Switch' */
  real_T Abs_o;                        /* '<S603>/Abs' */
  real_T Divide_k;                     /* '<S603>/Divide' */
  real_T degrad_f;                     /* '<S571>/deg-rad' */
  real_T Abs2_g;                       /* '<S603>/Abs2' */
  real_T Subtract_d;                   /* '<S603>/Subtract' */
  real_T Gain_jv;                      /* '<S603>/Gain' */
  real_T LookupTable_c;                /* '<S603>/Lookup Table' */
  real_T Product_f;                    /* '<S603>/Product' */
  real_T Torque_AC_OLD_RL_d;           /* '<S603>/Gain1' */
  real_T LenkwinkelRadeinschlagwinkel_d;/* '<S571>/Lenkwinkel-->Radeinschlagwinkel' */
  real_T degrad1_a;                    /* '<S571>/deg-rad1' */
  real_T Product_mj;                   /* '<S604>/Product' */
  real_T sqr2_j;                       /* '<S604>/sqr2' */
  real_T Divide2_k;                    /* '<S604>/Divide2' */
  real_T Divide1_da;                   /* '<S604>/Divide1' */
  real_T Sum_a;                        /* '<S604>/Sum' */
  real_T Product1_gm;                  /* '<S604>/Product1' */
  real_T Divide_cc;                    /* '<S604>/Divide' */
  real_T Gravity2_p;                   /* '<S571>/Gravity2' */
  real_T emGM_c;                       /* '<S599>/em*GM' */
  real_T emGMX_i;                      /* '<S599>/em*GM*X²' */
  real_T ModelReference4_e;            /* '<S601>/ModelReference4' */
  real_T ModelReference2_c;            /* '<S601>/ModelReference2' */
  real_T ModelReference4_o;            /* '<S600>/ModelReference4' */
  real_T ModelReference2_f;            /* '<S600>/ModelReference2' */
  real_T Derivative_h;                 /* '<S600>/Derivative' */
  real_T ModelReference1_o;            /* '<S600>/ModelReference1' */
  real_T RateTransition1_f;            /* '<S608>/Rate Transition1' */
  real_T Saturation_pz;                /* '<S602>/Saturation' */
  real_T Gainrechts;                   /* '<S605>/Gain rechts' */
  real_T Saturation1_f;                /* '<S602>/Saturation1' */
  real_T Switch_d4;                    /* '<S571>/Switch' */
  real_T Gain4_i;                      /* '<S528>/Gain4' */
  real_T Saturation2_a;                /* '<S528>/Saturation2' */
  real_T Add1;                         /* '<S528>/Add1' */
  real_T TQ_right_after_TCTV_Nm;       /* '<S528>/Saturation3' */
  real_T SFunction1_o1_cv;             /* '<S490>/S-Function1' */
  real_T SFunction1_o2_n;              /* '<S490>/S-Function1' */
  real_T SFunction1_o3_h1j;            /* '<S490>/S-Function1' */
  real_T SFunction1_o4_j3;             /* '<S490>/S-Function1' */
  real_T HVCurrent;                    /* '<S84>/0,1 A//bit' */
  real_T HV_Power_Watt;                /* '<S534>/Product' */
  real_T u80;                          /* '<S565>/0-80' */
  real_T HV_energy_con_Ws;             /* '<S534>/Discrete-Time Integrator1' */
  real_T WsWh;                         /* '<S534>/Ws->Wh' */
  real_T DiscreteTimeIntegrator;       /* '<S656>/Discrete-Time Integrator' */
  real_T Tagesmeter_fluechtig_s_m;     /* '<S656>/s_m' */
  real_T Derating_Battery_active;      /* '<S573>/Derating_Battery_active' */
  real_T Map_Reichweite_Derating_Rev1; /* '<S573>/Map_Reichweite_Derating_Rev1' */
  real_T MinMax_g;                     /* '<S565>/MinMax' */
  real_T u1;                           /* '<S565>/0-1' */
  real_T Product_lr;                   /* '<S565>/Product' */
  real_T kWW;                          /* '<S567>/kW-W' */
  real_T halbeGesamtleistungproMotor;  /* '<S567>/halbe Gesamtleistung pro Motor' */
  real_T Drehzahl_RL_rads;             /* '<S532>/rpm-rad//s' */
  real_T radsRPM;                      /* '<S567>/rad//s -> RPM' */
  real_T Sum2;                         /* '<S567>/Sum2' */
  real_T RPM1s;                        /* '<S567>/RPM-1//s' */
  real_T Drehzahl_RR_rads;             /* '<S532>/rpm-rad//s1' */
  real_T radsRPM1;                     /* '<S567>/rad//s -> RPM1' */
  real_T Sum3;                         /* '<S567>/Sum3' */
  real_T RPM1s1;                       /* '<S567>/RPM-1//s1' */
  real_T Switch_dv[2];                 /* '<S533>/Switch' */
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
  real_T SFunction1_o1_bj;             /* '<S267>/S-Function1' */
  real_T SFunction1_o2_jo;             /* '<S267>/S-Function1' */
  real_T SFunction1_o3_o2;             /* '<S267>/S-Function1' */
  real_T SFunction1_o4_llh;            /* '<S267>/S-Function1' */
  real_T SFunction1_o5_l4;             /* '<S267>/S-Function1' */
  real_T SFunction1_o6_b;              /* '<S267>/S-Function1' */
  real_T PulseGenerator_p;             /* '<S529>/Pulse Generator' */
  real_T LV_Undervoltage;              /* '<S529>/Switch' */
  real_T DataTypeConversion2_o;        /* '<S11>/Data Type Conversion2' */
  real_T Uk1_n5;                       /* '<S72>/Delay Input1' */
  real_T Uk1_pv;                       /* '<S73>/Delay Input1' */
  real_T Uk1_o;                        /* '<S74>/Delay Input1' */
  real_T Uk1_g;                        /* '<S75>/Delay Input1' */
  real_T SFunction1_o1_jt;             /* '<S184>/S-Function1' */
  real_T SFunction1_o2_ld;             /* '<S184>/S-Function1' */
  real_T SFunction1_o3_bh;             /* '<S184>/S-Function1' */
  real_T SFunction1_o4_if;             /* '<S184>/S-Function1' */
  real_T SFunction1_o5_n;              /* '<S184>/S-Function1' */
  real_T SFunction1_o6_gp;             /* '<S184>/S-Function1' */
  real_T SFunction1_o7_g;              /* '<S184>/S-Function1' */
  real_T Gain_c;                       /* '<S87>/Gain' */
  real_T SFunction1_o1_ff;             /* '<S185>/S-Function1' */
  real_T SFunction1_o2_je;             /* '<S185>/S-Function1' */
  real_T SFunction1_o3_hv;             /* '<S185>/S-Function1' */
  real_T SFunction1_o4_ac;             /* '<S185>/S-Function1' */
  real_T SFunction1_o5_lz;             /* '<S185>/S-Function1' */
  real_T SFunction1_o6_km;             /* '<S185>/S-Function1' */
  real_T SFunction1_o7_f;              /* '<S185>/S-Function1' */
  real_T SFunction1_o1_k;              /* '<S186>/S-Function1' */
  real_T SFunction1_o2_er;             /* '<S186>/S-Function1' */
  real_T SFunction1_o3_aj;             /* '<S186>/S-Function1' */
  real_T SFunction1_o4_lw;             /* '<S186>/S-Function1' */
  real_T SFunction1_o5_fc;             /* '<S186>/S-Function1' */
  real_T SFunction1_o6_p0;             /* '<S186>/S-Function1' */
  real_T SFunction1_o7_p;              /* '<S186>/S-Function1' */
  real_T SFunction1_o1_mg;             /* '<S193>/S-Function1' */
  real_T SFunction1_o2_l2;             /* '<S193>/S-Function1' */
  real_T SFunction1_o3_gq;             /* '<S193>/S-Function1' */
  real_T SFunction1_o4_dl;             /* '<S193>/S-Function1' */
  real_T SFunction1_o5_fb;             /* '<S193>/S-Function1' */
  real_T SFunction1_o6_n;              /* '<S193>/S-Function1' */
  real_T SFunction1_o7_hc;             /* '<S193>/S-Function1' */
  real_T SFunction1_o1_if;             /* '<S194>/S-Function1' */
  real_T SFunction1_o2_aa;             /* '<S194>/S-Function1' */
  real_T SFunction1_o3_ey;             /* '<S194>/S-Function1' */
  real_T SFunction1_o4_hbx;            /* '<S194>/S-Function1' */
  real_T SFunction1_o5_e5;             /* '<S194>/S-Function1' */
  real_T SFunction1_o6_e;              /* '<S194>/S-Function1' */
  real_T SFunction1_o7_f1;             /* '<S194>/S-Function1' */
  real_T SFunction1_o1_kq;             /* '<S195>/S-Function1' */
  real_T SFunction1_o2_o5;             /* '<S195>/S-Function1' */
  real_T SFunction1_o3_nw;             /* '<S195>/S-Function1' */
  real_T SFunction1_o4_b;              /* '<S195>/S-Function1' */
  real_T SFunction1_o5_na;             /* '<S195>/S-Function1' */
  real_T SFunction1_o6_av;             /* '<S195>/S-Function1' */
  real_T SFunction1_o7_mh;             /* '<S195>/S-Function1' */
  real_T SFunction1_o1_e2;             /* '<S204>/S-Function1' */
  real_T SFunction1_o2_m;              /* '<S204>/S-Function1' */
  real_T SFunction1_o3_d2;             /* '<S204>/S-Function1' */
  real_T SFunction1_o4_jt;             /* '<S204>/S-Function1' */
  real_T SFunction1_o5_h;              /* '<S204>/S-Function1' */
  real_T SFunction1_o6_ns;             /* '<S204>/S-Function1' */
  real_T SFunction1_o7_nj;             /* '<S204>/S-Function1' */
  real_T SFunction1_o1_me;             /* '<S205>/S-Function1' */
  real_T SFunction1_o2_ih;             /* '<S205>/S-Function1' */
  real_T SFunction1_o3_jy;             /* '<S205>/S-Function1' */
  real_T SFunction1_o4_b4;             /* '<S205>/S-Function1' */
  real_T SFunction1_o5_ne;             /* '<S205>/S-Function1' */
  real_T SFunction1_o6_c;              /* '<S205>/S-Function1' */
  real_T SFunction1_o7_j;              /* '<S205>/S-Function1' */
  real_T SFunction1_o1_gl;             /* '<S206>/S-Function1' */
  real_T SFunction1_o2_jm;             /* '<S206>/S-Function1' */
  real_T SFunction1_o3_lw;             /* '<S206>/S-Function1' */
  real_T SFunction1_o4_f3;             /* '<S206>/S-Function1' */
  real_T SFunction1_o5_g0;             /* '<S206>/S-Function1' */
  real_T SFunction1_o6_an;             /* '<S206>/S-Function1' */
  real_T SFunction1_o7_ps;             /* '<S206>/S-Function1' */
  real_T SFunction1_o1_or;             /* '<S213>/S-Function1' */
  real_T SFunction1_o2_fz;             /* '<S213>/S-Function1' */
  real_T SFunction1_o3_ew;             /* '<S213>/S-Function1' */
  real_T SFunction1_o4_ay;             /* '<S213>/S-Function1' */
  real_T SFunction1_o5_gm;             /* '<S213>/S-Function1' */
  real_T SFunction1_o6_l;              /* '<S213>/S-Function1' */
  real_T SFunction1_o7_gc;             /* '<S213>/S-Function1' */
  real_T SFunction1_o1_dm;             /* '<S214>/S-Function1' */
  real_T SFunction1_o2_ot;             /* '<S214>/S-Function1' */
  real_T SFunction1_o3_c;              /* '<S214>/S-Function1' */
  real_T SFunction1_o4_cu;             /* '<S214>/S-Function1' */
  real_T SFunction1_o5_j1;             /* '<S214>/S-Function1' */
  real_T SFunction1_o6_j1;             /* '<S214>/S-Function1' */
  real_T SFunction1_o7_kr;             /* '<S214>/S-Function1' */
  real_T SFunction1_o1_nn;             /* '<S215>/S-Function1' */
  real_T SFunction1_o2_jt;             /* '<S215>/S-Function1' */
  real_T SFunction1_o3_bs;             /* '<S215>/S-Function1' */
  real_T SFunction1_o4_bc;             /* '<S215>/S-Function1' */
  real_T SFunction1_o5_nr;             /* '<S215>/S-Function1' */
  real_T SFunction1_o6_c5;             /* '<S215>/S-Function1' */
  real_T SFunction1_o7_bu;             /* '<S215>/S-Function1' */
  real_T SFunction1_o1_hc;             /* '<S224>/S-Function1' */
  real_T SFunction1_o2_mo;             /* '<S224>/S-Function1' */
  real_T SFunction1_o3_oj;             /* '<S224>/S-Function1' */
  real_T SFunction1_o4_im;             /* '<S224>/S-Function1' */
  real_T SFunction1_o5_ms;             /* '<S224>/S-Function1' */
  real_T SFunction1_o6_p2;             /* '<S224>/S-Function1' */
  real_T SFunction1_o7_e;              /* '<S224>/S-Function1' */
  real_T SFunction1_o1_pb;             /* '<S225>/S-Function1' */
  real_T SFunction1_o2_l4;             /* '<S225>/S-Function1' */
  real_T SFunction1_o3_ny;             /* '<S225>/S-Function1' */
  real_T SFunction1_o4_dm;             /* '<S225>/S-Function1' */
  real_T SFunction1_o5_es;             /* '<S225>/S-Function1' */
  real_T SFunction1_o6_ez;             /* '<S225>/S-Function1' */
  real_T SFunction1_o7_i;              /* '<S225>/S-Function1' */
  real_T SFunction1_o1_ee;             /* '<S226>/S-Function1' */
  real_T SFunction1_o2_pu;             /* '<S226>/S-Function1' */
  real_T SFunction1_o3_da;             /* '<S226>/S-Function1' */
  real_T SFunction1_o4_fs;             /* '<S226>/S-Function1' */
  real_T SFunction1_o5_d;              /* '<S226>/S-Function1' */
  real_T SFunction1_o6_h;              /* '<S226>/S-Function1' */
  real_T SFunction1_o7_j5;             /* '<S226>/S-Function1' */
  real_T SFunction1_o1_mv;             /* '<S233>/S-Function1' */
  real_T SFunction1_o2_ka;             /* '<S233>/S-Function1' */
  real_T SFunction1_o3_id;             /* '<S233>/S-Function1' */
  real_T SFunction1_o4_ix;             /* '<S233>/S-Function1' */
  real_T SFunction1_o5_ex;             /* '<S233>/S-Function1' */
  real_T SFunction1_o6_dj;             /* '<S233>/S-Function1' */
  real_T SFunction1_o7_g3;             /* '<S233>/S-Function1' */
  real_T SFunction1_o1_mez;            /* '<S234>/S-Function1' */
  real_T SFunction1_o2_ee;             /* '<S234>/S-Function1' */
  real_T SFunction1_o3_kx;             /* '<S234>/S-Function1' */
  real_T SFunction1_o4_jw;             /* '<S234>/S-Function1' */
  real_T SFunction1_o5_esb;            /* '<S234>/S-Function1' */
  real_T SFunction1_o6_p4;             /* '<S234>/S-Function1' */
  real_T SFunction1_o7_c;              /* '<S234>/S-Function1' */
  real_T SFunction1_o1_e5;             /* '<S235>/S-Function1' */
  real_T SFunction1_o2_hp;             /* '<S235>/S-Function1' */
  real_T SFunction1_o3_mt;             /* '<S235>/S-Function1' */
  real_T SFunction1_o4_nd;             /* '<S235>/S-Function1' */
  real_T SFunction1_o5_mxp;            /* '<S235>/S-Function1' */
  real_T SFunction1_o6_kz;             /* '<S235>/S-Function1' */
  real_T SFunction1_o7_me;             /* '<S235>/S-Function1' */
  real_T SFunction1_o1_o2;             /* '<S244>/S-Function1' */
  real_T SFunction1_o2_kp;             /* '<S244>/S-Function1' */
  real_T SFunction1_o3_k4;             /* '<S244>/S-Function1' */
  real_T SFunction1_o4_fz;             /* '<S244>/S-Function1' */
  real_T SFunction1_o5_pq;             /* '<S244>/S-Function1' */
  real_T SFunction1_o6_jj;             /* '<S244>/S-Function1' */
  real_T SFunction1_o7_jz;             /* '<S244>/S-Function1' */
  real_T SFunction1_o1_od;             /* '<S245>/S-Function1' */
  real_T SFunction1_o2_ls;             /* '<S245>/S-Function1' */
  real_T SFunction1_o3_fw;             /* '<S245>/S-Function1' */
  real_T SFunction1_o4_fm;             /* '<S245>/S-Function1' */
  real_T SFunction1_o5_nm;             /* '<S245>/S-Function1' */
  real_T SFunction1_o6_m;              /* '<S245>/S-Function1' */
  real_T SFunction1_o7_ha;             /* '<S245>/S-Function1' */
  real_T SFunction1_o1_in;             /* '<S246>/S-Function1' */
  real_T SFunction1_o2_pg;             /* '<S246>/S-Function1' */
  real_T SFunction1_o3_mg;             /* '<S246>/S-Function1' */
  real_T SFunction1_o4_o;              /* '<S246>/S-Function1' */
  real_T SFunction1_o5_em;             /* '<S246>/S-Function1' */
  real_T SFunction1_o6_bd;             /* '<S246>/S-Function1' */
  real_T SFunction1_o7_oi;             /* '<S246>/S-Function1' */
  real_T SFunction1_o1_o5;             /* '<S253>/S-Function1' */
  real_T SFunction1_o2_bz;             /* '<S253>/S-Function1' */
  real_T SFunction1_o3_cr;             /* '<S253>/S-Function1' */
  real_T SFunction1_o4_gl;             /* '<S253>/S-Function1' */
  real_T SFunction1_o5_al;             /* '<S253>/S-Function1' */
  real_T SFunction1_o6_oh;             /* '<S253>/S-Function1' */
  real_T SFunction1_o7_ng;             /* '<S253>/S-Function1' */
  real_T SFunction1_o1_jr;             /* '<S254>/S-Function1' */
  real_T SFunction1_o2_bv;             /* '<S254>/S-Function1' */
  real_T SFunction1_o3_jb;             /* '<S254>/S-Function1' */
  real_T SFunction1_o4_ar;             /* '<S254>/S-Function1' */
  real_T SFunction1_o5_j3;             /* '<S254>/S-Function1' */
  real_T SFunction1_o6_mp;             /* '<S254>/S-Function1' */
  real_T SFunction1_o7_cd;             /* '<S254>/S-Function1' */
  real_T SFunction1_o1_ll;             /* '<S255>/S-Function1' */
  real_T SFunction1_o2_pc;             /* '<S255>/S-Function1' */
  real_T SFunction1_o3_kh;             /* '<S255>/S-Function1' */
  real_T SFunction1_o4_id;             /* '<S255>/S-Function1' */
  real_T SFunction1_o5_of;             /* '<S255>/S-Function1' */
  real_T SFunction1_o6_et;             /* '<S255>/S-Function1' */
  real_T SFunction1_o7_l;              /* '<S255>/S-Function1' */
  real_T SFunction1_o1_oe;             /* '<S173>/S-Function1' */
  real_T SFunction1_o2_mv;             /* '<S173>/S-Function1' */
  real_T SFunction1_o3_h1i;            /* '<S173>/S-Function1' */
  real_T SFunction1_o4_jb;             /* '<S173>/S-Function1' */
  real_T SFunction1_o5_jj;             /* '<S173>/S-Function1' */
  real_T SFunction1_o6_c0;             /* '<S173>/S-Function1' */
  real_T SFunction1_o7_j0;             /* '<S173>/S-Function1' */
  real_T SFunction1_o1_gy;             /* '<S174>/S-Function1' */
  real_T SFunction1_o2_i2;             /* '<S174>/S-Function1' */
  real_T SFunction1_o3_mv;             /* '<S174>/S-Function1' */
  real_T SFunction1_o4_oc;             /* '<S174>/S-Function1' */
  real_T SFunction1_o5_as;             /* '<S174>/S-Function1' */
  real_T SFunction1_o6_a1;             /* '<S174>/S-Function1' */
  real_T SFunction1_o7_ou;             /* '<S174>/S-Function1' */
  real_T SFunction1_o1_gm;             /* '<S175>/S-Function1' */
  real_T SFunction1_o2_ng;             /* '<S175>/S-Function1' */
  real_T SFunction1_o3_e2;             /* '<S175>/S-Function1' */
  real_T SFunction1_o4_ey;             /* '<S175>/S-Function1' */
  real_T SFunction1_o5_cl;             /* '<S175>/S-Function1' */
  real_T SFunction1_o6_od;             /* '<S175>/S-Function1' */
  real_T SFunction1_o7_cz;             /* '<S175>/S-Function1' */
  real_T SFunction1_o1_m2;             /* '<S164>/S-Function1' */
  real_T SFunction1_o2_d3;             /* '<S164>/S-Function1' */
  real_T SFunction1_o3_ep;             /* '<S164>/S-Function1' */
  real_T SFunction1_o4_n4;             /* '<S164>/S-Function1' */
  real_T SFunction1_o5_jd;             /* '<S164>/S-Function1' */
  real_T SFunction1_o6_lx;             /* '<S164>/S-Function1' */
  real_T SFunction1_o7_d;              /* '<S164>/S-Function1' */
  real_T SFunction1_o1_lh;             /* '<S165>/S-Function1' */
  real_T SFunction1_o2_l31;            /* '<S165>/S-Function1' */
  real_T SFunction1_o3_crb;            /* '<S165>/S-Function1' */
  real_T SFunction1_o4_kd;             /* '<S165>/S-Function1' */
  real_T SFunction1_o5_nrg;            /* '<S165>/S-Function1' */
  real_T SFunction1_o6_dr;             /* '<S165>/S-Function1' */
  real_T SFunction1_o7_p3;             /* '<S165>/S-Function1' */
  real_T SFunction1_o1_oo;             /* '<S166>/S-Function1' */
  real_T SFunction1_o2_os;             /* '<S166>/S-Function1' */
  real_T SFunction1_o3_pr;             /* '<S166>/S-Function1' */
  real_T SFunction1_o4_fo;             /* '<S166>/S-Function1' */
  real_T SFunction1_o5_od;             /* '<S166>/S-Function1' */
  real_T SFunction1_o6_gf;             /* '<S166>/S-Function1' */
  real_T SFunction1_o7_go;             /* '<S166>/S-Function1' */
  real_T DataTypeConversion_f;         /* '<S77>/Data Type Conversion' */
  real_T SFunction1_o1_fn;             /* '<S90>/S-Function1' */
  real_T SFunction1_o2_m0;             /* '<S90>/S-Function1' */
  real_T SFunction1_o3_dp;             /* '<S90>/S-Function1' */
  real_T SFunction1_o4_od;             /* '<S90>/S-Function1' */
  real_T Precharge_Relay_Status;       /* '<S77>/Gain' */
  real_T SFunction1_o1_di;             /* '<S89>/S-Function1' */
  real_T SFunction1_o2_lu;             /* '<S89>/S-Function1' */
  real_T SFunction1_o3_g0;             /* '<S89>/S-Function1' */
  real_T SFunction1_o4_nj;             /* '<S89>/S-Function1' */
  real_T SFunction1_o5_gg;             /* '<S89>/S-Function1' */
  real_T SFunction1_o1_ga;             /* '<S263>/S-Function1' */
  real_T SFunction1_o2_hx;             /* '<S263>/S-Function1' */
  real_T SFunction1_o3_mj;             /* '<S263>/S-Function1' */
  real_T SFunction1_o4_nb;             /* '<S263>/S-Function1' */
  real_T CANIOTemp;                    /* '<S78>/1//10 °C' */
  real_T Safetycircuit_State;          /* '<S78>/Gain3' */
  real_T Inv_1_State;                  /* '<S78>/Gain5' */
  real_T Inv_2_State;                  /* '<S78>/Gain6' */
  real_T SFunction1_o1_o5k;            /* '<S270>/S-Function1' */
  real_T SFunction1_o2_jk;             /* '<S270>/S-Function1' */
  real_T SFunction1_o3_mgh;            /* '<S270>/S-Function1' */
  real_T SFunction1_o4_jo;             /* '<S270>/S-Function1' */
  real_T SFunction1_o5_dj;             /* '<S270>/S-Function1' */
  real_T SFunction1_o6_ka;             /* '<S270>/S-Function1' */
  real_T SFunction1_o7_cr;             /* '<S270>/S-Function1' */
  real_T SFunction1_o1_hd;             /* '<S273>/S-Function1' */
  real_T SFunction1_o2_bx;             /* '<S273>/S-Function1' */
  real_T SFunction1_o3_du;             /* '<S273>/S-Function1' */
  real_T SFunction1_o4_jj;             /* '<S273>/S-Function1' */
  real_T SFunction1_o5_bw;             /* '<S273>/S-Function1' */
  real_T SFunction1_o6_n5;             /* '<S273>/S-Function1' */
  real_T SFunction1_o7_kc;             /* '<S273>/S-Function1' */
  real_T SFunction1_o1_aex;            /* '<S274>/S-Function1' */
  real_T SFunction1_o2_pw;             /* '<S274>/S-Function1' */
  real_T SFunction1_o3_k3;             /* '<S274>/S-Function1' */
  real_T SFunction1_o4_p5;             /* '<S274>/S-Function1' */
  real_T SFunction1_o5_ps;             /* '<S274>/S-Function1' */
  real_T SFunction1_o6_gs;             /* '<S274>/S-Function1' */
  real_T SFunction1_o7_e4;             /* '<S274>/S-Function1' */
  real_T SFunction1_o1_aj;             /* '<S275>/S-Function1' */
  real_T SFunction1_o2_o5w;            /* '<S275>/S-Function1' */
  real_T SFunction1_o3_nc;             /* '<S275>/S-Function1' */
  real_T SFunction1_o4_oe;             /* '<S275>/S-Function1' */
  real_T SFunction1_o5_ci;             /* '<S275>/S-Function1' */
  real_T SFunction1_o6_pum;            /* '<S275>/S-Function1' */
  real_T SFunction1_o7_db;             /* '<S275>/S-Function1' */
  real_T Gain_g;                       /* '<S282>/Gain' */
  real_T Yaw_Z_Error;                  /* '<S80>/Errorfield' */
  real_T Gain10;                       /* '<S287>/Gain10' */
  real_T Gain_mjr;                     /* '<S290>/Gain' */
  real_T Gain11;                       /* '<S287>/Gain11' */
  real_T Gain_ct;                      /* '<S291>/Gain' */
  real_T Gain9;                        /* '<S287>/Gain9' */
  real_T Gain_b;                       /* '<S292>/Gain' */
  real_T Gain1_b;                      /* '<S287>/Gain1' */
  real_T Gain_bv;                      /* '<S293>/Gain' */
  real_T Gain2_p;                      /* '<S287>/Gain2' */
  real_T Gain3_a;                      /* '<S287>/Gain3' */
  real_T Gain5_f;                      /* '<S287>/Gain5' */
  real_T Gain6_k;                      /* '<S287>/Gain6' */
  real_T Gain7;                        /* '<S287>/Gain7' */
  real_T Gain8;                        /* '<S287>/Gain8' */
  real_T Gain9_n;                      /* '<S288>/Gain9' */
  real_T Gain_b5;                      /* '<S370>/Gain' */
  real_T Gain1_k;                      /* '<S288>/Gain1' */
  real_T Gain10_p;                     /* '<S288>/Gain10' */
  real_T Gain11_g;                     /* '<S288>/Gain11' */
  real_T Gain2_m;                      /* '<S288>/Gain2' */
  real_T Gain3_f;                      /* '<S288>/Gain3' */
  real_T Gain5_p;                      /* '<S288>/Gain5' */
  real_T Gain6_k0;                     /* '<S288>/Gain6' */
  real_T Gain7_j;                      /* '<S288>/Gain7' */
  real_T Gain8_l;                      /* '<S288>/Gain8' */
  real_T InvCorrection;                /* '<S288>/InvCorrection' */
  real_T Gain_o;                       /* '<S443>/Gain' */
  real_T WeightedSampleTime_gx;        /* '<S468>/Weighted Sample Time' */
  real_T Divide1_pa;                   /* '<S468>/Divide1' */
  real_T Sum_d;                        /* '<S468>/Sum' */
  real_T Divide_ir;                    /* '<S468>/Divide' */
  real_T SFunction1;                   /* '<S455>/S-Function1' */
  real_T UrefADC;                      /* '<S461>/UrefADC' */
  real_T SFunction1_f;                 /* '<S456>/S-Function1' */
  real_T UBatt;                        /* '<S448>/Spannungsteiler' */
  real_T ADCR;                         /* '<S461>/ADC-R' */
  real_T Divide1_f;                    /* '<S463>/Divide1' */
  real_T MathFunction;                 /* '<S463>/Math Function' */
  real_T Divide2_l;                    /* '<S463>/Divide2' */
  real_T Product_b2;                   /* '<S463>/Product' */
  real_T Sum_jf;                       /* '<S463>/Sum' */
  real_T Divide_do;                    /* '<S463>/Divide' */
  real_T Sum1_k;                       /* '<S463>/Sum1' */
  real_T Product_g;                    /* '<S467>/Product' */
  real_T Memory_c;                     /* '<S467>/Memory' */
  real_T Sum_ju;                       /* '<S467>/Sum' */
  real_T Product1_e;                   /* '<S467>/Product1' */
  real_T Sum1_m;                       /* '<S467>/Sum1' */
  real_T Gain_ph;                      /* '<S459>/Gain' */
  real_T Gain_gd;                      /* '<S460>/Gain' */
  real_T SFunction1_b;                 /* '<S451>/S-Function1' */
  real_T SFunction1_m;                 /* '<S452>/S-Function1' */
  real_T SFunction1_d;                 /* '<S453>/S-Function1' */
  real_T SFunction1_i;                 /* '<S454>/S-Function1' */
  real_T SFunction1_l;                 /* '<S457>/S-Function1' */
  real_T SFunction1_g;                 /* '<S458>/S-Function1' */
  real_T WeightedSampleTime_l;         /* '<S470>/Weighted Sample Time' */
  real_T Divide1_lg;                   /* '<S470>/Divide1' */
  real_T Sum_ha;                       /* '<S470>/Sum' */
  real_T Divide_b;                     /* '<S470>/Divide' */
  real_T UrefADC_c;                    /* '<S462>/UrefADC' */
  real_T ADCR_h;                       /* '<S462>/ADC-R' */
  real_T Divide1_b;                    /* '<S464>/Divide1' */
  real_T MathFunction_a;               /* '<S464>/Math Function' */
  real_T Divide2_g;                    /* '<S464>/Divide2' */
  real_T Product_fv;                   /* '<S464>/Product' */
  real_T Sum_e;                        /* '<S464>/Sum' */
  real_T Divide_o;                     /* '<S464>/Divide' */
  real_T Sum1_p;                       /* '<S464>/Sum1' */
  real_T Product_j;                    /* '<S469>/Product' */
  real_T Memory_n;                     /* '<S469>/Memory' */
  real_T Sum_n2;                       /* '<S469>/Sum' */
  real_T Product1_nj;                  /* '<S469>/Product1' */
  real_T Sum1_b2;                      /* '<S469>/Sum1' */
  real_T Gain_pj[8];                   /* '<S448>/Gain' */
  real_T SFunction1_o2_mm;             /* '<S471>/S-Function1' */
  real_T SFunction1_o3_dc;             /* '<S471>/S-Function1' */
  real_T SFunction1_o4_mo;             /* '<S471>/S-Function1' */
  real_T Crashsensor;                  /* '<S85>/Gain1' */
  real_T Gain_k;                       /* '<S502>/Gain' */
  real_T Gain_cq;                      /* '<S503>/Gain' */
  real_T SFunction1_o1_le;             /* '<S505>/S-Function1' */
  real_T SFunction1_o2_i4;             /* '<S505>/S-Function1' */
  real_T SFunction1_o3_jl;             /* '<S505>/S-Function1' */
  real_T SFunction1_o4_lg;             /* '<S505>/S-Function1' */
  real_T Gain_h;                       /* '<S504>/Gain' */
  real_T Gain_n;                       /* '<S544>/Gain' */
  real_T Gain_a;                       /* '<S545>/Gain' */
  real_T Gain_e;                       /* '<S566>/Gain' */
  real_T ModelReference;               /* '<S584>/ModelReference' */
  real_T Sum_kx;                       /* '<S584>/Sum' */
  real_T Product1_b2;                  /* '<S584>/Product1' */
  real_T Product3;                     /* '<S584>/Product3' */
  real_T Gain_jh;                      /* '<S585>/Gain' */
  real_T ModelReference_l;             /* '<S585>/ModelReference' */
  real_T Sum2_e;                       /* '<S585>/Sum2' */
  real_T Gain1_c;                      /* '<S585>/Gain1' */
  real_T ModelReference3;              /* '<S585>/ModelReference3' */
  real_T Product2_h;                   /* '<S585>/Product2' */
  real_T Product3_c;                   /* '<S585>/Product3' */
  real_T Gain_bh;                      /* '<S586>/Gain' */
  real_T ModelReference_n;             /* '<S586>/ModelReference' */
  real_T Sum2_j;                       /* '<S586>/Sum2' */
  real_T Gain1_d;                      /* '<S586>/Gain1' */
  real_T ModelReference1_f;            /* '<S586>/ModelReference1' */
  real_T ModelReference3_b;            /* '<S586>/ModelReference3' */
  real_T Product2_a;                   /* '<S586>/Product2' */
  real_T Product3_i;                   /* '<S586>/Product3' */
  real_T degrad_d;                     /* '<S591>/deg-rad' */
  real_T Product_h;                    /* '<S591>/Product' */
  real_T sqr;                          /* '<S591>/sqr' */
  real_T Product1_o;                   /* '<S591>/Product1' */
  real_T Sum_hs;                       /* '<S591>/Sum' */
  real_T Divide_a;                     /* '<S591>/Divide' */
  real_T raddeg;                       /* '<S591>/rad-deg' */
  real_T Gain_mv;                      /* '<S592>/Gain' */
  real_T Sum1_e;                       /* '<S591>/Sum1' */
  real_T TappedDelay[5];               /* '<S591>/Tapped Delay' */
  real_T degrad1_i[5];                 /* '<S591>/deg-rad1' */
  real_T Sum_fz;                       /* '<S593>/Sum' */
  real_T RateTransition_h;             /* '<S593>/Rate Transition' */
  real_T K_OpenLoop1;                  /* '<S593>/K_OpenLoop1' */
  real_T uJzrdynbri;                   /* '<S593>/2*Jz*rdyn//(br*i)' */
  real_T K_ClosedLoop;                 /* '<S593>/K_ClosedLoop' */
  real_T ProportionalGain_p;           /* '<S596>/Proportional Gain' */
  real_T Integrator_e;                 /* '<S596>/Integrator' */
  real_T DerivativeGain;               /* '<S596>/Derivative Gain' */
  real_T Filter;                       /* '<S596>/Filter' */
  real_T SumD;                         /* '<S596>/SumD' */
  real_T FilterCoefficient;            /* '<S596>/Filter Coefficient' */
  real_T Sum_lv;                       /* '<S596>/Sum' */
  real_T ManualSwitch;                 /* '<S593>/Manual Switch' */
  real_T IntegralGain;                 /* '<S596>/Integral Gain' */
  real_T Sum1_is;                      /* '<S593>/Sum1' */
  real_T DerivativeGain_b;             /* '<S597>/Derivative Gain' */
  real_T Filter_p;                     /* '<S597>/Filter' */
  real_T SumD_a;                       /* '<S597>/SumD' */
  real_T FilterCoefficient_e;          /* '<S597>/Filter Coefficient' */
  real_T IntegralGain_e;               /* '<S597>/Integral Gain' */
  real_T Integrator_ef;                /* '<S597>/Integrator' */
  real_T ProportionalGain_c;           /* '<S597>/Proportional Gain' */
  real_T Sum_d2;                       /* '<S597>/Sum' */
  real_T DerivativeGain_bg;            /* '<S598>/Derivative Gain' */
  real_T Filter_n;                     /* '<S598>/Filter' */
  real_T SumD_j;                       /* '<S598>/SumD' */
  real_T FilterCoefficient_n;          /* '<S598>/Filter Coefficient' */
  real_T IntegralGain_b;               /* '<S598>/Integral Gain' */
  real_T Integrator_m;                 /* '<S598>/Integrator' */
  real_T ProportionalGain_pc;          /* '<S598>/Proportional Gain' */
  real_T Sum_b5;                       /* '<S598>/Sum' */
  real_T ModelReference_h;             /* '<S599>/ModelReference' */
  real_T Sum_ht;                       /* '<S599>/Sum' */
  real_T Product1_l;                   /* '<S599>/Product1' */
  real_T Product3_p;                   /* '<S599>/Product3' */
  real_T Gain_l;                       /* '<S600>/Gain' */
  real_T ModelReference_e;             /* '<S600>/ModelReference' */
  real_T Sum2_a;                       /* '<S600>/Sum2' */
  real_T Gain1_n;                      /* '<S600>/Gain1' */
  real_T ModelReference3_j;            /* '<S600>/ModelReference3' */
  real_T Product2_p;                   /* '<S600>/Product2' */
  real_T Product3_d;                   /* '<S600>/Product3' */
  real_T Gain_i;                       /* '<S601>/Gain' */
  real_T ModelReference_d;             /* '<S601>/ModelReference' */
  real_T Sum2_am;                      /* '<S601>/Sum2' */
  real_T Gain1_cd;                     /* '<S601>/Gain1' */
  real_T ModelReference1_i;            /* '<S601>/ModelReference1' */
  real_T ModelReference3_k;            /* '<S601>/ModelReference3' */
  real_T Product2_e;                   /* '<S601>/Product2' */
  real_T Product3_p0;                  /* '<S601>/Product3' */
  real_T degrad_p;                     /* '<S606>/deg-rad' */
  real_T Product_ix;                   /* '<S606>/Product' */
  real_T sqr_m;                        /* '<S606>/sqr' */
  real_T Product1_eb;                  /* '<S606>/Product1' */
  real_T Sum_l5;                       /* '<S606>/Sum' */
  real_T Divide_ci;                    /* '<S606>/Divide' */
  real_T raddeg_g;                     /* '<S606>/rad-deg' */
  real_T Gain_mn;                      /* '<S607>/Gain' */
  real_T Sum1_mx;                      /* '<S606>/Sum1' */
  real_T TappedDelay_f[5];             /* '<S606>/Tapped Delay' */
  real_T degrad1_g[5];                 /* '<S606>/deg-rad1' */
  real_T Sum_cp;                       /* '<S608>/Sum' */
  real_T RateTransition_b;             /* '<S608>/Rate Transition' */
  real_T K_OpenLoop1_g;                /* '<S608>/K_OpenLoop1' */
  real_T uJzrdynbri_n;                 /* '<S608>/2*Jz*rdyn//(br*i)' */
  real_T K_ClosedLoop_k;               /* '<S608>/K_ClosedLoop' */
  real_T ProportionalGain_d;           /* '<S611>/Proportional Gain' */
  real_T Integrator_f;                 /* '<S611>/Integrator' */
  real_T DerivativeGain_j;             /* '<S611>/Derivative Gain' */
  real_T Filter_d;                     /* '<S611>/Filter' */
  real_T SumD_c;                       /* '<S611>/SumD' */
  real_T FilterCoefficient_ey;         /* '<S611>/Filter Coefficient' */
  real_T Sum_hi;                       /* '<S611>/Sum' */
  real_T ManualSwitch_m;               /* '<S608>/Manual Switch' */
  real_T IntegralGain_h;               /* '<S611>/Integral Gain' */
  real_T Sum1_h;                       /* '<S608>/Sum1' */
  real_T DerivativeGain_l;             /* '<S612>/Derivative Gain' */
  real_T Filter_c;                     /* '<S612>/Filter' */
  real_T SumD_d;                       /* '<S612>/SumD' */
  real_T FilterCoefficient_d;          /* '<S612>/Filter Coefficient' */
  real_T IntegralGain_c;               /* '<S612>/Integral Gain' */
  real_T Integrator_o;                 /* '<S612>/Integrator' */
  real_T ProportionalGain_g;           /* '<S612>/Proportional Gain' */
  real_T Sum_m;                        /* '<S612>/Sum' */
  real_T DerivativeGain_c;             /* '<S613>/Derivative Gain' */
  real_T Filter_m;                     /* '<S613>/Filter' */
  real_T SumD_m;                       /* '<S613>/SumD' */
  real_T FilterCoefficient_h;          /* '<S613>/Filter Coefficient' */
  real_T IntegralGain_g;               /* '<S613>/Integral Gain' */
  real_T Integrator_a;                 /* '<S613>/Integrator' */
  real_T ProportionalGain_j;           /* '<S613>/Proportional Gain' */
  real_T Sum_pc;                       /* '<S613>/Sum' */
  real_T M_max;                        /* '<S528>/M_max' */
  real_T Uk1_m;                        /* '<S614>/Delay Input1' */
  real_T Uk1_d;                        /* '<S615>/Delay Input1' */
  real_T Uk1_mk;                       /* '<S616>/Delay Input1' */
  real_T Uk1_j;                        /* '<S617>/Delay Input1' */
  real_T DataTypeConversion_b;         /* '<S618>/Data Type Conversion' */
  real_T Memory_h;                     /* '<S618>/Memory' */
  real_T Product_fw;                   /* '<S618>/Product' */
  real_T Switch2;                      /* '<S572>/Switch2' */
  real_T WeightedSampleTime_hx;        /* '<S623>/Weighted Sample Time' */
  real_T Divide1_dd;                   /* '<S623>/Divide1' */
  real_T Sum_i;                        /* '<S623>/Sum' */
  real_T Divide_ny;                    /* '<S623>/Divide' */
  real_T Sum_g;                        /* '<S618>/Sum' */
  real_T Product1_oo;                  /* '<S618>/Product1' */
  real_T Sum1_l;                       /* '<S618>/Sum1' */
  real_T Product2_f;                   /* '<S618>/Product2' */
  real_T DataTypeConversion_h2;        /* '<S619>/Data Type Conversion' */
  real_T Memory_b;                     /* '<S619>/Memory' */
  real_T Product_mn;                   /* '<S619>/Product' */
  real_T Switch1_a;                    /* '<S572>/Switch1' */
  real_T WeightedSampleTime_c;         /* '<S624>/Weighted Sample Time' */
  real_T Divide1_nz;                   /* '<S624>/Divide1' */
  real_T Sum_c3;                       /* '<S624>/Sum' */
  real_T Divide_ov;                    /* '<S624>/Divide' */
  real_T Sum_ew;                       /* '<S619>/Sum' */
  real_T Product1_j;                   /* '<S619>/Product1' */
  real_T Sum1_ia;                      /* '<S619>/Sum1' */
  real_T Product2_ey;                  /* '<S619>/Product2' */
  real_T Switch_o[2];                  /* '<S622>/Switch' */
  real_T Switch2_f[2];                 /* '<S622>/Switch2' */
  real_T Gain_f;                       /* '<S627>/Gain' */
  real_T Switch_pt;                    /* '<S625>/Switch' */
  real_T Switch_k;                     /* '<S626>/Switch' */
  real_T Min;                          /* '<S628>/Min' */
  real_T Gain_hz;                      /* '<S649>/Gain' */
  real_T Gain_de;                      /* '<S650>/Gain' */
  real_T Gain_on;                      /* '<S651>/Gain' */
  real_T Gain_dx;                      /* '<S652>/Gain' */
  real_T Gain_aa;                      /* '<S653>/Gain' */
  real_T Gain_gt;                      /* '<S654>/Gain' */
  real_T Gain_af;                      /* '<S655>/Gain' */
  real_T Gain_aj;                      /* '<S664>/Gain' */
  real_T grer0;                        /* '<S532>/größer 0' */
  real_T Gain_di;                      /* '<S666>/Gain' */
  real_T Gain_lq;                      /* '<S667>/Gain' */
  real_T CurrentConsumption;           /* '<S534>/Discrete-Time Integrator' */
  real_T Gain_p2;                      /* '<S668>/Gain' */
  real_T Gain_om;                      /* '<S669>/Gain' */
  real_T Gain_kf;                      /* '<S670>/Gain' */
  real_T IntegralGain_j;               /* '<S682>/Integral Gain' */
  real_T Gain_nr;                      /* '<S701>/Gain' */
  real_T Gain_at;                      /* '<S702>/Gain' */
  real_T O_U1_RegID;                   /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U2_RegID;                   /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U2_Value32;                 /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U1_Value32;                 /* '<S537>/Fahrzeugsteuerung' */
  real_T O_ErrorNr;                    /* '<S537>/Fahrzeugsteuerung' */
  real_T O_fBlink_Start;               /* '<S537>/Fahrzeugsteuerung' */
  real_T O_State;                      /* '<S537>/Fahrzeugsteuerung' */
  real_T O_InverterFRE;                /* '<S537>/Fahrzeugsteuerung' */
  real_T O_TorqueEnable;               /* '<S537>/Fahrzeugsteuerung' */
  real_T O_InvertersTXActive;          /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U1Init_Reg;                 /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U1Init_Zeit;                /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U2Init_Reg;                 /* '<S537>/Fahrzeugsteuerung' */
  real_T O_U2Init_Zeit;                /* '<S537>/Fahrzeugsteuerung' */
  real_T O_SoundPlayChannel;           /* '<S537>/Fahrzeugsteuerung' */
  real_T O_SpeakerEnable;              /* '<S537>/Fahrzeugsteuerung' */
  real_T O_coolingEnable;              /* '<S537>/Fahrzeugsteuerung' */
  real_T Switch_c;                     /* '<S681>/Switch' */
  real_T uDLookupTable;                /* '<S535>/1-D Lookup Table' */
  real_T Switch_j;                     /* '<S535>/Switch' */
  real_T Torque_out[2];                /* '<S567>/Switch' */
  real_T Sum5;                         /* '<S567>/Sum5' */
  real_T Divide_nb;                    /* '<S567>/Divide' */
  real_T PMotL;                        /* '<S567>/Product' */
  real_T ML;                           /* '<S567>/Divide1' */
  real_T PMotR;                        /* '<S567>/Sum1' */
  real_T MR;                           /* '<S567>/Divide2' */
  real_T MultiportSwitch_n;            /* '<S629>/Multiport Switch' */
  real_T Gain_kg;                      /* '<S629>/Gain' */
  real_T Saturation2_p;                /* '<S629>/Saturation2' */
  real_T Saturation1_e;                /* '<S629>/Saturation1' */
  real_T Saturation_i;                 /* '<S629>/Saturation' */
  real_T Min_j;                        /* '<S629>/Min' */
  real_T Sum_gm;                       /* '<S628>/Sum' */
  real_T PlausAbs;                     /* '<S628>/Abs1' */
  real_T Switch_pj;                    /* '<S628>/Switch' */
  real_T Sum1_lx;                      /* '<S628>/Sum1' */
  real_T ThrottleMean;                 /* '<S628>/Divide' */
  real_T Gain_hg;                      /* '<S628>/Gain' */
  real_T DeltaMNm;                     /* '<S571>/Multiport Switch TV' */
  real_T Product2_c;                   /* '<S599>/Product2' */
  real_T Product_c;                    /* '<S599>/Product' */
  real_T Sum1_mk;                      /* '<S599>/Sum1' */
  real_T Product4;                     /* '<S601>/Product4' */
  real_T Product_n;                    /* '<S601>/Product' */
  real_T Sum1_it;                      /* '<S601>/Sum1' */
  real_T Product1_ky;                  /* '<S600>/Product1' */
  real_T Product4_o;                   /* '<S600>/Product4' */
  real_T Product_bp;                   /* '<S600>/Product' */
  real_T Sum1_hk;                      /* '<S600>/Sum1' */
  real_T Sum3_o;                       /* '<S600>/Sum3' */
  real_T DeltaMNm_f;                   /* '<S570>/Multiport Switch TV' */
  real_T Product2_er;                  /* '<S584>/Product2' */
  real_T Product_k;                    /* '<S584>/Product' */
  real_T Sum1_ml;                      /* '<S584>/Sum1' */
  real_T Product4_g;                   /* '<S586>/Product4' */
  real_T Product_ba;                   /* '<S586>/Product' */
  real_T Sum1_p5;                      /* '<S586>/Sum1' */
  real_T Product1_gs;                  /* '<S585>/Product1' */
  real_T Product4_n;                   /* '<S585>/Product4' */
  real_T Product_ey;                   /* '<S585>/Product' */
  real_T Sum1_j;                       /* '<S585>/Sum1' */
  real_T Sum3_a;                       /* '<S585>/Sum3' */
  real_T Fcn1;                         /* '<S581>/Fcn1' */
  real_T Saturation1_e2;               /* '<S581>/Saturation1' */
  real_T Fcn1_b;                       /* '<S578>/Fcn1' */
  real_T Saturation1_b;                /* '<S578>/Saturation1' */
  real_T Reststrecke_km;               /* '<S573>/Add1' */
  real_T kWhWh;                        /* '<S573>/kWh->Wh' */
  real_T verbleibendeEnergie_Wh;       /* '<S573>/Add' */
  real_T Restreichweite_km;            /* '<S573>/Divide1' */
  real_T deltaStrecke_km;              /* '<S573>/Add2' */
  real_T Saturation_m;                 /* '<S573>/Saturation' */
  real_T LED_BAR_2;                    /* '<S564>/Multiport Switch' */
  real_T Switch_i;                     /* '<S564>/Switch' */
  real_T Product_lz;                   /* '<S564>/Product' */
  real_T Divide2_h;                    /* '<S377>/Divide2' */
  real_T DrehmomentStrangstrominNmArms;/* '<S377>/Drehmoment // Strangstrom in Nm//Arms' */
  real_T WeightedSampleTime_le;        /* '<S382>/Weighted Sample Time' */
  real_T Divide1_k;                    /* '<S382>/Divide1' */
  real_T Sum_gl;                       /* '<S382>/Sum' */
  real_T Divide_el;                    /* '<S382>/Divide' */
  real_T DataTypeConversion1_g;        /* '<S369>/Data Type Conversion1' */
  real_T Product_n0;                   /* '<S380>/Product' */
  real_T Memory_c2;                    /* '<S380>/Memory' */
  real_T Sum_ih;                       /* '<S380>/Sum' */
  real_T Product1_jw;                  /* '<S380>/Product1' */
  real_T Sum1_l3;                      /* '<S380>/Sum1' */
  real_T Product_a;                    /* '<S369>/Product' */
  real_T up60i;                        /* '<S369>/2*p // 60i' */
  real_T Gain_mi;                      /* '<S373>/Gain' */
  real_T Subtract_p;                   /* '<S373>/Subtract' */
  real_T Divide_dg;                    /* '<S373>/Divide' */
  real_T Tempcorrespondingresistance;  /* '<S373>/Temp. corresponding  resistance' */
  real_T Divide2_b;                    /* '<S300>/Divide2' */
  real_T DrehmomentStrangstrominNmArms_d;/* '<S300>/Drehmoment // Strangstrom in Nm//Arms' */
  real_T WeightedSampleTime_n;         /* '<S305>/Weighted Sample Time' */
  real_T Divide1_pv;                   /* '<S305>/Divide1' */
  real_T Sum_d1;                       /* '<S305>/Sum' */
  real_T Divide_az;                    /* '<S305>/Divide' */
  real_T DataTypeConversion1_d;        /* '<S289>/Data Type Conversion1' */
  real_T Product_kp;                   /* '<S303>/Product' */
  real_T Memory_j;                     /* '<S303>/Memory' */
  real_T Sum_h4;                       /* '<S303>/Sum' */
  real_T Product1_gg;                  /* '<S303>/Product1' */
  real_T Sum1_ps;                      /* '<S303>/Sum1' */
  real_T Product_p;                    /* '<S289>/Product' */
  real_T upi60;                        /* '<S289>/2*pi // 60' */
  real_T Gain_dh;                      /* '<S296>/Gain' */
  real_T RawWert2_Motor1;              /* '<S296>/Subtract' */
  real_T Divide_aa;                    /* '<S296>/Divide' */
  real_T Tempcorrespondingresistance_i;/* '<S296>/Temp. corresponding  resistance' */
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
  uint64m_T Gain_o2;                   /* '<S641>/Gain' */
  uint64m_T Gain_gp;                   /* '<S575>/Gain' */
  real32_T DataTypeConversion_hf;      /* '<S50>/Data Type Conversion' */
  real32_T DataTypeConversion_k;       /* '<S51>/Data Type Conversion' */
  real32_T DataTypeConversion_a;       /* '<S87>/Data Type Conversion' */
  real32_T DataTypeConversion_kf;      /* '<S282>/Data Type Conversion' */
  real32_T DataTypeConversion_n;       /* '<S290>/Data Type Conversion' */
  real32_T DataTypeConversion_hn;      /* '<S291>/Data Type Conversion' */
  real32_T DataTypeConversion_c;       /* '<S292>/Data Type Conversion' */
  real32_T DataTypeConversion_bv;      /* '<S293>/Data Type Conversion' */
  real32_T DataTypeConversion_i;       /* '<S370>/Data Type Conversion' */
  real32_T DataTypeConversion_m;       /* '<S443>/Data Type Conversion' */
  real32_T DataTypeConversion_mm;      /* '<S459>/Data Type Conversion' */
  real32_T DataTypeConversion_aj;      /* '<S460>/Data Type Conversion' */
  real32_T DataTypeConversion_c4;      /* '<S502>/Data Type Conversion' */
  real32_T DataTypeConversion_e;       /* '<S503>/Data Type Conversion' */
  real32_T DataTypeConversion_h24;     /* '<S504>/Data Type Conversion' */
  real32_T DataTypeConversion_me;      /* '<S544>/Data Type Conversion' */
  real32_T DataTypeConversion_nb;      /* '<S545>/Data Type Conversion' */
  real32_T DataTypeConversion_lx;      /* '<S546>/Data Type Conversion' */
  real32_T DataTypeConversion_bt;      /* '<S566>/Data Type Conversion' */
  real32_T DataTypeConversion_a5;      /* '<S575>/Data Type Conversion' */
  real32_T DataTypeConversion_hnd;     /* '<S592>/Data Type Conversion' */
  real32_T DataTypeConversion_p;       /* '<S607>/Data Type Conversion' */
  real32_T DataTypeConversion_id;      /* '<S627>/Data Type Conversion' */
  real32_T DataTypeConversion_cy;      /* '<S641>/Data Type Conversion' */
  real32_T DataTypeConversion_g;       /* '<S649>/Data Type Conversion' */
  real32_T DataTypeConversion_o;       /* '<S650>/Data Type Conversion' */
  real32_T DataTypeConversion_kg;      /* '<S651>/Data Type Conversion' */
  real32_T DataTypeConversion_aa;      /* '<S652>/Data Type Conversion' */
  real32_T DataTypeConversion_co;      /* '<S653>/Data Type Conversion' */
  real32_T DataTypeConversion_bz;      /* '<S654>/Data Type Conversion' */
  real32_T DataTypeConversion_kb;      /* '<S655>/Data Type Conversion' */
  real32_T DataTypeConversion_f3;      /* '<S664>/Data Type Conversion' */
  real32_T DataTypeConversion_hi;      /* '<S666>/Data Type Conversion' */
  real32_T DataTypeConversion_bi;      /* '<S667>/Data Type Conversion' */
  real32_T DataTypeConversion_g3;      /* '<S668>/Data Type Conversion' */
  real32_T DataTypeConversion_ni;      /* '<S669>/Data Type Conversion' */
  real32_T DataTypeConversion_j;       /* '<S670>/Data Type Conversion' */
  real32_T DataTypeConversion_bc;      /* '<S701>/Data Type Conversion' */
  real32_T DataTypeConversion_hl;      /* '<S702>/Data Type Conversion' */
  uint32_T SFunction1_o1_eo;           /* '<S471>/S-Function1' */
  uint32_T DataTypeConversion1_l;      /* '<S531>/Data Type Conversion1' */
  uint32_T Uk1_gr;                     /* '<S638>/UD' */
  uint32_T Diff;                       /* '<S638>/Diff' */
  uint32_T SFunction1_k;               /* '<S643>/S-Function1' */
  uint32_T Add_p;                      /* '<S531>/Add' */
  uint32_T SFunction1_o1_dj;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o2_np;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o3_ec;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o4_hu;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o5_ee;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o6_ma;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o7_hy;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o8_d;            /* '<S514>/S-Function1' */
  uint32_T SFunction1_o9_o;            /* '<S514>/S-Function1' */
  uint32_T SFunction1_o10_f;           /* '<S514>/S-Function1' */
  uint32_T SFunction1_o1_eu;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o2_jz;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o3_ko;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o4_kg;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o5_fu;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o6_p1;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o7_bo;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o8_j;            /* '<S516>/S-Function1' */
  uint32_T SFunction1_o9_k;            /* '<S516>/S-Function1' */
  uint32_T SFunction1_o10_d;           /* '<S516>/S-Function1' */
  uint32_T SFunction1_o1_kb;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o2_hk;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o3_a1;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o4_jl;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o5_ob;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o6_mn;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o7_oh;           /* '<S518>/S-Function1' */
  uint32_T SFunction1_o8_a;            /* '<S518>/S-Function1' */
  uint32_T SFunction1_o9_a;            /* '<S518>/S-Function1' */
  uint32_T SFunction1_o10_m;           /* '<S518>/S-Function1' */
  uint32_T DataTypeConversion1_p;      /* '<S374>/Data Type Conversion1' */
  uint32_T uHz;                        /* '<S374>/2Hz' */
  uint32_T Brk;                        /* '<S374>/Brk' */
  uint32_T Cal;                        /* '<S374>/Cal' */
  uint32_T Cal0;                       /* '<S374>/Cal0' */
  uint32_T Ena;                        /* '<S374>/Ena' */
  uint32_T NCR0;                       /* '<S374>/NCR0' */
  uint32_T Rsw;                        /* '<S374>/Rsw' */
  uint32_T Tol;                        /* '<S374>/Tol' */
  uint32_T Rdy;                        /* '<S374>/Rdy' */
  uint32_T SIGNMAG;                    /* '<S374>/SIGNMAG' */
  uint32_T Nclip;                      /* '<S374>/Nclip' */
  uint32_T Nclip_o;                    /* '<S374>/Nclip+' */
  uint32_T Nclip_g;                    /* '<S374>/Nclip-' */
  uint32_T Lim;                        /* '<S374>/Lim+' */
  uint32_T IrdDig;                     /* '<S374>/Ird-Dig' */
  uint32_T Iuserchd;                   /* '<S374>/Iuse-rchd' */
  uint32_T IrdN;                       /* '<S374>/Ird-N' */
  uint32_T Ird_TI;                     /* '<S374>/Ird_TI' */
  uint32_T Ird_TIR;                    /* '<S374>/Ird_TIR' */
  uint32_T IrdTM;                      /* '<S374>/Ird-TM' */
  uint32_T IrdANA;                     /* '<S374>/Ird-ANA' */
  uint32_T Iwcns;                      /* '<S374>/Iwcns' */
  uint32_T RFE_plus;                   /* '<S374>/RFE_plus' */
  uint32_T Lim_m;                      /* '<S374>/Lim-' */
  uint32_T frei;                       /* '<S374>/frei' */
  uint32_T Handrad;                    /* '<S374>/Handrad' */
  uint32_T OK;                         /* '<S374>/OK' */
  uint32_T Icns;                       /* '<S374>/Icns' */
  uint32_T TNlim;                      /* '<S374>/T-Nlim' */
  uint32_T PN;                         /* '<S374>/P-N' */
  uint32_T NI;                         /* '<S374>/N-I' */
  uint32_T N0;                         /* '<S374>/N0' */
  uint32_T DataTypeConversion_ot;      /* '<S297>/Data Type Conversion' */
  uint32_T uHz_c;                      /* '<S297>/2Hz' */
  uint32_T Brk_d;                      /* '<S297>/Brk' */
  uint32_T Cal_b;                      /* '<S297>/Cal' */
  uint32_T Cal0_i;                     /* '<S297>/Cal0' */
  uint32_T Ena_l;                      /* '<S297>/Ena' */
  uint32_T NCR0_i;                     /* '<S297>/NCR0' */
  uint32_T Rsw_o;                      /* '<S297>/Rsw' */
  uint32_T Tol_e;                      /* '<S297>/Tol' */
  uint32_T Rdy_o;                      /* '<S297>/Rdy' */
  uint32_T SIGNMAG_j;                  /* '<S297>/SIGNMAG' */
  uint32_T Nclip_d;                    /* '<S297>/Nclip' */
  uint32_T Nclip_k;                    /* '<S297>/Nclip+' */
  uint32_T Nclip_c;                    /* '<S297>/Nclip-' */
  uint32_T Lim_f;                      /* '<S297>/Lim+' */
  uint32_T IrdDig_m;                   /* '<S297>/Ird-Dig' */
  uint32_T Iuserchd_e;                 /* '<S297>/Iuse-rchd' */
  uint32_T IrdN_g;                     /* '<S297>/Ird-N' */
  uint32_T Ird_TI_h;                   /* '<S297>/Ird_TI' */
  uint32_T Ird_TIR_j;                  /* '<S297>/Ird_TIR' */
  uint32_T IrdTM_a;                    /* '<S297>/Ird-TM' */
  uint32_T IrdANA_d;                   /* '<S297>/Ird-ANA' */
  uint32_T Iwcns_n;                    /* '<S297>/Iwcns' */
  uint32_T RFE_plus_j;                 /* '<S297>/RFE_plus' */
  uint32_T Lim_d;                      /* '<S297>/Lim-' */
  uint32_T frei_k;                     /* '<S297>/frei' */
  uint32_T Handrad_a;                  /* '<S297>/Handrad' */
  uint32_T OK_c;                       /* '<S297>/OK' */
  uint32_T Icns_m;                     /* '<S297>/Icns' */
  uint32_T TNlim_e;                    /* '<S297>/T-Nlim' */
  uint32_T PN_d;                       /* '<S297>/P-N' */
  uint32_T NI_j;                       /* '<S297>/N-I' */
  uint32_T N0_p;                       /* '<S297>/N0' */
  int32_T Gain2_i;                     /* '<S377>/Gain2' */
  int32_T Gain2_ii;                    /* '<S300>/Gain2' */
  uint32_T mkm;                        /* '<S573>/m->km' */
  uint32_T Verbrauch_Whkm;             /* '<S573>/Divide' */
  int16_T O_TS_sound;                  /* '<S537>/Fahrzeugsteuerung' */
  int16_T DataTypeConversion3_b;       /* '<S377>/Data Type Conversion3' */
  int16_T DataTypeConversion_ob;       /* '<S369>/Data Type Conversion' */
  int16_T DataTypeConversion4_a;       /* '<S300>/Data Type Conversion4' */
  int16_T DataTypeConversion_ov;       /* '<S289>/Data Type Conversion' */
  uint16_T DataTypeConversion2_ap;     /* '<S531>/Data Type Conversion2' */
  uint16_T Uk1_d2;                     /* '<S640>/UD' */
  uint16_T Diff_n;                     /* '<S640>/Diff' */
  uint16_T SFunction1_dy;              /* '<S644>/S-Function1' */
  uint16_T TagesenergieMABX_Wh;        /* '<S531>/Switch1' */
  uint16_T DataTypeConversion_h1;      /* '<S531>/Data Type Conversion' */
  uint16_T Uk1_iw;                     /* '<S639>/UD' */
  uint16_T SFunction1_a;               /* '<S642>/S-Function1' */
  uint16_T TagesmeterMABX_m;           /* '<S531>/Switch' */
  uint16_T TmpSignalConversionAtSFunctionI[8];/* '<S537>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFunctio_j[8];/* '<S537>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFuncti_jl[8];/* '<S537>/Fahrzeugsteuerung' */
  uint16_T TmpSignalConversionAtSFuncti_ji[8];/* '<S537>/Fahrzeugsteuerung' */
  uint16_T O_Inverter_TX_Mode;         /* '<S537>/Fahrzeugsteuerung' */
  uint16_T Diff_nj;                    /* '<S639>/Diff' */
  uint16_T Add1_o;                     /* '<S531>/Add1' */
  uint16_T Add2;                       /* '<S531>/Add2' */
  uint8_T Compare;                     /* '<S579>/Compare' */
  uint8_T Compare_k;                   /* '<S582>/Compare' */
  uint8_T O_enableTorqueVectoring;     /* '<S537>/Fahrzeugsteuerung' */
  uint8_T O_enableTractionControl;     /* '<S537>/Fahrzeugsteuerung' */
  uint8_T O_AMSIMDFlash;               /* '<S537>/Fahrzeugsteuerung' */
  uint8_T O_SoundEnable;               /* '<S537>/Fahrzeugsteuerung' */
  boolean_T Compare_k2;                /* '<S677>/Compare' */
  boolean_T FixPtRelationalOperator;   /* '<S12>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded;    /* '<S14>/Delta time limit exceeded' */
  boolean_T Mem1;                      /* '<S14>/Mem1' */
  boolean_T Mem2;                      /* '<S14>/Mem2' */
  boolean_T Mem3;                      /* '<S14>/Mem3' */
  boolean_T Mem4;                      /* '<S14>/Mem4' */
  boolean_T Prevmsgnotsent;            /* '<S14>/Prev. msg.  not sent' */
  boolean_T OR;                        /* '<S14>/OR' */
  boolean_T Warn;                      /* '<S14>/Warn' */
  boolean_T Compare_l;                 /* '<S703>/Compare' */
  boolean_T Uk1_dl;                    /* '<S699>/Delay Input1' */
  boolean_T FixPtRelationalOperator_e; /* '<S699>/FixPt Relational Operator' */
  boolean_T A_BSPD;                    /* '<S524>/DT_BPD' */
  boolean_T A_BRAKE_OVERTRAVEL;        /* '<S524>/DT_BRAKEOVERTRAVEL' */
  boolean_T A_NOT_COCKPIT;             /* '<S524>/DT_NOTCOCKPIT' */
  boolean_T A_NOT_LINKS;               /* '<S524>/DT_NOTLINKS' */
  boolean_T A_NOT_RECHTS;              /* '<S524>/DT_NOTRECHTS' */
  boolean_T A_AMS;                     /* '<S524>/DT_AMS' */
  boolean_T DT_IMD;                    /* '<S524>/DT_IMD' */
  boolean_T A_IMD;                     /* '<S524>/Logical Operator2' */
  boolean_T LogicalOperator;           /* '<S524>/Logical Operator' */
  boolean_T A_HVD;                     /* '<S524>/DT_HVD' */
  boolean_T ORSicherheitskreis;        /* '<S524>/OR Sicherheitskreis' */
  boolean_T SFunction1_bo;             /* '<S481>/S-Function1' */
  boolean_T LogicalOperator4;          /* '<S537>/Logical Operator4' */
  boolean_T Compare_n[2];              /* '<S543>/Compare' */
  boolean_T Bremse_bin;                /* '<S526>/Logical Operator' */
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
  boolean_T TmpLatchAtJKFlipFlopInport1;/* '<S693>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2;/* '<S693>/K' */
  boolean_T DataTypeConversion_ma;     /* '<S681>/Data Type Conversion' */
  boolean_T TmpLatchAtJKFlipFlopInport1_p;/* '<S691>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2_m;/* '<S691>/K' */
  boolean_T DataTypeConversion_gx;     /* '<S680>/Data Type Conversion' */
  boolean_T FixPtRelationalOperator_n; /* '<S15>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_a;  /* '<S27>/Delta time limit exceeded' */
  boolean_T Mem1_m;                    /* '<S27>/Mem1' */
  boolean_T Mem2_g;                    /* '<S27>/Mem2' */
  boolean_T Mem3_di;                   /* '<S27>/Mem3' */
  boolean_T Mem4_mb;                   /* '<S27>/Mem4' */
  boolean_T Prevmsgnotsent_g;          /* '<S27>/Prev. msg.  not sent' */
  boolean_T OR_g;                      /* '<S27>/OR' */
  boolean_T Warn_f;                    /* '<S27>/Warn' */
  boolean_T TmpLatchAtJKFlipFlopInport1_j;/* '<S689>/J' */
  boolean_T TmpLatchAtJKFlipFlopInport2_k;/* '<S689>/K' */
  boolean_T DataTypeConversion_a1;     /* '<S679>/Data Type Conversion' */
  boolean_T Compare_ko;                /* '<S676>/Compare' */
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
  boolean_T Compare_kz;                /* '<S553>/Compare' */
  boolean_T Compare_p;                 /* '<S554>/Compare' */
  boolean_T LogicalOperator_g;         /* '<S548>/Logical Operator' */
  boolean_T Compare_pz;                /* '<S555>/Compare' */
  boolean_T Compare_p4;                /* '<S556>/Compare' */
  boolean_T LogicalOperator1;          /* '<S548>/Logical Operator1' */
  boolean_T Compare_d;                 /* '<S557>/Compare' */
  boolean_T Compare_c;                 /* '<S558>/Compare' */
  boolean_T LogicalOperator3;          /* '<S548>/Logical Operator3' */
  boolean_T Compare_m;                 /* '<S560>/Compare' */
  boolean_T Memory_ee;                 /* '<S562>/Memory' */
  boolean_T Logic[2];                  /* '<S562>/Logic' */
  boolean_T LogicalOperator2;          /* '<S548>/Logical Operator2' */
  boolean_T Compare_nq;                /* '<S559>/Compare' */
  boolean_T BRInplausible;             /* '<S524>/DT_BRAKEINPLAUSIBLE' */
  boolean_T GasTimeout;                /* '<S524>/DT_GASTIMEOUT' */
  boolean_T BremseTimeout;             /* '<S524>/DT_BRAKETIMEOUT' */
  boolean_T Gas1Status;                /* '<S524>/DT_GAS1STATUS' */
  boolean_T Gas2Status;                /* '<S524>/DT_GAS2STATUS' */
  boolean_T BremseVorneStatus;         /* '<S524>/DT_BRFRONTSTATUS' */
  boolean_T BremseHintenStatus;        /* '<S524>/DT_BRREARSTATUS' */
  boolean_T DrehzahlTimeout;           /* '<S524>/DT_DrehzahlTIMEOUT' */
  boolean_T LenkwinkelTimeout;         /* '<S524>/DT_LENKWINKELTIMEOUT' */
  boolean_T DataTypeConversion_bo;     /* '<S578>/Data Type Conversion' */
  boolean_T RelationalOperator;        /* '<S578>/Relational Operator' */
  boolean_T Memory_ba;                 /* '<S580>/Memory' */
  boolean_T Logic_j[2];                /* '<S580>/Logic' */
  boolean_T SafetyTVoff;               /* '<S570>/Safety TV off' */
  boolean_T LogicalOperator1_a;        /* '<S570>/Logical Operator1' */
  boolean_T DataTypeConversion_jv;     /* '<S581>/Data Type Conversion' */
  boolean_T RelationalOperator_h;      /* '<S581>/Relational Operator' */
  boolean_T Memory_et;                 /* '<S583>/Memory' */
  boolean_T Logic_e[2];                /* '<S583>/Logic' */
  boolean_T SafetyTVoff_k;             /* '<S571>/Safety TV off' */
  boolean_T LogicalOperator1_m;        /* '<S571>/Logical Operator1' */
  boolean_T LogicalOperator_n;         /* '<S567>/Logical Operator' */
  boolean_T Start_Derating_0_1;        /* '<S573>/Relational Operator' */
  boolean_T Compare_a;                 /* '<S574>/Compare' */
  boolean_T LogicalOperator_a;         /* '<S573>/Logical Operator' */
  boolean_T Input_Threshold;           /* '<S567>/Power Limit truefalse' */
  boolean_T PowerLimitaktivnaktiv;     /* '<S567>/Logical Operator1' */
  boolean_T or;                        /* '<S1>/or' */
  boolean_T FixPtRelationalOperator_j; /* '<S72>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_iq;/* '<S73>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S74>/FixPt Relational Operator' */
  boolean_T LogicalOperator_e;         /* '<S11>/Logical Operator' */
  boolean_T FixPtRelationalOperator_a; /* '<S75>/FixPt Relational Operator' */
  boolean_T Deltatimelimitexceeded_em; /* '<S76>/Delta time limit exceeded' */
  boolean_T Mem1_h4;                   /* '<S76>/Mem1' */
  boolean_T Mem2_m;                    /* '<S76>/Mem2' */
  boolean_T Mem3_ch;                   /* '<S76>/Mem3' */
  boolean_T Mem4_m2;                   /* '<S76>/Mem4' */
  boolean_T Prevmsgnotsent_p;          /* '<S76>/Prev. msg.  not sent' */
  boolean_T OR_np;                     /* '<S76>/OR' */
  boolean_T Warn_g2;                   /* '<S76>/Warn' */
  boolean_T LogicalOperator_m;         /* '<S182>/Logical Operator' */
  boolean_T LogicalOperator_gp;        /* '<S183>/Logical Operator' */
  boolean_T LogicalOperator_nv;        /* '<S96>/Logical Operator' */
  boolean_T LogicalOperator_o;         /* '<S202>/Logical Operator' */
  boolean_T LogicalOperator_l;         /* '<S203>/Logical Operator' */
  boolean_T LogicalOperator_nz;        /* '<S97>/Logical Operator' */
  boolean_T LogicalOperator_i;         /* '<S222>/Logical Operator' */
  boolean_T LogicalOperator_of;        /* '<S223>/Logical Operator' */
  boolean_T LogicalOperator_c;         /* '<S98>/Logical Operator' */
  boolean_T LogicalOperator_lx;        /* '<S242>/Logical Operator' */
  boolean_T LogicalOperator_b;         /* '<S243>/Logical Operator' */
  boolean_T LogicalOperator_nc;        /* '<S99>/Logical Operator' */
  boolean_T LogicalOperator_j;         /* '<S163>/Logical Operator' */
  boolean_T LogicalOperator_k;         /* '<S162>/Logical Operator' */
  boolean_T LogicalOperator_b1;        /* '<S95>/Logical Operator' */
  boolean_T BMSTimeoutError;           /* '<S77>/BMS Timout Error' */
  boolean_T Deltatimelimitexceeded_dt; /* '<S91>/Delta time limit exceeded' */
  boolean_T Mem1_hb;                   /* '<S91>/Mem1' */
  boolean_T Mem2_fux;                  /* '<S91>/Mem2' */
  boolean_T Mem3_b;                    /* '<S91>/Mem3' */
  boolean_T Mem4_mr;                   /* '<S91>/Mem4' */
  boolean_T Prevmsgnotsent_bp;         /* '<S91>/Prev. msg.  not sent' */
  boolean_T OR_a;                      /* '<S91>/OR' */
  boolean_T Warn_e;                    /* '<S91>/Warn' */
  boolean_T LogicalOperator12;         /* '<S93>/Logical Operator12' */
  boolean_T LogicalOperator9;          /* '<S93>/Logical Operator9' */
  boolean_T LogicalOperator8;          /* '<S93>/Logical Operator8' */
  boolean_T LogicalOperator7;          /* '<S93>/Logical Operator7' */
  boolean_T LogicalOperator6;          /* '<S93>/Logical Operator6' */
  boolean_T LogicalOperator5;          /* '<S93>/Logical Operator5' */
  boolean_T LogicalOperator4_h;        /* '<S93>/Logical Operator4' */
  boolean_T LogicalOperator3_o;        /* '<S93>/Logical Operator3' */
  boolean_T LogicalOperator2_i;        /* '<S93>/Logical Operator2' */
  boolean_T LogicalOperator1_d;        /* '<S93>/Logical Operator1' */
  boolean_T LogicalOperator12_j;       /* '<S94>/Logical Operator12' */
  boolean_T LogicalOperator9_j;        /* '<S94>/Logical Operator9' */
  boolean_T LogicalOperator8_o;        /* '<S94>/Logical Operator8' */
  boolean_T LogicalOperator7_k;        /* '<S94>/Logical Operator7' */
  boolean_T LogicalOperator6_p;        /* '<S94>/Logical Operator6' */
  boolean_T LogicalOperator5_d;        /* '<S94>/Logical Operator5' */
  boolean_T LogicalOperator4_d;        /* '<S94>/Logical Operator4' */
  boolean_T LogicalOperator3_b;        /* '<S94>/Logical Operator3' */
  boolean_T LogicalOperator2_e;        /* '<S94>/Logical Operator2' */
  boolean_T LogicalOperator1_p;        /* '<S94>/Logical Operator1' */
  boolean_T Deltatimelimitexceeded_f;  /* '<S264>/Delta time limit exceeded' */
  boolean_T Mem1_ok;                   /* '<S264>/Mem1' */
  boolean_T Mem2_kb;                   /* '<S264>/Mem2' */
  boolean_T Mem3_m;                    /* '<S264>/Mem3' */
  boolean_T Mem4_l;                    /* '<S264>/Mem4' */
  boolean_T Prevmsgnotsent_mv;         /* '<S264>/Prev. msg.  not sent' */
  boolean_T OR_bk;                     /* '<S264>/OR' */
  boolean_T Warn_et;                   /* '<S264>/Warn' */
  boolean_T Deltatimelimitexceeded_e4; /* '<S265>/Delta time limit exceeded' */
  boolean_T Mem1_f1;                   /* '<S265>/Mem1' */
  boolean_T Mem2_a;                    /* '<S265>/Mem2' */
  boolean_T Mem3_pu;                   /* '<S265>/Mem3' */
  boolean_T Mem4_g;                    /* '<S265>/Mem4' */
  boolean_T Prevmsgnotsent_lh;         /* '<S265>/Prev. msg.  not sent' */
  boolean_T OR_j0;                     /* '<S265>/OR' */
  boolean_T Warn_n;                    /* '<S265>/Warn' */
  boolean_T Deltatimelimitexceeded_l;  /* '<S268>/Delta time limit exceeded' */
  boolean_T Mem1_pz;                   /* '<S268>/Mem1' */
  boolean_T Mem2_h;                    /* '<S268>/Mem2' */
  boolean_T Mem3_oo;                   /* '<S268>/Mem3' */
  boolean_T Mem4_lm;                   /* '<S268>/Mem4' */
  boolean_T Prevmsgnotsent_k;          /* '<S268>/Prev. msg.  not sent' */
  boolean_T OR_o;                      /* '<S268>/OR' */
  boolean_T Warn_hi;                   /* '<S268>/Warn' */
  boolean_T LogicalOperator2_j;        /* '<S269>/Logical Operator2' */
  boolean_T LogicalOperator1_l;        /* '<S269>/Logical Operator1' */
  boolean_T Nodata;                    /* '<S299>/No data' */
  boolean_T Newdata;                   /* '<S299>/New data' */
  boolean_T Deltatimelimitexceeded_he; /* '<S299>/Delta time limit exceeded' */
  boolean_T AND;                       /* '<S299>/AND' */
  boolean_T OR_f4;                     /* '<S299>/OR' */
  boolean_T Mem1_fn;                   /* '<S299>/Mem1' */
  boolean_T Mem2_fz;                   /* '<S299>/Mem2' */
  boolean_T Mem3_e;                    /* '<S299>/Mem3' */
  boolean_T Mem4_px;                   /* '<S299>/Mem4' */
  boolean_T Mem5;                      /* '<S299>/Mem5' */
  boolean_T Warn_hy;                   /* '<S299>/Warn' */
  boolean_T Nodata_l;                  /* '<S376>/No data' */
  boolean_T Newdata_l;                 /* '<S376>/New data' */
  boolean_T Deltatimelimitexceeded_iu; /* '<S376>/Delta time limit exceeded' */
  boolean_T AND_g;                     /* '<S376>/AND' */
  boolean_T OR_bz;                     /* '<S376>/OR' */
  boolean_T Mem1_cq;                   /* '<S376>/Mem1' */
  boolean_T Mem2_a2;                   /* '<S376>/Mem2' */
  boolean_T Mem3_bs;                   /* '<S376>/Mem3' */
  boolean_T Mem4_io;                   /* '<S376>/Mem4' */
  boolean_T Mem5_l;                    /* '<S376>/Mem5' */
  boolean_T Warn_da;                   /* '<S376>/Warn' */
  boolean_T SFunction1_bk;             /* '<S472>/S-Function1' */
  boolean_T SFunction1_by;             /* '<S473>/S-Function1' */
  boolean_T SFunction1_is;             /* '<S474>/S-Function1' */
  boolean_T SFunction1_ih;             /* '<S475>/S-Function1' */
  boolean_T SFunction1_bn;             /* '<S476>/S-Function1' */
  boolean_T SFunction1_n;              /* '<S477>/S-Function1' */
  boolean_T SFunction1_j;              /* '<S478>/S-Function1' */
  boolean_T SFunction1_h;              /* '<S479>/S-Function1' */
  boolean_T SFunction1_c;              /* '<S480>/S-Function1' */
  boolean_T Deltatimelimitexceeded_m1; /* '<S485>/Delta time limit exceeded' */
  boolean_T Mem1_mh;                   /* '<S485>/Mem1' */
  boolean_T Mem2_gi;                   /* '<S485>/Mem2' */
  boolean_T Mem3_i;                    /* '<S485>/Mem3' */
  boolean_T Mem4_e;                    /* '<S485>/Mem4' */
  boolean_T Prevmsgnotsent_h;          /* '<S485>/Prev. msg.  not sent' */
  boolean_T OR_fm;                     /* '<S485>/OR' */
  boolean_T Warn_l;                    /* '<S485>/Warn' */
  boolean_T Deltatimelimitexceeded_o;  /* '<S486>/Delta time limit exceeded' */
  boolean_T Mem1_e;                    /* '<S486>/Mem1' */
  boolean_T Mem2_j;                    /* '<S486>/Mem2' */
  boolean_T Mem3_df;                   /* '<S486>/Mem3' */
  boolean_T Mem4_mi;                   /* '<S486>/Mem4' */
  boolean_T Prevmsgnotsent_kk;         /* '<S486>/Prev. msg.  not sent' */
  boolean_T OR_jt;                     /* '<S486>/OR' */
  boolean_T Warn_j;                    /* '<S486>/Warn' */
  boolean_T Deltatimelimitexceeded_jd; /* '<S487>/Delta time limit exceeded' */
  boolean_T Mem1_kb;                   /* '<S487>/Mem1' */
  boolean_T Mem2_ki;                   /* '<S487>/Mem2' */
  boolean_T Mem3_c5;                   /* '<S487>/Mem3' */
  boolean_T Mem4_h;                    /* '<S487>/Mem4' */
  boolean_T Prevmsgnotsent_ec;         /* '<S487>/Prev. msg.  not sent' */
  boolean_T OR_bp;                     /* '<S487>/OR' */
  boolean_T Warn_b4;                   /* '<S487>/Warn' */
  boolean_T Deltatimelimitexceeded_bp; /* '<S498>/Delta time limit exceeded' */
  boolean_T Mem1_n;                    /* '<S498>/Mem1' */
  boolean_T Mem2_mb;                   /* '<S498>/Mem2' */
  boolean_T Mem3_gx;                   /* '<S498>/Mem3' */
  boolean_T Mem4_c;                    /* '<S498>/Mem4' */
  boolean_T Prevmsgnotsent_g5;         /* '<S498>/Prev. msg.  not sent' */
  boolean_T OR_bc;                     /* '<S498>/OR' */
  boolean_T Warn_dp;                   /* '<S498>/Warn' */
  boolean_T Deltatimelimitexceeded_js; /* '<S499>/Delta time limit exceeded' */
  boolean_T Mem1_c2;                   /* '<S499>/Mem1' */
  boolean_T Mem2_hh;                   /* '<S499>/Mem2' */
  boolean_T Mem3_hh;                   /* '<S499>/Mem3' */
  boolean_T Mem4_k;                    /* '<S499>/Mem4' */
  boolean_T Prevmsgnotsent_hr;         /* '<S499>/Prev. msg.  not sent' */
  boolean_T OR_o2;                     /* '<S499>/OR' */
  boolean_T Warn_p;                    /* '<S499>/Warn' */
  boolean_T Deltatimelimitexceeded_k;  /* '<S507>/Delta time limit exceeded' */
  boolean_T Mem1_em;                   /* '<S507>/Mem1' */
  boolean_T Mem2_i;                    /* '<S507>/Mem2' */
  boolean_T Mem3_gt;                   /* '<S507>/Mem3' */
  boolean_T Mem4_eg;                   /* '<S507>/Mem4' */
  boolean_T Prevmsgnotsent_i;          /* '<S507>/Prev. msg.  not sent' */
  boolean_T OR_m1;                     /* '<S507>/OR' */
  boolean_T Warn_ln;                   /* '<S507>/Warn' */
  boolean_T Deltatimelimitexceeded_kf; /* '<S508>/Delta time limit exceeded' */
  boolean_T Mem1_nx;                   /* '<S508>/Mem1' */
  boolean_T Mem2_jr;                   /* '<S508>/Mem2' */
  boolean_T Mem3_hm;                   /* '<S508>/Mem3' */
  boolean_T Mem4_nn;                   /* '<S508>/Mem4' */
  boolean_T Prevmsgnotsent_pg;         /* '<S508>/Prev. msg.  not sent' */
  boolean_T OR_c;                      /* '<S508>/OR' */
  boolean_T Warn_lt;                   /* '<S508>/Warn' */
  boolean_T Deltatimelimitexceeded_n;  /* '<S509>/Delta time limit exceeded' */
  boolean_T Mem1_bp;                   /* '<S509>/Mem1' */
  boolean_T Mem2_o;                    /* '<S509>/Mem2' */
  boolean_T Mem3_gf;                   /* '<S509>/Mem3' */
  boolean_T Mem4_gq;                   /* '<S509>/Mem4' */
  boolean_T Prevmsgnotsent_j;          /* '<S509>/Prev. msg.  not sent' */
  boolean_T OR_oh;                     /* '<S509>/OR' */
  boolean_T Warn_i;                    /* '<S509>/Warn' */
  boolean_T LogicalOperator1_j;        /* '<S540>/Logical Operator1' */
  boolean_T LogicalOperator2_j1;       /* '<S540>/Logical Operator2' */
  boolean_T LogicalOperator_el;        /* '<S540>/Logical Operator' */
  boolean_T FixPtRelationalOperator_jt;/* '<S614>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_aw;/* '<S615>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_m; /* '<S616>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_a3;/* '<S617>/FixPt Relational Operator' */
  boolean_T LogicalOperator_es;        /* '<S618>/Logical Operator' */
  boolean_T Memory_f;                  /* '<S621>/Memory' */
  boolean_T Logic_b[2];                /* '<S621>/Logic' */
  boolean_T LogicalOperator_gt;        /* '<S619>/Logical Operator' */
  boolean_T Memory_fk;                 /* '<S620>/Memory' */
  boolean_T Logic_i[2];                /* '<S620>/Logic' */
  boolean_T LowerRelop1[2];            /* '<S622>/LowerRelop1' */
  boolean_T UpperRelop[2];             /* '<S622>/UpperRelop' */
  boolean_T Compare_mh;                /* '<S630>/Compare' */
  boolean_T Compare_cz;                /* '<S631>/Compare' */
  boolean_T O_Sicherheitskreis_Enable; /* '<S537>/Fahrzeugsteuerung' */
  boolean_T O_Precharge_Enable;        /* '<S537>/Fahrzeugsteuerung' */
  boolean_T e_Error;                   /* '<S537>/Fahrzeugsteuerung' */
  boolean_T e_ACTIVE;                  /* '<S537>/Fahrzeugsteuerung' */
  boolean_T e_clearPowervoltage;       /* '<S537>/Fahrzeugsteuerung' */
  boolean_T Compare_f;                 /* '<S688>/Compare' */
  boolean_T Compare_cu;                /* '<S687>/Compare' */
  boolean_T Compare_dr;                /* '<S686>/Compare' */
  boolean_T Compare_li;                /* '<S685>/Compare' */
  boolean_T LogicalOperator_ju;        /* '<S535>/Logical Operator' */
  boolean_T Compare_dh;                /* '<S539>/Compare' */
  boolean_T LogicalOperator1_me;       /* '<S524>/Logical Operator1' */
  boolean_T Compare_k3;                /* '<S635>/Compare' */
  boolean_T Memory_i;                  /* '<S541>/Memory' */
  boolean_T Logic_f[2];                /* '<S541>/Logic' */
  boolean_T Memory_a;                  /* '<S542>/Memory' */
  boolean_T Logic_fh[2];               /* '<S542>/Logic' */
  boolean_T Compare_e;                 /* '<S384>/Compare' */
  boolean_T Compare_fu;                /* '<S385>/Compare' */
  boolean_T Compare_nw;                /* '<S386>/Compare' */
  boolean_T Compare_h;                 /* '<S387>/Compare' */
  boolean_T Compare_du;                /* '<S388>/Compare' */
  boolean_T Compare_b;                 /* '<S389>/Compare' */
  boolean_T Compare_g;                 /* '<S390>/Compare' */
  boolean_T Compare_kl;                /* '<S391>/Compare' */
  boolean_T Compare_cw;                /* '<S392>/Compare' */
  boolean_T Compare_cz0;               /* '<S393>/Compare' */
  boolean_T Compare_dx;                /* '<S394>/Compare' */
  boolean_T Compare_j;                 /* '<S395>/Compare' */
  boolean_T Compare_cx;                /* '<S396>/Compare' */
  boolean_T Compare_ak;                /* '<S397>/Compare' */
  boolean_T Compare_i;                 /* '<S398>/Compare' */
  boolean_T Compare_bl;                /* '<S399>/Compare' */
  boolean_T Compare_k0;                /* '<S400>/Compare' */
  boolean_T Compare_o;                 /* '<S401>/Compare' */
  boolean_T Compare_np;                /* '<S402>/Compare' */
  boolean_T Compare_dc;                /* '<S403>/Compare' */
  boolean_T Compare_ds;                /* '<S404>/Compare' */
  boolean_T Compare_ey;                /* '<S405>/Compare' */
  boolean_T Compare_gq;                /* '<S406>/Compare' */
  boolean_T Compare_ij;                /* '<S407>/Compare' */
  boolean_T Compare_d3;                /* '<S408>/Compare' */
  boolean_T Compare_pzp;               /* '<S409>/Compare' */
  boolean_T Compare_fp;                /* '<S410>/Compare' */
  boolean_T Compare_dv;                /* '<S411>/Compare' */
  boolean_T Compare_ml;                /* '<S412>/Compare' */
  boolean_T Compare_nc;                /* '<S413>/Compare' */
  boolean_T Compare_av;                /* '<S414>/Compare' */
  boolean_T Compare_hb;                /* '<S415>/Compare' */
  boolean_T Compare_i2;                /* '<S310>/Compare' */
  boolean_T Compare_bq;                /* '<S311>/Compare' */
  boolean_T Compare_bk;                /* '<S312>/Compare' */
  boolean_T Compare_it;                /* '<S313>/Compare' */
  boolean_T Compare_gl;                /* '<S314>/Compare' */
  boolean_T Compare_er;                /* '<S315>/Compare' */
  boolean_T Compare_jl;                /* '<S316>/Compare' */
  boolean_T Compare_hb3;               /* '<S317>/Compare' */
  boolean_T Compare_om;                /* '<S318>/Compare' */
  boolean_T Compare_gx;                /* '<S319>/Compare' */
  boolean_T Compare_lc;                /* '<S320>/Compare' */
  boolean_T Compare_cc;                /* '<S321>/Compare' */
  boolean_T Compare_mb;                /* '<S322>/Compare' */
  boolean_T Compare_ar;                /* '<S323>/Compare' */
  boolean_T Compare_pq;                /* '<S324>/Compare' */
  boolean_T Compare_ef;                /* '<S325>/Compare' */
  boolean_T Compare_ex;                /* '<S326>/Compare' */
  boolean_T Compare_dp;                /* '<S327>/Compare' */
  boolean_T Compare_bf;                /* '<S328>/Compare' */
  boolean_T Compare_bs;                /* '<S329>/Compare' */
  boolean_T Compare_jw;                /* '<S330>/Compare' */
  boolean_T Compare_f3;                /* '<S331>/Compare' */
  boolean_T Compare_di;                /* '<S332>/Compare' */
  boolean_T Compare_jwf;               /* '<S333>/Compare' */
  boolean_T Compare_oa;                /* '<S334>/Compare' */
  boolean_T Compare_ns;                /* '<S335>/Compare' */
  boolean_T Compare_bv;                /* '<S336>/Compare' */
  boolean_T Compare_ok;                /* '<S337>/Compare' */
  boolean_T Compare_bvf;               /* '<S338>/Compare' */
  boolean_T Compare_a2;                /* '<S339>/Compare' */
  boolean_T Compare_gg;                /* '<S340>/Compare' */
  boolean_T Compare_i4;                /* '<S341>/Compare' */
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
  uint8_T Gain_bt;                     /* '<S287>/Gain' */
  uint8_T Gain_aw;                     /* '<S288>/Gain' */
  uint8_T Gain_fn;                     /* '<S546>/Gain' */
  uint8_T Gain_afl;                    /* '<S540>/Gain' */
  uint8_T Gain1_a;                     /* '<S540>/Gain1' */
  uint8_T Gain2_b;                     /* '<S540>/Gain2' */
  uint8_T Gain3_k;                     /* '<S540>/Gain3' */
  uint8_T Gain4_d;                     /* '<S540>/Gain4' */
  uint8_T Gain5_h;                     /* '<S540>/Gain5' */
  uint8_T Gain6_b;                     /* '<S540>/Gain6' */
  uint8_T Gain7_f;                     /* '<S540>/Gain7' */
  uint8_T Gain10_f;                    /* '<S540>/Gain10' */
  uint8_T Gain11_d;                    /* '<S540>/Gain11' */
  uint8_T Gain12;                      /* '<S540>/Gain12' */
  uint8_T Gain13;                      /* '<S540>/Gain13' */
  uint8_T Gain8_k;                     /* '<S540>/Gain8' */
  uint8_T Gain9_d;                     /* '<S540>/Gain9' */
  uint8_T MinMax_f;                    /* '<S540>/MinMax' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S693>/J-K Flip-Flop' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S691>/J-K Flip-Flop' */
  B_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S689>/J-K Flip-Flop' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S497>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S489>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S488>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S444>/Triggered Subsystem' */
  B_Inverter_Temp_DR18E_Testpul_T Inverter_Temp_e;/* '<S288>/Inverter_Temp' */
  B_U_DC_DR18E_Testpult_T U_DC_o;      /* '<S288>/U_DC' */
  B_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_c;/* '<S288>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  B_WirkstromIq_DR18E_Testpult_T WirkstromIq_e;/* '<S288>/Wirkstrom Iq' */
  B_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl_k;/* '<S369>/Skalierung Drehzahl' */
  B_Inverter_Temp_DR18E_Testpul_T Inverter_Temp;/* '<S287>/Inverter_Temp' */
  B_U_DC_DR18E_Testpult_T U_DC;        /* '<S287>/U_DC' */
  B_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_f;/* '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  B_WirkstromIq_DR18E_Testpult_T WirkstromIq;/* '<S287>/Wirkstrom Iq' */
  B_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl;/* '<S289>/Skalierung Drehzahl' */
  B_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S283>/Triggered Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S278>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S277>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S276>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S271>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S258>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S257>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S256>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S249>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S248>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S247>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S238>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S237>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S236>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S229>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S228>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S227>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S218>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S217>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S216>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S209>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S208>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S207>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S198>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S197>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S196>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S189>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem;/* '<S188>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S187>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S178>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S177>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S176>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S169>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S168>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S167>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S151>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S150>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S149>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S148>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S147>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S146>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S145>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S144>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S143>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S142>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S121>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S120>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S119>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S118>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S117>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S116>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S115>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S114>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S113>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S112>/Subsystem' */
  B_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S92>/Subsystem' */
} B_DR18E_Testpult_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S12>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S15>/Delay Input1' */
  real_T Integrator_DSTATE;            /* '<S682>/Integrator' */
  real_T DelayInput1_DSTATE_f;         /* '<S16>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S41>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S42>/Delay Input1' */
  real_T DelayInput1_DSTATE_e[8];      /* '<S43>/Delay Input1' */
  real_T Delay_DSTATE;                 /* '<S578>/Delay' */
  real_T Delay_DSTATE_k;               /* '<S581>/Delay' */
  real_T DiscreteTimeIntegrator1_DSTATE;/* '<S534>/Discrete-Time Integrator1' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S656>/Discrete-Time Integrator' */
  real_T DelayInput1_DSTATE_f2;        /* '<S72>/Delay Input1' */
  real_T DelayInput1_DSTATE_ot;        /* '<S73>/Delay Input1' */
  real_T DelayInput1_DSTATE_m;         /* '<S74>/Delay Input1' */
  real_T DelayInput1_DSTATE_a;         /* '<S75>/Delay Input1' */
  real_T TappedDelay_X[5];             /* '<S591>/Tapped Delay' */
  real_T Integrator_DSTATE_b;          /* '<S596>/Integrator' */
  real_T Filter_DSTATE;                /* '<S596>/Filter' */
  real_T Filter_DSTATE_m;              /* '<S597>/Filter' */
  real_T Integrator_DSTATE_e;          /* '<S597>/Integrator' */
  real_T Filter_DSTATE_l;              /* '<S598>/Filter' */
  real_T Integrator_DSTATE_c;          /* '<S598>/Integrator' */
  real_T TappedDelay_X_l[5];           /* '<S606>/Tapped Delay' */
  real_T Integrator_DSTATE_f;          /* '<S611>/Integrator' */
  real_T Filter_DSTATE_n;              /* '<S611>/Filter' */
  real_T Filter_DSTATE_i;              /* '<S612>/Filter' */
  real_T Integrator_DSTATE_p;          /* '<S612>/Integrator' */
  real_T Filter_DSTATE_ma;             /* '<S613>/Filter' */
  real_T Integrator_DSTATE_ps;         /* '<S613>/Integrator' */
  real_T DelayInput1_DSTATE_b;         /* '<S614>/Delay Input1' */
  real_T DelayInput1_DSTATE_nw;        /* '<S615>/Delay Input1' */
  real_T DelayInput1_DSTATE_jg;        /* '<S616>/Delay Input1' */
  real_T DelayInput1_DSTATE_f2f;       /* '<S617>/Delay Input1' */
  real_T DiscreteTimeIntegrator_DSTATE_m;/* '<S534>/Discrete-Time Integrator' */
  real_T Memory_PreviousInput[2];      /* '<S547>/Memory' */
  real_T Memory_PreviousInput_k;       /* '<S684>/Memory' */
  real_T Memory_PreviousInput_j;       /* '<S683>/Memory' */
  real_T Memory_PreviousInput_i;       /* '<S561>/Memory' */
  real_T TimeStampA;                   /* '<S578>/Derivative' */
  real_T LastUAtTimeA;                 /* '<S578>/Derivative' */
  real_T TimeStampB;                   /* '<S578>/Derivative' */
  real_T LastUAtTimeB;                 /* '<S578>/Derivative' */
  real_T Add_DWORK1;                   /* '<S578>/Add' */
  real_T Memory_PreviousInput_i0;      /* '<S633>/Memory' */
  real_T Memory_PreviousInput_o;       /* '<S634>/Memory' */
  real_T TimeStampA_o;                 /* '<S585>/Derivative' */
  real_T LastUAtTimeA_m;               /* '<S585>/Derivative' */
  real_T TimeStampB_h;                 /* '<S585>/Derivative' */
  real_T LastUAtTimeB_h;               /* '<S585>/Derivative' */
  real_T RateTransition1_Buffer0;      /* '<S593>/Rate Transition1' */
  real_T TimeStampA_os;                /* '<S581>/Derivative' */
  real_T LastUAtTimeA_n;               /* '<S581>/Derivative' */
  real_T TimeStampB_j;                 /* '<S581>/Derivative' */
  real_T LastUAtTimeB_c;               /* '<S581>/Derivative' */
  real_T TimeStampA_o0;                /* '<S600>/Derivative' */
  real_T LastUAtTimeA_p;               /* '<S600>/Derivative' */
  real_T TimeStampB_p;                 /* '<S600>/Derivative' */
  real_T LastUAtTimeB_f;               /* '<S600>/Derivative' */
  real_T RateTransition1_Buffer0_k;    /* '<S608>/Rate Transition1' */
  real_T Memory_PreviousInput_n;       /* '<S467>/Memory' */
  real_T Memory_PreviousInput_d;       /* '<S469>/Memory' */
  real_T Memory_PreviousInput_kf;      /* '<S618>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S619>/Memory' */
  real_T Add1_DWORK1;                  /* '<S573>/Add1' */
  real_T Memory_PreviousInput_oz;      /* '<S380>/Memory' */
  real_T Memory_PreviousInput_nz;      /* '<S303>/Memory' */
  real_T RateTransition_Buffer0;       /* '<S69>/Rate Transition' */
  real_T RateTransition1_Buffer0_l;    /* '<S69>/Rate Transition1' */
  real_T RateTransition_Buffer0_n;     /* '<S70>/Rate Transition' */
  real_T RateTransition1_Buffer0_i;    /* '<S70>/Rate Transition1' */
  uint32_T UD_DSTATE;                  /* '<S638>/UD' */
  int32_T clockTickCounter;            /* '<S535>/Pulse Generator' */
  int32_T clockTickCounter_j;          /* '<S564>/Pulse Generator' */
  int32_T clockTickCounter_d;          /* '<S529>/Pulse Generator' */
  uint32_T e_ErrorEventCounter;        /* '<S537>/Fahrzeugsteuerung' */
  uint32_T e_ACTIVEEventCounter;       /* '<S537>/Fahrzeugsteuerung' */
  uint32_T e_clearPowervoltageEventCounter;/* '<S537>/Fahrzeugsteuerung' */
  int_T SFunction1_IWORK[2];           /* '<S513>/S-Function1' */
  int_T SFunction1_IWORK_c[2];         /* '<S515>/S-Function1' */
  int_T SFunction1_IWORK_j[2];         /* '<S517>/S-Function1' */
  uint16_T UD_DSTATE_h;                /* '<S640>/UD' */
  uint16_T UD_DSTATE_hj;               /* '<S639>/UD' */
  uint16_T temporalCounter_i1;         /* '<S537>/Fahrzeugsteuerung' */
  boolean_T DelayInput1_DSTATE_p;      /* '<S699>/Delay Input1' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S287>/Switch Case' */
  int8_T SwitchCase_ActiveSubsystem_p; /* '<S288>/Switch Case' */
  int8_T Integrator_PrevResetState;    /* '<S682>/Integrator' */
  int8_T i;                            /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_active_c3_DR18E_Testpult; /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_c3_DR18E_Testpult;        /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_Init;                     /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_UmrichterInit;            /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_Check_Safety;             /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_TS_init;                  /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_Precharge;                /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_Check_Safety1;            /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_Sound;                    /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_TS_active;                /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_SafetyShutdown;           /* '<S537>/Fahrzeugsteuerung' */
  uint8_T is_NormalShutdown;           /* '<S537>/Fahrzeugsteuerung' */
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
  boolean_T Memory_PreviousInput_op;   /* '<S562>/Memory' */
  boolean_T Relay_Mode;                /* '<S578>/Relay' */
  boolean_T Memory_PreviousInput_a;    /* '<S580>/Memory' */
  boolean_T Relay_Mode_f;              /* '<S581>/Relay' */
  boolean_T Memory_PreviousInput_aa;   /* '<S583>/Memory' */
  boolean_T Mem1_PreviousInput_fm;     /* '<S76>/Mem1' */
  boolean_T Mem2_PreviousInput_ma;     /* '<S76>/Mem2' */
  boolean_T Mem3_PreviousInput_j;      /* '<S76>/Mem3' */
  boolean_T Mem4_PreviousInput_lt;     /* '<S76>/Mem4' */
  boolean_T Mem1_PreviousInput_o;      /* '<S91>/Mem1' */
  boolean_T Mem2_PreviousInput_a;      /* '<S91>/Mem2' */
  boolean_T Mem3_PreviousInput_e2;     /* '<S91>/Mem3' */
  boolean_T Mem4_PreviousInput_o;      /* '<S91>/Mem4' */
  boolean_T Mem1_PreviousInput_a;      /* '<S264>/Mem1' */
  boolean_T Mem2_PreviousInput_d;      /* '<S264>/Mem2' */
  boolean_T Mem3_PreviousInput_ou;     /* '<S264>/Mem3' */
  boolean_T Mem4_PreviousInput_lx;     /* '<S264>/Mem4' */
  boolean_T Mem1_PreviousInput_n;      /* '<S265>/Mem1' */
  boolean_T Mem2_PreviousInput_gl;     /* '<S265>/Mem2' */
  boolean_T Mem3_PreviousInput_k;      /* '<S265>/Mem3' */
  boolean_T Mem4_PreviousInput_k;      /* '<S265>/Mem4' */
  boolean_T Mem1_PreviousInput_oh;     /* '<S268>/Mem1' */
  boolean_T Mem2_PreviousInput_a3;     /* '<S268>/Mem2' */
  boolean_T Mem3_PreviousInput_g3;     /* '<S268>/Mem3' */
  boolean_T Mem4_PreviousInput_mx;     /* '<S268>/Mem4' */
  boolean_T Mem1_PreviousInput_mt;     /* '<S299>/Mem1' */
  boolean_T Mem2_PreviousInput_i;      /* '<S299>/Mem2' */
  boolean_T Mem3_PreviousInput_kb;     /* '<S299>/Mem3' */
  boolean_T Mem4_PreviousInput_ne0;    /* '<S299>/Mem4' */
  boolean_T Mem5_PreviousInput;        /* '<S299>/Mem5' */
  boolean_T Mem1_PreviousInput_fe;     /* '<S376>/Mem1' */
  boolean_T Mem2_PreviousInput_lp;     /* '<S376>/Mem2' */
  boolean_T Mem3_PreviousInput_fr;     /* '<S376>/Mem3' */
  boolean_T Mem4_PreviousInput_p3;     /* '<S376>/Mem4' */
  boolean_T Mem5_PreviousInput_f;      /* '<S376>/Mem5' */
  boolean_T Mem1_PreviousInput_ip;     /* '<S485>/Mem1' */
  boolean_T Mem2_PreviousInput_ii;     /* '<S485>/Mem2' */
  boolean_T Mem3_PreviousInput_a4;     /* '<S485>/Mem3' */
  boolean_T Mem4_PreviousInput_fj;     /* '<S485>/Mem4' */
  boolean_T Mem1_PreviousInput_pt;     /* '<S486>/Mem1' */
  boolean_T Mem2_PreviousInput_ak;     /* '<S486>/Mem2' */
  boolean_T Mem3_PreviousInput_fc;     /* '<S486>/Mem3' */
  boolean_T Mem4_PreviousInput_h3;     /* '<S486>/Mem4' */
  boolean_T Mem1_PreviousInput_e5;     /* '<S487>/Mem1' */
  boolean_T Mem2_PreviousInput_at;     /* '<S487>/Mem2' */
  boolean_T Mem3_PreviousInput_ii;     /* '<S487>/Mem3' */
  boolean_T Mem4_PreviousInput_kr;     /* '<S487>/Mem4' */
  boolean_T Mem1_PreviousInput_pc;     /* '<S498>/Mem1' */
  boolean_T Mem2_PreviousInput_c2;     /* '<S498>/Mem2' */
  boolean_T Mem3_PreviousInput_ah;     /* '<S498>/Mem3' */
  boolean_T Mem4_PreviousInput_fw;     /* '<S498>/Mem4' */
  boolean_T Mem1_PreviousInput_bw;     /* '<S499>/Mem1' */
  boolean_T Mem2_PreviousInput_cz;     /* '<S499>/Mem2' */
  boolean_T Mem3_PreviousInput_os;     /* '<S499>/Mem3' */
  boolean_T Mem4_PreviousInput_i;      /* '<S499>/Mem4' */
  boolean_T Mem1_PreviousInput_hl;     /* '<S507>/Mem1' */
  boolean_T Mem2_PreviousInput_ls;     /* '<S507>/Mem2' */
  boolean_T Mem3_PreviousInput_p;      /* '<S507>/Mem3' */
  boolean_T Mem4_PreviousInput_dpj;    /* '<S507>/Mem4' */
  boolean_T Mem1_PreviousInput_g;      /* '<S508>/Mem1' */
  boolean_T Mem2_PreviousInput_ez;     /* '<S508>/Mem2' */
  boolean_T Mem3_PreviousInput_nb;     /* '<S508>/Mem3' */
  boolean_T Mem4_PreviousInput_j;      /* '<S508>/Mem4' */
  boolean_T Mem1_PreviousInput_ba;     /* '<S509>/Mem1' */
  boolean_T Mem2_PreviousInput_p;      /* '<S509>/Mem2' */
  boolean_T Mem3_PreviousInput_ip;     /* '<S509>/Mem3' */
  boolean_T Mem4_PreviousInput_iq;     /* '<S509>/Mem4' */
  boolean_T Memory_PreviousInput_e;    /* '<S621>/Memory' */
  boolean_T Memory_PreviousInput_m;    /* '<S620>/Memory' */
  boolean_T Init_complete;             /* '<S537>/Fahrzeugsteuerung' */
  boolean_T Memory_PreviousInput_eq;   /* '<S541>/Memory' */
  boolean_T Memory_PreviousInput_oa;   /* '<S542>/Memory' */
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
  boolean_T AMSIMD_Latching_MODE;      /* '<S524>/AMSIMD_Latching' */
  boolean_T SIG_PUMP_MODE;             /* '<S7>/SIG_PUMP' */
  boolean_T SIG_FAN_MODE;              /* '<S7>/SIG_FAN' */
  boolean_T LED_BAR_MODE;              /* '<S9>/LED_BAR' */
  boolean_T InvertersTXTorque_MODE;    /* '<S10>/Inverters TXTorque' */
  boolean_T InvertersTXUniversal_MODE; /* '<S10>/Inverters TXUniversal' */
  boolean_T UmrichterInit_MODE;        /* '<S10>/Umrichter Init' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S693>/J-K Flip-Flop' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S691>/J-K Flip-Flop' */
  DW_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S689>/J-K Flip-Flop' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S497>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S489>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S488>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S444>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S283>/Triggered Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S278>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S277>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S276>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S271>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S258>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S257>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S256>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S249>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S248>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S247>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S238>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S237>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S236>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S229>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S228>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S227>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S218>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S217>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S216>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S209>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S208>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S207>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S198>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S197>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S196>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S189>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem;/* '<S188>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S187>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S178>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S177>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S176>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S169>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S168>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S167>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S151>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S150>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S149>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S148>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S147>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S146>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S145>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S144>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S143>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S142>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S121>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S120>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S119>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S118>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S117>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S116>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S115>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S114>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S113>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S112>/Subsystem' */
  DW_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S92>/Subsystem' */
} DW_DR18E_Testpult_T;

/* Continuous states (auto storage) */
typedef struct {
  real_T emGM_CSTATE;                  /* '<S584>/em*GM' */
  real_T emGMX_CSTATE;                 /* '<S584>/em*GM*X²' */
  real_T ModelReference4_CSTATE;       /* '<S586>/ModelReference4' */
  real_T ModelReference2_CSTATE;       /* '<S586>/ModelReference2' */
  real_T ModelReference4_CSTATE_b;     /* '<S585>/ModelReference4' */
  real_T ModelReference2_CSTATE_o;     /* '<S585>/ModelReference2' */
  real_T ModelReference1_CSTATE;       /* '<S585>/ModelReference1' */
  real_T emGM_CSTATE_d;                /* '<S599>/em*GM' */
  real_T emGMX_CSTATE_a;               /* '<S599>/em*GM*X²' */
  real_T ModelReference4_CSTATE_l;     /* '<S601>/ModelReference4' */
  real_T ModelReference2_CSTATE_a;     /* '<S601>/ModelReference2' */
  real_T ModelReference4_CSTATE_d;     /* '<S600>/ModelReference4' */
  real_T ModelReference2_CSTATE_m;     /* '<S600>/ModelReference2' */
  real_T ModelReference1_CSTATE_k;     /* '<S600>/ModelReference1' */
  real_T ModelReference_CSTATE;        /* '<S584>/ModelReference' */
  real_T ModelReference_CSTATE_i;      /* '<S585>/ModelReference' */
  real_T ModelReference3_CSTATE;       /* '<S585>/ModelReference3' */
  real_T ModelReference_CSTATE_l;      /* '<S586>/ModelReference' */
  real_T ModelReference1_CSTATE_i;     /* '<S586>/ModelReference1' */
  real_T ModelReference3_CSTATE_b;     /* '<S586>/ModelReference3' */
  real_T ModelReference_CSTATE_g;      /* '<S599>/ModelReference' */
  real_T ModelReference_CSTATE_d;      /* '<S600>/ModelReference' */
  real_T ModelReference3_CSTATE_k;     /* '<S600>/ModelReference3' */
  real_T ModelReference_CSTATE_m;      /* '<S601>/ModelReference' */
  real_T ModelReference1_CSTATE_a;     /* '<S601>/ModelReference1' */
  real_T ModelReference3_CSTATE_e;     /* '<S601>/ModelReference3' */
} X_DR18E_Testpult_T;

/* State derivatives (auto storage) */
typedef struct {
  real_T emGM_CSTATE;                  /* '<S584>/em*GM' */
  real_T emGMX_CSTATE;                 /* '<S584>/em*GM*X²' */
  real_T ModelReference4_CSTATE;       /* '<S586>/ModelReference4' */
  real_T ModelReference2_CSTATE;       /* '<S586>/ModelReference2' */
  real_T ModelReference4_CSTATE_b;     /* '<S585>/ModelReference4' */
  real_T ModelReference2_CSTATE_o;     /* '<S585>/ModelReference2' */
  real_T ModelReference1_CSTATE;       /* '<S585>/ModelReference1' */
  real_T emGM_CSTATE_d;                /* '<S599>/em*GM' */
  real_T emGMX_CSTATE_a;               /* '<S599>/em*GM*X²' */
  real_T ModelReference4_CSTATE_l;     /* '<S601>/ModelReference4' */
  real_T ModelReference2_CSTATE_a;     /* '<S601>/ModelReference2' */
  real_T ModelReference4_CSTATE_d;     /* '<S600>/ModelReference4' */
  real_T ModelReference2_CSTATE_m;     /* '<S600>/ModelReference2' */
  real_T ModelReference1_CSTATE_k;     /* '<S600>/ModelReference1' */
  real_T ModelReference_CSTATE;        /* '<S584>/ModelReference' */
  real_T ModelReference_CSTATE_i;      /* '<S585>/ModelReference' */
  real_T ModelReference3_CSTATE;       /* '<S585>/ModelReference3' */
  real_T ModelReference_CSTATE_l;      /* '<S586>/ModelReference' */
  real_T ModelReference1_CSTATE_i;     /* '<S586>/ModelReference1' */
  real_T ModelReference3_CSTATE_b;     /* '<S586>/ModelReference3' */
  real_T ModelReference_CSTATE_g;      /* '<S599>/ModelReference' */
  real_T ModelReference_CSTATE_d;      /* '<S600>/ModelReference' */
  real_T ModelReference3_CSTATE_k;     /* '<S600>/ModelReference3' */
  real_T ModelReference_CSTATE_m;      /* '<S601>/ModelReference' */
  real_T ModelReference1_CSTATE_a;     /* '<S601>/ModelReference1' */
  real_T ModelReference3_CSTATE_e;     /* '<S601>/ModelReference3' */
} XDot_DR18E_Testpult_T;

/* State disabled  */
typedef struct {
  boolean_T emGM_CSTATE;               /* '<S584>/em*GM' */
  boolean_T emGMX_CSTATE;              /* '<S584>/em*GM*X²' */
  boolean_T ModelReference4_CSTATE;    /* '<S586>/ModelReference4' */
  boolean_T ModelReference2_CSTATE;    /* '<S586>/ModelReference2' */
  boolean_T ModelReference4_CSTATE_b;  /* '<S585>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_o;  /* '<S585>/ModelReference2' */
  boolean_T ModelReference1_CSTATE;    /* '<S585>/ModelReference1' */
  boolean_T emGM_CSTATE_d;             /* '<S599>/em*GM' */
  boolean_T emGMX_CSTATE_a;            /* '<S599>/em*GM*X²' */
  boolean_T ModelReference4_CSTATE_l;  /* '<S601>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_a;  /* '<S601>/ModelReference2' */
  boolean_T ModelReference4_CSTATE_d;  /* '<S600>/ModelReference4' */
  boolean_T ModelReference2_CSTATE_m;  /* '<S600>/ModelReference2' */
  boolean_T ModelReference1_CSTATE_k;  /* '<S600>/ModelReference1' */
  boolean_T ModelReference_CSTATE;     /* '<S584>/ModelReference' */
  boolean_T ModelReference_CSTATE_i;   /* '<S585>/ModelReference' */
  boolean_T ModelReference3_CSTATE;    /* '<S585>/ModelReference3' */
  boolean_T ModelReference_CSTATE_l;   /* '<S586>/ModelReference' */
  boolean_T ModelReference1_CSTATE_i;  /* '<S586>/ModelReference1' */
  boolean_T ModelReference3_CSTATE_b;  /* '<S586>/ModelReference3' */
  boolean_T ModelReference_CSTATE_g;   /* '<S599>/ModelReference' */
  boolean_T ModelReference_CSTATE_d;   /* '<S600>/ModelReference' */
  boolean_T ModelReference3_CSTATE_k;  /* '<S600>/ModelReference3' */
  boolean_T ModelReference_CSTATE_m;   /* '<S601>/ModelReference' */
  boolean_T ModelReference1_CSTATE_a;  /* '<S601>/ModelReference1' */
  boolean_T ModelReference3_CSTATE_e;  /* '<S601>/ModelReference3' */
} XDis_DR18E_Testpult_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S693>/J-K Flip-Flop' */
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S691>/J-K Flip-Flop' */
  ZCE_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S689>/J-K Flip-Flop' */
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

/* Parameters for system: '<S92>/Subsystem' */
struct P_Subsystem_DR18E_Testpult_T_ {
  real_T Constant3_Value;              /* Expression: 0
                                        * Referenced by: '<S101>/Constant3'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<S101>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S101>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S101>/Constant1'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S101>/Delay'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S101>/Switch'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S101>/Delay'
                                        */
};

/* Parameters for system: '<S289>/Skalierung Drehzahl' */
struct P_SkalierungDrehzahl_DR18E_Te_T_ {
  real_T Gain_Gain;                    /* Expression: 4000/2^15
                                        * Referenced by: '<S304>/Gain'
                                        */
};

/* Parameters for system: '<S287>/Wirkstrom Iq' */
struct P_WirkstromIq_DR18E_Testpult_T_ {
  real_T WirkstromIqinAU1_Y0;          /* Computed Parameter: WirkstromIqinAU1_Y0
                                        * Referenced by: '<S302>/Wirkstrom Iq in A U1'
                                        */
  real_T DrehmomentinNmausIqU1_Y0;     /* Computed Parameter: DrehmomentinNmausIqU1_Y0
                                        * Referenced by: '<S302>/Drehmoment in Nm aus Iq U1'
                                        */
  real_T Constant2_Value;              /* Expression: 560
                                        * Referenced by: '<S302>/Constant2'
                                        */
  real_T Faktor32_Value;               /* Expression: 1.5
                                        * Referenced by: '<S302>/Faktor 3//2'
                                        */
  real_T Polpaarzahlp_Value;           /* Expression: 10
                                        * Referenced by: '<S302>/Polpaarzahl p'
                                        */
  real_T magnertischerFluPsiinVs_Value;/* Expression: 0.053
                                        * Referenced by: '<S302>/magnertischer Fluß Psi in Vs'
                                        */
  int16_T Gain3_Gain;                  /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S302>/Gain3'
                                        */
};

/* Parameters for system: '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
struct P_RegID0x8FERRORWarningRegist_T_ {
  uint32_T BADPARAS_BitMask;           /* Mask Parameter: BADPARAS_BitMask
                                        * Referenced by: '<S298>/BADPARAS'
                                        */
  uint32_T BALLAST_BitMask;            /* Mask Parameter: BALLAST_BitMask
                                        * Referenced by: '<S298>/BALLAST'
                                        */
  uint32_T BUSTIMEOUT_BitMask;         /* Mask Parameter: BUSTIMEOUT_BitMask
                                        * Referenced by: '<S298>/BUS TIMEOUT'
                                        */
  uint32_T POWERFAULT_BitMask;         /* Mask Parameter: POWERFAULT_BitMask
                                        * Referenced by: '<S298>/POWER FAULT'
                                        */
  uint32_T RACEAWAY_BitMask;           /* Mask Parameter: RACEAWAY_BitMask
                                        * Referenced by: '<S298>/RACEAWAY'
                                        */
  uint32_T USER_BitMask;               /* Mask Parameter: USER_BitMask
                                        * Referenced by: '<S298>/USER'
                                        */
  uint32_T I2R_BitMask;                /* Mask Parameter: I2R_BitMask
                                        * Referenced by: '<S298>/I2R'
                                        */
  uint32_T WarnWARNING_0_BitMask;      /* Mask Parameter: WarnWARNING_0_BitMask
                                        * Referenced by: '<S298>/WarnWARNING_0'
                                        */
  uint32_T HW_FAIL_BitMask;            /* Mask Parameter: HW_FAIL_BitMask
                                        * Referenced by: '<S298>/HW_FAIL'
                                        */
  uint32_T SammelWarnung_BitMask;      /* Mask Parameter: SammelWarnung_BitMask
                                        * Referenced by: '<S298>/Sammel Warnung'
                                        */
  uint32_T RFEFault_BitMask;           /* Mask Parameter: RFEFault_BitMask
                                        * Referenced by: '<S298>/RFE Fault'
                                        */
  uint32_T WarnILLEGAL_STATUS_BitMask; /* Mask Parameter: WarnILLEGAL_STATUS_BitMask
                                        * Referenced by: '<S298>/WarnILLEGAL_STATUS'
                                        */
  uint32_T WarnWARNING_2_BitMask;      /* Mask Parameter: WarnWARNING_2_BitMask
                                        * Referenced by: '<S298>/WarnWARNING_2'
                                        */
  uint32_T SammelError_BitMask;        /* Mask Parameter: SammelError_BitMask
                                        * Referenced by: '<S298>/Sammel Error'
                                        */
  uint32_T WarnPOWERVOLTAGE_BitMask;   /* Mask Parameter: WarnPOWERVOLTAGE_BitMask
                                        * Referenced by: '<S298>/WarnPOWERVOLTAGE'
                                        */
  uint32_T WarnMOTORTEMP_BitMask;      /* Mask Parameter: WarnMOTORTEMP_BitMask
                                        * Referenced by: '<S298>/WarnMOTORTEMP'
                                        */
  uint32_T WarnDEVICETEMP_BitMask;     /* Mask Parameter: WarnDEVICETEMP_BitMask
                                        * Referenced by: '<S298>/WarnDEVICETEMP'
                                        */
  uint32_T WarnOVERVOLTAGE_BitMask;    /* Mask Parameter: WarnOVERVOLTAGE_BitMask
                                        * Referenced by: '<S298>/WarnOVERVOLTAGE'
                                        */
  uint32_T WarnI_peak_BitMask;         /* Mask Parameter: WarnI_peak_BitMask
                                        * Referenced by: '<S298>/WarnI_peak'
                                        */
  uint32_T WarnI2R_BitMask;            /* Mask Parameter: WarnI2R_BitMask
                                        * Referenced by: '<S298>/WarnI2R'
                                        */
  uint32_T WarnBALLAST_BitMask;        /* Mask Parameter: WarnBALLAST_BitMask
                                        * Referenced by: '<S298>/WarnBALLAST'
                                        */
  uint32_T FEEDBACK_BitMask;           /* Mask Parameter: FEEDBACK_BitMask
                                        * Referenced by: '<S298>/FEEDBACK'
                                        */
  uint32_T POWERVOLTAGE_BitMask;       /* Mask Parameter: POWERVOLTAGE_BitMask
                                        * Referenced by: '<S298>/POWERVOLTAGE'
                                        */
  uint32_T MOTORTEMP_BitMask;          /* Mask Parameter: MOTORTEMP_BitMask
                                        * Referenced by: '<S298>/MOTORTEMP'
                                        */
  uint32_T DEVICETEMP_BitMask;         /* Mask Parameter: DEVICETEMP_BitMask
                                        * Referenced by: '<S298>/DEVICETEMP'
                                        */
  uint32_T OVERVOLTAGE_BitMask;        /* Mask Parameter: OVERVOLTAGE_BitMask
                                        * Referenced by: '<S298>/OVERVOLTAGE'
                                        */
  uint32_T I_PEAK_BitMask;             /* Mask Parameter: I_PEAK_BitMask
                                        * Referenced by: '<S298>/I_PEAK'
                                        */
  uint32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S342>/Constant'
                                        */
  uint32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S343>/Constant'
                                        */
  uint32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S344>/Constant'
                                        */
  uint32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S345>/Constant'
                                        */
  uint32_T Constant_Value_k2;          /* Computed Parameter: Constant_Value_k2
                                        * Referenced by: '<S346>/Constant'
                                        */
  uint32_T Constant_Value_e;           /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S347>/Constant'
                                        */
  uint32_T Constant_Value_ec;          /* Computed Parameter: Constant_Value_ec
                                        * Referenced by: '<S348>/Constant'
                                        */
  uint32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S349>/Constant'
                                        */
  uint32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S350>/Constant'
                                        */
  uint32_T Constant_Value_i;           /* Computed Parameter: Constant_Value_i
                                        * Referenced by: '<S351>/Constant'
                                        */
  uint32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S352>/Constant'
                                        */
  uint32_T Constant_Value_ka;          /* Computed Parameter: Constant_Value_ka
                                        * Referenced by: '<S353>/Constant'
                                        */
  uint32_T Constant_Value_dz;          /* Computed Parameter: Constant_Value_dz
                                        * Referenced by: '<S354>/Constant'
                                        */
  uint32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S355>/Constant'
                                        */
  uint32_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S356>/Constant'
                                        */
  uint32_T Constant_Value_co;          /* Computed Parameter: Constant_Value_co
                                        * Referenced by: '<S357>/Constant'
                                        */
  uint32_T Constant_Value_mf;          /* Computed Parameter: Constant_Value_mf
                                        * Referenced by: '<S358>/Constant'
                                        */
  uint32_T Constant_Value_dv;          /* Computed Parameter: Constant_Value_dv
                                        * Referenced by: '<S359>/Constant'
                                        */
  uint32_T Constant_Value_ce;          /* Computed Parameter: Constant_Value_ce
                                        * Referenced by: '<S360>/Constant'
                                        */
  uint32_T Constant_Value_m4;          /* Computed Parameter: Constant_Value_m4
                                        * Referenced by: '<S361>/Constant'
                                        */
  uint32_T Constant_Value_cn;          /* Computed Parameter: Constant_Value_cn
                                        * Referenced by: '<S362>/Constant'
                                        */
  uint32_T Constant_Value_nq;          /* Computed Parameter: Constant_Value_nq
                                        * Referenced by: '<S363>/Constant'
                                        */
  uint32_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S364>/Constant'
                                        */
  uint32_T Constant_Value_dn;          /* Computed Parameter: Constant_Value_dn
                                        * Referenced by: '<S365>/Constant'
                                        */
  uint32_T Constant_Value_k5;          /* Computed Parameter: Constant_Value_k5
                                        * Referenced by: '<S366>/Constant'
                                        */
  uint32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S367>/Constant'
                                        */
  uint32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S368>/Constant'
                                        */
  boolean_T _BADPARAS_Y0;              /* Computed Parameter: _BADPARAS_Y0
                                        * Referenced by: '<S298>/_BADPARAS'
                                        */
  boolean_T _POWERFAULT_Y0;            /* Computed Parameter: _POWERFAULT_Y0
                                        * Referenced by: '<S298>/_POWER FAULT'
                                        */
  boolean_T _BUSTIMEOUT_Y0;            /* Computed Parameter: _BUSTIMEOUT_Y0
                                        * Referenced by: '<S298>/_BUS TIMEOUT'
                                        */
  boolean_T _FEEDBACK_Y0;              /* Computed Parameter: _FEEDBACK_Y0
                                        * Referenced by: '<S298>/_FEEDBACK'
                                        */
  boolean_T _POWERVOLTAGE_Y0;          /* Computed Parameter: _POWERVOLTAGE_Y0
                                        * Referenced by: '<S298>/_POWERVOLTAGE'
                                        */
  boolean_T _MOTORTEMP_Y0;             /* Computed Parameter: _MOTORTEMP_Y0
                                        * Referenced by: '<S298>/_MOTORTEMP'
                                        */
  boolean_T _DEVICETEMP_Y0;            /* Computed Parameter: _DEVICETEMP_Y0
                                        * Referenced by: '<S298>/_DEVICETEMP'
                                        */
  boolean_T _OVERVOLTAGE_Y0;           /* Computed Parameter: _OVERVOLTAGE_Y0
                                        * Referenced by: '<S298>/_OVERVOLTAGE'
                                        */
  boolean_T _i_peak_Y0;                /* Computed Parameter: _i_peak_Y0
                                        * Referenced by: '<S298>/_i_peak'
                                        */
  boolean_T _RACEAWAY_Y0;              /* Computed Parameter: _RACEAWAY_Y0
                                        * Referenced by: '<S298>/_RACEAWAY'
                                        */
  boolean_T _USER_Y0;                  /* Computed Parameter: _USER_Y0
                                        * Referenced by: '<S298>/_USER'
                                        */
  boolean_T _I2R_Y0;                   /* Computed Parameter: _I2R_Y0
                                        * Referenced by: '<S298>/_I2R'
                                        */
  boolean_T _HW_FAIL_Y0;               /* Computed Parameter: _HW_FAIL_Y0
                                        * Referenced by: '<S298>/_HW_FAIL'
                                        */
  boolean_T _BALLAST_Y0;               /* Computed Parameter: _BALLAST_Y0
                                        * Referenced by: '<S298>/_BALLAST'
                                        */
  boolean_T _WarnPOWERVOLTAGE_Y0;      /* Computed Parameter: _WarnPOWERVOLTAGE_Y0
                                        * Referenced by: '<S298>/_WarnPOWERVOLTAGE'
                                        */
  boolean_T _WarnMOTORTEMP_Y0;         /* Computed Parameter: _WarnMOTORTEMP_Y0
                                        * Referenced by: '<S298>/_WarnMOTORTEMP'
                                        */
  boolean_T _WarnDEVICETEMP_Y0;        /* Computed Parameter: _WarnDEVICETEMP_Y0
                                        * Referenced by: '<S298>/_WarnDEVICETEMP'
                                        */
  boolean_T _WarnOVERVOLTAGE_Y0;       /* Computed Parameter: _WarnOVERVOLTAGE_Y0
                                        * Referenced by: '<S298>/_WarnOVERVOLTAGE'
                                        */
  boolean_T _WarnI_peak_Y0;            /* Computed Parameter: _WarnI_peak_Y0
                                        * Referenced by: '<S298>/_WarnI_peak'
                                        */
  boolean_T _WarnI2R_Y0;               /* Computed Parameter: _WarnI2R_Y0
                                        * Referenced by: '<S298>/_WarnI2R'
                                        */
  boolean_T _WarnBALLAST_Y0;           /* Computed Parameter: _WarnBALLAST_Y0
                                        * Referenced by: '<S298>/_WarnBALLAST'
                                        */
  boolean_T _SAMMEL_ERROR_Y0;          /* Computed Parameter: _SAMMEL_ERROR_Y0
                                        * Referenced by: '<S298>/_SAMMEL_ERROR'
                                        */
  boolean_T _SAMMEL_WARNUNG_Y0;        /* Computed Parameter: _SAMMEL_WARNUNG_Y0
                                        * Referenced by: '<S298>/_SAMMEL_WARNUNG'
                                        */
  boolean_T _RFEFAULT_Y0;              /* Computed Parameter: _RFEFAULT_Y0
                                        * Referenced by: '<S298>/_RFE FAULT'
                                        */
  boolean_T _WarnWARNING_0_Y0;         /* Computed Parameter: _WarnWARNING_0_Y0
                                        * Referenced by: '<S298>/_WarnWARNING_0'
                                        */
  boolean_T _WarnILLEGAL_STATUS_Y0;    /* Computed Parameter: _WarnILLEGAL_STATUS_Y0
                                        * Referenced by: '<S298>/_WarnILLEGAL_STATUS'
                                        */
  boolean_T _WarnWARNING_2_Y0;         /* Computed Parameter: _WarnWARNING_2_Y0
                                        * Referenced by: '<S298>/_WarnWARNING_2'
                                        */
};

/* Parameters for system: '<S287>/U_DC' */
struct P_U_DC_DR18E_Testpult_T_ {
  real_T U_DC_Y0;                      /* Computed Parameter: U_DC_Y0
                                        * Referenced by: '<S301>/U_DC'
                                        */
  real_T UmrechnungRegisterSpannungManua;/* Expression: 1/31.499
                                          * Referenced by: '<S301>/Umrechnung Register--> Spannung Manual BAMOCAR PG D3 S. 47'
                                          */
};

/* Parameters for system: '<S287>/Inverter_Temp' */
struct P_Inverter_Temp_DR18E_Testpul_T_ {
  real_T Inverter_Temp_Y0;             /* Computed Parameter: Inverter_Temp_Y0
                                        * Referenced by: '<S295>/Inverter_Temp'
                                        */
  real_T BAMOCARPGD3ManualS48_tableData[21];/* Expression: [0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100]
                                             * Referenced by: '<S295>/BAMOCAR PG D3 Manual S. 48 '
                                             */
  real_T BAMOCARPGD3ManualS48_bp01Data[21];/* Expression: [17151,17400,17688,18017,18387,18797,19247,19733,20250,20793,21357,21933,22515,23097,23671,24232,24775,25296,25792,26261,26702]
                                            * Referenced by: '<S295>/BAMOCAR PG D3 Manual S. 48 '
                                            */
};

/* Parameters for system: '<S689>/J-K Flip-Flop' */
struct P_JKFlipFlop_DR18E_Testpult_T_ {
  boolean_T Q_Y0;                      /* Expression: initial_condition
                                        * Referenced by: '<S690>/Q'
                                        */
  boolean_T Q_Y0_a;                    /* Expression: ~initial_condition
                                        * Referenced by: '<S690>/!Q'
                                        */
  boolean_T Memory_X0;                 /* Expression: initial_condition
                                        * Referenced by: '<S690>/Memory'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S690>/Logic'
                                        */
};

/* Parameters (auto storage) */
struct P_DR18E_Testpult_T_ {
  real_T PID_fromGA_D;                 /* Mask Parameter: PID_fromGA_D
                                        * Referenced by: '<S596>/Derivative Gain'
                                        */
  real_T PID_fromOptim_D;              /* Mask Parameter: PID_fromOptim_D
                                        * Referenced by: '<S597>/Derivative Gain'
                                        */
  real_T PID_from_BJ_D;                /* Mask Parameter: PID_from_BJ_D
                                        * Referenced by: '<S598>/Derivative Gain'
                                        */
  real_T PID_fromGA_D_j;               /* Mask Parameter: PID_fromGA_D_j
                                        * Referenced by: '<S611>/Derivative Gain'
                                        */
  real_T PID_fromOptim_D_a;            /* Mask Parameter: PID_fromOptim_D_a
                                        * Referenced by: '<S612>/Derivative Gain'
                                        */
  real_T PID_from_BJ_D_i;              /* Mask Parameter: PID_from_BJ_D_i
                                        * Referenced by: '<S613>/Derivative Gain'
                                        */
  real_T PID_fromGA_I;                 /* Mask Parameter: PID_fromGA_I
                                        * Referenced by: '<S596>/Integral Gain'
                                        */
  real_T PID_fromOptim_I;              /* Mask Parameter: PID_fromOptim_I
                                        * Referenced by: '<S597>/Integral Gain'
                                        */
  real_T PID_from_BJ_I;                /* Mask Parameter: PID_from_BJ_I
                                        * Referenced by: '<S598>/Integral Gain'
                                        */
  real_T PID_fromGA_I_n;               /* Mask Parameter: PID_fromGA_I_n
                                        * Referenced by: '<S611>/Integral Gain'
                                        */
  real_T PID_fromOptim_I_d;            /* Mask Parameter: PID_fromOptim_I_d
                                        * Referenced by: '<S612>/Integral Gain'
                                        */
  real_T PID_from_BJ_I_f;              /* Mask Parameter: PID_from_BJ_I_f
                                        * Referenced by: '<S613>/Integral Gain'
                                        */
  real_T PIController_I;               /* Mask Parameter: PIController_I
                                        * Referenced by: '<S682>/Integral Gain'
                                        */
  real_T PID_fromGA_N;                 /* Mask Parameter: PID_fromGA_N
                                        * Referenced by: '<S596>/Filter Coefficient'
                                        */
  real_T PID_fromOptim_N;              /* Mask Parameter: PID_fromOptim_N
                                        * Referenced by: '<S597>/Filter Coefficient'
                                        */
  real_T PID_from_BJ_N;                /* Mask Parameter: PID_from_BJ_N
                                        * Referenced by: '<S598>/Filter Coefficient'
                                        */
  real_T PID_fromGA_N_b;               /* Mask Parameter: PID_fromGA_N_b
                                        * Referenced by: '<S611>/Filter Coefficient'
                                        */
  real_T PID_fromOptim_N_o;            /* Mask Parameter: PID_fromOptim_N_o
                                        * Referenced by: '<S612>/Filter Coefficient'
                                        */
  real_T PID_from_BJ_N_b;              /* Mask Parameter: PID_from_BJ_N_b
                                        * Referenced by: '<S613>/Filter Coefficient'
                                        */
  real_T PIController_P;               /* Mask Parameter: PIController_P
                                        * Referenced by: '<S682>/Proportional Gain'
                                        */
  real_T PID_fromGA_P;                 /* Mask Parameter: PID_fromGA_P
                                        * Referenced by: '<S596>/Proportional Gain'
                                        */
  real_T PID_fromOptim_P;              /* Mask Parameter: PID_fromOptim_P
                                        * Referenced by: '<S597>/Proportional Gain'
                                        */
  real_T PID_from_BJ_P;                /* Mask Parameter: PID_from_BJ_P
                                        * Referenced by: '<S598>/Proportional Gain'
                                        */
  real_T PID_fromGA_P_k;               /* Mask Parameter: PID_fromGA_P_k
                                        * Referenced by: '<S611>/Proportional Gain'
                                        */
  real_T PID_fromOptim_P_d;            /* Mask Parameter: PID_fromOptim_P_d
                                        * Referenced by: '<S612>/Proportional Gain'
                                        */
  real_T PID_from_BJ_P_o;              /* Mask Parameter: PID_from_BJ_P_o
                                        * Referenced by: '<S613>/Proportional Gain'
                                        */
  real_T CompareToConstant1_const;     /* Mask Parameter: CompareToConstant1_const
                                        * Referenced by: '<S677>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S543>/Constant'
                                        */
  real_T VergleichmitGrenzTemp_const;  /* Mask Parameter: VergleichmitGrenzTemp_const
                                        * Referenced by: '<S685>/Constant'
                                        */
  real_T VergleichmitGrenzTemp1_const; /* Mask Parameter: VergleichmitGrenzTemp1_const
                                        * Referenced by: '<S686>/Constant'
                                        */
  real_T VergleichmitGrenzTemp2_const; /* Mask Parameter: VergleichmitGrenzTemp2_const
                                        * Referenced by: '<S687>/Constant'
                                        */
  real_T VergleichmitGrenzTemp3_const; /* Mask Parameter: VergleichmitGrenzTemp3_const
                                        * Referenced by: '<S688>/Constant'
                                        */
  real_T CompareToConstant_const_o;    /* Mask Parameter: CompareToConstant_const_o
                                        * Referenced by: '<S676>/Constant'
                                        */
  real_T CompareToConstant_const_f;    /* Mask Parameter: CompareToConstant_const_f
                                        * Referenced by: '<S553>/Constant'
                                        */
  real_T CompareToConstant1_const_i;   /* Mask Parameter: CompareToConstant1_const_i
                                        * Referenced by: '<S554>/Constant'
                                        */
  real_T CompareToConstant2_const;     /* Mask Parameter: CompareToConstant2_const
                                        * Referenced by: '<S555>/Constant'
                                        */
  real_T CompareToConstant3_const;     /* Mask Parameter: CompareToConstant3_const
                                        * Referenced by: '<S556>/Constant'
                                        */
  real_T CompareToConstant4_const;     /* Mask Parameter: CompareToConstant4_const
                                        * Referenced by: '<S557>/Constant'
                                        */
  real_T CompareToConstant5_const;     /* Mask Parameter: CompareToConstant5_const
                                        * Referenced by: '<S558>/Constant'
                                        */
  real_T CompareToConstant7_const;     /* Mask Parameter: CompareToConstant7_const
                                        * Referenced by: '<S560>/Constant'
                                        */
  real_T CompareToConstant6_const;     /* Mask Parameter: CompareToConstant6_const
                                        * Referenced by: '<S559>/Constant'
                                        */
  real_T CompareToConstant_const_k;    /* Mask Parameter: CompareToConstant_const_k
                                        * Referenced by: '<S539>/Constant'
                                        */
  real_T CompareToConstant_const_a;    /* Mask Parameter: CompareToConstant_const_a
                                        * Referenced by: '<S579>/Constant'
                                        */
  real_T RuleT1039_const;              /* Mask Parameter: RuleT1039_const
                                        * Referenced by: '<S635>/Constant'
                                        */
  real_T CompareToConstant_const_n;    /* Mask Parameter: CompareToConstant_const_n
                                        * Referenced by: '<S582>/Constant'
                                        */
  real_T CompareToConstant_const_c;    /* Mask Parameter: CompareToConstant_const_c
                                        * Referenced by: '<S574>/Constant'
                                        */
  real_T JKFlipFlop_initial_condition; /* Mask Parameter: JKFlipFlop_initial_condition
                                        * Referenced by: '<S693>/J-K Flip-Flop'
                                        */
  real_T JKFlipFlop_initial_condition_o;/* Mask Parameter: JKFlipFlop_initial_condition_o
                                         * Referenced by: '<S691>/J-K Flip-Flop'
                                         */
  real_T JKFlipFlop_initial_condition_or;/* Mask Parameter: JKFlipFlop_initial_condition_or
                                          * Referenced by: '<S689>/J-K Flip-Flop'
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
                                        * Referenced by: '<S591>/Tapped Delay'
                                        */
  real_T TappedDelay_vinit_g;          /* Mask Parameter: TappedDelay_vinit_g
                                        * Referenced by: '<S606>/Tapped Delay'
                                        */
  real_T DetectDecrease_vinit;         /* Mask Parameter: DetectDecrease_vinit
                                        * Referenced by: '<S614>/Delay Input1'
                                        */
  real_T DetectDecrease1_vinit;        /* Mask Parameter: DetectDecrease1_vinit
                                        * Referenced by: '<S615>/Delay Input1'
                                        */
  real_T DetectIncrease_vinit;         /* Mask Parameter: DetectIncrease_vinit
                                        * Referenced by: '<S616>/Delay Input1'
                                        */
  real_T DetectIncrease1_vinit;        /* Mask Parameter: DetectIncrease1_vinit
                                        * Referenced by: '<S617>/Delay Input1'
                                        */
  uint32_T uHz_BitMask;                /* Mask Parameter: uHz_BitMask
                                        * Referenced by: '<S297>/2Hz'
                                        */
  uint32_T Brk_BitMask;                /* Mask Parameter: Brk_BitMask
                                        * Referenced by: '<S297>/Brk'
                                        */
  uint32_T Cal_BitMask;                /* Mask Parameter: Cal_BitMask
                                        * Referenced by: '<S297>/Cal'
                                        */
  uint32_T Cal0_BitMask;               /* Mask Parameter: Cal0_BitMask
                                        * Referenced by: '<S297>/Cal0'
                                        */
  uint32_T Ena_BitMask;                /* Mask Parameter: Ena_BitMask
                                        * Referenced by: '<S297>/Ena'
                                        */
  uint32_T NCR0_BitMask;               /* Mask Parameter: NCR0_BitMask
                                        * Referenced by: '<S297>/NCR0'
                                        */
  uint32_T Rsw_BitMask;                /* Mask Parameter: Rsw_BitMask
                                        * Referenced by: '<S297>/Rsw'
                                        */
  uint32_T Tol_BitMask;                /* Mask Parameter: Tol_BitMask
                                        * Referenced by: '<S297>/Tol'
                                        */
  uint32_T Rdy_BitMask;                /* Mask Parameter: Rdy_BitMask
                                        * Referenced by: '<S297>/Rdy'
                                        */
  uint32_T SIGNMAG_BitMask;            /* Mask Parameter: SIGNMAG_BitMask
                                        * Referenced by: '<S297>/SIGNMAG'
                                        */
  uint32_T Nclip_BitMask;              /* Mask Parameter: Nclip_BitMask
                                        * Referenced by: '<S297>/Nclip'
                                        */
  uint32_T Nclip_BitMask_j;            /* Mask Parameter: Nclip_BitMask_j
                                        * Referenced by: '<S297>/Nclip+'
                                        */
  uint32_T Nclip_BitMask_h;            /* Mask Parameter: Nclip_BitMask_h
                                        * Referenced by: '<S297>/Nclip-'
                                        */
  uint32_T Lim_BitMask;                /* Mask Parameter: Lim_BitMask
                                        * Referenced by: '<S297>/Lim+'
                                        */
  uint32_T IrdDig_BitMask;             /* Mask Parameter: IrdDig_BitMask
                                        * Referenced by: '<S297>/Ird-Dig'
                                        */
  uint32_T Iuserchd_BitMask;           /* Mask Parameter: Iuserchd_BitMask
                                        * Referenced by: '<S297>/Iuse-rchd'
                                        */
  uint32_T IrdN_BitMask;               /* Mask Parameter: IrdN_BitMask
                                        * Referenced by: '<S297>/Ird-N'
                                        */
  uint32_T Ird_TI_BitMask;             /* Mask Parameter: Ird_TI_BitMask
                                        * Referenced by: '<S297>/Ird_TI'
                                        */
  uint32_T Ird_TIR_BitMask;            /* Mask Parameter: Ird_TIR_BitMask
                                        * Referenced by: '<S297>/Ird_TIR'
                                        */
  uint32_T IrdTM_BitMask;              /* Mask Parameter: IrdTM_BitMask
                                        * Referenced by: '<S297>/Ird-TM'
                                        */
  uint32_T IrdANA_BitMask;             /* Mask Parameter: IrdANA_BitMask
                                        * Referenced by: '<S297>/Ird-ANA'
                                        */
  uint32_T Iwcns_BitMask;              /* Mask Parameter: Iwcns_BitMask
                                        * Referenced by: '<S297>/Iwcns'
                                        */
  uint32_T RFE_plus_BitMask;           /* Mask Parameter: RFE_plus_BitMask
                                        * Referenced by: '<S297>/RFE_plus'
                                        */
  uint32_T Lim_BitMask_e;              /* Mask Parameter: Lim_BitMask_e
                                        * Referenced by: '<S297>/Lim-'
                                        */
  uint32_T frei_BitMask;               /* Mask Parameter: frei_BitMask
                                        * Referenced by: '<S297>/frei'
                                        */
  uint32_T Handrad_BitMask;            /* Mask Parameter: Handrad_BitMask
                                        * Referenced by: '<S297>/Handrad'
                                        */
  uint32_T OK_BitMask;                 /* Mask Parameter: OK_BitMask
                                        * Referenced by: '<S297>/OK'
                                        */
  uint32_T Icns_BitMask;               /* Mask Parameter: Icns_BitMask
                                        * Referenced by: '<S297>/Icns'
                                        */
  uint32_T TNlim_BitMask;              /* Mask Parameter: TNlim_BitMask
                                        * Referenced by: '<S297>/T-Nlim'
                                        */
  uint32_T PN_BitMask;                 /* Mask Parameter: PN_BitMask
                                        * Referenced by: '<S297>/P-N'
                                        */
  uint32_T NI_BitMask;                 /* Mask Parameter: NI_BitMask
                                        * Referenced by: '<S297>/N-I'
                                        */
  uint32_T N0_BitMask;                 /* Mask Parameter: N0_BitMask
                                        * Referenced by: '<S297>/N0'
                                        */
  uint32_T uHz_BitMask_i;              /* Mask Parameter: uHz_BitMask_i
                                        * Referenced by: '<S374>/2Hz'
                                        */
  uint32_T Brk_BitMask_n;              /* Mask Parameter: Brk_BitMask_n
                                        * Referenced by: '<S374>/Brk'
                                        */
  uint32_T Cal_BitMask_h;              /* Mask Parameter: Cal_BitMask_h
                                        * Referenced by: '<S374>/Cal'
                                        */
  uint32_T Cal0_BitMask_a;             /* Mask Parameter: Cal0_BitMask_a
                                        * Referenced by: '<S374>/Cal0'
                                        */
  uint32_T Ena_BitMask_b;              /* Mask Parameter: Ena_BitMask_b
                                        * Referenced by: '<S374>/Ena'
                                        */
  uint32_T NCR0_BitMask_h;             /* Mask Parameter: NCR0_BitMask_h
                                        * Referenced by: '<S374>/NCR0'
                                        */
  uint32_T Rsw_BitMask_d;              /* Mask Parameter: Rsw_BitMask_d
                                        * Referenced by: '<S374>/Rsw'
                                        */
  uint32_T Tol_BitMask_l;              /* Mask Parameter: Tol_BitMask_l
                                        * Referenced by: '<S374>/Tol'
                                        */
  uint32_T Rdy_BitMask_d;              /* Mask Parameter: Rdy_BitMask_d
                                        * Referenced by: '<S374>/Rdy'
                                        */
  uint32_T SIGNMAG_BitMask_h;          /* Mask Parameter: SIGNMAG_BitMask_h
                                        * Referenced by: '<S374>/SIGNMAG'
                                        */
  uint32_T Nclip_BitMask_m;            /* Mask Parameter: Nclip_BitMask_m
                                        * Referenced by: '<S374>/Nclip'
                                        */
  uint32_T Nclip_BitMask_g;            /* Mask Parameter: Nclip_BitMask_g
                                        * Referenced by: '<S374>/Nclip+'
                                        */
  uint32_T Nclip_BitMask_e;            /* Mask Parameter: Nclip_BitMask_e
                                        * Referenced by: '<S374>/Nclip-'
                                        */
  uint32_T Lim_BitMask_a;              /* Mask Parameter: Lim_BitMask_a
                                        * Referenced by: '<S374>/Lim+'
                                        */
  uint32_T IrdDig_BitMask_e;           /* Mask Parameter: IrdDig_BitMask_e
                                        * Referenced by: '<S374>/Ird-Dig'
                                        */
  uint32_T Iuserchd_BitMask_c;         /* Mask Parameter: Iuserchd_BitMask_c
                                        * Referenced by: '<S374>/Iuse-rchd'
                                        */
  uint32_T IrdN_BitMask_p;             /* Mask Parameter: IrdN_BitMask_p
                                        * Referenced by: '<S374>/Ird-N'
                                        */
  uint32_T Ird_TI_BitMask_n;           /* Mask Parameter: Ird_TI_BitMask_n
                                        * Referenced by: '<S374>/Ird_TI'
                                        */
  uint32_T Ird_TIR_BitMask_k;          /* Mask Parameter: Ird_TIR_BitMask_k
                                        * Referenced by: '<S374>/Ird_TIR'
                                        */
  uint32_T IrdTM_BitMask_i;            /* Mask Parameter: IrdTM_BitMask_i
                                        * Referenced by: '<S374>/Ird-TM'
                                        */
  uint32_T IrdANA_BitMask_d;           /* Mask Parameter: IrdANA_BitMask_d
                                        * Referenced by: '<S374>/Ird-ANA'
                                        */
  uint32_T Iwcns_BitMask_a;            /* Mask Parameter: Iwcns_BitMask_a
                                        * Referenced by: '<S374>/Iwcns'
                                        */
  uint32_T RFE_plus_BitMask_g;         /* Mask Parameter: RFE_plus_BitMask_g
                                        * Referenced by: '<S374>/RFE_plus'
                                        */
  uint32_T Lim_BitMask_ee;             /* Mask Parameter: Lim_BitMask_ee
                                        * Referenced by: '<S374>/Lim-'
                                        */
  uint32_T frei_BitMask_e;             /* Mask Parameter: frei_BitMask_e
                                        * Referenced by: '<S374>/frei'
                                        */
  uint32_T Handrad_BitMask_a;          /* Mask Parameter: Handrad_BitMask_a
                                        * Referenced by: '<S374>/Handrad'
                                        */
  uint32_T OK_BitMask_k;               /* Mask Parameter: OK_BitMask_k
                                        * Referenced by: '<S374>/OK'
                                        */
  uint32_T Icns_BitMask_i;             /* Mask Parameter: Icns_BitMask_i
                                        * Referenced by: '<S374>/Icns'
                                        */
  uint32_T TNlim_BitMask_d;            /* Mask Parameter: TNlim_BitMask_d
                                        * Referenced by: '<S374>/T-Nlim'
                                        */
  uint32_T PN_BitMask_d;               /* Mask Parameter: PN_BitMask_d
                                        * Referenced by: '<S374>/P-N'
                                        */
  uint32_T NI_BitMask_g;               /* Mask Parameter: NI_BitMask_g
                                        * Referenced by: '<S374>/N-I'
                                        */
  uint32_T N0_BitMask_a;               /* Mask Parameter: N0_BitMask_a
                                        * Referenced by: '<S374>/N0'
                                        */
  uint32_T Difference_ICPrevInput;     /* Mask Parameter: Difference_ICPrevInput
                                        * Referenced by: '<S638>/UD'
                                        */
  uint16_T Difference2_ICPrevInput;    /* Mask Parameter: Difference2_ICPrevInput
                                        * Referenced by: '<S640>/UD'
                                        */
  uint16_T Difference1_ICPrevInput;    /* Mask Parameter: Difference1_ICPrevInput
                                        * Referenced by: '<S639>/UD'
                                        */
  boolean_T SRFlipFlop_initial_condition;/* Mask Parameter: SRFlipFlop_initial_condition
                                          * Referenced by: '<S541>/Memory'
                                          */
  boolean_T SRFlipFlop1_initial_condition;/* Mask Parameter: SRFlipFlop1_initial_condition
                                           * Referenced by: '<S542>/Memory'
                                           */
  boolean_T SRFlipFlop_initial_condition_f;/* Mask Parameter: SRFlipFlop_initial_condition_f
                                            * Referenced by: '<S562>/Memory'
                                            */
  boolean_T SRFlipFlop_initial_condition_i;/* Mask Parameter: SRFlipFlop_initial_condition_i
                                            * Referenced by: '<S580>/Memory'
                                            */
  boolean_T SRFlipFlop_initial_condition_l;/* Mask Parameter: SRFlipFlop_initial_condition_l
                                            * Referenced by: '<S583>/Memory'
                                            */
  boolean_T SRFlipFlop1_initial_condition_k;/* Mask Parameter: SRFlipFlop1_initial_condition_k
                                             * Referenced by: '<S621>/Memory'
                                             */
  boolean_T SRFlipFlop_initial_condition_k;/* Mask Parameter: SRFlipFlop_initial_condition_k
                                            * Referenced by: '<S620>/Memory'
                                            */
  boolean_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                        * Referenced by: '<S699>/Delay Input1'
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
                                        * Referenced by: '<S296>/Motor1_Temp'
                                        */
  real_T Motor1_Temp_Raw_Y0;           /* Computed Parameter: Motor1_Temp_Raw_Y0
                                        * Referenced by: '<S296>/Motor1_Temp_Raw '
                                        */
  real_T Constant2_Value;              /* Expression: 37175
                                        * Referenced by: '<S296>/Constant2'
                                        */
  real_T Gain_Gain;                    /* Expression: 4700
                                        * Referenced by: '<S296>/Gain'
                                        */
  real_T Tempcorrespondingresistance_tab[23];/* Expression: [-50,-40,-30,-20,-10,0,10,20,25,30,40,50,60,70,80,90,100,110,120,125,130,140,150]
                                              * Referenced by: '<S296>/Temp. corresponding  resistance'
                                              */
  real_T Tempcorrespondingresistance_bp0[23];/* Expression: [1030,1135,1247,1367,1495,1630,1772,1922,2000,2080,2245,2417,2597,2785,2980,3182,3392,3607,3817,3915,4008,4166,4280]
                                              * Referenced by: '<S296>/Temp. corresponding  resistance'
                                              */
  real_T Drehzahlin1minU1_Y0;          /* Computed Parameter: Drehzahlin1minU1_Y0
                                        * Referenced by: '<S289>/Drehzahl in 1//min U1'
                                        */
  real_T MotorleistunginWU1_Y0;        /* Computed Parameter: MotorleistunginWU1_Y0
                                        * Referenced by: '<S289>/Motorleistung in W U1'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S305>/Constant'
                                        */
  real_T TFilterDrehzahl_Value;        /* Expression: 0.01
                                        * Referenced by: '<S289>/TFilterDrehzahl'
                                        */
  real_T WeightedSampleTime_WtEt;      /* Computed Parameter: WeightedSampleTime_WtEt
                                        * Referenced by: '<S305>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_i;            /* Expression: 1
                                        * Referenced by: '<S305>/Constant2'
                                        */
  real_T Constant1_Value_h;            /* Expression: 1
                                        * Referenced by: '<S289>/Constant1'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S303>/Memory'
                                        */
  real_T upi60_Gain;                   /* Expression: 1.8*6.283185 / 60
                                        * Referenced by: '<S289>/2*pi // 60'
                                        */
  real_T StrangstromI_rmsinAU1_Y0;     /* Computed Parameter: StrangstromI_rmsinAU1_Y0
                                        * Referenced by: '<S300>/Strangstrom I_rms in A U1'
                                        */
  real_T DrehmomentMinNmU1_Y0;         /* Computed Parameter: DrehmomentMinNmU1_Y0
                                        * Referenced by: '<S300>/Drehmoment M in Nm U1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 560
                                        * Referenced by: '<S300>/Constant2'
                                        */
  real_T DrehmomentStrangstrominNmArms_G;/* Expression: 0.75
                                          * Referenced by: '<S300>/Drehmoment // Strangstrom in Nm//Arms'
                                          */
  real_T Motor1_Temp_Y0_l;             /* Computed Parameter: Motor1_Temp_Y0_l
                                        * Referenced by: '<S373>/Motor1_Temp'
                                        */
  real_T Motor1_R_Y0;                  /* Computed Parameter: Motor1_R_Y0
                                        * Referenced by: '<S373>/Motor1_R '
                                        */
  real_T Constant2_Value_e;            /* Expression: 37175
                                        * Referenced by: '<S373>/Constant2'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 4700
                                        * Referenced by: '<S373>/Gain'
                                        */
  real_T Tempcorrespondingresistance_t_h[23];/* Expression: [-50,-40,-30,-20,-10,0,10,20,25,30,40,50,60,70,80,90,100,110,120,125,130,140,150]
                                              * Referenced by: '<S373>/Temp. corresponding  resistance'
                                              */
  real_T Tempcorrespondingresistance_b_f[23];/* Expression: [1030,1135,1247,1367,1495,1630,1772,1922,2000,2080,2245,2417,2597,2785,2980,3182,3392,3607,3817,3915,4008,4166,4280]
                                              * Referenced by: '<S373>/Temp. corresponding  resistance'
                                              */
  real_T Drehzahlin1minU1_Y0_d;        /* Computed Parameter: Drehzahlin1minU1_Y0_d
                                        * Referenced by: '<S369>/Drehzahl in 1//min U1'
                                        */
  real_T MotorleistunginWU1_Y0_i;      /* Computed Parameter: MotorleistunginWU1_Y0_i
                                        * Referenced by: '<S369>/Motorleistung in W U1'
                                        */
  real_T Constant_Value_j;             /* Expression: 1
                                        * Referenced by: '<S382>/Constant'
                                        */
  real_T TFilterDrehzahl_Value_n;      /* Expression: 0.01
                                        * Referenced by: '<S369>/TFilterDrehzahl'
                                        */
  real_T WeightedSampleTime_WtEt_p;    /* Computed Parameter: WeightedSampleTime_WtEt_p
                                        * Referenced by: '<S382>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_j;            /* Expression: 1
                                        * Referenced by: '<S382>/Constant2'
                                        */
  real_T Constant1_Value_f;            /* Expression: -1
                                        * Referenced by: '<S369>/Constant1'
                                        */
  real_T Memory_X0_p;                  /* Expression: 0
                                        * Referenced by: '<S380>/Memory'
                                        */
  real_T up60i_Gain;                   /* Expression: 1.8*6.283185 / 60
                                        * Referenced by: '<S369>/2*p // 60i'
                                        */
  real_T StrangstromI_rmsinAU1_Y0_d;   /* Computed Parameter: StrangstromI_rmsinAU1_Y0_d
                                        * Referenced by: '<S377>/Strangstrom I_rms in A U1'
                                        */
  real_T DrehmomentMinNmU1_Y0_g;       /* Computed Parameter: DrehmomentMinNmU1_Y0_g
                                        * Referenced by: '<S377>/Drehmoment M in Nm U1'
                                        */
  real_T Constant2_Value_l;            /* Expression: 560
                                        * Referenced by: '<S377>/Constant2'
                                        */
  real_T DrehmomentStrangstrominNmArms_c;/* Expression: 0.75
                                          * Referenced by: '<S377>/Drehmoment // Strangstrom in Nm//Arms'
                                          */
  real_T LEDgelb_Value;                /* Expression: 3
                                        * Referenced by: '<S564>/LED gelb'
                                        */
  real_T LEDgruen_Value;               /* Expression: 2
                                        * Referenced by: '<S564>/LED gruen'
                                        */
  real_T LEDrot_Value;                 /* Expression: 1
                                        * Referenced by: '<S564>/LED rot'
                                        */
  real_T LEDaus_Value;                 /* Expression: 0
                                        * Referenced by: '<S564>/LED aus'
                                        */
  real_T LEDFarbe_Value;               /* Expression: 3
                                        * Referenced by: '<S527>/LED Farbe'
                                        */
  real_T Safety1_Value;                /* Expression: 0
                                        * Referenced by: '<S573>/Safety1'
                                        */
  real_T Constant1_Value_o;            /* Expression: Strecke_Endu_km
                                        * Referenced by: '<S573>/Constant1'
                                        */
  real_T Constant_Value_f;             /* Expression: Kapazitaet_HV_Battery_kWh
                                        * Referenced by: '<S573>/Constant'
                                        */
  real_T kWhWh_Gain;                   /* Expression: 1000
                                        * Referenced by: '<S573>/kWh->Wh'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 10
                                        * Referenced by: '<S573>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S573>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S578>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S578>/Saturation1'
                                        */
  real_T Saturation1_UpperSat_b;       /* Expression: 1
                                        * Referenced by: '<S581>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_l;       /* Expression: 0
                                        * Referenced by: '<S581>/Saturation1'
                                        */
  real_T Constant_Value_c;             /* Expression: 0
                                        * Referenced by: '<S593>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<S588>/Constant'
                                        */
  real_T Constant_Value_b;             /* Expression: 0
                                        * Referenced by: '<S608>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 1
                                        * Referenced by: '<S603>/Constant'
                                        */
  real_T Cubatt_Value;                 /* Expression: 0
                                        * Referenced by: '<S529>/Cubatt'
                                        */
  real_T Constant3_Value;              /* Expression: 2
                                        * Referenced by: '<S628>/Constant3'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1/100
                                        * Referenced by: '<S628>/Gain'
                                        */
  real_T Constant_Value_l;             /* Expression: 0
                                        * Referenced by: '<S628>/Constant'
                                        */
  real_T Saturation1_UpperSat_be;      /* Expression: 100
                                        * Referenced by: '<S629>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_b;       /* Expression: 0
                                        * Referenced by: '<S629>/Saturation1'
                                        */
  real_T Saturation_UpperSat_p;        /* Expression: 100
                                        * Referenced by: '<S629>/Saturation'
                                        */
  real_T Saturation_LowerSat_d;        /* Expression: 0
                                        * Referenced by: '<S629>/Saturation'
                                        */
  real_T Gas_manuell_0100_Value;       /* Expression: 0
                                        * Referenced by: '<S629>/Gas_manuell_0100'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 100
                                        * Referenced by: '<S629>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S629>/Saturation2'
                                        */
  real_T Gas_manuell_2off1on_Value;    /* Expression: 2
                                        * Referenced by: '<S629>/Gas_manuell_2off1on'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 1/100
                                        * Referenced by: '<S629>/Gain'
                                        */
  real_T Constant_Value_n;             /* Expression: hex2dec('AA')
                                        * Referenced by: '<S625>/Constant'
                                        */
  real_T Constant_Value_a;             /* Expression: hex2dec('AA')
                                        * Referenced by: '<S626>/Constant'
                                        */
  real_T Constant1_Value_m;            /* Expression: 0
                                        * Referenced by: '<S533>/Constant1'
                                        */
  real_T VolleLfterleistung2_Value;    /* Expression: 0
                                        * Referenced by: '<S535>/Volle Lüfterleistung2'
                                        */
  real_T VolleLfterleistung1_Value;    /* Expression: 1.0
                                        * Referenced by: '<S535>/Volle Lüfterleistung1'
                                        */
  real_T VolleLfterleistung_Value;     /* Expression: 1.0
                                        * Referenced by: '<S535>/Volle Lüfterleistung'
                                        */
  real_T CP1Ch4Lfter_Value;            /* Expression: 0
                                        * Referenced by: '<S535>/CP1Ch4 Lüfter'
                                        */
  real_T uDLookupTable_tableData[8];   /* Expression: [0.2,0.2,0.2,0.4,0.6,0.8,1,1]
                                        * Referenced by: '<S535>/1-D Lookup Table'
                                        */
  real_T uDLookupTable_bp01Data[8];    /* Expression: [0,20,28,35,40,45,50,100]
                                        * Referenced by: '<S535>/1-D Lookup Table'
                                        */
  real_T CP1Ch3Wasserpumpe_Value;      /* Expression: 0
                                        * Referenced by: '<S535>/CP1Ch3 Wasserpumpe'
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
                                        * Referenced by: '<S703>/Constant'
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
                                        * Referenced by: '<S524>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S524>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<S524>/Step'
                                        */
  real_T InvCorrection_Gain;           /* Expression: 1.11764706
                                        * Referenced by: '<S287>/InvCorrection'
                                        */
  real_T Drive_Mode_Value;             /* Expression: Drive_Mode
                                        * Referenced by: '<S537>/Drive_Mode'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S552>/Constant'
                                        */
  real_T TFilterGas1_Value;            /* Expression: 0.1
                                        * Referenced by: '<S526>/TFilterGas1'
                                        */
  real_T WeightedSampleTime_WtEt_pu;   /* Computed Parameter: WeightedSampleTime_WtEt_pu
                                        * Referenced by: '<S552>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_d;            /* Expression: 1
                                        * Referenced by: '<S552>/Constant2'
                                        */
  real_T Constant1_Value_fr;           /* Expression: 1
                                        * Referenced by: '<S526>/Constant1'
                                        */
  real_T Memory_X0_m;                  /* Expression: 0
                                        * Referenced by: '<S547>/Memory'
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
                                        * Referenced by: '<S696>/Constant'
                                        */
  real_T TPumpe_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S535>/TPumpe'
                                        */
  real_T WeightedSampleTime_WtEt_j;    /* Computed Parameter: WeightedSampleTime_WtEt_j
                                        * Referenced by: '<S696>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_g;            /* Expression: 1
                                        * Referenced by: '<S696>/Constant2'
                                        */
  real_T KPumpe_Value;                 /* Expression: 1
                                        * Referenced by: '<S535>/KPumpe'
                                        */
  real_T PumpeManEntlueften_Value;     /* Expression: 0
                                        * Referenced by: '<S535>/PumpeMan//Entlueften'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S535>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Computed Parameter: PulseGenerator_Period
                                        * Referenced by: '<S535>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Computed Parameter: PulseGenerator_Duty
                                        * Referenced by: '<S535>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S535>/Pulse Generator'
                                        */
  real_T PumpeManAut_Value;            /* Expression: 0
                                        * Referenced by: '<S535>/PumpeMan//Aut'
                                        */
  real_T Memory_X0_h;                  /* Expression: 0
                                        * Referenced by: '<S684>/Memory'
                                        */
  real_T Saturation2_UpperSat_i;       /* Expression: 1
                                        * Referenced by: '<S535>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_f;       /* Expression: 0
                                        * Referenced by: '<S535>/Saturation2'
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
                                        * Referenced by: '<S695>/Constant'
                                        */
  real_T Tluefter_Value;               /* Expression: 0.5
                                        * Referenced by: '<S535>/Tluefter'
                                        */
  real_T WeightedSampleTime_WtEt_a;    /* Computed Parameter: WeightedSampleTime_WtEt_a
                                        * Referenced by: '<S695>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_b;            /* Expression: 1
                                        * Referenced by: '<S695>/Constant2'
                                        */
  real_T KLuefter_Value;               /* Expression: 1
                                        * Referenced by: '<S535>/KLuefter'
                                        */
  real_T LfterManAut_Value;            /* Expression: 0
                                        * Referenced by: '<S535>/LüfterMan//Aut'
                                        */
  real_T T_SOLL_Value;                 /* Expression: KW_T_Soll
                                        * Referenced by: '<S535>/T_SOLL'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S682>/Integrator'
                                        */
  real_T Integrator_IC;                /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S682>/Integrator'
                                        */
  real_T Saturation_UpperSat_o;        /* Expression: 1
                                        * Referenced by: '<S535>/Saturation'
                                        */
  real_T Saturation_LowerSat_j;        /* Expression: 0
                                        * Referenced by: '<S535>/Saturation'
                                        */
  real_T Memory_X0_l;                  /* Expression: 0
                                        * Referenced by: '<S683>/Memory'
                                        */
  real_T Saturation1_UpperSat_i;       /* Expression: 1
                                        * Referenced by: '<S535>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_c;       /* Expression: 0
                                        * Referenced by: '<S535>/Saturation1'
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
  real_T MMax_Value;                   /* Expression: M_max
                                        * Referenced by: '<S528>/M Max'
                                        */
  real_T Deltatimelimit_Value_ly;      /* Expression: 0.055
                                        * Referenced by: '<S48>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_l;     /* Expression: 1
                                        * Referenced by: '<S48>/Prev. msg. sent value'
                                        */
  real_T PulseGenerator_Amp_p;         /* Expression: 1
                                        * Referenced by: '<S564>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_i;      /* Computed Parameter: PulseGenerator_Period_i
                                        * Referenced by: '<S564>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_p;        /* Computed Parameter: PulseGenerator_Duty_p
                                        * Referenced by: '<S564>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_l;  /* Expression: 0
                                        * Referenced by: '<S564>/Pulse Generator'
                                        */
  real_T Deltatimelimit_Value_mc;      /* Expression: 0.055
                                        * Referenced by: '<S49>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_b;     /* Expression: 1
                                        * Referenced by: '<S49>/Prev. msg. sent value'
                                        */
  real_T Constant_Value_hx[2];         /* Expression: [0;0]
                                        * Referenced by: '<S533>/Constant'
                                        */
  real_T Gas_Modus_Value;              /* Expression: Gas_Modus
                                        * Referenced by: '<S533>/Gas_Modus'
                                        */
  real_T Constant_Value_e4;            /* Expression: 1
                                        * Referenced by: '<S563>/Constant'
                                        */
  real_T TPlaus_Value;                 /* Expression: 0.5
                                        * Referenced by: '<S548>/TPlaus'
                                        */
  real_T WeightedSampleTime_WtEt_b;    /* Computed Parameter: WeightedSampleTime_WtEt_b
                                        * Referenced by: '<S563>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_c;            /* Expression: 1
                                        * Referenced by: '<S563>/Constant2'
                                        */
  real_T KPlaus_Value;                 /* Expression: 1
                                        * Referenced by: '<S548>/KPlaus'
                                        */
  real_T Memory_X0_b;                  /* Expression: 0
                                        * Referenced by: '<S561>/Memory'
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
  real_T Gain_Gain_lc;                 /* Expression: 1/i_Getriebe
                                        * Referenced by: '<S532>/Gain'
                                        */
  real_T Saturation_UpperSat_h;        /* Expression: 1
                                        * Referenced by: '<S532>/Saturation'
                                        */
  real_T Saturation_LowerSat_p;        /* Expression: 0
                                        * Referenced by: '<S532>/Saturation'
                                        */
  real_T Relay_OnVal;                  /* Expression: TC_Relay_On
                                        * Referenced by: '<S578>/Relay'
                                        */
  real_T Relay_OffVal;                 /* Expression: TC_Relay_Off
                                        * Referenced by: '<S578>/Relay'
                                        */
  real_T Relay_YOn;                    /* Expression: 1
                                        * Referenced by: '<S578>/Relay'
                                        */
  real_T Relay_YOff;                   /* Expression: 0
                                        * Referenced by: '<S578>/Relay'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S578>/Delay'
                                        */
  real_T Gas_Modus_Value_o;            /* Expression: Gas_Modus
                                        * Referenced by: '<S530>/Gas_Modus'
                                        */
  real_T Constant_Value_nb;            /* Expression: 1
                                        * Referenced by: '<S636>/Constant'
                                        */
  real_T TFilterGas1_Value_f;          /* Expression: 0.1
                                        * Referenced by: '<S628>/TFilterGas1'
                                        */
  real_T WeightedSampleTime_WtEt_f;    /* Computed Parameter: WeightedSampleTime_WtEt_f
                                        * Referenced by: '<S636>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_f;            /* Expression: 1
                                        * Referenced by: '<S636>/Constant2'
                                        */
  real_T Constant1_Value_b;            /* Expression: 1
                                        * Referenced by: '<S628>/Constant1'
                                        */
  real_T Saturation_UpperSat_o1;       /* Expression: 100
                                        * Referenced by: '<S628>/Saturation'
                                        */
  real_T Saturation_LowerSat_de;       /* Expression: 0
                                        * Referenced by: '<S628>/Saturation'
                                        */
  real_T Memory_X0_lp;                 /* Expression: 0
                                        * Referenced by: '<S633>/Memory'
                                        */
  real_T Constant_Value_cr;            /* Expression: 1
                                        * Referenced by: '<S637>/Constant'
                                        */
  real_T TFilterGas2_Value;            /* Expression: 0.1
                                        * Referenced by: '<S628>/TFilterGas2'
                                        */
  real_T WeightedSampleTime_WtEt_m;    /* Computed Parameter: WeightedSampleTime_WtEt_m
                                        * Referenced by: '<S637>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ly;           /* Expression: 1
                                        * Referenced by: '<S637>/Constant2'
                                        */
  real_T Constant2_Value_a;            /* Expression: 1
                                        * Referenced by: '<S628>/Constant2'
                                        */
  real_T Saturation1_UpperSat_g;       /* Expression: 100
                                        * Referenced by: '<S628>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a;       /* Expression: 0
                                        * Referenced by: '<S628>/Saturation1'
                                        */
  real_T Memory_X0_n;                  /* Expression: 0
                                        * Referenced by: '<S634>/Memory'
                                        */
  real_T Saturation01_UpperSat;        /* Expression: 1
                                        * Referenced by: '<S530>/Saturation 0-1'
                                        */
  real_T Saturation01_LowerSat;        /* Expression: 0
                                        * Referenced by: '<S530>/Saturation 0-1'
                                        */
  real_T Saturation_UpperSat_pu;       /* Expression: 1
                                        * Referenced by: '<S578>/Saturation'
                                        */
  real_T Saturation_LowerSat_ji;       /* Expression: 0
                                        * Referenced by: '<S578>/Saturation'
                                        */
  real_T TCon_Value;                   /* Expression: TC_On
                                        * Referenced by: '<S528>/TC on'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S568>/Switch'
                                        */
  real_T Constant2_Value_m;            /* Expression: TV_Mode
                                        * Referenced by: '<S570>/Constant2'
                                        */
  real_T muRoad_Value;                 /* Expression: 1.6
                                        * Referenced by: '<S588>/muRoad'
                                        */
  real_T Gravity_Gain;                 /* Expression: 9.81
                                        * Referenced by: '<S588>/Gravity'
                                        */
  real_T Override_Gain;                /* Expression: TV_Override
                                        * Referenced by: '<S588>/Override'
                                        */
  real_T vomegar_Gain;                 /* Expression: 0.5 * 2* pi *(1/60)*Reifenradius
                                        * Referenced by: '<S532>/v = omega*r'
                                        */
  real_T mskmh_Gain;                   /* Expression: 3.6
                                        * Referenced by: '<S532>/m//s -> km//h'
                                        */
  real_T kmhms_Gain;                   /* Expression: 1/3.6
                                        * Referenced by: '<S570>/kmh-ms'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0
                                        * Referenced by: '<S588>/Switch'
                                        */
  real_T GyroZeroOffset_Value;         /* Expression: 0
                                        * Referenced by: '<S80>/Gyro Zero Offset'
                                        */
  real_T Bitdegs_Gain;                 /* Expression: 1
                                        * Referenced by: '<S80>/Bit-->deg//s'
                                        */
  real_T degrad_Gain;                  /* Expression: 2*pi/360
                                        * Referenced by: '<S570>/deg-rad'
                                        */
  real_T Gain_Gain_b;                  /* Expression: -1
                                        * Referenced by: '<S588>/Gain'
                                        */
  real_T LookupTable_XData[13];        /* Expression: [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1,2,3,4]
                                        * Referenced by: '<S588>/Lookup Table'
                                        */
  real_T LookupTable_YData[13];        /* Expression: [0,0,0.05,0.1,0.2,0.3,0.4,0.5,0.6,0.7,1,1,1]
                                        * Referenced by: '<S588>/Lookup Table'
                                        */
  real_T Gain1_Gain_j5;                /* Expression: M_max
                                        * Referenced by: '<S588>/Gain1'
                                        */
  real_T LenkwinkelRadeinschlagwinkel_Ga;/* Expression: 1/i_Lenkgetriebe
                                          * Referenced by: '<S570>/Lenkwinkel-->Radeinschlagwinkel'
                                          */
  real_T degrad1_Gain;                 /* Expression: 2*pi/360
                                        * Referenced by: '<S570>/deg-rad1'
                                        */
  real_T Radstand_Value;               /* Expression: lr+lf
                                        * Referenced by: '<S589>/Radstand'
                                        */
  real_T Eigenlenkgradient_Value;      /* Expression: m*(cr*lr-cf*lf)/(cr*cf*(lr+lf))
                                        * Referenced by: '<S589>/Eigenlenkgradient'
                                        */
  real_T Faktor_Value;                 /* Expression: 1
                                        * Referenced by: '<S589>/Faktor'
                                        */
  real_T Gravity2_Gain;                /* Expression: K_SET
                                        * Referenced by: '<S570>/Gravity2'
                                        */
  real_T emGM_A;                       /* Computed Parameter: emGM_A
                                        * Referenced by: '<S584>/em*GM'
                                        */
  real_T emGM_C;                       /* Computed Parameter: emGM_C
                                        * Referenced by: '<S584>/em*GM'
                                        */
  real_T emGMX_A;                      /* Computed Parameter: emGMX_A
                                        * Referenced by: '<S584>/em*GM*X²'
                                        */
  real_T emGMX_C;                      /* Computed Parameter: emGMX_C
                                        * Referenced by: '<S584>/em*GM*X²'
                                        */
  real_T ModelReference4_A;            /* Computed Parameter: ModelReference4_A
                                        * Referenced by: '<S586>/ModelReference4'
                                        */
  real_T ModelReference4_C;            /* Computed Parameter: ModelReference4_C
                                        * Referenced by: '<S586>/ModelReference4'
                                        */
  real_T ModelReference2_A;            /* Computed Parameter: ModelReference2_A
                                        * Referenced by: '<S586>/ModelReference2'
                                        */
  real_T ModelReference2_C;            /* Computed Parameter: ModelReference2_C
                                        * Referenced by: '<S586>/ModelReference2'
                                        */
  real_T ModelReference4_A_j;          /* Computed Parameter: ModelReference4_A_j
                                        * Referenced by: '<S585>/ModelReference4'
                                        */
  real_T ModelReference4_C_e;          /* Computed Parameter: ModelReference4_C_e
                                        * Referenced by: '<S585>/ModelReference4'
                                        */
  real_T ModelReference2_A_g;          /* Computed Parameter: ModelReference2_A_g
                                        * Referenced by: '<S585>/ModelReference2'
                                        */
  real_T ModelReference2_C_l;          /* Computed Parameter: ModelReference2_C_l
                                        * Referenced by: '<S585>/ModelReference2'
                                        */
  real_T ModelReference1_A;            /* Computed Parameter: ModelReference1_A
                                        * Referenced by: '<S585>/ModelReference1'
                                        */
  real_T ModelReference1_C;            /* Computed Parameter: ModelReference1_C
                                        * Referenced by: '<S585>/ModelReference1'
                                        */
  real_T RateTransition1_X0_k;         /* Expression: 0
                                        * Referenced by: '<S593>/Rate Transition1'
                                        */
  real_T Saturation_UpperSat_ol;       /* Expression: M_max
                                        * Referenced by: '<S587>/Saturation'
                                        */
  real_T Saturation_LowerSat_a;        /* Expression: -M_max
                                        * Referenced by: '<S587>/Saturation'
                                        */
  real_T Gainlinks_Gain;               /* Expression: 1
                                        * Referenced by: '<S590>/Gain links'
                                        */
  real_T Saturation1_UpperSat_o;       /* Expression: 0
                                        * Referenced by: '<S587>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_ar;      /* Expression: -M_max
                                        * Referenced by: '<S587>/Saturation1'
                                        */
  real_T Constant3_Value_p;            /* Expression: 0
                                        * Referenced by: '<S570>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: TV_On
                                        * Referenced by: '<S570>/Constant4'
                                        */
  real_T GyroTimeout_Value_e;          /* Expression: 1000
                                        * Referenced by: '<S80>/Gyro Timeout'
                                        */
  real_T Constant1_Value_a;            /* Expression: 0
                                        * Referenced by: '<S570>/Constant1'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: -g
                                        * Referenced by: '<S528>/Gain2'
                                        */
  real_T Saturation_UpperSat_j;        /* Expression: 0
                                        * Referenced by: '<S528>/Saturation'
                                        */
  real_T Saturation_LowerSat_e;        /* Expression: -M_max
                                        * Referenced by: '<S528>/Saturation'
                                        */
  real_T Saturation1_UpperSat_f;       /* Expression: M_max
                                        * Referenced by: '<S528>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_n;       /* Expression: 0
                                        * Referenced by: '<S528>/Saturation1'
                                        */
  real_T Gain1_Gain_m;                 /* Expression: 1/i_Getriebe
                                        * Referenced by: '<S532>/Gain1'
                                        */
  real_T Saturation1_UpperSat_b4;      /* Expression: 1
                                        * Referenced by: '<S532>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_e;       /* Expression: 0
                                        * Referenced by: '<S532>/Saturation1'
                                        */
  real_T Relay_OnVal_c;                /* Expression: TC_Relay_On
                                        * Referenced by: '<S581>/Relay'
                                        */
  real_T Relay_OffVal_g;               /* Expression: TC_Relay_Off
                                        * Referenced by: '<S581>/Relay'
                                        */
  real_T Relay_YOn_p;                  /* Expression: 1
                                        * Referenced by: '<S581>/Relay'
                                        */
  real_T Relay_YOff_i;                 /* Expression: 0
                                        * Referenced by: '<S581>/Relay'
                                        */
  real_T Delay_InitialCondition_n;     /* Expression: 0
                                        * Referenced by: '<S581>/Delay'
                                        */
  real_T Saturation_UpperSat_m;        /* Expression: 1
                                        * Referenced by: '<S581>/Saturation'
                                        */
  real_T Saturation_LowerSat_ax;       /* Expression: 0
                                        * Referenced by: '<S581>/Saturation'
                                        */
  real_T Switch_Threshold_d;           /* Expression: 0
                                        * Referenced by: '<S569>/Switch'
                                        */
  real_T Constant2_Value_k;            /* Expression: TV_Mode
                                        * Referenced by: '<S571>/Constant2'
                                        */
  real_T muRoad_Value_e;               /* Expression: 1.6
                                        * Referenced by: '<S603>/muRoad'
                                        */
  real_T Gravity_Gain_i;               /* Expression: 9.81
                                        * Referenced by: '<S603>/Gravity'
                                        */
  real_T Override_Gain_i;              /* Expression: TV_Override
                                        * Referenced by: '<S603>/Override'
                                        */
  real_T kmhms_Gain_a;                 /* Expression: 1/3.6
                                        * Referenced by: '<S571>/kmh-ms'
                                        */
  real_T Switch_Threshold_i;           /* Expression: 0
                                        * Referenced by: '<S603>/Switch'
                                        */
  real_T degrad_Gain_n;                /* Expression: 2*pi/360
                                        * Referenced by: '<S571>/deg-rad'
                                        */
  real_T Gain_Gain_c;                  /* Expression: -1
                                        * Referenced by: '<S603>/Gain'
                                        */
  real_T LookupTable_XData_m[13];      /* Expression: [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1,2,3,4]
                                        * Referenced by: '<S603>/Lookup Table'
                                        */
  real_T LookupTable_YData_a[13];      /* Expression: [0,0,0.05,0.1,0.2,0.3,0.4,0.5,0.6,0.7,1,1,1]
                                        * Referenced by: '<S603>/Lookup Table'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: M_max
                                        * Referenced by: '<S603>/Gain1'
                                        */
  real_T LenkwinkelRadeinschlagwinkel__j;/* Expression: 1/i_Lenkgetriebe
                                          * Referenced by: '<S571>/Lenkwinkel-->Radeinschlagwinkel'
                                          */
  real_T degrad1_Gain_c;               /* Expression: 2*pi/360
                                        * Referenced by: '<S571>/deg-rad1'
                                        */
  real_T Radstand_Value_n;             /* Expression: lr+lf
                                        * Referenced by: '<S604>/Radstand'
                                        */
  real_T Eigenlenkgradient_Value_m;    /* Expression: m*(cr*lr-cf*lf)/(cr*cf*(lr+lf))
                                        * Referenced by: '<S604>/Eigenlenkgradient'
                                        */
  real_T Faktor_Value_n;               /* Expression: 1
                                        * Referenced by: '<S604>/Faktor'
                                        */
  real_T Gravity2_Gain_e;              /* Expression: K_SET
                                        * Referenced by: '<S571>/Gravity2'
                                        */
  real_T emGM_A_e;                     /* Computed Parameter: emGM_A_e
                                        * Referenced by: '<S599>/em*GM'
                                        */
  real_T emGM_C_i;                     /* Computed Parameter: emGM_C_i
                                        * Referenced by: '<S599>/em*GM'
                                        */
  real_T emGMX_A_c;                    /* Computed Parameter: emGMX_A_c
                                        * Referenced by: '<S599>/em*GM*X²'
                                        */
  real_T emGMX_C_m;                    /* Computed Parameter: emGMX_C_m
                                        * Referenced by: '<S599>/em*GM*X²'
                                        */
  real_T ModelReference4_A_p;          /* Computed Parameter: ModelReference4_A_p
                                        * Referenced by: '<S601>/ModelReference4'
                                        */
  real_T ModelReference4_C_m;          /* Computed Parameter: ModelReference4_C_m
                                        * Referenced by: '<S601>/ModelReference4'
                                        */
  real_T ModelReference2_A_k;          /* Computed Parameter: ModelReference2_A_k
                                        * Referenced by: '<S601>/ModelReference2'
                                        */
  real_T ModelReference2_C_g;          /* Computed Parameter: ModelReference2_C_g
                                        * Referenced by: '<S601>/ModelReference2'
                                        */
  real_T ModelReference4_A_c;          /* Computed Parameter: ModelReference4_A_c
                                        * Referenced by: '<S600>/ModelReference4'
                                        */
  real_T ModelReference4_C_c;          /* Computed Parameter: ModelReference4_C_c
                                        * Referenced by: '<S600>/ModelReference4'
                                        */
  real_T ModelReference2_A_f;          /* Computed Parameter: ModelReference2_A_f
                                        * Referenced by: '<S600>/ModelReference2'
                                        */
  real_T ModelReference2_C_a;          /* Computed Parameter: ModelReference2_C_a
                                        * Referenced by: '<S600>/ModelReference2'
                                        */
  real_T ModelReference1_A_n;          /* Computed Parameter: ModelReference1_A_n
                                        * Referenced by: '<S600>/ModelReference1'
                                        */
  real_T ModelReference1_C_a;          /* Computed Parameter: ModelReference1_C_a
                                        * Referenced by: '<S600>/ModelReference1'
                                        */
  real_T RateTransition1_X0_a;         /* Expression: 0
                                        * Referenced by: '<S608>/Rate Transition1'
                                        */
  real_T Saturation_UpperSat_f;        /* Expression: M_max
                                        * Referenced by: '<S602>/Saturation'
                                        */
  real_T Saturation_LowerSat_f;        /* Expression: -M_max
                                        * Referenced by: '<S602>/Saturation'
                                        */
  real_T Gainrechts_Gain;              /* Expression: 1
                                        * Referenced by: '<S605>/Gain rechts'
                                        */
  real_T Saturation1_UpperSat_i4;      /* Expression: 0
                                        * Referenced by: '<S602>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_a1;      /* Expression: -M_max
                                        * Referenced by: '<S602>/Saturation1'
                                        */
  real_T Constant3_Value_d;            /* Expression: 0
                                        * Referenced by: '<S571>/Constant3'
                                        */
  real_T Constant4_Value_b;            /* Expression: TV_On
                                        * Referenced by: '<S571>/Constant4'
                                        */
  real_T Constant1_Value_l;            /* Expression: 0
                                        * Referenced by: '<S571>/Constant1'
                                        */
  real_T Gain4_Gain_i;                 /* Expression: g
                                        * Referenced by: '<S528>/Gain4'
                                        */
  real_T Saturation2_UpperSat_f;       /* Expression: 0
                                        * Referenced by: '<S528>/Saturation2'
                                        */
  real_T Saturation2_LowerSat_c;       /* Expression: -M_max
                                        * Referenced by: '<S528>/Saturation2'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: M_max
                                        * Referenced by: '<S528>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S528>/Saturation3'
                                        */
  real_T PowerLimitonoff_Value;        /* Expression: Power_Limit_onoff
                                        * Referenced by: '<S528>/Power Limit onoff'
                                        */
  real_T u1Abit_Gain;                  /* Expression: 1/10
                                        * Referenced by: '<S84>/0,1 A//bit'
                                        */
  real_T Constant2_Value_n;            /* Expression: HV_Power_max
                                        * Referenced by: '<S565>/Constant2'
                                        */
  real_T u80_UpperSat;                 /* Expression: 80
                                        * Referenced by: '<S565>/0-80'
                                        */
  real_T u80_LowerSat;                 /* Expression: 0
                                        * Referenced by: '<S565>/0-80'
                                        */
  real_T ResetTageswerte_Value;        /* Expression: 0
                                        * Referenced by: '<S531>/Reset Tageswerte'
                                        */
  real_T DiscreteTimeIntegrator1_gainval;/* Computed Parameter: DiscreteTimeIntegrator1_gainval
                                          * Referenced by: '<S534>/Discrete-Time Integrator1'
                                          */
  real_T DiscreteTimeIntegrator1_IC;   /* Expression: 0
                                        * Referenced by: '<S534>/Discrete-Time Integrator1'
                                        */
  real_T WsWh_Gain;                    /* Expression: 1/3600
                                        * Referenced by: '<S534>/Ws->Wh'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S531>/Switch1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;/* Computed Parameter: DiscreteTimeIntegrator_gainval
                                         * Referenced by: '<S656>/Discrete-Time Integrator'
                                         */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<S656>/Discrete-Time Integrator'
                                        */
  real_T s_m_Gain;                     /* Expression: 1
                                        * Referenced by: '<S656>/s_m'
                                        */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S531>/Switch'
                                        */
  real_T Constant4_Value_k;            /* Expression: Derating_Start_km
                                        * Referenced by: '<S573>/Constant4'
                                        */
  real_T Safety_Derateing_Value;       /* Expression: 1
                                        * Referenced by: '<S573>/Safety_Derateing'
                                        */
  real_T Constant3_Value_i;            /* Expression: Derating_HV_Battery_Kapa
                                        * Referenced by: '<S573>/Constant3'
                                        */
  real_T Constant2_Value_cq;           /* Expression: Drive_Mode
                                        * Referenced by: '<S573>/Constant2'
                                        */
  real_T Map_Reichweite_Derating_Rev1_ta[11];/* Expression: [1;0.9;0.8;0.8;0.8;0.8;0.8;0.7;0.7;0.7;0.7]
                                              * Referenced by: '<S573>/Map_Reichweite_Derating_Rev1'
                                              */
  real_T Map_Reichweite_Derating_Rev1_bp[11];/* Expression: [0;1;2;3;4;5;6;7;8;9;10]
                                              * Referenced by: '<S573>/Map_Reichweite_Derating_Rev1'
                                              */
  real_T u1_UpperSat;                  /* Expression: 1
                                        * Referenced by: '<S565>/0-1'
                                        */
  real_T u1_LowerSat;                  /* Expression: 0
                                        * Referenced by: '<S565>/0-1'
                                        */
  real_T kWW_Gain;                     /* Expression: 1000
                                        * Referenced by: '<S567>/kW-W'
                                        */
  real_T PowerLimitkW2_Value;          /* Expression: 0.1
                                        * Referenced by: '<S567>/PowerLimit [kW]2'
                                        */
  real_T halbeGesamtleistungproMotor_Gai;/* Expression: 0.5
                                          * Referenced by: '<S567>/halbe Gesamtleistung pro Motor'
                                          */
  real_T rpmrads_Gain;                 /* Expression: 2*pi/60
                                        * Referenced by: '<S532>/rpm-rad//s'
                                        */
  real_T radsRPM_Gain;                 /* Expression: 60/2*pi
                                        * Referenced by: '<S567>/rad//s -> RPM'
                                        */
  real_T eps_Value;                    /* Expression: 0.1
                                        * Referenced by: '<S567>/eps'
                                        */
  real_T RPM1s_Gain;                   /* Expression: 2*pi/(60)
                                        * Referenced by: '<S567>/RPM-1//s'
                                        */
  real_T rpmrads1_Gain;                /* Expression: 2*pi/60
                                        * Referenced by: '<S532>/rpm-rad//s1'
                                        */
  real_T radsRPM1_Gain;                /* Expression: 60/2*pi
                                        * Referenced by: '<S567>/rad//s -> RPM1'
                                        */
  real_T RPM1s1_Gain;                  /* Expression: 2*pi/(60)
                                        * Referenced by: '<S567>/RPM-1//s1'
                                        */
  real_T Switch_Threshold_mi;          /* Expression: 0
                                        * Referenced by: '<S533>/Switch'
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
  real_T Gain1_Gain_d;                 /* Expression: 32767
                                        * Referenced by: '<S54>/Gain1'
                                        */
  real_T Constant1_Value_p;            /* Expression: 200
                                        * Referenced by: '<S54>/Constant1'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: -32767
                                        * Referenced by: '<S54>/Gain2'
                                        */
  real_T Constant2_Value_ge;           /* Expression: 200
                                        * Referenced by: '<S54>/Constant2'
                                        */
  real_T PulseGenerator_Amp_o;         /* Expression: 1
                                        * Referenced by: '<S529>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_c;      /* Computed Parameter: PulseGenerator_Period_c
                                        * Referenced by: '<S529>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_h;        /* Computed Parameter: PulseGenerator_Duty_h
                                        * Referenced by: '<S529>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_j;  /* Expression: 0
                                        * Referenced by: '<S529>/Pulse Generator'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 11
                                        * Referenced by: '<S529>/Switch'
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
                                        * Referenced by: '<S91>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_gg;    /* Expression: 1
                                        * Referenced by: '<S91>/Prev. msg. sent value'
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
                                        * Referenced by: '<S264>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_b2;    /* Expression: 1
                                        * Referenced by: '<S264>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_df;      /* Expression: 0.055
                                        * Referenced by: '<S265>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mr;    /* Expression: 1
                                        * Referenced by: '<S265>/Prev. msg. sent value'
                                        */
  real_T Timeoutsamples_Value_e;       /* Expression: 2000
                                        * Referenced by: '<S79>/Timeout//samples'
                                        */
  real_T Deltatimelimit_Value_oz;      /* Expression: 0.055
                                        * Referenced by: '<S268>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_pd;    /* Expression: 1
                                        * Referenced by: '<S268>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_fn;                 /* Expression: 1
                                        * Referenced by: '<S282>/Gain'
                                        */
  real_T Errorfield_Gain;              /* Expression: 1
                                        * Referenced by: '<S80>/Errorfield'
                                        */
  real_T Gain10_Gain;                  /* Expression: 1
                                        * Referenced by: '<S287>/Gain10'
                                        */
  real_T Gain_Gain_da;                 /* Expression: 1
                                        * Referenced by: '<S290>/Gain'
                                        */
  real_T Gain11_Gain;                  /* Expression: 1
                                        * Referenced by: '<S287>/Gain11'
                                        */
  real_T Gain_Gain_pm;                 /* Expression: 1
                                        * Referenced by: '<S291>/Gain'
                                        */
  real_T Gain9_Gain;                   /* Expression: 1
                                        * Referenced by: '<S287>/Gain9'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 1
                                        * Referenced by: '<S292>/Gain'
                                        */
  real_T Gain1_Gain_jw;                /* Expression: 1
                                        * Referenced by: '<S287>/Gain1'
                                        */
  real_T Gain_Gain_p1;                 /* Expression: 1
                                        * Referenced by: '<S293>/Gain'
                                        */
  real_T Nodatavalue_Value;            /* Expression: 0
                                        * Referenced by: '<S299>/No data value'
                                        */
  real_T Newdatavalue_Value;           /* Expression: 1
                                        * Referenced by: '<S299>/New data value'
                                        */
  real_T Deltatimelimit_Value_oi;      /* Expression: 0.055
                                        * Referenced by: '<S299>/Delta time limit'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain2'
                                        */
  real_T Gain3_Gain_j;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain3'
                                        */
  real_T Gain5_Gain_m;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain5'
                                        */
  real_T Gain6_Gain_k;                 /* Expression: 1
                                        * Referenced by: '<S287>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: 1
                                        * Referenced by: '<S287>/Gain7'
                                        */
  real_T Gain8_Gain;                   /* Expression: 1
                                        * Referenced by: '<S287>/Gain8'
                                        */
  real_T Gain9_Gain_g;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain9'
                                        */
  real_T Gain_Gain_f5;                 /* Expression: 1
                                        * Referenced by: '<S370>/Gain'
                                        */
  real_T Nodatavalue_Value_l;          /* Expression: 0
                                        * Referenced by: '<S376>/No data value'
                                        */
  real_T Newdatavalue_Value_a;         /* Expression: 1
                                        * Referenced by: '<S376>/New data value'
                                        */
  real_T Deltatimelimit_Value_nb;      /* Expression: 0.055
                                        * Referenced by: '<S376>/Delta time limit'
                                        */
  real_T Gain1_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain1'
                                        */
  real_T Gain10_Gain_i;                /* Expression: 1
                                        * Referenced by: '<S288>/Gain10'
                                        */
  real_T Gain11_Gain_a;                /* Expression: 1
                                        * Referenced by: '<S288>/Gain11'
                                        */
  real_T Gain2_Gain_h;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain2'
                                        */
  real_T Gain3_Gain_jv;                /* Expression: 1
                                        * Referenced by: '<S288>/Gain3'
                                        */
  real_T Gain5_Gain_e;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain5'
                                        */
  real_T Gain6_Gain_c;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain6'
                                        */
  real_T Gain7_Gain_g;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain7'
                                        */
  real_T Gain8_Gain_h;                 /* Expression: 1
                                        * Referenced by: '<S288>/Gain8'
                                        */
  real_T InvCorrection_Gain_d;         /* Expression: 1
                                        * Referenced by: '<S288>/InvCorrection'
                                        */
  real_T Gain_Gain_ow;                 /* Expression: 1
                                        * Referenced by: '<S443>/Gain'
                                        */
  real_T Constant_Value_jw;            /* Expression: 1
                                        * Referenced by: '<S468>/Constant'
                                        */
  real_T TTemp_Value;                  /* Expression: 0.5
                                        * Referenced by: '<S463>/TTemp'
                                        */
  real_T WeightedSampleTime_WtEt_fn;   /* Computed Parameter: WeightedSampleTime_WtEt_fn
                                        * Referenced by: '<S468>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_mh;           /* Expression: 1
                                        * Referenced by: '<S468>/Constant2'
                                        */
  real_T KTemp_Value;                  /* Expression: 1
                                        * Referenced by: '<S463>/KTemp'
                                        */
  real_T T1_Value;                     /* Expression: 298.15
                                        * Referenced by: '<S463>/T1'
                                        */
  real_T T2_Value;                     /* Expression: 1
                                        * Referenced by: '<S463>/T2'
                                        */
  real_T R25_Value;                    /* Expression: 10000
                                        * Referenced by: '<S463>/R25'
                                        */
  real_T UrefADC_Gain;                 /* Expression: 5.0
                                        * Referenced by: '<S461>/UrefADC'
                                        */
  real_T Spannungsteiler_Gain;         /* Expression: 5 * 5.512195 * 1.06451
                                        * Referenced by: '<S448>/Spannungsteiler'
                                        */
  real_T T25_Value;                    /* Expression: 298.15
                                        * Referenced by: '<S463>/T25'
                                        */
  real_T BETA_Value;                   /* Expression: 3976
                                        * Referenced by: '<S463>/BETA'
                                        */
  real_T T0_Value;                     /* Expression: 273.15
                                        * Referenced by: '<S463>/T0'
                                        */
  real_T Memory_X0_a;                  /* Expression: 0
                                        * Referenced by: '<S467>/Memory'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 1
                                        * Referenced by: '<S459>/Gain'
                                        */
  real_T Gain_Gain_gm;                 /* Expression: 1
                                        * Referenced by: '<S460>/Gain'
                                        */
  real_T Constant_Value_k;             /* Expression: 1
                                        * Referenced by: '<S470>/Constant'
                                        */
  real_T TTemp_Value_i;                /* Expression: 0.2
                                        * Referenced by: '<S464>/TTemp'
                                        */
  real_T WeightedSampleTime_WtEt_az;   /* Computed Parameter: WeightedSampleTime_WtEt_az
                                        * Referenced by: '<S470>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ef;           /* Expression: 1
                                        * Referenced by: '<S470>/Constant2'
                                        */
  real_T KTemp_Value_f;                /* Expression: 1
                                        * Referenced by: '<S464>/KTemp'
                                        */
  real_T T1_Value_l;                   /* Expression: 298.15
                                        * Referenced by: '<S464>/T1'
                                        */
  real_T T2_Value_g;                   /* Expression: 1
                                        * Referenced by: '<S464>/T2'
                                        */
  real_T R25_Value_h;                  /* Expression: 10000
                                        * Referenced by: '<S464>/R25'
                                        */
  real_T UrefADC_Gain_m;               /* Expression: 5.0
                                        * Referenced by: '<S462>/UrefADC'
                                        */
  real_T T25_Value_n;                  /* Expression: 298.15
                                        * Referenced by: '<S464>/T25'
                                        */
  real_T BETA_Value_k;                 /* Expression: 3976
                                        * Referenced by: '<S464>/BETA'
                                        */
  real_T T0_Value_j;                   /* Expression: 273.15
                                        * Referenced by: '<S464>/T0'
                                        */
  real_T Memory_X0_aj;                 /* Expression: 0
                                        * Referenced by: '<S469>/Memory'
                                        */
  real_T Gain_Gain_gn;                 /* Expression: 1
                                        * Referenced by: '<S448>/Gain'
                                        */
  real_T Deltatimelimit_Value_kj;      /* Expression: 0.055
                                        * Referenced by: '<S485>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_e;     /* Expression: 1
                                        * Referenced by: '<S485>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_lh;      /* Expression: 0.055
                                        * Referenced by: '<S486>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_j1;    /* Expression: 1
                                        * Referenced by: '<S486>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_ma;      /* Expression: 0.055
                                        * Referenced by: '<S487>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_mk;    /* Expression: 1
                                        * Referenced by: '<S487>/Prev. msg. sent value'
                                        */
  real_T Gain1_Gain_oi;                /* Expression: 1/255
                                        * Referenced by: '<S85>/Gain1'
                                        */
  real_T Deltatimelimit_Value_hl;      /* Expression: 0.055
                                        * Referenced by: '<S498>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_of;    /* Expression: 1
                                        * Referenced by: '<S498>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_ea;      /* Expression: 0.055
                                        * Referenced by: '<S499>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_n;     /* Expression: 1
                                        * Referenced by: '<S499>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_dc;                 /* Expression: 1
                                        * Referenced by: '<S502>/Gain'
                                        */
  real_T Gain_Gain_eh;                 /* Expression: 1
                                        * Referenced by: '<S503>/Gain'
                                        */
  real_T Gain_Gain_fq;                 /* Expression: 1
                                        * Referenced by: '<S504>/Gain'
                                        */
  real_T Deltatimelimit_Value_eq;      /* Expression: 0.055
                                        * Referenced by: '<S507>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_ej;    /* Expression: 1
                                        * Referenced by: '<S507>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_e3;      /* Expression: 0.055
                                        * Referenced by: '<S508>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_i;     /* Expression: 1
                                        * Referenced by: '<S508>/Prev. msg. sent value'
                                        */
  real_T Deltatimelimit_Value_or;      /* Expression: 0.055
                                        * Referenced by: '<S509>/Delta time limit'
                                        */
  real_T Prevmsgsentvalue_Value_p2;    /* Expression: 1
                                        * Referenced by: '<S509>/Prev. msg. sent value'
                                        */
  real_T Gain_Gain_dau;                /* Expression: 1
                                        * Referenced by: '<S544>/Gain'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 1
                                        * Referenced by: '<S545>/Gain'
                                        */
  real_T Gain_Gain_or;                 /* Expression: 1
                                        * Referenced by: '<S566>/Gain'
                                        */
  real_T ModelReference_A;             /* Computed Parameter: ModelReference_A
                                        * Referenced by: '<S584>/ModelReference'
                                        */
  real_T ModelReference_C;             /* Computed Parameter: ModelReference_C
                                        * Referenced by: '<S584>/ModelReference'
                                        */
  real_T Gain_Gain_k3;                 /* Expression: -1
                                        * Referenced by: '<S585>/Gain'
                                        */
  real_T ModelReference_A_h;           /* Computed Parameter: ModelReference_A_h
                                        * Referenced by: '<S585>/ModelReference'
                                        */
  real_T ModelReference_C_p;           /* Computed Parameter: ModelReference_C_p
                                        * Referenced by: '<S585>/ModelReference'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: y
                                        * Referenced by: '<S585>/Gain1'
                                        */
  real_T ModelReference3_A;            /* Computed Parameter: ModelReference3_A
                                        * Referenced by: '<S585>/ModelReference3'
                                        */
  real_T ModelReference3_C;            /* Computed Parameter: ModelReference3_C
                                        * Referenced by: '<S585>/ModelReference3'
                                        */
  real_T Gain_Gain_l2;                 /* Expression: -1
                                        * Referenced by: '<S586>/Gain'
                                        */
  real_T ModelReference_A_i;           /* Computed Parameter: ModelReference_A_i
                                        * Referenced by: '<S586>/ModelReference'
                                        */
  real_T ModelReference_C_g;           /* Computed Parameter: ModelReference_C_g
                                        * Referenced by: '<S586>/ModelReference'
                                        */
  real_T Gain1_Gain_dn;                /* Expression: y
                                        * Referenced by: '<S586>/Gain1'
                                        */
  real_T ModelReference1_A_i;          /* Computed Parameter: ModelReference1_A_i
                                        * Referenced by: '<S586>/ModelReference1'
                                        */
  real_T ModelReference1_C_i;          /* Computed Parameter: ModelReference1_C_i
                                        * Referenced by: '<S586>/ModelReference1'
                                        */
  real_T ModelReference3_A_c;          /* Computed Parameter: ModelReference3_A_c
                                        * Referenced by: '<S586>/ModelReference3'
                                        */
  real_T ModelReference3_C_b;          /* Computed Parameter: ModelReference3_C_b
                                        * Referenced by: '<S586>/ModelReference3'
                                        */
  real_T degrad_Gain_b;                /* Expression: 2*pi/360
                                        * Referenced by: '<S591>/deg-rad'
                                        */
  real_T EGEinlenkgradient_Value;      /* Expression: 0.0025
                                        * Referenced by: '<S591>/EG Einlenkgradient'
                                        */
  real_T lRadstand_Value;              /* Expression: 1.53
                                        * Referenced by: '<S591>/l Radstand'
                                        */
  real_T raddeg_Gain;                  /* Expression: 360/(2*pi)
                                        * Referenced by: '<S591>/rad-deg'
                                        */
  real_T Gain_Gain_pn;                 /* Expression: 1
                                        * Referenced by: '<S592>/Gain'
                                        */
  real_T degrad1_Gain_d;               /* Expression: 1/5
                                        * Referenced by: '<S591>/deg-rad1'
                                        */
  real_T K_OpenLoop1_Gain;             /* Expression: 0.25
                                        * Referenced by: '<S593>/K_OpenLoop1'
                                        */
  real_T uJzrdynbri_Gain;              /* Expression: 2*105.33*0.228/(1.15*1.8)
                                        * Referenced by: '<S593>/2*Jz*rdyn//(br*i)'
                                        */
  real_T K_ClosedLoop_Gain;            /* Expression: 1
                                        * Referenced by: '<S593>/K_ClosedLoop'
                                        */
  real_T Integrator_gainval_n;         /* Computed Parameter: Integrator_gainval_n
                                        * Referenced by: '<S596>/Integrator'
                                        */
  real_T Integrator_IC_b;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S596>/Integrator'
                                        */
  real_T Filter_gainval;               /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S596>/Filter'
                                        */
  real_T Filter_IC;                    /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S596>/Filter'
                                        */
  real_T Filter_gainval_b;             /* Computed Parameter: Filter_gainval_b
                                        * Referenced by: '<S597>/Filter'
                                        */
  real_T Filter_IC_n;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S597>/Filter'
                                        */
  real_T Integrator_gainval_g;         /* Computed Parameter: Integrator_gainval_g
                                        * Referenced by: '<S597>/Integrator'
                                        */
  real_T Integrator_IC_o;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S597>/Integrator'
                                        */
  real_T Filter_gainval_p;             /* Computed Parameter: Filter_gainval_p
                                        * Referenced by: '<S598>/Filter'
                                        */
  real_T Filter_IC_l;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S598>/Filter'
                                        */
  real_T Integrator_gainval_h;         /* Computed Parameter: Integrator_gainval_h
                                        * Referenced by: '<S598>/Integrator'
                                        */
  real_T Integrator_IC_h;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S598>/Integrator'
                                        */
  real_T ModelReference_A_m;           /* Computed Parameter: ModelReference_A_m
                                        * Referenced by: '<S599>/ModelReference'
                                        */
  real_T ModelReference_C_go;          /* Computed Parameter: ModelReference_C_go
                                        * Referenced by: '<S599>/ModelReference'
                                        */
  real_T Gain_Gain_n;                  /* Expression: -1
                                        * Referenced by: '<S600>/Gain'
                                        */
  real_T ModelReference_A_l;           /* Computed Parameter: ModelReference_A_l
                                        * Referenced by: '<S600>/ModelReference'
                                        */
  real_T ModelReference_C_n;           /* Computed Parameter: ModelReference_C_n
                                        * Referenced by: '<S600>/ModelReference'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: y
                                        * Referenced by: '<S600>/Gain1'
                                        */
  real_T ModelReference3_A_f;          /* Computed Parameter: ModelReference3_A_f
                                        * Referenced by: '<S600>/ModelReference3'
                                        */
  real_T ModelReference3_C_l;          /* Computed Parameter: ModelReference3_C_l
                                        * Referenced by: '<S600>/ModelReference3'
                                        */
  real_T Gain_Gain_cw;                 /* Expression: -1
                                        * Referenced by: '<S601>/Gain'
                                        */
  real_T ModelReference_A_a;           /* Computed Parameter: ModelReference_A_a
                                        * Referenced by: '<S601>/ModelReference'
                                        */
  real_T ModelReference_C_a;           /* Computed Parameter: ModelReference_C_a
                                        * Referenced by: '<S601>/ModelReference'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: y
                                        * Referenced by: '<S601>/Gain1'
                                        */
  real_T ModelReference1_A_k;          /* Computed Parameter: ModelReference1_A_k
                                        * Referenced by: '<S601>/ModelReference1'
                                        */
  real_T ModelReference1_C_f;          /* Computed Parameter: ModelReference1_C_f
                                        * Referenced by: '<S601>/ModelReference1'
                                        */
  real_T ModelReference3_A_j;          /* Computed Parameter: ModelReference3_A_j
                                        * Referenced by: '<S601>/ModelReference3'
                                        */
  real_T ModelReference3_C_o;          /* Computed Parameter: ModelReference3_C_o
                                        * Referenced by: '<S601>/ModelReference3'
                                        */
  real_T degrad_Gain_nd;               /* Expression: 2*pi/360
                                        * Referenced by: '<S606>/deg-rad'
                                        */
  real_T EGEinlenkgradient_Value_h;    /* Expression: 0.0025
                                        * Referenced by: '<S606>/EG Einlenkgradient'
                                        */
  real_T lRadstand_Value_a;            /* Expression: 1.53
                                        * Referenced by: '<S606>/l Radstand'
                                        */
  real_T raddeg_Gain_o;                /* Expression: 360/(2*pi)
                                        * Referenced by: '<S606>/rad-deg'
                                        */
  real_T Gain_Gain_l2x;                /* Expression: 1
                                        * Referenced by: '<S607>/Gain'
                                        */
  real_T degrad1_Gain_g;               /* Expression: 1/5
                                        * Referenced by: '<S606>/deg-rad1'
                                        */
  real_T K_OpenLoop1_Gain_d;           /* Expression: 0.25
                                        * Referenced by: '<S608>/K_OpenLoop1'
                                        */
  real_T uJzrdynbri_Gain_h;            /* Expression: 2*105.33*0.228/(1.15*1.8)
                                        * Referenced by: '<S608>/2*Jz*rdyn//(br*i)'
                                        */
  real_T K_ClosedLoop_Gain_m;          /* Expression: 1
                                        * Referenced by: '<S608>/K_ClosedLoop'
                                        */
  real_T Integrator_gainval_gy;        /* Computed Parameter: Integrator_gainval_gy
                                        * Referenced by: '<S611>/Integrator'
                                        */
  real_T Integrator_IC_k;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S611>/Integrator'
                                        */
  real_T Filter_gainval_f;             /* Computed Parameter: Filter_gainval_f
                                        * Referenced by: '<S611>/Filter'
                                        */
  real_T Filter_IC_o;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S611>/Filter'
                                        */
  real_T Filter_gainval_c;             /* Computed Parameter: Filter_gainval_c
                                        * Referenced by: '<S612>/Filter'
                                        */
  real_T Filter_IC_g;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S612>/Filter'
                                        */
  real_T Integrator_gainval_f;         /* Computed Parameter: Integrator_gainval_f
                                        * Referenced by: '<S612>/Integrator'
                                        */
  real_T Integrator_IC_e;              /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S612>/Integrator'
                                        */
  real_T Filter_gainval_k;             /* Computed Parameter: Filter_gainval_k
                                        * Referenced by: '<S613>/Filter'
                                        */
  real_T Filter_IC_j;                  /* Expression: InitialConditionForFilter
                                        * Referenced by: '<S613>/Filter'
                                        */
  real_T Integrator_gainval_hd;        /* Computed Parameter: Integrator_gainval_hd
                                        * Referenced by: '<S613>/Integrator'
                                        */
  real_T Integrator_IC_b1;             /* Expression: InitialConditionForIntegrator
                                        * Referenced by: '<S613>/Integrator'
                                        */
  real_T M_max_Value;                  /* Expression: M_max
                                        * Referenced by: '<S528>/M_max'
                                        */
  real_T Constant1_Value_fa;           /* Expression: 1
                                        * Referenced by: '<S572>/Constant1'
                                        */
  real_T Constant2_Value_bg;           /* Expression: 1
                                        * Referenced by: '<S572>/Constant2'
                                        */
  real_T M_max_Value_d;                /* Expression: M_max
                                        * Referenced by: '<S572>/M_max'
                                        */
  real_T MinTorque_Value;              /* Expression: 0
                                        * Referenced by: '<S572>/MinTorque'
                                        */
  real_T Memory_X0_k;                  /* Expression: 0
                                        * Referenced by: '<S618>/Memory'
                                        */
  real_T Constant_Value_p;             /* Expression: 1
                                        * Referenced by: '<S623>/Constant'
                                        */
  real_T TFilterTorqueRise_Value;      /* Expression: 0.1
                                        * Referenced by: '<S572>/TFilterTorqueRise'
                                        */
  real_T TFilterTorqueFall_Value;      /* Expression: 0.01
                                        * Referenced by: '<S572>/TFilterTorqueFall'
                                        */
  real_T WeightedSampleTime_WtEt_pa;   /* Computed Parameter: WeightedSampleTime_WtEt_pa
                                        * Referenced by: '<S623>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_ip;           /* Expression: 1
                                        * Referenced by: '<S623>/Constant2'
                                        */
  real_T Memory_X0_i;                  /* Expression: 0
                                        * Referenced by: '<S619>/Memory'
                                        */
  real_T Constant_Value_hb;            /* Expression: 1
                                        * Referenced by: '<S624>/Constant'
                                        */
  real_T WeightedSampleTime_WtEt_c;    /* Computed Parameter: WeightedSampleTime_WtEt_c
                                        * Referenced by: '<S624>/Weighted Sample Time'
                                        */
  real_T Constant2_Value_o;            /* Expression: 1
                                        * Referenced by: '<S624>/Constant2'
                                        */
  real_T Gain_Gain_p5;                 /* Expression: 100
                                        * Referenced by: '<S627>/Gain'
                                        */
  real_T Constant_Value_ma;            /* Expression: 0
                                        * Referenced by: '<S630>/Constant'
                                        */
  real_T Constant_Value_i2;            /* Expression: 0
                                        * Referenced by: '<S631>/Constant'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 1
                                        * Referenced by: '<S649>/Gain'
                                        */
  real_T Gain_Gain_jl;                 /* Expression: 1
                                        * Referenced by: '<S650>/Gain'
                                        */
  real_T Gain_Gain_dh;                 /* Expression: 1
                                        * Referenced by: '<S651>/Gain'
                                        */
  real_T Gain_Gain_mo;                 /* Expression: 1
                                        * Referenced by: '<S652>/Gain'
                                        */
  real_T Gain_Gain_pr;                 /* Expression: 1
                                        * Referenced by: '<S653>/Gain'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 1
                                        * Referenced by: '<S654>/Gain'
                                        */
  real_T Gain_Gain_n2;                 /* Expression: 1
                                        * Referenced by: '<S655>/Gain'
                                        */
  real_T Gain_Gain_lh;                 /* Expression: 1
                                        * Referenced by: '<S664>/Gain'
                                        */
  real_T grer0_UpperSat;               /* Expression: 100
                                        * Referenced by: '<S532>/größer 0'
                                        */
  real_T grer0_LowerSat;               /* Expression: 0
                                        * Referenced by: '<S532>/größer 0'
                                        */
  real_T Gain_Gain_em;                 /* Expression: 1
                                        * Referenced by: '<S666>/Gain'
                                        */
  real_T Gain_Gain_jj;                 /* Expression: 1
                                        * Referenced by: '<S667>/Gain'
                                        */
  real_T DiscreteTimeIntegrator_gainva_a;/* Computed Parameter: DiscreteTimeIntegrator_gainva_a
                                          * Referenced by: '<S534>/Discrete-Time Integrator'
                                          */
  real_T DiscreteTimeIntegrator_IC_g;  /* Expression: 0
                                        * Referenced by: '<S534>/Discrete-Time Integrator'
                                        */
  real_T Gain_Gain_if;                 /* Expression: 1
                                        * Referenced by: '<S668>/Gain'
                                        */
  real_T Gain_Gain_he;                 /* Expression: 1
                                        * Referenced by: '<S669>/Gain'
                                        */
  real_T Gain_Gain_pp;                 /* Expression: 1
                                        * Referenced by: '<S670>/Gain'
                                        */
  real_T Gain_Gain_oo;                 /* Expression: 1
                                        * Referenced by: '<S701>/Gain'
                                        */
  real_T Gain_Gain_an;                 /* Expression: 1
                                        * Referenced by: '<S702>/Gain'
                                        */
  real_T CAN1Recovery_Value;           /* Expression: 0
                                        * Referenced by: '<S3>/CAN 1 Recovery'
                                        */
  uint32_T Constant_Value_fe;          /* Computed Parameter: Constant_Value_fe
                                        * Referenced by: '<S310>/Constant'
                                        */
  uint32_T Constant_Value_cc;          /* Computed Parameter: Constant_Value_cc
                                        * Referenced by: '<S311>/Constant'
                                        */
  uint32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S312>/Constant'
                                        */
  uint32_T Constant_Value_fw;          /* Computed Parameter: Constant_Value_fw
                                        * Referenced by: '<S313>/Constant'
                                        */
  uint32_T Constant_Value_f5;          /* Computed Parameter: Constant_Value_f5
                                        * Referenced by: '<S314>/Constant'
                                        */
  uint32_T Constant_Value_ce;          /* Computed Parameter: Constant_Value_ce
                                        * Referenced by: '<S315>/Constant'
                                        */
  uint32_T Constant_Value_ij;          /* Computed Parameter: Constant_Value_ij
                                        * Referenced by: '<S316>/Constant'
                                        */
  uint32_T Constant_Value_a1;          /* Computed Parameter: Constant_Value_a1
                                        * Referenced by: '<S317>/Constant'
                                        */
  uint32_T Constant_Value_aw;          /* Computed Parameter: Constant_Value_aw
                                        * Referenced by: '<S318>/Constant'
                                        */
  uint32_T Constant_Value_ed;          /* Computed Parameter: Constant_Value_ed
                                        * Referenced by: '<S319>/Constant'
                                        */
  uint32_T Constant_Value_mn;          /* Computed Parameter: Constant_Value_mn
                                        * Referenced by: '<S320>/Constant'
                                        */
  uint32_T Constant_Value_ln;          /* Computed Parameter: Constant_Value_ln
                                        * Referenced by: '<S321>/Constant'
                                        */
  uint32_T Constant_Value_in;          /* Computed Parameter: Constant_Value_in
                                        * Referenced by: '<S322>/Constant'
                                        */
  uint32_T Constant_Value_b3;          /* Computed Parameter: Constant_Value_b3
                                        * Referenced by: '<S323>/Constant'
                                        */
  uint32_T Constant_Value_pf;          /* Computed Parameter: Constant_Value_pf
                                        * Referenced by: '<S324>/Constant'
                                        */
  uint32_T Constant_Value_ie;          /* Computed Parameter: Constant_Value_ie
                                        * Referenced by: '<S325>/Constant'
                                        */
  uint32_T Constant_Value_awf;         /* Computed Parameter: Constant_Value_awf
                                        * Referenced by: '<S326>/Constant'
                                        */
  uint32_T Constant_Value_fz;          /* Computed Parameter: Constant_Value_fz
                                        * Referenced by: '<S327>/Constant'
                                        */
  uint32_T Constant_Value_mo;          /* Computed Parameter: Constant_Value_mo
                                        * Referenced by: '<S328>/Constant'
                                        */
  uint32_T Constant_Value_ir;          /* Computed Parameter: Constant_Value_ir
                                        * Referenced by: '<S329>/Constant'
                                        */
  uint32_T Constant_Value_ct;          /* Computed Parameter: Constant_Value_ct
                                        * Referenced by: '<S330>/Constant'
                                        */
  uint32_T Constant_Value_hk;          /* Computed Parameter: Constant_Value_hk
                                        * Referenced by: '<S331>/Constant'
                                        */
  uint32_T Constant_Value_g;           /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S332>/Constant'
                                        */
  uint32_T Constant_Value_jv;          /* Computed Parameter: Constant_Value_jv
                                        * Referenced by: '<S333>/Constant'
                                        */
  uint32_T Constant_Value_ax;          /* Computed Parameter: Constant_Value_ax
                                        * Referenced by: '<S334>/Constant'
                                        */
  uint32_T Constant_Value_es;          /* Computed Parameter: Constant_Value_es
                                        * Referenced by: '<S335>/Constant'
                                        */
  uint32_T Constant_Value_nc;          /* Computed Parameter: Constant_Value_nc
                                        * Referenced by: '<S336>/Constant'
                                        */
  uint32_T Constant_Value_aa;          /* Computed Parameter: Constant_Value_aa
                                        * Referenced by: '<S337>/Constant'
                                        */
  uint32_T Constant_Value_ih;          /* Computed Parameter: Constant_Value_ih
                                        * Referenced by: '<S338>/Constant'
                                        */
  uint32_T Constant_Value_ni;          /* Computed Parameter: Constant_Value_ni
                                        * Referenced by: '<S339>/Constant'
                                        */
  uint32_T Constant_Value_ef;          /* Computed Parameter: Constant_Value_ef
                                        * Referenced by: '<S340>/Constant'
                                        */
  uint32_T Constant_Value_le;          /* Computed Parameter: Constant_Value_le
                                        * Referenced by: '<S341>/Constant'
                                        */
  uint32_T Constant_Value_pu;          /* Computed Parameter: Constant_Value_pu
                                        * Referenced by: '<S384>/Constant'
                                        */
  uint32_T Constant_Value_ih0;         /* Computed Parameter: Constant_Value_ih0
                                        * Referenced by: '<S385>/Constant'
                                        */
  uint32_T Constant_Value_be;          /* Computed Parameter: Constant_Value_be
                                        * Referenced by: '<S386>/Constant'
                                        */
  uint32_T Constant_Value_ph;          /* Computed Parameter: Constant_Value_ph
                                        * Referenced by: '<S387>/Constant'
                                        */
  uint32_T Constant_Value_jl;          /* Computed Parameter: Constant_Value_jl
                                        * Referenced by: '<S388>/Constant'
                                        */
  uint32_T Constant_Value_dm;          /* Computed Parameter: Constant_Value_dm
                                        * Referenced by: '<S389>/Constant'
                                        */
  uint32_T Constant_Value_au;          /* Computed Parameter: Constant_Value_au
                                        * Referenced by: '<S390>/Constant'
                                        */
  uint32_T Constant_Value_fu;          /* Computed Parameter: Constant_Value_fu
                                        * Referenced by: '<S391>/Constant'
                                        */
  uint32_T Constant_Value_dt;          /* Computed Parameter: Constant_Value_dt
                                        * Referenced by: '<S392>/Constant'
                                        */
  uint32_T Constant_Value_o;           /* Computed Parameter: Constant_Value_o
                                        * Referenced by: '<S393>/Constant'
                                        */
  uint32_T Constant_Value_lnh;         /* Computed Parameter: Constant_Value_lnh
                                        * Referenced by: '<S394>/Constant'
                                        */
  uint32_T Constant_Value_bo;          /* Computed Parameter: Constant_Value_bo
                                        * Referenced by: '<S395>/Constant'
                                        */
  uint32_T Constant_Value_bx;          /* Computed Parameter: Constant_Value_bx
                                        * Referenced by: '<S396>/Constant'
                                        */
  uint32_T Constant_Value_hy;          /* Computed Parameter: Constant_Value_hy
                                        * Referenced by: '<S397>/Constant'
                                        */
  uint32_T Constant_Value_jwe;         /* Computed Parameter: Constant_Value_jwe
                                        * Referenced by: '<S398>/Constant'
                                        */
  uint32_T Constant_Value_al;          /* Computed Parameter: Constant_Value_al
                                        * Referenced by: '<S399>/Constant'
                                        */
  uint32_T Constant_Value_hf;          /* Computed Parameter: Constant_Value_hf
                                        * Referenced by: '<S400>/Constant'
                                        */
  uint32_T Constant_Value_il;          /* Computed Parameter: Constant_Value_il
                                        * Referenced by: '<S401>/Constant'
                                        */
  uint32_T Constant_Value_ky;          /* Computed Parameter: Constant_Value_ky
                                        * Referenced by: '<S402>/Constant'
                                        */
  uint32_T Constant_Value_cs;          /* Computed Parameter: Constant_Value_cs
                                        * Referenced by: '<S403>/Constant'
                                        */
  uint32_T Constant_Value_hv;          /* Computed Parameter: Constant_Value_hv
                                        * Referenced by: '<S404>/Constant'
                                        */
  uint32_T Constant_Value_jr;          /* Computed Parameter: Constant_Value_jr
                                        * Referenced by: '<S405>/Constant'
                                        */
  uint32_T Constant_Value_k5;          /* Computed Parameter: Constant_Value_k5
                                        * Referenced by: '<S406>/Constant'
                                        */
  uint32_T Constant_Value_p1;          /* Computed Parameter: Constant_Value_p1
                                        * Referenced by: '<S407>/Constant'
                                        */
  uint32_T Constant_Value_da;          /* Computed Parameter: Constant_Value_da
                                        * Referenced by: '<S408>/Constant'
                                        */
  uint32_T Constant_Value_kt;          /* Computed Parameter: Constant_Value_kt
                                        * Referenced by: '<S409>/Constant'
                                        */
  uint32_T Constant_Value_ay;          /* Computed Parameter: Constant_Value_ay
                                        * Referenced by: '<S410>/Constant'
                                        */
  uint32_T Constant_Value_md;          /* Computed Parameter: Constant_Value_md
                                        * Referenced by: '<S411>/Constant'
                                        */
  uint32_T Constant_Value_oe;          /* Computed Parameter: Constant_Value_oe
                                        * Referenced by: '<S412>/Constant'
                                        */
  uint32_T Constant_Value_kw;          /* Computed Parameter: Constant_Value_kw
                                        * Referenced by: '<S413>/Constant'
                                        */
  uint32_T Constant_Value_it;          /* Computed Parameter: Constant_Value_it
                                        * Referenced by: '<S414>/Constant'
                                        */
  uint32_T Constant_Value_ba;          /* Computed Parameter: Constant_Value_ba
                                        * Referenced by: '<S415>/Constant'
                                        */
  uint32_T Delay_DelayLength;          /* Computed Parameter: Delay_DelayLength
                                        * Referenced by: '<S578>/Delay'
                                        */
  uint32_T Delay_DelayLength_h;        /* Computed Parameter: Delay_DelayLength_h
                                        * Referenced by: '<S581>/Delay'
                                        */
  uint32_T Gain_Gain_l5;               /* Computed Parameter: Gain_Gain_l5
                                        * Referenced by: '<S575>/Gain'
                                        */
  uint32_T Gain_Gain_kh;               /* Computed Parameter: Gain_Gain_kh
                                        * Referenced by: '<S641>/Gain'
                                        */
  uint16_T ResetValue1_Value;          /* Computed Parameter: ResetValue1_Value
                                        * Referenced by: '<S531>/Reset Value1'
                                        */
  uint16_T ResetValue_Value;           /* Computed Parameter: ResetValue_Value
                                        * Referenced by: '<S531>/Reset Value'
                                        */
  uint16_T TXReg1_Value;               /* Computed Parameter: TXReg1_Value
                                        * Referenced by: '<S697>/TXReg1'
                                        */
  uint16_T TXReg2_Value;               /* Computed Parameter: TXReg2_Value
                                        * Referenced by: '<S697>/TXReg2'
                                        */
  uint16_T TXReg3_Value;               /* Computed Parameter: TXReg3_Value
                                        * Referenced by: '<S697>/TXReg3'
                                        */
  uint16_T TXReg4_Value;               /* Computed Parameter: TXReg4_Value
                                        * Referenced by: '<S697>/TXReg4'
                                        */
  uint16_T TXReg5_Value;               /* Computed Parameter: TXReg5_Value
                                        * Referenced by: '<S697>/TXReg5'
                                        */
  uint16_T TXReg6_Value;               /* Computed Parameter: TXReg6_Value
                                        * Referenced by: '<S697>/TXReg6'
                                        */
  uint16_T TXReg7_Value;               /* Computed Parameter: TXReg7_Value
                                        * Referenced by: '<S697>/TXReg7'
                                        */
  uint16_T TXReg8_Value;               /* Computed Parameter: TXReg8_Value
                                        * Referenced by: '<S697>/TXReg8'
                                        */
  uint16_T TXZeit1_Value;              /* Computed Parameter: TXZeit1_Value
                                        * Referenced by: '<S697>/TXZeit1'
                                        */
  uint16_T TXZeit2_Value;              /* Computed Parameter: TXZeit2_Value
                                        * Referenced by: '<S697>/TXZeit2'
                                        */
  uint16_T TXZeit3_Value;              /* Computed Parameter: TXZeit3_Value
                                        * Referenced by: '<S697>/TXZeit3'
                                        */
  uint16_T TXZeit4_Value;              /* Computed Parameter: TXZeit4_Value
                                        * Referenced by: '<S697>/TXZeit4'
                                        */
  uint16_T TXZeit5_Value;              /* Computed Parameter: TXZeit5_Value
                                        * Referenced by: '<S697>/TXZeit5'
                                        */
  uint16_T TXZeit6_Value;              /* Computed Parameter: TXZeit6_Value
                                        * Referenced by: '<S697>/TXZeit6'
                                        */
  uint16_T TXZeit7_Value;              /* Computed Parameter: TXZeit7_Value
                                        * Referenced by: '<S697>/TXZeit7'
                                        */
  uint16_T TXZeit8_Value;              /* Computed Parameter: TXZeit8_Value
                                        * Referenced by: '<S697>/TXZeit8'
                                        */
  uint16_T TXReg1_Value_h;             /* Computed Parameter: TXReg1_Value_h
                                        * Referenced by: '<S698>/TXReg1'
                                        */
  uint16_T TXReg2_Value_i;             /* Computed Parameter: TXReg2_Value_i
                                        * Referenced by: '<S698>/TXReg2'
                                        */
  uint16_T TXReg3_Value_d;             /* Computed Parameter: TXReg3_Value_d
                                        * Referenced by: '<S698>/TXReg3'
                                        */
  uint16_T TXReg4_Value_b;             /* Computed Parameter: TXReg4_Value_b
                                        * Referenced by: '<S698>/TXReg4'
                                        */
  uint16_T TXReg5_Value_k;             /* Computed Parameter: TXReg5_Value_k
                                        * Referenced by: '<S698>/TXReg5'
                                        */
  uint16_T TXReg6_Value_k;             /* Computed Parameter: TXReg6_Value_k
                                        * Referenced by: '<S698>/TXReg6'
                                        */
  uint16_T TXReg7_Value_h;             /* Computed Parameter: TXReg7_Value_h
                                        * Referenced by: '<S698>/TXReg7'
                                        */
  uint16_T TXReg8_Value_k;             /* Computed Parameter: TXReg8_Value_k
                                        * Referenced by: '<S698>/TXReg8'
                                        */
  uint16_T TXZeit1_Value_n;            /* Computed Parameter: TXZeit1_Value_n
                                        * Referenced by: '<S698>/TXZeit1'
                                        */
  uint16_T TXZeit2_Value_d;            /* Computed Parameter: TXZeit2_Value_d
                                        * Referenced by: '<S698>/TXZeit2'
                                        */
  uint16_T TXZeit3_Value_e;            /* Computed Parameter: TXZeit3_Value_e
                                        * Referenced by: '<S698>/TXZeit3'
                                        */
  uint16_T TXZeit4_Value_e;            /* Computed Parameter: TXZeit4_Value_e
                                        * Referenced by: '<S698>/TXZeit4'
                                        */
  uint16_T TXZeit5_Value_p;            /* Computed Parameter: TXZeit5_Value_p
                                        * Referenced by: '<S698>/TXZeit5'
                                        */
  uint16_T TXZeit6_Value_g;            /* Computed Parameter: TXZeit6_Value_g
                                        * Referenced by: '<S698>/TXZeit6'
                                        */
  uint16_T TXZeit7_Value_p;            /* Computed Parameter: TXZeit7_Value_p
                                        * Referenced by: '<S698>/TXZeit7'
                                        */
  uint16_T TXZeit8_Value_h;            /* Computed Parameter: TXZeit8_Value_h
                                        * Referenced by: '<S698>/TXZeit8'
                                        */
  int16_T Gain2_Gain_p;                /* Computed Parameter: Gain2_Gain_p
                                        * Referenced by: '<S300>/Gain2'
                                        */
  int16_T Gain2_Gain_dr;               /* Computed Parameter: Gain2_Gain_dr
                                        * Referenced by: '<S377>/Gain2'
                                        */
  uint16_T mkm_Gain;                   /* Computed Parameter: mkm_Gain
                                        * Referenced by: '<S573>/m->km'
                                        */
  uint8_T ManualSwitch_CurrentSetting; /* Computed Parameter: ManualSwitch_CurrentSetting
                                        * Referenced by: '<S593>/Manual Switch'
                                        */
  uint8_T ManualSwitch_CurrentSetting_c;/* Computed Parameter: ManualSwitch_CurrentSetting_c
                                         * Referenced by: '<S608>/Manual Switch'
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
                                        * Referenced by: '<S297>/_Ena'
                                        */
  boolean_T _NCR0_Y0;                  /* Computed Parameter: _NCR0_Y0
                                        * Referenced by: '<S297>/_NCR0'
                                        */
  boolean_T _Lim_Y0;                   /* Computed Parameter: _Lim_Y0
                                        * Referenced by: '<S297>/_Lim+'
                                        */
  boolean_T _Lim_Y0_j;                 /* Computed Parameter: _Lim_Y0_j
                                        * Referenced by: '<S297>/_Lim-'
                                        */
  boolean_T _OK_Y0;                    /* Computed Parameter: _OK_Y0
                                        * Referenced by: '<S297>/_OK'
                                        */
  boolean_T _Icns_Y0;                  /* Computed Parameter: _Icns_Y0
                                        * Referenced by: '<S297>/_Icns'
                                        */
  boolean_T _TNlim_Y0;                 /* Computed Parameter: _TNlim_Y0
                                        * Referenced by: '<S297>/_T-Nlim'
                                        */
  boolean_T _PN_Y0;                    /* Computed Parameter: _PN_Y0
                                        * Referenced by: '<S297>/_P-N'
                                        */
  boolean_T _NI_Y0;                    /* Computed Parameter: _NI_Y0
                                        * Referenced by: '<S297>/_N-I'
                                        */
  boolean_T _N0_Y0;                    /* Computed Parameter: _N0_Y0
                                        * Referenced by: '<S297>/_N0'
                                        */
  boolean_T _Rsw_Y0;                   /* Computed Parameter: _Rsw_Y0
                                        * Referenced by: '<S297>/_Rsw'
                                        */
  boolean_T _Cal0_Y0;                  /* Computed Parameter: _Cal0_Y0
                                        * Referenced by: '<S297>/_Cal0'
                                        */
  boolean_T _Cal_Y0;                   /* Computed Parameter: _Cal_Y0
                                        * Referenced by: '<S297>/_Cal'
                                        */
  boolean_T _Tol_Y0;                   /* Computed Parameter: _Tol_Y0
                                        * Referenced by: '<S297>/_Tol'
                                        */
  boolean_T _Rdy_Y0;                   /* Computed Parameter: _Rdy_Y0
                                        * Referenced by: '<S297>/_Rdy'
                                        */
  boolean_T _Brk_Y0;                   /* Computed Parameter: _Brk_Y0
                                        * Referenced by: '<S297>/_Brk'
                                        */
  boolean_T _SIGNMAG_Y0;               /* Computed Parameter: _SIGNMAG_Y0
                                        * Referenced by: '<S297>/_SIGNMAG'
                                        */
  boolean_T _Nclip_Y0;                 /* Computed Parameter: _Nclip_Y0
                                        * Referenced by: '<S297>/_Nclip'
                                        */
  boolean_T _Nclip_Y0_b;               /* Computed Parameter: _Nclip_Y0_b
                                        * Referenced by: '<S297>/_Nclip+'
                                        */
  boolean_T _Nclip_Y0_l;               /* Computed Parameter: _Nclip_Y0_l
                                        * Referenced by: '<S297>/_Nclip-'
                                        */
  boolean_T _IrdDig_Y0;                /* Computed Parameter: _IrdDig_Y0
                                        * Referenced by: '<S297>/_Ird-Dig'
                                        */
  boolean_T _Irdrchd_Y0;               /* Computed Parameter: _Irdrchd_Y0
                                        * Referenced by: '<S297>/_Ird-rchd'
                                        */
  boolean_T _IrdN_Y0;                  /* Computed Parameter: _IrdN_Y0
                                        * Referenced by: '<S297>/_Ird-N'
                                        */
  boolean_T _Ird_TI_Y0;                /* Computed Parameter: _Ird_TI_Y0
                                        * Referenced by: '<S297>/_Ird_TI'
                                        */
  boolean_T _Ird_TIR_Y0;               /* Computed Parameter: _Ird_TIR_Y0
                                        * Referenced by: '<S297>/_Ird_TIR'
                                        */
  boolean_T _2Hz_Y0;                   /* Computed Parameter: _2Hz_Y0
                                        * Referenced by: '<S297>/_2Hz'
                                        */
  boolean_T _IrdTM_Y0;                 /* Computed Parameter: _IrdTM_Y0
                                        * Referenced by: '<S297>/_Ird-TM'
                                        */
  boolean_T _IrdANA_Y0;                /* Computed Parameter: _IrdANA_Y0
                                        * Referenced by: '<S297>/_Ird-ANA'
                                        */
  boolean_T _Iwcns_Y0;                 /* Computed Parameter: _Iwcns_Y0
                                        * Referenced by: '<S297>/_Iwcns'
                                        */
  boolean_T _RFE_plus_Y0;              /* Computed Parameter: _RFE_plus_Y0
                                        * Referenced by: '<S297>/_RFE_plus'
                                        */
  boolean_T _frei_Y0;                  /* Computed Parameter: _frei_Y0
                                        * Referenced by: '<S297>/_frei'
                                        */
  boolean_T _Handrad_Y0;               /* Computed Parameter: _Handrad_Y0
                                        * Referenced by: '<S297>/_Handrad'
                                        */
  boolean_T _Ena_Y0_l;                 /* Computed Parameter: _Ena_Y0_l
                                        * Referenced by: '<S374>/_Ena'
                                        */
  boolean_T _NCR0_Y0_j;                /* Computed Parameter: _NCR0_Y0_j
                                        * Referenced by: '<S374>/_NCR0'
                                        */
  boolean_T _Lim_Y0_h;                 /* Computed Parameter: _Lim_Y0_h
                                        * Referenced by: '<S374>/_Lim+'
                                        */
  boolean_T _Lim_Y0_c;                 /* Computed Parameter: _Lim_Y0_c
                                        * Referenced by: '<S374>/_Lim-'
                                        */
  boolean_T _OK_Y0_f;                  /* Computed Parameter: _OK_Y0_f
                                        * Referenced by: '<S374>/_OK'
                                        */
  boolean_T _Icns_Y0_a;                /* Computed Parameter: _Icns_Y0_a
                                        * Referenced by: '<S374>/_Icns'
                                        */
  boolean_T _TNlim_Y0_p;               /* Computed Parameter: _TNlim_Y0_p
                                        * Referenced by: '<S374>/_T-Nlim'
                                        */
  boolean_T _PN_Y0_b;                  /* Computed Parameter: _PN_Y0_b
                                        * Referenced by: '<S374>/_P-N'
                                        */
  boolean_T _NI_Y0_g;                  /* Computed Parameter: _NI_Y0_g
                                        * Referenced by: '<S374>/_N-I'
                                        */
  boolean_T _N0_Y0_k;                  /* Computed Parameter: _N0_Y0_k
                                        * Referenced by: '<S374>/_N0'
                                        */
  boolean_T _Rsw_Y0_l;                 /* Computed Parameter: _Rsw_Y0_l
                                        * Referenced by: '<S374>/_Rsw'
                                        */
  boolean_T _Cal0_Y0_c;                /* Computed Parameter: _Cal0_Y0_c
                                        * Referenced by: '<S374>/_Cal0'
                                        */
  boolean_T _Cal_Y0_f;                 /* Computed Parameter: _Cal_Y0_f
                                        * Referenced by: '<S374>/_Cal'
                                        */
  boolean_T _Tol_Y0_e;                 /* Computed Parameter: _Tol_Y0_e
                                        * Referenced by: '<S374>/_Tol'
                                        */
  boolean_T _Rdy_Y0_b;                 /* Computed Parameter: _Rdy_Y0_b
                                        * Referenced by: '<S374>/_Rdy'
                                        */
  boolean_T _Brk_Y0_b;                 /* Computed Parameter: _Brk_Y0_b
                                        * Referenced by: '<S374>/_Brk'
                                        */
  boolean_T _SIGNMAG_Y0_d;             /* Computed Parameter: _SIGNMAG_Y0_d
                                        * Referenced by: '<S374>/_SIGNMAG'
                                        */
  boolean_T _Nclip_Y0_p;               /* Computed Parameter: _Nclip_Y0_p
                                        * Referenced by: '<S374>/_Nclip'
                                        */
  boolean_T _Nclip_Y0_bj;              /* Computed Parameter: _Nclip_Y0_bj
                                        * Referenced by: '<S374>/_Nclip+'
                                        */
  boolean_T _Nclip_Y0_k;               /* Computed Parameter: _Nclip_Y0_k
                                        * Referenced by: '<S374>/_Nclip-'
                                        */
  boolean_T _IrdDig_Y0_g;              /* Computed Parameter: _IrdDig_Y0_g
                                        * Referenced by: '<S374>/_Ird-Dig'
                                        */
  boolean_T _Irdrchd_Y0_j;             /* Computed Parameter: _Irdrchd_Y0_j
                                        * Referenced by: '<S374>/_Ird-rchd'
                                        */
  boolean_T _IrdN_Y0_o;                /* Computed Parameter: _IrdN_Y0_o
                                        * Referenced by: '<S374>/_Ird-N'
                                        */
  boolean_T _Ird_TI_Y0_a;              /* Computed Parameter: _Ird_TI_Y0_a
                                        * Referenced by: '<S374>/_Ird_TI'
                                        */
  boolean_T _Ird_TIR_Y0_d;             /* Computed Parameter: _Ird_TIR_Y0_d
                                        * Referenced by: '<S374>/_Ird_TIR'
                                        */
  boolean_T _2Hz_Y0_l;                 /* Computed Parameter: _2Hz_Y0_l
                                        * Referenced by: '<S374>/_2Hz'
                                        */
  boolean_T _IrdTM_Y0_i;               /* Computed Parameter: _IrdTM_Y0_i
                                        * Referenced by: '<S374>/_Ird-TM'
                                        */
  boolean_T _IrdANA_Y0_g;              /* Computed Parameter: _IrdANA_Y0_g
                                        * Referenced by: '<S374>/_Ird-ANA'
                                        */
  boolean_T _Iwcns_Y0_a;               /* Computed Parameter: _Iwcns_Y0_a
                                        * Referenced by: '<S374>/_Iwcns'
                                        */
  boolean_T _RFEplus_Y0;               /* Computed Parameter: _RFEplus_Y0
                                        * Referenced by: '<S374>/_RFE-plus'
                                        */
  boolean_T _frei_Y0_i;                /* Computed Parameter: _frei_Y0_i
                                        * Referenced by: '<S374>/_frei'
                                        */
  boolean_T _Handrad_Y0_i;             /* Computed Parameter: _Handrad_Y0_i
                                        * Referenced by: '<S374>/_Handrad'
                                        */
  boolean_T AMS_ErrorOut_Y0;           /* Computed Parameter: AMS_ErrorOut_Y0
                                        * Referenced by: '<S538>/AMS_ErrorOut'
                                        */
  boolean_T IMD_ErrorOut_Y0;           /* Computed Parameter: IMD_ErrorOut_Y0
                                        * Referenced by: '<S538>/IMD_ErrorOut'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S541>/Logic'
                                        */
  boolean_T Logic_table_k[16];         /* Computed Parameter: Logic_table_k
                                        * Referenced by: '<S542>/Logic'
                                        */
  boolean_T Constant_Value_m2;         /* Computed Parameter: Constant_Value_m2
                                        * Referenced by: '<S564>/Constant '
                                        */
  boolean_T LEDBarblinken_Value;       /* Computed Parameter: LEDBarblinken_Value
                                        * Referenced by: '<S527>/LED Bar blinken'
                                        */
  boolean_T Constant12_Value;          /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<S524>/Constant12'
                                        */
  boolean_T Constant11_Value;          /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S524>/Constant11'
                                        */
  boolean_T Constant10_Value;          /* Computed Parameter: Constant10_Value
                                        * Referenced by: '<S524>/Constant10'
                                        */
  boolean_T Constant9_Value;           /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S524>/Constant9'
                                        */
  boolean_T Constant8_Value;           /* Computed Parameter: Constant8_Value
                                        * Referenced by: '<S524>/Constant8'
                                        */
  boolean_T Constant7_Value;           /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S524>/Constant7'
                                        */
  boolean_T Constant6_Value;           /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S524>/Constant6'
                                        */
  boolean_T Constant5_Value;           /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S524>/Constant5'
                                        */
  boolean_T Constant4_Value_j;         /* Computed Parameter: Constant4_Value_j
                                        * Referenced by: '<S524>/Constant4'
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
                                        * Referenced by: '<S524>/Constant1'
                                        */
  boolean_T Constant14_Value;          /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S524>/Constant14'
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
                                        * Referenced by: '<S527>/LED Bar Mode'
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
                                        * Referenced by: '<S562>/Logic'
                                        */
  boolean_T Logic_table_p[16];         /* Computed Parameter: Logic_table_p
                                        * Referenced by: '<S580>/Logic'
                                        */
  boolean_T Logic_table_c[16];         /* Computed Parameter: Logic_table_c
                                        * Referenced by: '<S583>/Logic'
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
                                        * Referenced by: '<S91>/Mem1'
                                        */
  boolean_T Mem2_X0_f3;                /* Computed Parameter: Mem2_X0_f3
                                        * Referenced by: '<S91>/Mem2'
                                        */
  boolean_T Mem3_X0_fa;                /* Computed Parameter: Mem3_X0_fa
                                        * Referenced by: '<S91>/Mem3'
                                        */
  boolean_T Mem4_X0_fk;                /* Computed Parameter: Mem4_X0_fk
                                        * Referenced by: '<S91>/Mem4'
                                        */
  boolean_T Mem1_X0_m;                 /* Computed Parameter: Mem1_X0_m
                                        * Referenced by: '<S264>/Mem1'
                                        */
  boolean_T Mem2_X0_n;                 /* Computed Parameter: Mem2_X0_n
                                        * Referenced by: '<S264>/Mem2'
                                        */
  boolean_T Mem3_X0_cz;                /* Computed Parameter: Mem3_X0_cz
                                        * Referenced by: '<S264>/Mem3'
                                        */
  boolean_T Mem4_X0_kq;                /* Computed Parameter: Mem4_X0_kq
                                        * Referenced by: '<S264>/Mem4'
                                        */
  boolean_T Mem1_X0_g1;                /* Computed Parameter: Mem1_X0_g1
                                        * Referenced by: '<S265>/Mem1'
                                        */
  boolean_T Mem2_X0_p;                 /* Computed Parameter: Mem2_X0_p
                                        * Referenced by: '<S265>/Mem2'
                                        */
  boolean_T Mem3_X0_lz;                /* Computed Parameter: Mem3_X0_lz
                                        * Referenced by: '<S265>/Mem3'
                                        */
  boolean_T Mem4_X0_c0l;               /* Computed Parameter: Mem4_X0_c0l
                                        * Referenced by: '<S265>/Mem4'
                                        */
  boolean_T Mem1_X0_nd;                /* Computed Parameter: Mem1_X0_nd
                                        * Referenced by: '<S268>/Mem1'
                                        */
  boolean_T Mem2_X0_ov;                /* Computed Parameter: Mem2_X0_ov
                                        * Referenced by: '<S268>/Mem2'
                                        */
  boolean_T Mem3_X0_en;                /* Computed Parameter: Mem3_X0_en
                                        * Referenced by: '<S268>/Mem3'
                                        */
  boolean_T Mem4_X0_jb;                /* Computed Parameter: Mem4_X0_jb
                                        * Referenced by: '<S268>/Mem4'
                                        */
  boolean_T Mem1_X0_he;                /* Computed Parameter: Mem1_X0_he
                                        * Referenced by: '<S299>/Mem1'
                                        */
  boolean_T Mem2_X0_ca;                /* Computed Parameter: Mem2_X0_ca
                                        * Referenced by: '<S299>/Mem2'
                                        */
  boolean_T Mem3_X0_or;                /* Computed Parameter: Mem3_X0_or
                                        * Referenced by: '<S299>/Mem3'
                                        */
  boolean_T Mem4_X0_i;                 /* Computed Parameter: Mem4_X0_i
                                        * Referenced by: '<S299>/Mem4'
                                        */
  boolean_T Mem5_X0;                   /* Computed Parameter: Mem5_X0
                                        * Referenced by: '<S299>/Mem5'
                                        */
  boolean_T Mem1_X0_a;                 /* Computed Parameter: Mem1_X0_a
                                        * Referenced by: '<S376>/Mem1'
                                        */
  boolean_T Mem2_X0_fl;                /* Computed Parameter: Mem2_X0_fl
                                        * Referenced by: '<S376>/Mem2'
                                        */
  boolean_T Mem3_X0_i;                 /* Computed Parameter: Mem3_X0_i
                                        * Referenced by: '<S376>/Mem3'
                                        */
  boolean_T Mem4_X0_d;                 /* Computed Parameter: Mem4_X0_d
                                        * Referenced by: '<S376>/Mem4'
                                        */
  boolean_T Mem5_X0_a;                 /* Computed Parameter: Mem5_X0_a
                                        * Referenced by: '<S376>/Mem5'
                                        */
  boolean_T Mem1_X0_hc;                /* Computed Parameter: Mem1_X0_hc
                                        * Referenced by: '<S485>/Mem1'
                                        */
  boolean_T Mem2_X0_hk3;               /* Computed Parameter: Mem2_X0_hk3
                                        * Referenced by: '<S485>/Mem2'
                                        */
  boolean_T Mem3_X0_lq;                /* Computed Parameter: Mem3_X0_lq
                                        * Referenced by: '<S485>/Mem3'
                                        */
  boolean_T Mem4_X0_mc;                /* Computed Parameter: Mem4_X0_mc
                                        * Referenced by: '<S485>/Mem4'
                                        */
  boolean_T Mem1_X0_mr;                /* Computed Parameter: Mem1_X0_mr
                                        * Referenced by: '<S486>/Mem1'
                                        */
  boolean_T Mem2_X0_ia;                /* Computed Parameter: Mem2_X0_ia
                                        * Referenced by: '<S486>/Mem2'
                                        */
  boolean_T Mem3_X0_g;                 /* Computed Parameter: Mem3_X0_g
                                        * Referenced by: '<S486>/Mem3'
                                        */
  boolean_T Mem4_X0_e;                 /* Computed Parameter: Mem4_X0_e
                                        * Referenced by: '<S486>/Mem4'
                                        */
  boolean_T Mem1_X0_oy;                /* Computed Parameter: Mem1_X0_oy
                                        * Referenced by: '<S487>/Mem1'
                                        */
  boolean_T Mem2_X0_pt;                /* Computed Parameter: Mem2_X0_pt
                                        * Referenced by: '<S487>/Mem2'
                                        */
  boolean_T Mem3_X0_aj;                /* Computed Parameter: Mem3_X0_aj
                                        * Referenced by: '<S487>/Mem3'
                                        */
  boolean_T Mem4_X0_k1;                /* Computed Parameter: Mem4_X0_k1
                                        * Referenced by: '<S487>/Mem4'
                                        */
  boolean_T Mem1_X0_oa;                /* Computed Parameter: Mem1_X0_oa
                                        * Referenced by: '<S498>/Mem1'
                                        */
  boolean_T Mem2_X0_gr;                /* Computed Parameter: Mem2_X0_gr
                                        * Referenced by: '<S498>/Mem2'
                                        */
  boolean_T Mem3_X0_jn;                /* Computed Parameter: Mem3_X0_jn
                                        * Referenced by: '<S498>/Mem3'
                                        */
  boolean_T Mem4_X0_jh;                /* Computed Parameter: Mem4_X0_jh
                                        * Referenced by: '<S498>/Mem4'
                                        */
  boolean_T Mem1_X0_lc;                /* Computed Parameter: Mem1_X0_lc
                                        * Referenced by: '<S499>/Mem1'
                                        */
  boolean_T Mem2_X0_pm;                /* Computed Parameter: Mem2_X0_pm
                                        * Referenced by: '<S499>/Mem2'
                                        */
  boolean_T Mem3_X0_ie;                /* Computed Parameter: Mem3_X0_ie
                                        * Referenced by: '<S499>/Mem3'
                                        */
  boolean_T Mem4_X0_i4;                /* Computed Parameter: Mem4_X0_i4
                                        * Referenced by: '<S499>/Mem4'
                                        */
  boolean_T Mem1_X0_h4;                /* Computed Parameter: Mem1_X0_h4
                                        * Referenced by: '<S507>/Mem1'
                                        */
  boolean_T Mem2_X0_nr;                /* Computed Parameter: Mem2_X0_nr
                                        * Referenced by: '<S507>/Mem2'
                                        */
  boolean_T Mem3_X0_iy;                /* Computed Parameter: Mem3_X0_iy
                                        * Referenced by: '<S507>/Mem3'
                                        */
  boolean_T Mem4_X0_bf;                /* Computed Parameter: Mem4_X0_bf
                                        * Referenced by: '<S507>/Mem4'
                                        */
  boolean_T Mem1_X0_lt;                /* Computed Parameter: Mem1_X0_lt
                                        * Referenced by: '<S508>/Mem1'
                                        */
  boolean_T Mem2_X0_m1;                /* Computed Parameter: Mem2_X0_m1
                                        * Referenced by: '<S508>/Mem2'
                                        */
  boolean_T Mem3_X0_oo;                /* Computed Parameter: Mem3_X0_oo
                                        * Referenced by: '<S508>/Mem3'
                                        */
  boolean_T Mem4_X0_fa;                /* Computed Parameter: Mem4_X0_fa
                                        * Referenced by: '<S508>/Mem4'
                                        */
  boolean_T Mem1_X0_k;                 /* Computed Parameter: Mem1_X0_k
                                        * Referenced by: '<S509>/Mem1'
                                        */
  boolean_T Mem2_X0_ns;                /* Computed Parameter: Mem2_X0_ns
                                        * Referenced by: '<S509>/Mem2'
                                        */
  boolean_T Mem3_X0_p0;                /* Computed Parameter: Mem3_X0_p0
                                        * Referenced by: '<S509>/Mem3'
                                        */
  boolean_T Mem4_X0_lq;                /* Computed Parameter: Mem4_X0_lq
                                        * Referenced by: '<S509>/Mem4'
                                        */
  boolean_T Logic_table_kb[16];        /* Computed Parameter: Logic_table_kb
                                        * Referenced by: '<S621>/Logic'
                                        */
  boolean_T Logic_table_cf[16];        /* Computed Parameter: Logic_table_cf
                                        * Referenced by: '<S620>/Logic'
                                        */
  boolean_T Constant_Value_day;        /* Computed Parameter: Constant_Value_day
                                        * Referenced by: '<S679>/Constant'
                                        */
  boolean_T Constant_Value_k2;         /* Computed Parameter: Constant_Value_k2
                                        * Referenced by: '<S680>/Constant'
                                        */
  boolean_T Constant_Value_c3;         /* Computed Parameter: Constant_Value_c3
                                        * Referenced by: '<S681>/Constant'
                                        */
  uint8_T Gain_Gain_dz;                /* Computed Parameter: Gain_Gain_dz
                                        * Referenced by: '<S287>/Gain'
                                        */
  uint8_T Gain_Gain_nt;                /* Computed Parameter: Gain_Gain_nt
                                        * Referenced by: '<S288>/Gain'
                                        */
  uint8_T Gain_Gain_ix;                /* Computed Parameter: Gain_Gain_ix
                                        * Referenced by: '<S546>/Gain'
                                        */
  uint8_T Gain_Gain_ood;               /* Computed Parameter: Gain_Gain_ood
                                        * Referenced by: '<S540>/Gain'
                                        */
  uint8_T Gain1_Gain_h;                /* Computed Parameter: Gain1_Gain_h
                                        * Referenced by: '<S540>/Gain1'
                                        */
  uint8_T Gain2_Gain_c;                /* Computed Parameter: Gain2_Gain_c
                                        * Referenced by: '<S540>/Gain2'
                                        */
  uint8_T Gain3_Gain_b;                /* Computed Parameter: Gain3_Gain_b
                                        * Referenced by: '<S540>/Gain3'
                                        */
  uint8_T Gain4_Gain_p;                /* Computed Parameter: Gain4_Gain_p
                                        * Referenced by: '<S540>/Gain4'
                                        */
  uint8_T Gain5_Gain_d;                /* Computed Parameter: Gain5_Gain_d
                                        * Referenced by: '<S540>/Gain5'
                                        */
  uint8_T Gain6_Gain_cw;               /* Computed Parameter: Gain6_Gain_cw
                                        * Referenced by: '<S540>/Gain6'
                                        */
  uint8_T Gain7_Gain_k;                /* Computed Parameter: Gain7_Gain_k
                                        * Referenced by: '<S540>/Gain7'
                                        */
  uint8_T Gain10_Gain_b;               /* Computed Parameter: Gain10_Gain_b
                                        * Referenced by: '<S540>/Gain10'
                                        */
  uint8_T Gain11_Gain_g;               /* Computed Parameter: Gain11_Gain_g
                                        * Referenced by: '<S540>/Gain11'
                                        */
  uint8_T Gain12_Gain;                 /* Computed Parameter: Gain12_Gain
                                        * Referenced by: '<S540>/Gain12'
                                        */
  uint8_T Gain13_Gain;                 /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<S540>/Gain13'
                                        */
  uint8_T Gain8_Gain_j;                /* Computed Parameter: Gain8_Gain_j
                                        * Referenced by: '<S540>/Gain8'
                                        */
  uint8_T Gain9_Gain_k;                /* Computed Parameter: Gain9_Gain_k
                                        * Referenced by: '<S540>/Gain9'
                                        */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop;/* '<S693>/J-K Flip-Flop' */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_l;/* '<S691>/J-K Flip-Flop' */
  P_JKFlipFlop_DR18E_Testpult_T JKFlipFlop_n;/* '<S689>/J-K Flip-Flop' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_f;/* '<S497>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_i;/* '<S489>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem;/* '<S488>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_k;/* '<S444>/Triggered Subsystem' */
  P_Inverter_Temp_DR18E_Testpul_T Inverter_Temp_e;/* '<S288>/Inverter_Temp' */
  P_U_DC_DR18E_Testpult_T U_DC_o;      /* '<S288>/U_DC' */
  P_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_c;/* '<S288>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  P_WirkstromIq_DR18E_Testpult_T WirkstromIq_e;/* '<S288>/Wirkstrom Iq' */
  P_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl_k;/* '<S369>/Skalierung Drehzahl' */
  P_Inverter_Temp_DR18E_Testpul_T Inverter_Temp;/* '<S287>/Inverter_Temp' */
  P_U_DC_DR18E_Testpult_T U_DC;        /* '<S287>/U_DC' */
  P_RegID0x8FERRORWarningRegist_T RegID0x8FERRORWarningRegister_f;/* '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  P_WirkstromIq_DR18E_Testpult_T WirkstromIq;/* '<S287>/Wirkstrom Iq' */
  P_SkalierungDrehzahl_DR18E_Te_T SkalierungDrehzahl;/* '<S289>/Skalierung Drehzahl' */
  P_Subsystem_DR18E_Testpult_T TriggeredSubsystem_a;/* '<S283>/Triggered Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_gh;/* '<S278>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bp;/* '<S277>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_p;/* '<S276>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_cy;/* '<S271>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_kn;/* '<S258>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_dm;/* '<S257>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e;/* '<S256>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_oy;/* '<S249>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_o;/* '<S248>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_n4;/* '<S247>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_c;/* '<S238>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fq;/* '<S237>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fr;/* '<S236>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_be;/* '<S229>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_js;/* '<S228>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_gd;/* '<S227>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_a;/* '<S218>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_k;/* '<S217>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bk;/* '<S216>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_i;/* '<S209>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_b;/* '<S208>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_l;/* '<S207>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_n;/* '<S198>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_g;/* '<S197>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_j;/* '<S196>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_f;/* '<S189>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem;/* '<S188>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_d;/* '<S187>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_bek;/* '<S178>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e3;/* '<S177>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_kl;/* '<S176>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_lz;/* '<S169>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_m;/* '<S168>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nc;/* '<S167>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_h;/* '<S151>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ih;/* '<S150>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_jsn;/* '<S149>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_mf;/* '<S148>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_c0;/* '<S147>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fqo;/* '<S146>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_eq;/* '<S145>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ot;/* '<S144>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nw;/* '<S143>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ms;/* '<S142>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nx;/* '<S121>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_co;/* '<S120>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_la;/* '<S119>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_nm;/* '<S118>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_fe;/* '<S117>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_om;/* '<S116>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_dl;/* '<S115>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_im;/* '<S114>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_e1;/* '<S113>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ig;/* '<S112>/Subsystem' */
  P_Subsystem_DR18E_Testpult_T Subsystem_ld;/* '<S92>/Subsystem' */
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
 * '<S89>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/HV_MAXMIN'
 * '<S90>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Precharge_Status'
 * '<S91>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX OK Detection4'
 * '<S92>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX Timeout Detection2'
 * '<S93>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp '
 * '<S94>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp'
 * '<S95>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10'
 * '<S96>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2'
 * '<S97>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4'
 * '<S98>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6'
 * '<S99>'  : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8'
 * '<S100>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S101>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/RX Timeout Detection2/Subsystem'
 * '<S102>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK1A_Temp'
 * '<S103>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK1B_Temp'
 * '<S104>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK2A_Temp'
 * '<S105>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK2B_Temp'
 * '<S106>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK3A_Temp'
 * '<S107>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK3B_Temp'
 * '<S108>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK4A_Temp'
 * '<S109>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK4B_Temp'
 * '<S110>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK5A_Temp'
 * '<S111>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /HV_STK5B_Temp'
 * '<S112>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection1'
 * '<S113>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection10'
 * '<S114>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection2'
 * '<S115>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection3'
 * '<S116>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection4'
 * '<S117>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection5'
 * '<S118>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection6'
 * '<S119>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection7'
 * '<S120>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection8'
 * '<S121>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection9'
 * '<S122>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection1/Subsystem'
 * '<S123>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection10/Subsystem'
 * '<S124>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection2/Subsystem'
 * '<S125>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection3/Subsystem'
 * '<S126>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection4/Subsystem'
 * '<S127>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection5/Subsystem'
 * '<S128>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection6/Subsystem'
 * '<S129>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection7/Subsystem'
 * '<S130>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection8/Subsystem'
 * '<S131>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK1-5_Temp /RX Timeout Detection9/Subsystem'
 * '<S132>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK10A_Temp'
 * '<S133>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK10B_Temp'
 * '<S134>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK6A_Temp'
 * '<S135>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK6B_Temp'
 * '<S136>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK7A_Temp'
 * '<S137>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK7B_Temp'
 * '<S138>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK8A_Temp'
 * '<S139>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK8B_Temp'
 * '<S140>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK9A_Temp'
 * '<S141>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/HV_STK9B_Temp'
 * '<S142>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection1'
 * '<S143>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection10'
 * '<S144>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection2'
 * '<S145>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection3'
 * '<S146>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection4'
 * '<S147>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection5'
 * '<S148>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection6'
 * '<S149>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection7'
 * '<S150>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection8'
 * '<S151>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection9'
 * '<S152>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection1/Subsystem'
 * '<S153>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection10/Subsystem'
 * '<S154>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection2/Subsystem'
 * '<S155>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection3/Subsystem'
 * '<S156>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection4/Subsystem'
 * '<S157>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection5/Subsystem'
 * '<S158>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection6/Subsystem'
 * '<S159>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection7/Subsystem'
 * '<S160>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection8/Subsystem'
 * '<S161>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/STK6-10_Temp/RX Timeout Detection9/Subsystem'
 * '<S162>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10'
 * '<S163>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9'
 * '<S164>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10A'
 * '<S165>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10B'
 * '<S166>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/HV_STK10C'
 * '<S167>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection'
 * '<S168>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection1'
 * '<S169>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection2'
 * '<S170>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection/Subsystem'
 * '<S171>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection1/Subsystem'
 * '<S172>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 10/RX Timeout Detection2/Subsystem'
 * '<S173>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9A'
 * '<S174>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9B'
 * '<S175>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/HV_STK9C'
 * '<S176>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection'
 * '<S177>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection1'
 * '<S178>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection2'
 * '<S179>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection/Subsystem'
 * '<S180>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection1/Subsystem'
 * '<S181>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage 9-10/Voltage Stack 9/RX Timeout Detection2/Subsystem'
 * '<S182>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1'
 * '<S183>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2'
 * '<S184>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1A'
 * '<S185>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1B'
 * '<S186>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/HV_STK1C'
 * '<S187>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection'
 * '<S188>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection1'
 * '<S189>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection2'
 * '<S190>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection/Subsystem'
 * '<S191>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection1/Subsystem'
 * '<S192>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 1/RX Timeout Detection2/Subsystem'
 * '<S193>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2A'
 * '<S194>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2B'
 * '<S195>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/HV_STK2C'
 * '<S196>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection'
 * '<S197>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection1'
 * '<S198>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection2'
 * '<S199>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection/Subsystem'
 * '<S200>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection1/Subsystem'
 * '<S201>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 1-2/Voltage Stack 2/RX Timeout Detection2/Subsystem'
 * '<S202>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3'
 * '<S203>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4'
 * '<S204>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3A'
 * '<S205>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3B'
 * '<S206>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/HV_STK3C'
 * '<S207>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection'
 * '<S208>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection1'
 * '<S209>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection2'
 * '<S210>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection/Subsystem'
 * '<S211>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection1/Subsystem'
 * '<S212>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 3/RX Timeout Detection2/Subsystem'
 * '<S213>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4A'
 * '<S214>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4B'
 * '<S215>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/HV_STK4C'
 * '<S216>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection'
 * '<S217>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection1'
 * '<S218>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection2'
 * '<S219>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection/Subsystem'
 * '<S220>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection1/Subsystem'
 * '<S221>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 3-4/Voltage Stack 4/RX Timeout Detection2/Subsystem'
 * '<S222>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5'
 * '<S223>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6'
 * '<S224>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5A'
 * '<S225>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5B'
 * '<S226>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/HV_STK5C'
 * '<S227>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection'
 * '<S228>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection1'
 * '<S229>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection2'
 * '<S230>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection/Subsystem'
 * '<S231>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection1/Subsystem'
 * '<S232>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 5/RX Timeout Detection2/Subsystem'
 * '<S233>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6A'
 * '<S234>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6B'
 * '<S235>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/HV_STK6C'
 * '<S236>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection'
 * '<S237>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection1'
 * '<S238>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection2'
 * '<S239>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection/Subsystem'
 * '<S240>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection1/Subsystem'
 * '<S241>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 5-6/Voltage Stack 6/RX Timeout Detection2/Subsystem'
 * '<S242>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7'
 * '<S243>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8'
 * '<S244>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7A'
 * '<S245>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7B'
 * '<S246>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/HV_STK7C'
 * '<S247>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection'
 * '<S248>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection1'
 * '<S249>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection2'
 * '<S250>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection/Subsystem'
 * '<S251>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection1/Subsystem'
 * '<S252>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 7/RX Timeout Detection2/Subsystem'
 * '<S253>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8A'
 * '<S254>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8B'
 * '<S255>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/HV_STK8C'
 * '<S256>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection'
 * '<S257>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection1'
 * '<S258>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection2'
 * '<S259>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection/Subsystem'
 * '<S260>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection1/Subsystem'
 * '<S261>' : 'DR18E_Testpult/Eingabe Fahrzeug/BMS/Voltage Stack 7-8/Voltage Stack 8/RX Timeout Detection2/Subsystem'
 * '<S262>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/CANIO_AUX'
 * '<S263>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/CANIO_Temperature'
 * '<S264>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/RX OK Detection1'
 * '<S265>' : 'DR18E_Testpult/Eingabe Fahrzeug/CAN IO/RX OK Detection3'
 * '<S266>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4'
 * '<S267>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /GLV_AMS_STATe'
 * '<S268>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /RX OK Detection3'
 * '<S269>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV '
 * '<S270>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/GLV_Cells'
 * '<S271>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/RX Timeout Detection1'
 * '<S272>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /Cells1_4/RX Timeout Detection1/Subsystem'
 * '<S273>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV Temp_2'
 * '<S274>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV Temp_3'
 * '<S275>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /GLV_TEMP'
 * '<S276>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection1'
 * '<S277>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection2'
 * '<S278>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection3'
 * '<S279>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection1/Subsystem'
 * '<S280>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection2/Subsystem'
 * '<S281>' : 'DR18E_Testpult/Eingabe Fahrzeug/GLV AMS /TemperatueGLV /RX Timeout Detection3/Subsystem'
 * '<S282>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/FlightRecorder4'
 * '<S283>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/RX Timeout Detection'
 * '<S284>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/Yaw_Rate'
 * '<S285>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S286>' : 'DR18E_Testpult/Eingabe Fahrzeug/Gyro/RX Timeout Detection/Triggered Subsystem'
 * '<S287>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen '
 * '<S288>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen'
 * '<S289>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl'
 * '<S290>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder1'
 * '<S291>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder2'
 * '<S292>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder3'
 * '<S293>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder4'
 * '<S294>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /INV_1_Recieve'
 * '<S295>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Inverter_Temp'
 * '<S296>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Motortemperatur'
 * '<S297>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung'
 * '<S298>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 * '<S299>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Sender OK Detection'
 * '<S300>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Strom'
 * '<S301>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /U_DC'
 * '<S302>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Wirkstrom Iq'
 * '<S303>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/PT1 Discrete2'
 * '<S304>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/Skalierung Drehzahl'
 * '<S305>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Drehzahl/PT1 Discrete2/Subsystem'
 * '<S306>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S307>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S308>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S309>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S310>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero'
 * '<S311>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero1'
 * '<S312>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero10'
 * '<S313>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero11'
 * '<S314>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero12'
 * '<S315>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero13'
 * '<S316>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero14'
 * '<S317>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero15'
 * '<S318>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero16'
 * '<S319>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero17'
 * '<S320>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero18'
 * '<S321>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero19'
 * '<S322>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero2'
 * '<S323>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero20'
 * '<S324>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero21'
 * '<S325>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero22'
 * '<S326>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero23'
 * '<S327>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero24'
 * '<S328>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero25'
 * '<S329>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero26'
 * '<S330>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero27'
 * '<S331>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero28'
 * '<S332>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero29'
 * '<S333>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero3'
 * '<S334>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero30'
 * '<S335>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero31'
 * '<S336>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero4'
 * '<S337>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero5'
 * '<S338>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero6'
 * '<S339>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero7'
 * '<S340>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero8'
 * '<S341>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Red ID 64:  Status Register Auswertung/Compare To Zero9'
 * '<S342>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero'
 * '<S343>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero1'
 * '<S344>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero10'
 * '<S345>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero11'
 * '<S346>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero12'
 * '<S347>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero13'
 * '<S348>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero14'
 * '<S349>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero15'
 * '<S350>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero16'
 * '<S351>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero17'
 * '<S352>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero18'
 * '<S353>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero19'
 * '<S354>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero2'
 * '<S355>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero20'
 * '<S356>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero21'
 * '<S357>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero22'
 * '<S358>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero23'
 * '<S359>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero24'
 * '<S360>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero27'
 * '<S361>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero3'
 * '<S362>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero30'
 * '<S363>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero4'
 * '<S364>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero5'
 * '<S365>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero6'
 * '<S366>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero7'
 * '<S367>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero8'
 * '<S368>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 1 empfangen /Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero9'
 * '<S369>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl'
 * '<S370>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/FlightRecorder2'
 * '<S371>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/INV_2_Recieve'
 * '<S372>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Inverter_Temp'
 * '<S373>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Motortemperatur'
 * '<S374>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung'
 * '<S375>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1'
 * '<S376>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Sender OK Detection'
 * '<S377>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Strom'
 * '<S378>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/U_DC'
 * '<S379>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Wirkstrom Iq'
 * '<S380>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/PT1 Discrete2'
 * '<S381>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/Skalierung Drehzahl'
 * '<S382>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Drehzahl/PT1 Discrete2/Subsystem'
 * '<S383>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S384>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero'
 * '<S385>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero1'
 * '<S386>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero10'
 * '<S387>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero11'
 * '<S388>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero12'
 * '<S389>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero13'
 * '<S390>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero14'
 * '<S391>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero15'
 * '<S392>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero16'
 * '<S393>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero17'
 * '<S394>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero18'
 * '<S395>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero19'
 * '<S396>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero2'
 * '<S397>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero20'
 * '<S398>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero21'
 * '<S399>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero22'
 * '<S400>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero23'
 * '<S401>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero24'
 * '<S402>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero25'
 * '<S403>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero26'
 * '<S404>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero27'
 * '<S405>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero28'
 * '<S406>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero29'
 * '<S407>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero3'
 * '<S408>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero30'
 * '<S409>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero31'
 * '<S410>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero4'
 * '<S411>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero5'
 * '<S412>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero6'
 * '<S413>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero7'
 * '<S414>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero8'
 * '<S415>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Red ID 64:  Status Register Auswertung/Compare To Zero9'
 * '<S416>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero'
 * '<S417>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero1'
 * '<S418>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero10'
 * '<S419>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero11'
 * '<S420>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero12'
 * '<S421>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero13'
 * '<S422>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero14'
 * '<S423>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero15'
 * '<S424>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero16'
 * '<S425>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero17'
 * '<S426>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero18'
 * '<S427>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero19'
 * '<S428>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero2'
 * '<S429>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero20'
 * '<S430>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero21'
 * '<S431>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero22'
 * '<S432>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero23'
 * '<S433>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero24'
 * '<S434>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero27'
 * '<S435>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero3'
 * '<S436>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero30'
 * '<S437>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero4'
 * '<S438>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero5'
 * '<S439>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero6'
 * '<S440>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero7'
 * '<S441>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero8'
 * '<S442>' : 'DR18E_Testpult/Eingabe Fahrzeug/Inverter Feedback Messages/Istwerte Umrichter 2 empfangen/Reg ID: 0x8F ERROR//Warning Register Auswertung1/Compare To Zero9'
 * '<S443>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/FlightRecorder'
 * '<S444>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/RX Timeout Detection'
 * '<S445>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/Steering'
 * '<S446>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S447>' : 'DR18E_Testpult/Eingabe Fahrzeug/Lenkwinkelgeber/RX Timeout Detection/Triggered Subsystem'
 * '<S448>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI'
 * '<S449>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/Beschleunigungssensor'
 * '<S450>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI'
 * '<S451>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL1'
 * '<S452>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL2'
 * '<S453>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL3'
 * '<S454>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL4'
 * '<S455>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL5'
 * '<S456>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL6'
 * '<S457>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL7'
 * '<S458>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/ADC_TYPE4_BL8'
 * '<S459>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder1'
 * '<S460>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder4'
 * '<S461>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung ADC-Widerstand'
 * '<S462>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung ADC-Widerstand1'
 * '<S463>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC'
 * '<S464>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1'
 * '<S465>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S466>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S467>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC/PT1 Discrete1'
 * '<S468>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC/PT1 Discrete1/Subsystem'
 * '<S469>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1/PT1 Discrete1'
 * '<S470>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/AI/Umrechnung Widerstand - Temperatur NTC1/PT1 Discrete1/Subsystem'
 * '<S471>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/Beschleunigungssensor/DS1401_ACCEL_READ_BL1'
 * '<S472>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL1'
 * '<S473>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL10'
 * '<S474>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL2'
 * '<S475>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL3'
 * '<S476>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL4'
 * '<S477>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL5'
 * '<S478>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL6'
 * '<S479>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL7'
 * '<S480>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL8'
 * '<S481>' : 'DR18E_Testpult/Eingabe Fahrzeug/MicroAutoBox/DI/DIO_TYPE3_BIT_IN_CH_BL9'
 * '<S482>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/BOTS_Status'
 * '<S483>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/BSPD_Status'
 * '<S484>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Brake_Value'
 * '<S485>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection1'
 * '<S486>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection3'
 * '<S487>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX OK Detection4'
 * '<S488>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection'
 * '<S489>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection1'
 * '<S490>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Sensor_Current'
 * '<S491>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/Throttle'
 * '<S492>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection/Triggered Subsystem'
 * '<S493>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Front/RX Timeout Detection1/Triggered Subsystem'
 * '<S494>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Dashboard_AUX'
 * '<S495>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Dashboard_Buttons'
 * '<S496>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RPM_Front'
 * '<S497>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RX Timeout Detection'
 * '<S498>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Transmit OK Detection3'
 * '<S499>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/Transmit OK Detection4'
 * '<S500>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Mitte/RX Timeout Detection/Triggered Subsystem'
 * '<S501>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/ES_rear'
 * '<S502>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder1'
 * '<S503>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder2'
 * '<S504>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder3'
 * '<S505>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Oiltemperature'
 * '<S506>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Sensor_Watertemp'
 * '<S507>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection1'
 * '<S508>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection3'
 * '<S509>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/Transmit OK Detection4'
 * '<S510>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S511>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S512>' : 'DR18E_Testpult/Eingabe Fahrzeug/Sensorboard Rear/FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S513>' : 'DR18E_Testpult/Pre Setup/CAN 1 - Body'
 * '<S514>' : 'DR18E_Testpult/Pre Setup/CAN1 Status'
 * '<S515>' : 'DR18E_Testpult/Pre Setup/CAN2 - Inv 1 links'
 * '<S516>' : 'DR18E_Testpult/Pre Setup/CAN2 Status'
 * '<S517>' : 'DR18E_Testpult/Pre Setup/CAN3 - Inv 2 rechts'
 * '<S518>' : 'DR18E_Testpult/Pre Setup/CAN3 Status'
 * '<S519>' : 'DR18E_Testpult/Pre Setup/CAN_TYPE1_BOR_M2_C1'
 * '<S520>' : 'DR18E_Testpult/Pre Setup/USB_FLIGHT_REC_SETUP'
 * '<S521>' : 'DR18E_Testpult/RTI Data/RTI Data Store'
 * '<S522>' : 'DR18E_Testpult/RTI Data/RTI Data Store/RTI Data Store'
 * '<S523>' : 'DR18E_Testpult/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 * '<S524>' : 'DR18E_Testpult/Verarbeitung/Alarme'
 * '<S525>' : 'DR18E_Testpult/Verarbeitung/BMS_Monitor'
 * '<S526>' : 'DR18E_Testpult/Verarbeitung/Bremse'
 * '<S527>' : 'DR18E_Testpult/Verarbeitung/DIS'
 * '<S528>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control'
 * '<S529>' : 'DR18E_Testpult/Verarbeitung/GLV-Undervoltage'
 * '<S530>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check'
 * '<S531>' : 'DR18E_Testpult/Verarbeitung/MABX RAM'
 * '<S532>' : 'DR18E_Testpult/Verarbeitung/Precalculations'
 * '<S533>' : 'DR18E_Testpult/Verarbeitung/SafetyShutdown'
 * '<S534>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC'
 * '<S535>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1'
 * '<S536>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config'
 * '<S537>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine'
 * '<S538>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching'
 * '<S539>' : 'DR18E_Testpult/Verarbeitung/Alarme/Compare To Constant'
 * '<S540>' : 'DR18E_Testpult/Verarbeitung/Alarme/ErrorCodeTX'
 * '<S541>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching/S-R Flip-Flop'
 * '<S542>' : 'DR18E_Testpult/Verarbeitung/Alarme/AMSIMD_Latching/S-R Flip-Flop1'
 * '<S543>' : 'DR18E_Testpult/Verarbeitung/Bremse/Compare To Constant'
 * '<S544>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder'
 * '<S545>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder1'
 * '<S546>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder2'
 * '<S547>' : 'DR18E_Testpult/Verarbeitung/Bremse/PT1 Discrete2'
 * '<S548>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck'
 * '<S549>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S550>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S551>' : 'DR18E_Testpult/Verarbeitung/Bremse/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S552>' : 'DR18E_Testpult/Verarbeitung/Bremse/PT1 Discrete2/Subsystem'
 * '<S553>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant'
 * '<S554>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant1'
 * '<S555>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant2'
 * '<S556>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant3'
 * '<S557>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant4'
 * '<S558>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant5'
 * '<S559>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant6'
 * '<S560>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/Compare To Constant7'
 * '<S561>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/PT1 Discrete1'
 * '<S562>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/S-R Flip-Flop'
 * '<S563>' : 'DR18E_Testpult/Verarbeitung/Bremse/PlausibilityCheck/PT1 Discrete1/Subsystem'
 * '<S564>' : 'DR18E_Testpult/Verarbeitung/DIS/LED Bar Blinken Subsystem'
 * '<S565>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating'
 * '<S566>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/FlightRecorder'
 * '<S567>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Power Limit'
 * '<S568>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL'
 * '<S569>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR'
 * '<S570>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL'
 * '<S571>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR'
 * '<S572>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter'
 * '<S573>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite'
 * '<S574>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Compare To Constant'
 * '<S575>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Verbrauch_Wh//km'
 * '<S576>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Derating/Derating_Strategie_Reichweite/Verbrauch_Wh//km/USB_FLIGHT_REC_BL1'
 * '<S577>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S578>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL'
 * '<S579>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL/Compare To Constant'
 * '<S580>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RL/Traction Control RL/S-R Flip-Flop'
 * '<S581>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR'
 * '<S582>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR/Compare To Constant'
 * '<S583>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TC RR/Traction Control RR/S-R Flip-Flop'
 * '<S584>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_Lyapunov'
 * '<S585>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_MIT_DIFF'
 * '<S586>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/MRAC_PT1_MIT_NORM'
 * '<S587>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E'
 * '<S588>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV IPG'
 * '<S589>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/YawRate SET_NEW '
 * '<S590>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Drehmomentverteilung links//rechts'
 * '<S591>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Ermittlung Sollgierrate'
 * '<S592>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/FlightRecorder4'
 * '<S593>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID'
 * '<S594>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S595>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID'
 * '<S596>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_fromGA'
 * '<S597>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_fromOptim'
 * '<S598>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RL/TV DR17E/Vorsteuerung+PID/PID_from_BJ'
 * '<S599>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_Lyapunov'
 * '<S600>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_MIT_DIFF'
 * '<S601>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/MRAC_PT1_MIT_NORM'
 * '<S602>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E'
 * '<S603>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV IPG'
 * '<S604>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/YawRate SET_NEW '
 * '<S605>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Drehmomentverteilung links//rechts'
 * '<S606>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Ermittlung Sollgierrate'
 * '<S607>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/FlightRecorder4'
 * '<S608>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID'
 * '<S609>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S610>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID'
 * '<S611>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_fromGA'
 * '<S612>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_fromOptim'
 * '<S613>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/TV RR/TV DR17E/Vorsteuerung+PID/PID_from_BJ'
 * '<S614>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Decrease'
 * '<S615>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Decrease1'
 * '<S616>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Increase'
 * '<S617>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Detect Increase1'
 * '<S618>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete1'
 * '<S619>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete3'
 * '<S620>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/S-R Flip-Flop'
 * '<S621>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/S-R Flip-Flop1'
 * '<S622>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/Saturation Dynamic'
 * '<S623>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete1/Subsystem'
 * '<S624>' : 'DR18E_Testpult/Verarbeitung/DR18E Torque Control/Torque Filter/PT1 Discrete3/Subsystem'
 * '<S625>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning'
 * '<S626>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning1'
 * '<S627>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/FlightRecorder'
 * '<S628>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck'
 * '<S629>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Testmodus'
 * '<S630>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning/Compare To Zero'
 * '<S631>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/Add_Software_inplausible_Warning1/Compare To Zero'
 * '<S632>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S633>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete'
 * '<S634>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete1'
 * '<S635>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/Rule: T10.3.9'
 * '<S636>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete/Subsystem'
 * '<S637>' : 'DR18E_Testpult/Verarbeitung/Gaspedal Check/PlausibilityCheck/PT1 Discrete1/Subsystem'
 * '<S638>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference'
 * '<S639>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference1'
 * '<S640>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/Difference2'
 * '<S641>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/FlightRecorder5'
 * '<S642>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Gesamtkilometerzähler Byte 1+2'
 * '<S643>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Gesamtkilometerzähler Byte 10+4'
 * '<S644>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/READ Tagesenergiezähler Byte 4+2'
 * '<S645>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Gesamtmeterzähler m Byte 10+4'
 * '<S646>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Tagesmeterzähler Wh Byte 4+2'
 * '<S647>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/WRITE Tagesmeterzähler m Byte 1+2'
 * '<S648>' : 'DR18E_Testpult/Verarbeitung/MABX RAM/FlightRecorder5/USB_FLIGHT_REC_BL1'
 * '<S649>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder'
 * '<S650>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder1'
 * '<S651>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder2'
 * '<S652>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder3'
 * '<S653>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder4'
 * '<S654>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder5'
 * '<S655>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder6'
 * '<S656>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking'
 * '<S657>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S658>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S659>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder2/USB_FLIGHT_REC_BL1'
 * '<S660>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder3/USB_FLIGHT_REC_BL1'
 * '<S661>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder4/USB_FLIGHT_REC_BL1'
 * '<S662>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder5/USB_FLIGHT_REC_BL1'
 * '<S663>' : 'DR18E_Testpult/Verarbeitung/Precalculations/FlightRecorder6/USB_FLIGHT_REC_BL1'
 * '<S664>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking/FlightRecorder1'
 * '<S665>' : 'DR18E_Testpult/Verarbeitung/Precalculations/kilometer tracking/FlightRecorder1/USB_FLIGHT_REC_BL1'
 * '<S666>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVIRecorder'
 * '<S667>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVURecorder'
 * '<S668>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/currentConsumptionRecorder'
 * '<S669>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerConsumtionRecorder'
 * '<S670>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerRecorder'
 * '<S671>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVIRecorder/USB_FLIGHT_REC_BL1'
 * '<S672>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/HVURecorder/USB_FLIGHT_REC_BL1'
 * '<S673>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/currentConsumptionRecorder/USB_FLIGHT_REC_BL1'
 * '<S674>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerConsumtionRecorder/USB_FLIGHT_REC_BL1'
 * '<S675>' : 'DR18E_Testpult/Verarbeitung/Strom//SOC/powerRecorder/USB_FLIGHT_REC_BL1'
 * '<S676>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Compare To Constant'
 * '<S677>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Compare To Constant1'
 * '<S678>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Detect Max Temp'
 * '<S679>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect'
 * '<S680>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1'
 * '<S681>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2'
 * '<S682>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PI Controller'
 * '<S683>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete'
 * '<S684>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete1'
 * '<S685>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp'
 * '<S686>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp1'
 * '<S687>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp2'
 * '<S688>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/Vergleich mit Grenz-Temp3'
 * '<S689>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect/J-K Flip-Flop'
 * '<S690>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect/J-K Flip-Flop/J-K Flip-Flop'
 * '<S691>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1/J-K Flip-Flop'
 * '<S692>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect1/J-K Flip-Flop/J-K Flip-Flop'
 * '<S693>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2/J-K Flip-Flop'
 * '<S694>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/ModeSelect2/J-K Flip-Flop/J-K Flip-Flop'
 * '<S695>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete/Subsystem'
 * '<S696>' : 'DR18E_Testpult/Verarbeitung/Temperaturregelung1/PT1 Discrete1/Subsystem'
 * '<S697>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config/Umrichter 1 Init Config'
 * '<S698>' : 'DR18E_Testpult/Verarbeitung/Umrichter Init Config/Umrichter 2 Init Config'
 * '<S699>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Detect Rise Positive'
 * '<S700>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Fahrzeugsteuerung'
 * '<S701>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder'
 * '<S702>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder1'
 * '<S703>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/Detect Rise Positive/Positive'
 * '<S704>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder/USB_FLIGHT_REC_BL1'
 * '<S705>' : 'DR18E_Testpult/Verarbeitung/Vehicle State Machine/FlightRecorder1/USB_FLIGHT_REC_BL1'
 */
#endif                                 /* RTW_HEADER_DR18E_Testpult_h_ */
