/*
 * DR18E_Testpult_data.c
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

#include "DR18E_Testpult.h"
#include "DR18E_Testpult_private.h"

/* Block parameters (auto storage) */
P_DR18E_Testpult_T DR18E_Testpult_P = {
  0.5853,
  1.7405,
  -0.329825259958135,
  0.5853,
  1.7405,
  -0.329825259958135,
  0.0344,
  2.5714,
  0.0,
  0.0344,
  2.5714,
  0.0,
  -0.01,
  127.0,
  127.0,
  18.7162193324192,
  127.0,
  127.0,
  18.7162193324192,
  -0.02,
  0.6557,
  0.5164,
  8.4755768690941,
  0.6557,
  0.5164,
  8.4755768690941,
  35.0,
  3.0,
  90.0,
  90.0,
  80.0,
  80.0,
  0.0,
  50.0,
  5.0,
  5.0,
  50.0,
  20.0,
  25.0,
  5.0,
  0.67,
  80.0,
  0.4,
  10.0,
  0.4,
  3.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  33554432U,
  32768U,
  4096U,
  2048U,
  1U,
  2U,
  1024U,
  8192U,
  16384U,
  65536U,
  131072U,
  262144U,
  524288U,
  4U,
  1048576U,
  2097152U,
  4194304U,
  8388608U,
  16777216U,
  67108864U,
  134217728U,
  268435456U,
  536870912U,
  8U,
  1073741824U,
  2147483648U,
  16U,
  32U,
  64U,
  128U,
  256U,
  512U,
  33554432U,
  32768U,
  4096U,
  2048U,
  1U,
  2U,
  1024U,
  8192U,
  16384U,
  65536U,
  131072U,
  262144U,
  524288U,
  4U,
  1048576U,
  2097152U,
  4194304U,
  8388608U,
  16777216U,
  67108864U,
  134217728U,
  268435456U,
  536870912U,
  8U,
  1073741824U,
  2147483648U,
  16U,
  32U,
  64U,
  128U,
  256U,
  512U,
  0U,
  0U,
  0U,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.055,
  1.0,
  0.055,
  1.0,
  61.0,
  2.0,
  0.0,
  0.0,
  1.0,
  61.0,
  2.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  37175.0,
  4700.0,

  { -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 25.0, 30.0, 40.0, 50.0,
    60.0, 70.0, 80.0, 90.0, 100.0, 110.0, 120.0, 125.0, 130.0, 140.0, 150.0 },

  { 1030.0, 1135.0, 1247.0, 1367.0, 1495.0, 1630.0, 1772.0, 1922.0, 2000.0,
    2080.0, 2245.0, 2417.0, 2597.0, 2785.0, 2980.0, 3182.0, 3392.0, 3607.0,
    3817.0, 3915.0, 4008.0, 4166.0, 4280.0 },
  0.0,
  0.0,
  1.0,
  0.01,
  0.001,
  1.0,
  1.0,
  0.0,
  0.18849554999999998,
  0.0,
  0.0,
  560.0,
  0.75,
  0.0,
  0.0,
  37175.0,
  4700.0,

  { -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 25.0, 30.0, 40.0, 50.0,
    60.0, 70.0, 80.0, 90.0, 100.0, 110.0, 120.0, 125.0, 130.0, 140.0, 150.0 },

  { 1030.0, 1135.0, 1247.0, 1367.0, 1495.0, 1630.0, 1772.0, 1922.0, 2000.0,
    2080.0, 2245.0, 2417.0, 2597.0, 2785.0, 2980.0, 3182.0, 3392.0, 3607.0,
    3817.0, 3915.0, 4008.0, 4166.0, 4280.0 },
  0.0,
  0.0,
  1.0,
  0.01,
  0.001,
  1.0,
  -1.0,
  0.0,
  0.18849554999999998,
  0.0,
  0.0,
  560.0,
  0.75,
  3.0,
  2.0,
  1.0,
  0.0,
  3.0,
  0.0,
  22.0,
  6.6,
  1000.0,
  10.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  170.0,
  170.0,
  2.0,
  0.01,
  0.0,
  0.0,
  1.0,
  1.0,
  0.0,

  { 0.2, 0.2, 0.2, 0.4, 0.6, 0.8, 1.0, 1.0 },

  { 0.0, 20.0, 28.0, 35.0, 40.0, 45.0, 50.0, 100.0 },
  0.0,
  255.0,
  0.055,
  1.0,
  0.00392156862745098,
  0.0,
  0.00392156862745098,
  0.00392156862745098,
  0.00392156862745098,
  0.00392156862745098,
  0.00392156862745098,
  0.00392156862745098,
  5.0,
  0.0,
  1.0,
  1.11764706,
  0.0,
  1.0,
  0.1,
  0.001,
  1.0,
  1.0,
  0.0,
  255.0,
  0.055,
  1.0,
  255.0,
  0.055,
  1.0,
  255.0,
  0.055,
  1.0,
  1.0,
  0.5,
  0.001,
  1.0,
  1.0,
  0.0,
  1.0,
  3000.0,
  1500.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  255.0,
  0.055,
  1.0,
  1.0,
  0.5,
  0.001,
  1.0,
  1.0,
  0.0,
  37.0,
  0.2,
  0.0,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  255.0,
  0.055,
  1.0,
  255.0,
  0.055,
  1.0,
  255.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  150.0,
  0.055,
  1.0,
  1.0,
  1000.0,
  500.0,
  0.0,
  0.055,
  1.0,

  { 0.0, 0.0 },
  1.0,
  0.5,
  0.001,
  1.0,
  1.0,
  0.0,
  500.0,
  500.0,
  1100.0,
  1000.0,
  150.0,
  1.0,
  0.1,
  0.30303030303030304,
  1.0,
  0.0,
  0.07,
  0.065,
  1.0,
  0.0,
  0.0,
  1.0,
  0.1,
  0.001,
  1.0,
  1.0,
  100.0,
  0.0,
  0.0,
  1.0,
  0.1,
  0.001,
  1.0,
  1.0,
  100.0,
  0.0,
  0.0,
  1.0,
  0.0,
  1.0,
  0.0,
  0.0,
  0.0,
  2.0,
  1.6,
  9.81,
  1.0,
  0.012309807214316005,
  3.6,
  0.27777777777777779,
  0.0,
  0.0,
  1.0,
  0.017453292519943295,
  -1.0,

  { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.0, 2.0, 3.0, 4.0 },

  { 0.0, 0.0, 0.05, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 1.0, 1.0, 1.0 },
  150.0,
  0.23148148148148145,
  0.017453292519943295,
  2.3499999999999996,
  -0.00015951014947644708,
  1.0,
  1.0,
  -0.0,
  -0.8,
  -0.0,
  0.8,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -1.0,
  0.05,
  0.0,
  150.0,
  -150.0,
  1.0,
  0.0,
  -150.0,
  0.0,
  0.0,
  1000.0,
  0.0,
  -1.0,
  0.0,
  -150.0,
  150.0,
  0.0,
  0.30303030303030304,
  1.0,
  0.0,
  0.07,
  0.065,
  1.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.0,
  2.0,
  1.6,
  9.81,
  1.0,
  0.27777777777777779,
  0.0,
  0.017453292519943295,
  -1.0,

  { 0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.0, 2.0, 3.0, 4.0 },

  { 0.0, 0.0, 0.05, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 1.0, 1.0, 1.0 },
  150.0,
  0.23148148148148145,
  0.017453292519943295,
  2.3499999999999996,
  -0.00015951014947644708,
  1.0,
  1.0,
  -0.0,
  -0.8,
  -0.0,
  0.8,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -0.0,
  1.0,
  -1.0,
  0.05,
  0.0,
  150.0,
  -150.0,
  1.0,
  0.0,
  -150.0,
  0.0,
  0.0,
  0.0,
  1.0,
  0.0,
  -150.0,
  150.0,
  0.0,
  0.1,
  80.0,
  80.0,
  0.0,
  0.0,
  1.0,
  0.0,
  0.00027777777777777778,
  0.0,
  0.001,
  0.0,
  1.0,
  0.0,
  16.0,
  1.0,
  1.0,
  0.0,

  { 1.0, 0.9, 0.8, 0.8, 0.8, 0.8, 0.8, 0.7, 0.7, 0.7, 0.7 },

  { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 },
  1.0,
  0.0,
  1000.0,
  0.1,
  0.5,
  0.10471975511965977,
  94.247779607693786,
  0.1,
  0.10471975511965977,
  0.10471975511965977,
  94.247779607693786,
  0.10471975511965977,
  0.01,
  0.001,
  1.0,
  1.0,
  0.0,
  1.0,
  0.001,
  1.0,
  1.0,
  0.0,
  0.0,
  1.0,
  1.0,

  { 144.0, 144.0 },
  -32767.0,
  200.0,
  32767.0,
  200.0,
  1.0,
  1000.0,
  200.0,
  0.0,
  11.0,
  0.055,
  1.0,
  1.0,
  2000.0,
  0.00392156862745098,
  0.055,
  1.0,
  0.1,
  0.00392156862745098,
  0.00392156862745098,
  0.00392156862745098,
  0.055,
  1.0,
  0.055,
  1.0,
  2000.0,
  0.055,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  1.0,
  0.055,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  1.0,
  0.055,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.11764706,
  1.0,
  1.0,
  0.5,
  0.001,
  1.0,
  1.0,
  298.15,
  1.0,
  10000.0,
  5.0,
  29.33893349725,
  298.15,
  3976.0,
  273.15,
  0.0,
  1.0,
  1.0,
  1.0,
  0.2,
  0.001,
  1.0,
  1.0,
  298.15,
  1.0,
  10000.0,
  5.0,
  298.15,
  3976.0,
  273.15,
  0.0,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.00392156862745098,
  0.055,
  1.0,
  0.055,
  1.0,
  1.0,
  1.0,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  0.055,
  1.0,
  1.0,
  1.0,
  1.0,
  -1.0,
  0.05,
  -1.0,
  -1.0,
  0.05,
  0.8,
  -1.0,
  0.05,
  -1.0,
  -1.0,
  0.05,
  0.8,
  -1.0,
  0.05,
  -1.0,
  0.05,
  0.017453292519943295,
  0.0025,
  1.53,
  57.295779513082323,
  1.0,
  0.2,
  0.25,
  23.203130434782612,
  1.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  -1.0,
  0.05,
  -1.0,
  -1.0,
  0.05,
  0.8,
  -1.0,
  0.05,
  -1.0,
  -1.0,
  0.05,
  0.8,
  -1.0,
  0.05,
  -1.0,
  0.05,
  0.017453292519943295,
  0.0025,
  1.53,
  57.295779513082323,
  1.0,
  0.2,
  0.25,
  23.203130434782612,
  1.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  0.01,
  0.0,
  100.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  100.0,
  0.0,
  1.0,
  1.0,
  1.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  0.0,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  1U,
  1U,
  2147483648U,
  2147483648U,
  0U,
  0U,
  48U,
  39U,
  73U,
  144U,
  64U,
  143U,
  235U,
  74U,
  127U,
  129U,
  254U,
  113U,
  105U,
  131U,
  254U,
  254U,
  48U,
  39U,
  73U,
  144U,
  64U,
  143U,
  235U,
  74U,
  127U,
  134U,
  254U,
  109U,
  131U,
  103U,
  254U,
  254U,
  25600,
  25600,
  33554U,
  0U,
  0U,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  1,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  0,
  0,
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },

  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  1,
  1,
  128U,
  128U,
  128U,
  128U,
  128U,
  192U,
  128U,
  160U,
  192U,
  224U,
  128U,
  172U,
  176U,
  180U,
  184U,
  164U,
  168U,

  /* Start of '<S690>/J-K Flip-Flop' */
  {
    0,
    1,
    0,

    { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
  }
  ,

  /* End of '<S690>/J-K Flip-Flop' */

  /* Start of '<S688>/J-K Flip-Flop' */
  {
    0,
    1,
    0,

    { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
  }
  ,

  /* End of '<S688>/J-K Flip-Flop' */

  /* Start of '<S686>/J-K Flip-Flop' */
  {
    0,
    1,
    0,

    { 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1 }
  }
  ,

  /* End of '<S686>/J-K Flip-Flop' */

  /* Start of '<S496>/Triggered Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S496>/Triggered Subsystem' */

  /* Start of '<S488>/Triggered Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S488>/Triggered Subsystem' */

  /* Start of '<S487>/Triggered Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S487>/Triggered Subsystem' */

  /* Start of '<S443>/Triggered Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S443>/Triggered Subsystem' */

  /* Start of '<S287>/Inverter_Temp' */
  {
    0.0,

    { 0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0,
      65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0, 100.0 },

    { 17151.0, 17400.0, 17688.0, 18017.0, 18387.0, 18797.0, 19247.0, 19733.0,
      20250.0, 20793.0, 21357.0, 21933.0, 22515.0, 23097.0, 23671.0, 24232.0,
      24775.0, 25296.0, 25792.0, 26261.0, 26702.0 }
  }
  ,

  /* End of '<S287>/Inverter_Temp' */

  /* Start of '<S287>/U_DC' */
  {
    0.0,
    0.031747039588558366
  }
  ,

  /* End of '<S287>/U_DC' */

  /* Start of '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  {
    1U,
    32768U,
    8U,
    2U,
    1024U,
    2048U,
    4096U,
    65536U,
    16384U,
    4294901760U,
    4U,
    131072U,
    262144U,
    65535U,
    2097152U,
    4194304U,
    8388608U,
    16777216U,
    33554432U,
    268435456U,
    2147483648U,
    16U,
    32U,
    64U,
    128U,
    256U,
    512U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
  }
  ,

  /* End of '<S287>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */

  /* Start of '<S287>/Wirkstrom Iq' */
  {
    0.0,
    0.0,
    560.0,
    1.5,
    10.0,
    0.053,
    25600
  }
  ,

  /* End of '<S287>/Wirkstrom Iq' */

  /* Start of '<S368>/Skalierung Drehzahl' */
  {
    0.1220703125
  }
  ,

  /* End of '<S368>/Skalierung Drehzahl' */

  /* Start of '<S286>/Inverter_Temp' */
  {
    0.0,

    { 0.0, 5.0, 10.0, 15.0, 20.0, 25.0, 30.0, 35.0, 40.0, 45.0, 50.0, 55.0, 60.0,
      65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0, 100.0 },

    { 17151.0, 17400.0, 17688.0, 18017.0, 18387.0, 18797.0, 19247.0, 19733.0,
      20250.0, 20793.0, 21357.0, 21933.0, 22515.0, 23097.0, 23671.0, 24232.0,
      24775.0, 25296.0, 25792.0, 26261.0, 26702.0 }
  }
  ,

  /* End of '<S286>/Inverter_Temp' */

  /* Start of '<S286>/U_DC' */
  {
    0.0,
    0.031747039588558366
  }
  ,

  /* End of '<S286>/U_DC' */

  /* Start of '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */
  {
    1U,
    32768U,
    8U,
    2U,
    1024U,
    2048U,
    4096U,
    65536U,
    16384U,
    4294901760U,
    4U,
    131072U,
    262144U,
    65535U,
    2097152U,
    4194304U,
    8388608U,
    16777216U,
    33554432U,
    268435456U,
    2147483648U,
    16U,
    32U,
    64U,
    128U,
    256U,
    512U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0U,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
  }
  ,

  /* End of '<S286>/Reg ID: 0x8F ERROR//Warning Register Auswertung1' */

  /* Start of '<S286>/Wirkstrom Iq' */
  {
    0.0,
    0.0,
    560.0,
    1.5,
    10.0,
    0.053,
    25600
  }
  ,

  /* End of '<S286>/Wirkstrom Iq' */

  /* Start of '<S288>/Skalierung Drehzahl' */
  {
    0.1220703125
  }
  ,

  /* End of '<S288>/Skalierung Drehzahl' */

  /* Start of '<S282>/Triggered Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S282>/Triggered Subsystem' */

  /* Start of '<S277>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S277>/Subsystem' */

  /* Start of '<S276>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S276>/Subsystem' */

  /* Start of '<S275>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S275>/Subsystem' */

  /* Start of '<S270>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S270>/Subsystem' */

  /* Start of '<S257>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S257>/Subsystem' */

  /* Start of '<S256>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S256>/Subsystem' */

  /* Start of '<S255>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S255>/Subsystem' */

  /* Start of '<S248>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S248>/Subsystem' */

  /* Start of '<S247>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S247>/Subsystem' */

  /* Start of '<S246>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S246>/Subsystem' */

  /* Start of '<S237>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S237>/Subsystem' */

  /* Start of '<S236>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S236>/Subsystem' */

  /* Start of '<S235>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S235>/Subsystem' */

  /* Start of '<S228>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S228>/Subsystem' */

  /* Start of '<S227>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S227>/Subsystem' */

  /* Start of '<S226>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S226>/Subsystem' */

  /* Start of '<S217>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S217>/Subsystem' */

  /* Start of '<S216>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S216>/Subsystem' */

  /* Start of '<S215>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S215>/Subsystem' */

  /* Start of '<S208>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S208>/Subsystem' */

  /* Start of '<S207>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S207>/Subsystem' */

  /* Start of '<S206>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S206>/Subsystem' */

  /* Start of '<S197>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S197>/Subsystem' */

  /* Start of '<S196>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S196>/Subsystem' */

  /* Start of '<S195>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S195>/Subsystem' */

  /* Start of '<S188>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S188>/Subsystem' */

  /* Start of '<S187>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S187>/Subsystem' */

  /* Start of '<S186>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S186>/Subsystem' */

  /* Start of '<S177>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S177>/Subsystem' */

  /* Start of '<S176>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S176>/Subsystem' */

  /* Start of '<S175>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S175>/Subsystem' */

  /* Start of '<S168>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S168>/Subsystem' */

  /* Start of '<S167>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S167>/Subsystem' */

  /* Start of '<S166>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S166>/Subsystem' */

  /* Start of '<S150>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S150>/Subsystem' */

  /* Start of '<S149>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S149>/Subsystem' */

  /* Start of '<S148>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S148>/Subsystem' */

  /* Start of '<S147>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S147>/Subsystem' */

  /* Start of '<S146>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S146>/Subsystem' */

  /* Start of '<S145>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S145>/Subsystem' */

  /* Start of '<S144>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S144>/Subsystem' */

  /* Start of '<S143>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S143>/Subsystem' */

  /* Start of '<S142>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S142>/Subsystem' */

  /* Start of '<S141>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S141>/Subsystem' */

  /* Start of '<S120>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S120>/Subsystem' */

  /* Start of '<S119>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S119>/Subsystem' */

  /* Start of '<S118>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S118>/Subsystem' */

  /* Start of '<S117>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S117>/Subsystem' */

  /* Start of '<S116>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S116>/Subsystem' */

  /* Start of '<S115>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S115>/Subsystem' */

  /* Start of '<S114>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S114>/Subsystem' */

  /* Start of '<S113>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S113>/Subsystem' */

  /* Start of '<S112>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S112>/Subsystem' */

  /* Start of '<S111>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  ,

  /* End of '<S111>/Subsystem' */

  /* Start of '<S91>/Subsystem' */
  {
    0.0,
    1.0,
    1.0,
    0.0,
    0.0,
    0.0,
    1U
  }
  /* End of '<S91>/Subsystem' */
};