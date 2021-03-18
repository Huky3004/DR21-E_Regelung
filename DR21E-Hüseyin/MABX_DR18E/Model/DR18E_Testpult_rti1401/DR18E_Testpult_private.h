/*
 * DR18E_Testpult_private.h
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

#ifndef RTW_HEADER_DR18E_Testpult_private_h_
#define RTW_HEADER_DR18E_Testpult_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "DR18E_Testpult.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M2_C1;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M2_C1[13];

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M2_NUMMSG               90

extern can_tp1_canMsg* can_type1_msg_M2[CANTP1_M2_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C1;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M1_C1[13];

/* ...  variable for information on a CAN channel */
extern can_tp1_canChannel* can_type1_channel_M1_C2;

/* ...  service variables for the RTICAN status block */
extern can_tp1_canService* can_type1_service_M1_C2[13];

/* ... definition of message variable for the RTICAN blocks */
#define CANTP1_M1_NUMMSG               4

extern can_tp1_canMsg* can_type1_msg_M1[CANTP1_M1_NUMMSG];

/* ... variable for taskqueue error checking                  */
extern Int32 rtican_type1_tq_error[CAN_TYPE1_NUM_MODULES]
  [CAN_TYPE1_NUM_TASKQUEUES];

/* Declaration of user indices (CAN_Type1_M2) */
#define CANTP1_M2_C1_TX_STD_0X336      0
#define TX_C1_STD_0X336                0
#undef TX_C1_STD_0X336
#define CANTP1_M2_C1_TX_STD_0X325      1
#define TX_C1_STD_0X325                1
#undef TX_C1_STD_0X325
#define CANTP1_M2_C1_TX_STD_0X323      2
#define TX_C1_STD_0X323                2
#undef TX_C1_STD_0X323
#define CANTP1_M2_C1_TX_STD_0X327      3
#define TX_C1_STD_0X327                3
#undef TX_C1_STD_0X327
#define CANTP1_M2_C1_TX_STD_0X324      4
#define TX_C1_STD_0X324                4
#undef TX_C1_STD_0X324
#define CANTP1_M2_C1_TX_STD_0X332      5
#define TX_C1_STD_0X332                5
#undef TX_C1_STD_0X332
#define CANTP1_M2_C1_TX_STD_0X328      6
#define TX_C1_STD_0X328                6
#undef TX_C1_STD_0X328
#define CANTP1_M2_C1_TX_STD_0X331      7
#define TX_C1_STD_0X331                7
#undef TX_C1_STD_0X331
#define CANTP1_M2_C1_TX_STD_0X665      8
#define TX_C1_STD_0X665                8
#undef TX_C1_STD_0X665
#define CANTP1_M2_C1_TX_STD_0X666      9
#define TX_C1_STD_0X666                9
#undef TX_C1_STD_0X666
#define CANTP1_M2_C1_TX_STD_0X664      10
#define TX_C1_STD_0X664                10
#undef TX_C1_STD_0X664
#define CANTP1_M2_C1_TX_STD_0X314      11
#define TX_C1_STD_0X314                11
#undef TX_C1_STD_0X314
#define CANTP1_M2_C1_TX_STD_0X670      12
#define TX_C1_STD_0X670                12
#undef TX_C1_STD_0X670
#define CANTP1_M2_C1_TX_STD_0X671      13
#define TX_C1_STD_0X671                13
#undef TX_C1_STD_0X671
#define CANTP1_M2_C1_TX_STD_0X672      14
#define TX_C1_STD_0X672                14
#undef TX_C1_STD_0X672
#define CANTP1_M2_C1_TX_STD_0X673      15
#define TX_C1_STD_0X673                15
#undef TX_C1_STD_0X673
#define CANTP1_M2_C1_TX_STD_0X333      16
#define TX_C1_STD_0X333                16
#undef TX_C1_STD_0X333
#define CANTP1_M2_C1_RX_STD_0X21A      17
#define RX_C1_STD_0X21A                17
#undef RX_C1_STD_0X21A
#define CANTP1_M2_C1_RX_STD_0X21B      18
#define RX_C1_STD_0X21B                18
#undef RX_C1_STD_0X21B
#define CANTP1_M2_C1_RX_STD_0X21C      19
#define RX_C1_STD_0X21C                19
#undef RX_C1_STD_0X21C
#define CANTP1_M2_C1_RX_STD_0X21D      20
#define RX_C1_STD_0X21D                20
#undef RX_C1_STD_0X21D
#define CANTP1_M2_C1_RX_STD_0X21E      21
#define RX_C1_STD_0X21E                21
#undef RX_C1_STD_0X21E
#define CANTP1_M2_C1_RX_STD_0X21F      22
#define RX_C1_STD_0X21F                22
#undef RX_C1_STD_0X21F
#define CANTP1_M2_C1_RX_STD_0X220      23
#define RX_C1_STD_0X220                23
#undef RX_C1_STD_0X220
#define CANTP1_M2_C1_RX_STD_0X221      24
#define RX_C1_STD_0X221                24
#undef RX_C1_STD_0X221
#define CANTP1_M2_C1_RX_STD_0X222      25
#define RX_C1_STD_0X222                25
#undef RX_C1_STD_0X222
#define CANTP1_M2_C1_RX_STD_0X223      26
#define RX_C1_STD_0X223                26
#undef RX_C1_STD_0X223
#define CANTP1_M2_C1_RX_STD_0X226      27
#define RX_C1_STD_0X226                27
#undef RX_C1_STD_0X226
#define CANTP1_M2_C1_RX_STD_0X227      28
#define RX_C1_STD_0X227                28
#undef RX_C1_STD_0X227
#define CANTP1_M2_C1_RX_STD_0X228      29
#define RX_C1_STD_0X228                29
#undef RX_C1_STD_0X228
#define CANTP1_M2_C1_RX_STD_0X229      30
#define RX_C1_STD_0X229                30
#undef RX_C1_STD_0X229
#define CANTP1_M2_C1_RX_STD_0X22A      31
#define RX_C1_STD_0X22A                31
#undef RX_C1_STD_0X22A
#define CANTP1_M2_C1_RX_STD_0X22B      32
#define RX_C1_STD_0X22B                32
#undef RX_C1_STD_0X22B
#define CANTP1_M2_C1_RX_STD_0X22C      33
#define RX_C1_STD_0X22C                33
#undef RX_C1_STD_0X22C
#define CANTP1_M2_C1_RX_STD_0X22D      34
#define RX_C1_STD_0X22D                34
#undef RX_C1_STD_0X22D
#define CANTP1_M2_C1_RX_STD_0X22E      35
#define RX_C1_STD_0X22E                35
#undef RX_C1_STD_0X22E
#define CANTP1_M2_C1_RX_STD_0X22F      36
#define RX_C1_STD_0X22F                36
#undef RX_C1_STD_0X22F
#define CANTP1_M2_C1_RX_STD_0X313      37
#define RX_C1_STD_0X313                37
#undef RX_C1_STD_0X313
#define CANTP1_M2_C1_RX_STD_0X302      38
#define RX_C1_STD_0X302                38
#undef RX_C1_STD_0X302
#define CANTP1_M2_C1_RX_STD_0X303      39
#define RX_C1_STD_0X303                39
#undef RX_C1_STD_0X303
#define CANTP1_M2_C1_RX_STD_0X312      40
#define RX_C1_STD_0X312                40
#undef RX_C1_STD_0X312
#define CANTP1_M2_C1_RX_STD_0X315      41
#define RX_C1_STD_0X315                41
#undef RX_C1_STD_0X315
#define CANTP1_M2_C1_RX_STD_0X170      42
#define RX_C1_STD_0X170                42
#undef RX_C1_STD_0X170
#define CANTP1_M2_C1_RX_STD_0X329      43
#define RX_C1_STD_0X329                43
#undef RX_C1_STD_0X329
#define CANTP1_M2_C1_RX_STD_0X122      44
#define RX_C1_STD_0X122                44
#undef RX_C1_STD_0X122
#define CANTP1_M2_C1_RX_STD_0X316      45
#define RX_C1_STD_0X316                45
#undef RX_C1_STD_0X316
#define CANTP1_M2_C1_RX_STD_0X121      46
#define RX_C1_STD_0X121                46
#undef RX_C1_STD_0X121
#define CANTP1_M2_C1_RX_STD_0X123      47
#define RX_C1_STD_0X123                47
#undef RX_C1_STD_0X123
#define CANTP1_M2_C1_RX_STD_0X1A0      48
#define RX_C1_STD_0X1A0                48
#undef RX_C1_STD_0X1A0
#define CANTP1_M2_C1_RX_STD_0X133      49
#define RX_C1_STD_0X133                49
#undef RX_C1_STD_0X133
#define CANTP1_M2_C1_RX_STD_0X304      50
#define RX_C1_STD_0X304                50
#undef RX_C1_STD_0X304
#define CANTP1_M2_C1_RX_STD_0X246      51
#define RX_C1_STD_0X246                51
#undef RX_C1_STD_0X246
#define CANTP1_M2_C1_RX_STD_0X150      52
#define RX_C1_STD_0X150                52
#undef RX_C1_STD_0X150
#define CANTP1_M2_C1_RX_STD_0X151      53
#define RX_C1_STD_0X151                53
#undef RX_C1_STD_0X151
#define CANTP1_M2_C1_RX_STD_0X152      54
#define RX_C1_STD_0X152                54
#undef RX_C1_STD_0X152
#define CANTP1_M2_C1_RX_STD_0X153      55
#define RX_C1_STD_0X153                55
#undef RX_C1_STD_0X153
#define CANTP1_M2_C1_RX_STD_0X154      56
#define RX_C1_STD_0X154                56
#undef RX_C1_STD_0X154
#define CANTP1_M2_C1_RX_STD_0X155      57
#define RX_C1_STD_0X155                57
#undef RX_C1_STD_0X155
#define CANTP1_M2_C1_RX_STD_0X156      58
#define RX_C1_STD_0X156                58
#undef RX_C1_STD_0X156
#define CANTP1_M2_C1_RX_STD_0X157      59
#define RX_C1_STD_0X157                59
#undef RX_C1_STD_0X157
#define CANTP1_M2_C1_RX_STD_0X158      60
#define RX_C1_STD_0X158                60
#undef RX_C1_STD_0X158
#define CANTP1_M2_C1_RX_STD_0X159      61
#define RX_C1_STD_0X159                61
#undef RX_C1_STD_0X159
#define CANTP1_M2_C1_RX_STD_0X15A      62
#define RX_C1_STD_0X15A                62
#undef RX_C1_STD_0X15A
#define CANTP1_M2_C1_RX_STD_0X15B      63
#define RX_C1_STD_0X15B                63
#undef RX_C1_STD_0X15B
#define CANTP1_M2_C1_RX_STD_0X15C      64
#define RX_C1_STD_0X15C                64
#undef RX_C1_STD_0X15C
#define CANTP1_M2_C1_RX_STD_0X15D      65
#define RX_C1_STD_0X15D                65
#undef RX_C1_STD_0X15D
#define CANTP1_M2_C1_RX_STD_0X15E      66
#define RX_C1_STD_0X15E                66
#undef RX_C1_STD_0X15E
#define CANTP1_M2_C1_RX_STD_0X15F      67
#define RX_C1_STD_0X15F                67
#undef RX_C1_STD_0X15F
#define CANTP1_M2_C1_RX_STD_0X160      68
#define RX_C1_STD_0X160                68
#undef RX_C1_STD_0X160
#define CANTP1_M2_C1_RX_STD_0X161      69
#define RX_C1_STD_0X161                69
#undef RX_C1_STD_0X161
#define CANTP1_M2_C1_RX_STD_0X162      70
#define RX_C1_STD_0X162                70
#undef RX_C1_STD_0X162
#define CANTP1_M2_C1_RX_STD_0X163      71
#define RX_C1_STD_0X163                71
#undef RX_C1_STD_0X163
#define CANTP1_M2_C1_RX_STD_0X164      72
#define RX_C1_STD_0X164                72
#undef RX_C1_STD_0X164
#define CANTP1_M2_C1_RX_STD_0X165      73
#define RX_C1_STD_0X165                73
#undef RX_C1_STD_0X165
#define CANTP1_M2_C1_RX_STD_0X166      74
#define RX_C1_STD_0X166                74
#undef RX_C1_STD_0X166
#define CANTP1_M2_C1_RX_STD_0X167      75
#define RX_C1_STD_0X167                75
#undef RX_C1_STD_0X167
#define CANTP1_M2_C1_RX_STD_0X168      76
#define RX_C1_STD_0X168                76
#undef RX_C1_STD_0X168
#define CANTP1_M2_C1_RX_STD_0X169      77
#define RX_C1_STD_0X169                77
#undef RX_C1_STD_0X169
#define CANTP1_M2_C1_RX_STD_0X16A      78
#define RX_C1_STD_0X16A                78
#undef RX_C1_STD_0X16A
#define CANTP1_M2_C1_RX_STD_0X16B      79
#define RX_C1_STD_0X16B                79
#undef RX_C1_STD_0X16B
#define CANTP1_M2_C1_RX_STD_0X16C      80
#define RX_C1_STD_0X16C                80
#undef RX_C1_STD_0X16C
#define CANTP1_M2_C1_RX_STD_0X16D      81
#define RX_C1_STD_0X16D                81
#undef RX_C1_STD_0X16D
#define CANTP1_M2_C1_RX_STD_0X231      82
#define RX_C1_STD_0X231                82
#undef RX_C1_STD_0X231
#define CANTP1_M2_C1_RX_STD_0X16E      83
#define RX_C1_STD_0X16E                83
#undef RX_C1_STD_0X16E
#define CANTP1_M2_C1_RX_STD_0X326      84
#define RX_C1_STD_0X326                84
#undef RX_C1_STD_0X326
#define CANTP1_M2_C1_RX_STD_0X240      85
#define RX_C1_STD_0X240                85
#undef RX_C1_STD_0X240
#define CANTP1_M2_C1_RX_STD_0X244      86
#define RX_C1_STD_0X244                86
#undef RX_C1_STD_0X244
#define CANTP1_M2_C1_RX_STD_0X245      87
#define RX_C1_STD_0X245                87
#undef RX_C1_STD_0X245
#define CANTP1_M2_C1_RX_STD_0X243      88
#define RX_C1_STD_0X243                88
#undef RX_C1_STD_0X243
#define CANTP1_M2_C1_RX_STD_0X318      89
#define RX_C1_STD_0X318                89
#undef RX_C1_STD_0X318
#define CANTP1_M2_C1_Status            0
#define Status_C1                      0
#undef Status_C1
#define CANTP1_M2_C1_StuffErrors       1
#define StuffErrors_C1                 1
#undef StuffErrors_C1
#define CANTP1_M2_C1_FormatErrors      2
#define FormatErrors_C1                2
#undef FormatErrors_C1
#define CANTP1_M2_C1_AckErrors         3
#define AckErrors_C1                   3
#undef AckErrors_C1
#define CANTP1_M2_C1_Bit0Errors        4
#define Bit0Errors_C1                  4
#undef Bit0Errors_C1
#define CANTP1_M2_C1_Bit1Errors        5
#define Bit1Errors_C1                  5
#undef Bit1Errors_C1
#define CANTP1_M2_C1_CRCErrors         6
#define CRCErrors_C1                   6
#undef CRCErrors_C1
#define CANTP1_M2_C1_RXLost            7
#define RXLost_C1                      7
#undef RXLost_C1
#define CANTP1_M2_C1_DataLost          12
#define CANTP1_M2_C1_RXOK              8
#define RXOK_C1                        8
#undef RXOK_C1
#define CANTP1_M2_C1_TXOK              9
#define TXOK_C1                        9
#undef TXOK_C1

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M2_C1_XTD;

/* Declaration of user indices (CAN_Type1_M1) */
#define CANTP1_M1_C1_TX_STD_0X101      0
#define TX_C1_STD_0X101                0
#undef TX_C1_STD_0X101
#define CANTP1_M1_C1_RX_STD_0X111      1
#define RX_C1_STD_0X111                1
#undef RX_C1_STD_0X111
#define CANTP1_M1_C1_Status            0
#define Status_C1                      0
#undef Status_C1
#define CANTP1_M1_C1_StuffErrors       1
#define StuffErrors_C1                 1
#undef StuffErrors_C1
#define CANTP1_M1_C1_FormatErrors      2
#define FormatErrors_C1                2
#undef FormatErrors_C1
#define CANTP1_M1_C1_AckErrors         3
#define AckErrors_C1                   3
#undef AckErrors_C1
#define CANTP1_M1_C1_Bit0Errors        4
#define Bit0Errors_C1                  4
#undef Bit0Errors_C1
#define CANTP1_M1_C1_Bit1Errors        5
#define Bit1Errors_C1                  5
#undef Bit1Errors_C1
#define CANTP1_M1_C1_CRCErrors         6
#define CRCErrors_C1                   6
#undef CRCErrors_C1
#define CANTP1_M1_C1_RXLost            7
#define RXLost_C1                      7
#undef RXLost_C1
#define CANTP1_M1_C1_DataLost          12
#define CANTP1_M1_C1_RXOK              8
#define RXOK_C1                        8
#undef RXOK_C1
#define CANTP1_M1_C1_TXOK              9
#define TXOK_C1                        9
#undef TXOK_C1
#define CANTP1_M1_C2_TX_STD_0X102      2
#define TX_C2_STD_0X102                2
#undef TX_C2_STD_0X102
#define CANTP1_M1_C2_RX_STD_0X112      3
#define RX_C2_STD_0X112                3
#undef RX_C2_STD_0X112
#define CANTP1_M1_C2_Status            0
#define Status_C2                      0
#undef Status_C2
#define CANTP1_M1_C2_StuffErrors       1
#define StuffErrors_C2                 1
#undef StuffErrors_C2
#define CANTP1_M1_C2_FormatErrors      2
#define FormatErrors_C2                2
#undef FormatErrors_C2
#define CANTP1_M1_C2_AckErrors         3
#define AckErrors_C2                   3
#undef AckErrors_C2
#define CANTP1_M1_C2_Bit0Errors        4
#define Bit0Errors_C2                  4
#undef Bit0Errors_C2
#define CANTP1_M1_C2_Bit1Errors        5
#define Bit1Errors_C2                  5
#undef Bit1Errors_C2
#define CANTP1_M1_C2_CRCErrors         6
#define CRCErrors_C2                   6
#undef CRCErrors_C2
#define CANTP1_M1_C2_RXLost            7
#define RXLost_C2                      7
#undef RXLost_C2
#define CANTP1_M1_C2_DataLost          12
#define CANTP1_M1_C2_RXOK              8
#define RXOK_C2                        8
#undef RXOK_C2
#define CANTP1_M1_C2_TXOK              9
#define TXOK_C2                        9
#undef TXOK_C2

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C1_XTD;

/* predefine needed TX-definition code to support TX-Custom code */
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_STD;
extern can_tp1_canMsg* CANTP1_TX_SPMSG_M1_C2_XTD;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 MSoll_Links_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 MSoll_Rechts_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 UBattZelle_all_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 Gierrate_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 UDC_HV_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 Inverter1Temp_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 MMotL_ist_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 MotorLTemp_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 MMotR_Ist_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 Lenkwinkel_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 KuehlwasserTemp_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 UBatt_LV_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 WaterPump_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 WaterCooler_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 oiltemp_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 BremsdruckVorne_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 BremsdruckHinten_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 Bremse_bin_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 M_max_pro_Mot_Nm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 Verbrauch_Whprokm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 PsiPunktSoll_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 PsiPunktSoll2_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 gas_plausibel_prozent_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 gesamt_s_m_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 v_kmh_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 DrehzahlRL_rpm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 DrehzahlRR_rpm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 DrehzahlFR_rpm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 DrehzahlFL_rpm_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 slip_links_0_1_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 slip_rechts_0_1_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 tages_s_m_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 HV_current_A_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 HV_voltage_V_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 currentConsumption_As_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 powerConsumption_Ws_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 HV_power_W_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 State_Index_UsbFlRec;

/* dSPACE I/O Board DSUSBFLIGHTREC #1 Unit:WRITE Group:START */
extern UInt16 ErrorNo_Index_UsbFlRec;
extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern real_T look1_linlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void uMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[],
  int32_T n2, uint32_T y[], int32_T n);
extern real32_T uMultiWordSingle(const uint32_T u1[], int32_T n1, int32_T e1);
extern void DR18E_Testpult_Subsystem_Init(DW_Subsystem_DR18E_Testpult_T *localDW,
  P_Subsystem_DR18E_Testpult_T *localP);
extern void DR18E_Testpult_Subsystem_Update(B_Subsystem_DR18E_Testpult_T *localB,
  DW_Subsystem_DR18E_Testpult_T *localDW);
extern void DR18E_Testpult_Subsystem(real_T rtu_TXStatus, real_T rtu_Timeout,
  B_Subsystem_DR18E_Testpult_T *localB, DW_Subsystem_DR18E_Testpult_T *localDW,
  P_Subsystem_DR18E_Testpult_T *localP);
extern void DR18E_Testpu_SkalierungDrehzahl(real_T rtu_In1,
  B_SkalierungDrehzahl_DR18E_Te_T *localB, P_SkalierungDrehzahl_DR18E_Te_T
  *localP);
extern void DR18E_Testpult_WirkstromIq_Init(B_WirkstromIq_DR18E_Testpult_T
  *localB, P_WirkstromIq_DR18E_Testpult_T *localP);
extern void DR18E_Testpult_WirkstromIq(real_T rtu_In1,
  B_WirkstromIq_DR18E_Testpult_T *localB, P_WirkstromIq_DR18E_Testpult_T *localP);
extern void RegID0x8FERRORWarningRegis_Init(B_RegID0x8FERRORWarningRegist_T
  *localB, P_RegID0x8FERRORWarningRegist_T *localP);
extern void RegID0x8FERRORWarningRegisterAu(real_T rtu_Reg143Value0x8F32BitDaten,
  B_RegID0x8FERRORWarningRegist_T *localB, P_RegID0x8FERRORWarningRegist_T
  *localP);
extern void DR18E_Testpult_U_DC_Init(B_U_DC_DR18E_Testpult_T *localB,
  P_U_DC_DR18E_Testpult_T *localP);
extern void DR18E_Testpult_U_DC(real_T rtu_In1, B_U_DC_DR18E_Testpult_T *localB,
  P_U_DC_DR18E_Testpult_T *localP);
extern void DR18E_Testpu_Inverter_Temp_Init(B_Inverter_Temp_DR18E_Testpul_T
  *localB, P_Inverter_Temp_DR18E_Testpul_T *localP);
extern void DR18E_Testpult_Inverter_Temp(real_T rtu_In1,
  B_Inverter_Temp_DR18E_Testpul_T *localB, P_Inverter_Temp_DR18E_Testpul_T
  *localP);
extern void DR18E_Testpult_JKFlipFlop_Init(B_JKFlipFlop_DR18E_Testpult_T *localB,
  DW_JKFlipFlop_DR18E_Testpult_T *localDW, P_JKFlipFlop_DR18E_Testpult_T *localP);
extern void DR18E_Testpult_JKFlipFlop(RT_MODEL_DR18E_Testpult_T * const
  DR18E_Testpult_M, boolean_T rtu_Trigger, boolean_T rtu_J, boolean_T rtu_K,
  B_JKFlipFlop_DR18E_Testpult_T *localB, DW_JKFlipFlop_DR18E_Testpult_T *localDW,
  P_JKFlipFlop_DR18E_Testpult_T *localP, ZCE_JKFlipFlop_DR18E_Testpult_T
  *localZCE);

/* private model entry point functions */
extern void DR18E_Testpult_derivatives(void);

#endif                                 /* RTW_HEADER_DR18E_Testpult_private_h_ */
