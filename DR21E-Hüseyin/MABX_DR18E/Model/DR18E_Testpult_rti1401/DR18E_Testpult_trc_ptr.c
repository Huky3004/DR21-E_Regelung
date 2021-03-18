/***************************************************************************

   Source file DR18E_Testpult_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1401 7.8 (02-May-2017)
   Sat Feb 23 14:54:45 2019

   Copyright 2019, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "DR18E_Testpult_trc_ptr.h"
#include "DR18E_Testpult.h"
#include "DR18E_Testpult_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_DR18E_Testpult_real_T_0 = NULL;
volatile real32_T *p_0_DR18E_Testpult_real32_T_3 = NULL;
volatile uint32_T *p_0_DR18E_Testpult_uint32_T_4 = NULL;
volatile int32_T *p_0_DR18E_Testpult_int32_T_5 = NULL;
volatile uint32_T *p_0_DR18E_Testpult_uint32_T_6 = NULL;
volatile int16_T *p_0_DR18E_Testpult_int16_T_7 = NULL;
volatile uint16_T *p_0_DR18E_Testpult_uint16_T_8 = NULL;
volatile uint8_T *p_0_DR18E_Testpult_uint8_T_9 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_10 = NULL;
volatile uint8_T *p_0_DR18E_Testpult_uint8_T_11 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_12 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_13 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_14 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_15 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_16 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_17 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_18 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_19 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_20 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_21 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_22 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_23 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_24 = NULL;
volatile uint32_T *p_0_DR18E_Testpult_uint32_T_25 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_26 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_27 = NULL;
volatile int32_T *p_0_DR18E_Testpult_int32_T_28 = NULL;
volatile int16_T *p_0_DR18E_Testpult_int16_T_29 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_30 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_31 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_32 = NULL;
volatile uint32_T *p_0_DR18E_Testpult_uint32_T_33 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_34 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_35 = NULL;
volatile int32_T *p_0_DR18E_Testpult_int32_T_36 = NULL;
volatile int16_T *p_0_DR18E_Testpult_int16_T_37 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_38 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_39 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_40 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_41 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_42 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_43 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_44 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_45 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_46 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_47 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_48 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_49 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_50 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_51 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_52 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_53 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_54 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_55 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_56 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_57 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_58 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_59 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_60 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_61 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_62 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_63 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_64 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_65 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_66 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_67 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_68 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_69 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_70 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_71 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_72 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_73 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_74 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_75 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_76 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_77 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_78 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_79 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_80 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_81 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_82 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_83 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_84 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_85 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_86 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_87 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_88 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_89 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_90 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_91 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_92 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_93 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_94 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_95 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_96 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_97 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_98 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_99 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_100 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_101 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_102 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_103 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_104 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_105 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_106 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_107 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_108 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_109 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_110 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_111 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_112 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_113 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_114 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_115 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_116 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_117 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_118 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_119 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_120 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_121 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_122 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_123 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_124 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_125 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_126 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_127 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_128 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_129 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_130 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_131 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_132 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_133 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_134 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_135 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_136 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_137 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_138 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_139 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_140 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_141 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_142 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_143 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_144 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_145 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_146 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_147 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_148 = NULL;
volatile real_T *p_0_DR18E_Testpult_real_T_149 = NULL;
volatile boolean_T *p_0_DR18E_Testpult_boolean_T_150 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_0 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_1 = NULL;
volatile uint16_T *p_1_DR18E_Testpult_uint16_T_2 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_3 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_4 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_5 = NULL;
volatile uint16_T *p_1_DR18E_Testpult_uint16_T_6 = NULL;
volatile int16_T *p_1_DR18E_Testpult_int16_T_7 = NULL;
volatile uint16_T *p_1_DR18E_Testpult_uint16_T_8 = NULL;
volatile uint8_T *p_1_DR18E_Testpult_uint8_T_9 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_10 = NULL;
volatile uint8_T *p_1_DR18E_Testpult_uint8_T_11 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_12 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_13 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_14 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_15 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_16 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_17 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_18 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_19 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_20 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_21 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_22 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_23 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_24 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_25 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_26 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_27 = NULL;
volatile int16_T *p_1_DR18E_Testpult_int16_T_28 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_29 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_30 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_31 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_32 = NULL;
volatile boolean_T *p_1_DR18E_Testpult_boolean_T_33 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_34 = NULL;
volatile int16_T *p_1_DR18E_Testpult_int16_T_35 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_36 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_37 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_38 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_39 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_40 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_41 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_42 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_43 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_44 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_45 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_46 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_47 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_48 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_49 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_50 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_51 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_52 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_53 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_54 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_55 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_56 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_57 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_58 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_59 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_60 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_61 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_62 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_63 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_64 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_65 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_66 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_67 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_68 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_69 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_70 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_71 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_72 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_73 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_74 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_75 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_76 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_77 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_78 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_79 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_80 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_81 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_82 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_83 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_84 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_85 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_86 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_87 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_88 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_89 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_90 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_91 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_92 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_93 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_94 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_95 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_96 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_97 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_98 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_99 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_100 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_101 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_102 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_103 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_104 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_105 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_106 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_107 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_108 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_109 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_110 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_111 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_112 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_113 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_114 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_115 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_116 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_117 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_118 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_119 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_120 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_121 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_122 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_123 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_124 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_125 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_126 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_127 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_128 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_129 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_130 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_131 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_132 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_133 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_134 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_135 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_136 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_137 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_138 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_139 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_140 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_141 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_142 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_143 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_144 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_145 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_146 = NULL;
volatile real_T *p_1_DR18E_Testpult_real_T_147 = NULL;
volatile uint32_T *p_1_DR18E_Testpult_uint32_T_148 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_0 = NULL;
volatile uint32_T *p_2_DR18E_Testpult_uint32_T_1 = NULL;
volatile int32_T *p_2_DR18E_Testpult_int32_T_2 = NULL;
volatile uint32_T *p_2_DR18E_Testpult_uint32_T_3 = NULL;
volatile int_T *p_2_DR18E_Testpult_int_T_4 = NULL;
volatile uint16_T *p_2_DR18E_Testpult_uint16_T_5 = NULL;
volatile boolean_T *p_2_DR18E_Testpult_boolean_T_6 = NULL;
volatile int8_T *p_2_DR18E_Testpult_int8_T_7 = NULL;
volatile uint8_T *p_2_DR18E_Testpult_uint8_T_8 = NULL;
volatile boolean_T *p_2_DR18E_Testpult_boolean_T_9 = NULL;
volatile boolean_T *p_2_DR18E_Testpult_boolean_T_10 = NULL;
volatile boolean_T *p_2_DR18E_Testpult_boolean_T_11 = NULL;
volatile boolean_T *p_2_DR18E_Testpult_boolean_T_12 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_13 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_14 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_15 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_16 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_17 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_18 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_19 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_20 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_21 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_22 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_23 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_24 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_25 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_26 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_27 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_28 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_29 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_30 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_31 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_32 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_33 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_34 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_35 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_36 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_37 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_38 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_39 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_40 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_41 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_42 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_43 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_44 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_45 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_46 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_47 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_48 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_49 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_50 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_51 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_52 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_53 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_54 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_55 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_56 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_57 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_58 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_59 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_60 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_61 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_62 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_63 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_64 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_65 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_66 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_67 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_68 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_69 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_70 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_71 = NULL;
volatile real_T *p_2_DR18E_Testpult_real_T_72 = NULL;
volatile real_T *p_3_DR18E_Testpult_real_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_DR18E_Testpult_real_T_0 = &DR18E_Testpult_B.SFunction1_o1;
  p_0_DR18E_Testpult_real32_T_3 = &DR18E_Testpult_B.DataTypeConversion_hf;
  p_0_DR18E_Testpult_uint32_T_4 = &DR18E_Testpult_B.SFunction1_o1_eo;
  p_0_DR18E_Testpult_int32_T_5 = &DR18E_Testpult_B.Gain2_i;
  p_0_DR18E_Testpult_uint32_T_6 = &DR18E_Testpult_B.mkm;
  p_0_DR18E_Testpult_int16_T_7 = &DR18E_Testpult_B.O_TS_sound;
  p_0_DR18E_Testpult_uint16_T_8 = &DR18E_Testpult_B.DataTypeConversion2_ap;
  p_0_DR18E_Testpult_uint8_T_9 = &DR18E_Testpult_B.Compare;
  p_0_DR18E_Testpult_boolean_T_10 = &DR18E_Testpult_B.Compare_k2;
  p_0_DR18E_Testpult_uint8_T_11 = &DR18E_Testpult_B.Gain_bt;
  p_0_DR18E_Testpult_boolean_T_12 = &DR18E_Testpult_B.JKFlipFlop.Memory;
  p_0_DR18E_Testpult_boolean_T_13 = &DR18E_Testpult_B.JKFlipFlop_l.Memory;
  p_0_DR18E_Testpult_boolean_T_14 = &DR18E_Testpult_B.JKFlipFlop_n.Memory;
  p_0_DR18E_Testpult_real_T_15 = &DR18E_Testpult_B.TriggeredSubsystem_f.Delay;
  p_0_DR18E_Testpult_boolean_T_16 =
    &DR18E_Testpult_B.TriggeredSubsystem_f.RelationalOperator;
  p_0_DR18E_Testpult_real_T_17 = &DR18E_Testpult_B.TriggeredSubsystem_i.Delay;
  p_0_DR18E_Testpult_boolean_T_18 =
    &DR18E_Testpult_B.TriggeredSubsystem_i.RelationalOperator;
  p_0_DR18E_Testpult_real_T_19 = &DR18E_Testpult_B.TriggeredSubsystem.Delay;
  p_0_DR18E_Testpult_boolean_T_20 =
    &DR18E_Testpult_B.TriggeredSubsystem.RelationalOperator;
  p_0_DR18E_Testpult_real_T_21 = &DR18E_Testpult_B.TriggeredSubsystem_k.Delay;
  p_0_DR18E_Testpult_boolean_T_22 =
    &DR18E_Testpult_B.TriggeredSubsystem_k.RelationalOperator;
  p_0_DR18E_Testpult_real_T_23 =
    &DR18E_Testpult_B.Inverter_Temp_e.BAMOCARPGD3ManualS48;
  p_0_DR18E_Testpult_real_T_24 =
    &DR18E_Testpult_B.U_DC_o.UmrechnungRegisterSpannungManua;
  p_0_DR18E_Testpult_uint32_T_25 =
    &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_c.DataTypeConversion;
  p_0_DR18E_Testpult_boolean_T_26 =
    &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_c.Compare;
  p_0_DR18E_Testpult_real_T_27 = &DR18E_Testpult_B.WirkstromIq_e.Divide2;
  p_0_DR18E_Testpult_int32_T_28 = &DR18E_Testpult_B.WirkstromIq_e.Gain3;
  p_0_DR18E_Testpult_int16_T_29 =
    &DR18E_Testpult_B.WirkstromIq_e.DataTypeConversion1;
  p_0_DR18E_Testpult_real_T_30 = &DR18E_Testpult_B.SkalierungDrehzahl_k.Gain;
  p_0_DR18E_Testpult_real_T_31 =
    &DR18E_Testpult_B.Inverter_Temp.BAMOCARPGD3ManualS48;
  p_0_DR18E_Testpult_real_T_32 =
    &DR18E_Testpult_B.U_DC.UmrechnungRegisterSpannungManua;
  p_0_DR18E_Testpult_uint32_T_33 =
    &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_f.DataTypeConversion;
  p_0_DR18E_Testpult_boolean_T_34 =
    &DR18E_Testpult_B.RegID0x8FERRORWarningRegister_f.Compare;
  p_0_DR18E_Testpult_real_T_35 = &DR18E_Testpult_B.WirkstromIq.Divide2;
  p_0_DR18E_Testpult_int32_T_36 = &DR18E_Testpult_B.WirkstromIq.Gain3;
  p_0_DR18E_Testpult_int16_T_37 =
    &DR18E_Testpult_B.WirkstromIq.DataTypeConversion1;
  p_0_DR18E_Testpult_real_T_38 = &DR18E_Testpult_B.SkalierungDrehzahl.Gain;
  p_0_DR18E_Testpult_real_T_39 = &DR18E_Testpult_B.TriggeredSubsystem_a.Delay;
  p_0_DR18E_Testpult_boolean_T_40 =
    &DR18E_Testpult_B.TriggeredSubsystem_a.RelationalOperator;
  p_0_DR18E_Testpult_real_T_41 = &DR18E_Testpult_B.Subsystem_gh.Delay;
  p_0_DR18E_Testpult_boolean_T_42 =
    &DR18E_Testpult_B.Subsystem_gh.RelationalOperator;
  p_0_DR18E_Testpult_real_T_43 = &DR18E_Testpult_B.Subsystem_bp.Delay;
  p_0_DR18E_Testpult_boolean_T_44 =
    &DR18E_Testpult_B.Subsystem_bp.RelationalOperator;
  p_0_DR18E_Testpult_real_T_45 = &DR18E_Testpult_B.Subsystem_p.Delay;
  p_0_DR18E_Testpult_boolean_T_46 =
    &DR18E_Testpult_B.Subsystem_p.RelationalOperator;
  p_0_DR18E_Testpult_real_T_47 = &DR18E_Testpult_B.Subsystem_cy.Delay;
  p_0_DR18E_Testpult_boolean_T_48 =
    &DR18E_Testpult_B.Subsystem_cy.RelationalOperator;
  p_0_DR18E_Testpult_real_T_49 = &DR18E_Testpult_B.Subsystem_kn.Delay;
  p_0_DR18E_Testpult_boolean_T_50 =
    &DR18E_Testpult_B.Subsystem_kn.RelationalOperator;
  p_0_DR18E_Testpult_real_T_51 = &DR18E_Testpult_B.Subsystem_dm.Delay;
  p_0_DR18E_Testpult_boolean_T_52 =
    &DR18E_Testpult_B.Subsystem_dm.RelationalOperator;
  p_0_DR18E_Testpult_real_T_53 = &DR18E_Testpult_B.Subsystem_e.Delay;
  p_0_DR18E_Testpult_boolean_T_54 =
    &DR18E_Testpult_B.Subsystem_e.RelationalOperator;
  p_0_DR18E_Testpult_real_T_55 = &DR18E_Testpult_B.Subsystem_oy.Delay;
  p_0_DR18E_Testpult_boolean_T_56 =
    &DR18E_Testpult_B.Subsystem_oy.RelationalOperator;
  p_0_DR18E_Testpult_real_T_57 = &DR18E_Testpult_B.Subsystem_o.Delay;
  p_0_DR18E_Testpult_boolean_T_58 =
    &DR18E_Testpult_B.Subsystem_o.RelationalOperator;
  p_0_DR18E_Testpult_real_T_59 = &DR18E_Testpult_B.Subsystem_n4.Delay;
  p_0_DR18E_Testpult_boolean_T_60 =
    &DR18E_Testpult_B.Subsystem_n4.RelationalOperator;
  p_0_DR18E_Testpult_real_T_61 = &DR18E_Testpult_B.Subsystem_c.Delay;
  p_0_DR18E_Testpult_boolean_T_62 =
    &DR18E_Testpult_B.Subsystem_c.RelationalOperator;
  p_0_DR18E_Testpult_real_T_63 = &DR18E_Testpult_B.Subsystem_fq.Delay;
  p_0_DR18E_Testpult_boolean_T_64 =
    &DR18E_Testpult_B.Subsystem_fq.RelationalOperator;
  p_0_DR18E_Testpult_real_T_65 = &DR18E_Testpult_B.Subsystem_fr.Delay;
  p_0_DR18E_Testpult_boolean_T_66 =
    &DR18E_Testpult_B.Subsystem_fr.RelationalOperator;
  p_0_DR18E_Testpult_real_T_67 = &DR18E_Testpult_B.Subsystem_be.Delay;
  p_0_DR18E_Testpult_boolean_T_68 =
    &DR18E_Testpult_B.Subsystem_be.RelationalOperator;
  p_0_DR18E_Testpult_real_T_69 = &DR18E_Testpult_B.Subsystem_js.Delay;
  p_0_DR18E_Testpult_boolean_T_70 =
    &DR18E_Testpult_B.Subsystem_js.RelationalOperator;
  p_0_DR18E_Testpult_real_T_71 = &DR18E_Testpult_B.Subsystem_gd.Delay;
  p_0_DR18E_Testpult_boolean_T_72 =
    &DR18E_Testpult_B.Subsystem_gd.RelationalOperator;
  p_0_DR18E_Testpult_real_T_73 = &DR18E_Testpult_B.Subsystem_a.Delay;
  p_0_DR18E_Testpult_boolean_T_74 =
    &DR18E_Testpult_B.Subsystem_a.RelationalOperator;
  p_0_DR18E_Testpult_real_T_75 = &DR18E_Testpult_B.Subsystem_k.Delay;
  p_0_DR18E_Testpult_boolean_T_76 =
    &DR18E_Testpult_B.Subsystem_k.RelationalOperator;
  p_0_DR18E_Testpult_real_T_77 = &DR18E_Testpult_B.Subsystem_bk.Delay;
  p_0_DR18E_Testpult_boolean_T_78 =
    &DR18E_Testpult_B.Subsystem_bk.RelationalOperator;
  p_0_DR18E_Testpult_real_T_79 = &DR18E_Testpult_B.Subsystem_i.Delay;
  p_0_DR18E_Testpult_boolean_T_80 =
    &DR18E_Testpult_B.Subsystem_i.RelationalOperator;
  p_0_DR18E_Testpult_real_T_81 = &DR18E_Testpult_B.Subsystem_b.Delay;
  p_0_DR18E_Testpult_boolean_T_82 =
    &DR18E_Testpult_B.Subsystem_b.RelationalOperator;
  p_0_DR18E_Testpult_real_T_83 = &DR18E_Testpult_B.Subsystem_l.Delay;
  p_0_DR18E_Testpult_boolean_T_84 =
    &DR18E_Testpult_B.Subsystem_l.RelationalOperator;
  p_0_DR18E_Testpult_real_T_85 = &DR18E_Testpult_B.Subsystem_n.Delay;
  p_0_DR18E_Testpult_boolean_T_86 =
    &DR18E_Testpult_B.Subsystem_n.RelationalOperator;
  p_0_DR18E_Testpult_real_T_87 = &DR18E_Testpult_B.Subsystem_g.Delay;
  p_0_DR18E_Testpult_boolean_T_88 =
    &DR18E_Testpult_B.Subsystem_g.RelationalOperator;
  p_0_DR18E_Testpult_real_T_89 = &DR18E_Testpult_B.Subsystem_j.Delay;
  p_0_DR18E_Testpult_boolean_T_90 =
    &DR18E_Testpult_B.Subsystem_j.RelationalOperator;
  p_0_DR18E_Testpult_real_T_91 = &DR18E_Testpult_B.Subsystem_f.Delay;
  p_0_DR18E_Testpult_boolean_T_92 =
    &DR18E_Testpult_B.Subsystem_f.RelationalOperator;
  p_0_DR18E_Testpult_real_T_93 = &DR18E_Testpult_B.Subsystem.Delay;
  p_0_DR18E_Testpult_boolean_T_94 =
    &DR18E_Testpult_B.Subsystem.RelationalOperator;
  p_0_DR18E_Testpult_real_T_95 = &DR18E_Testpult_B.Subsystem_d.Delay;
  p_0_DR18E_Testpult_boolean_T_96 =
    &DR18E_Testpult_B.Subsystem_d.RelationalOperator;
  p_0_DR18E_Testpult_real_T_97 = &DR18E_Testpult_B.Subsystem_bek.Delay;
  p_0_DR18E_Testpult_boolean_T_98 =
    &DR18E_Testpult_B.Subsystem_bek.RelationalOperator;
  p_0_DR18E_Testpult_real_T_99 = &DR18E_Testpult_B.Subsystem_e3.Delay;
  p_0_DR18E_Testpult_boolean_T_100 =
    &DR18E_Testpult_B.Subsystem_e3.RelationalOperator;
  p_0_DR18E_Testpult_real_T_101 = &DR18E_Testpult_B.Subsystem_kl.Delay;
  p_0_DR18E_Testpult_boolean_T_102 =
    &DR18E_Testpult_B.Subsystem_kl.RelationalOperator;
  p_0_DR18E_Testpult_real_T_103 = &DR18E_Testpult_B.Subsystem_lz.Delay;
  p_0_DR18E_Testpult_boolean_T_104 =
    &DR18E_Testpult_B.Subsystem_lz.RelationalOperator;
  p_0_DR18E_Testpult_real_T_105 = &DR18E_Testpult_B.Subsystem_m.Delay;
  p_0_DR18E_Testpult_boolean_T_106 =
    &DR18E_Testpult_B.Subsystem_m.RelationalOperator;
  p_0_DR18E_Testpult_real_T_107 = &DR18E_Testpult_B.Subsystem_nc.Delay;
  p_0_DR18E_Testpult_boolean_T_108 =
    &DR18E_Testpult_B.Subsystem_nc.RelationalOperator;
  p_0_DR18E_Testpult_real_T_109 = &DR18E_Testpult_B.Subsystem_h.Delay;
  p_0_DR18E_Testpult_boolean_T_110 =
    &DR18E_Testpult_B.Subsystem_h.RelationalOperator;
  p_0_DR18E_Testpult_real_T_111 = &DR18E_Testpult_B.Subsystem_ih.Delay;
  p_0_DR18E_Testpult_boolean_T_112 =
    &DR18E_Testpult_B.Subsystem_ih.RelationalOperator;
  p_0_DR18E_Testpult_real_T_113 = &DR18E_Testpult_B.Subsystem_jsn.Delay;
  p_0_DR18E_Testpult_boolean_T_114 =
    &DR18E_Testpult_B.Subsystem_jsn.RelationalOperator;
  p_0_DR18E_Testpult_real_T_115 = &DR18E_Testpult_B.Subsystem_mf.Delay;
  p_0_DR18E_Testpult_boolean_T_116 =
    &DR18E_Testpult_B.Subsystem_mf.RelationalOperator;
  p_0_DR18E_Testpult_real_T_117 = &DR18E_Testpult_B.Subsystem_c0.Delay;
  p_0_DR18E_Testpult_boolean_T_118 =
    &DR18E_Testpult_B.Subsystem_c0.RelationalOperator;
  p_0_DR18E_Testpult_real_T_119 = &DR18E_Testpult_B.Subsystem_fqo.Delay;
  p_0_DR18E_Testpult_boolean_T_120 =
    &DR18E_Testpult_B.Subsystem_fqo.RelationalOperator;
  p_0_DR18E_Testpult_real_T_121 = &DR18E_Testpult_B.Subsystem_eq.Delay;
  p_0_DR18E_Testpult_boolean_T_122 =
    &DR18E_Testpult_B.Subsystem_eq.RelationalOperator;
  p_0_DR18E_Testpult_real_T_123 = &DR18E_Testpult_B.Subsystem_ot.Delay;
  p_0_DR18E_Testpult_boolean_T_124 =
    &DR18E_Testpult_B.Subsystem_ot.RelationalOperator;
  p_0_DR18E_Testpult_real_T_125 = &DR18E_Testpult_B.Subsystem_nw.Delay;
  p_0_DR18E_Testpult_boolean_T_126 =
    &DR18E_Testpult_B.Subsystem_nw.RelationalOperator;
  p_0_DR18E_Testpult_real_T_127 = &DR18E_Testpult_B.Subsystem_ms.Delay;
  p_0_DR18E_Testpult_boolean_T_128 =
    &DR18E_Testpult_B.Subsystem_ms.RelationalOperator;
  p_0_DR18E_Testpult_real_T_129 = &DR18E_Testpult_B.Subsystem_nx.Delay;
  p_0_DR18E_Testpult_boolean_T_130 =
    &DR18E_Testpult_B.Subsystem_nx.RelationalOperator;
  p_0_DR18E_Testpult_real_T_131 = &DR18E_Testpult_B.Subsystem_co.Delay;
  p_0_DR18E_Testpult_boolean_T_132 =
    &DR18E_Testpult_B.Subsystem_co.RelationalOperator;
  p_0_DR18E_Testpult_real_T_133 = &DR18E_Testpult_B.Subsystem_la.Delay;
  p_0_DR18E_Testpult_boolean_T_134 =
    &DR18E_Testpult_B.Subsystem_la.RelationalOperator;
  p_0_DR18E_Testpult_real_T_135 = &DR18E_Testpult_B.Subsystem_nm.Delay;
  p_0_DR18E_Testpult_boolean_T_136 =
    &DR18E_Testpult_B.Subsystem_nm.RelationalOperator;
  p_0_DR18E_Testpult_real_T_137 = &DR18E_Testpult_B.Subsystem_fe.Delay;
  p_0_DR18E_Testpult_boolean_T_138 =
    &DR18E_Testpult_B.Subsystem_fe.RelationalOperator;
  p_0_DR18E_Testpult_real_T_139 = &DR18E_Testpult_B.Subsystem_om.Delay;
  p_0_DR18E_Testpult_boolean_T_140 =
    &DR18E_Testpult_B.Subsystem_om.RelationalOperator;
  p_0_DR18E_Testpult_real_T_141 = &DR18E_Testpult_B.Subsystem_dl.Delay;
  p_0_DR18E_Testpult_boolean_T_142 =
    &DR18E_Testpult_B.Subsystem_dl.RelationalOperator;
  p_0_DR18E_Testpult_real_T_143 = &DR18E_Testpult_B.Subsystem_im.Delay;
  p_0_DR18E_Testpult_boolean_T_144 =
    &DR18E_Testpult_B.Subsystem_im.RelationalOperator;
  p_0_DR18E_Testpult_real_T_145 = &DR18E_Testpult_B.Subsystem_e1.Delay;
  p_0_DR18E_Testpult_boolean_T_146 =
    &DR18E_Testpult_B.Subsystem_e1.RelationalOperator;
  p_0_DR18E_Testpult_real_T_147 = &DR18E_Testpult_B.Subsystem_ig.Delay;
  p_0_DR18E_Testpult_boolean_T_148 =
    &DR18E_Testpult_B.Subsystem_ig.RelationalOperator;
  p_0_DR18E_Testpult_real_T_149 = &DR18E_Testpult_B.Subsystem_ld.Delay;
  p_0_DR18E_Testpult_boolean_T_150 =
    &DR18E_Testpult_B.Subsystem_ld.RelationalOperator;
  p_1_DR18E_Testpult_real_T_0 = &DR18E_Testpult_P.PID_fromGA_D;
  p_1_DR18E_Testpult_uint32_T_1 = &DR18E_Testpult_P.uHz_BitMask;
  p_1_DR18E_Testpult_uint16_T_2 = &DR18E_Testpult_P.Difference2_ICPrevInput;
  p_1_DR18E_Testpult_boolean_T_3 =
    &DR18E_Testpult_P.SRFlipFlop_initial_condition;
  p_1_DR18E_Testpult_real_T_4 = &DR18E_Testpult_P.TXstatus_Y0;
  p_1_DR18E_Testpult_uint32_T_5 = &DR18E_Testpult_P.Constant_Value_fe;
  p_1_DR18E_Testpult_uint16_T_6 = &DR18E_Testpult_P.ResetValue1_Value;
  p_1_DR18E_Testpult_int16_T_7 = &DR18E_Testpult_P.Gain2_Gain_p;
  p_1_DR18E_Testpult_uint16_T_8 = &DR18E_Testpult_P.mkm_Gain;
  p_1_DR18E_Testpult_uint8_T_9 = &DR18E_Testpult_P.ManualSwitch_CurrentSetting;
  p_1_DR18E_Testpult_boolean_T_10 = &DR18E_Testpult_P.Mem1_X0;
  p_1_DR18E_Testpult_uint8_T_11 = &DR18E_Testpult_P.Gain_Gain_dz;
  p_1_DR18E_Testpult_boolean_T_12 = &DR18E_Testpult_P.JKFlipFlop.Q_Y0;
  p_1_DR18E_Testpult_boolean_T_13 = &DR18E_Testpult_P.JKFlipFlop_l.Q_Y0;
  p_1_DR18E_Testpult_boolean_T_14 = &DR18E_Testpult_P.JKFlipFlop_n.Q_Y0;
  p_1_DR18E_Testpult_real_T_15 =
    &DR18E_Testpult_P.TriggeredSubsystem_f.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_16 =
    &DR18E_Testpult_P.TriggeredSubsystem_f.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_17 =
    &DR18E_Testpult_P.TriggeredSubsystem_i.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_18 =
    &DR18E_Testpult_P.TriggeredSubsystem_i.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_19 =
    &DR18E_Testpult_P.TriggeredSubsystem.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_20 =
    &DR18E_Testpult_P.TriggeredSubsystem.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_21 =
    &DR18E_Testpult_P.TriggeredSubsystem_k.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_22 =
    &DR18E_Testpult_P.TriggeredSubsystem_k.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_23 =
    &DR18E_Testpult_P.Inverter_Temp_e.Inverter_Temp_Y0;
  p_1_DR18E_Testpult_real_T_24 = &DR18E_Testpult_P.U_DC_o.U_DC_Y0;
  p_1_DR18E_Testpult_uint32_T_25 =
    &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_c.BADPARAS_BitMask;
  p_1_DR18E_Testpult_boolean_T_26 =
    &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_c._BADPARAS_Y0;
  p_1_DR18E_Testpult_real_T_27 =
    &DR18E_Testpult_P.WirkstromIq_e.WirkstromIqinAU1_Y0;
  p_1_DR18E_Testpult_int16_T_28 = &DR18E_Testpult_P.WirkstromIq_e.Gain3_Gain;
  p_1_DR18E_Testpult_real_T_29 =
    &DR18E_Testpult_P.SkalierungDrehzahl_k.Gain_Gain;
  p_1_DR18E_Testpult_real_T_30 =
    &DR18E_Testpult_P.Inverter_Temp.Inverter_Temp_Y0;
  p_1_DR18E_Testpult_real_T_31 = &DR18E_Testpult_P.U_DC.U_DC_Y0;
  p_1_DR18E_Testpult_uint32_T_32 =
    &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_f.BADPARAS_BitMask;
  p_1_DR18E_Testpult_boolean_T_33 =
    &DR18E_Testpult_P.RegID0x8FERRORWarningRegister_f._BADPARAS_Y0;
  p_1_DR18E_Testpult_real_T_34 =
    &DR18E_Testpult_P.WirkstromIq.WirkstromIqinAU1_Y0;
  p_1_DR18E_Testpult_int16_T_35 = &DR18E_Testpult_P.WirkstromIq.Gain3_Gain;
  p_1_DR18E_Testpult_real_T_36 = &DR18E_Testpult_P.SkalierungDrehzahl.Gain_Gain;
  p_1_DR18E_Testpult_real_T_37 =
    &DR18E_Testpult_P.TriggeredSubsystem_a.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_38 =
    &DR18E_Testpult_P.TriggeredSubsystem_a.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_39 = &DR18E_Testpult_P.Subsystem_gh.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_40 =
    &DR18E_Testpult_P.Subsystem_gh.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_41 = &DR18E_Testpult_P.Subsystem_bp.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_42 =
    &DR18E_Testpult_P.Subsystem_bp.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_43 = &DR18E_Testpult_P.Subsystem_p.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_44 =
    &DR18E_Testpult_P.Subsystem_p.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_45 = &DR18E_Testpult_P.Subsystem_cy.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_46 =
    &DR18E_Testpult_P.Subsystem_cy.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_47 = &DR18E_Testpult_P.Subsystem_kn.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_48 =
    &DR18E_Testpult_P.Subsystem_kn.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_49 = &DR18E_Testpult_P.Subsystem_dm.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_50 =
    &DR18E_Testpult_P.Subsystem_dm.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_51 = &DR18E_Testpult_P.Subsystem_e.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_52 =
    &DR18E_Testpult_P.Subsystem_e.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_53 = &DR18E_Testpult_P.Subsystem_oy.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_54 =
    &DR18E_Testpult_P.Subsystem_oy.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_55 = &DR18E_Testpult_P.Subsystem_o.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_56 =
    &DR18E_Testpult_P.Subsystem_o.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_57 = &DR18E_Testpult_P.Subsystem_n4.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_58 =
    &DR18E_Testpult_P.Subsystem_n4.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_59 = &DR18E_Testpult_P.Subsystem_c.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_60 =
    &DR18E_Testpult_P.Subsystem_c.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_61 = &DR18E_Testpult_P.Subsystem_fq.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_62 =
    &DR18E_Testpult_P.Subsystem_fq.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_63 = &DR18E_Testpult_P.Subsystem_fr.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_64 =
    &DR18E_Testpult_P.Subsystem_fr.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_65 = &DR18E_Testpult_P.Subsystem_be.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_66 =
    &DR18E_Testpult_P.Subsystem_be.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_67 = &DR18E_Testpult_P.Subsystem_js.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_68 =
    &DR18E_Testpult_P.Subsystem_js.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_69 = &DR18E_Testpult_P.Subsystem_gd.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_70 =
    &DR18E_Testpult_P.Subsystem_gd.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_71 = &DR18E_Testpult_P.Subsystem_a.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_72 =
    &DR18E_Testpult_P.Subsystem_a.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_73 = &DR18E_Testpult_P.Subsystem_k.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_74 =
    &DR18E_Testpult_P.Subsystem_k.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_75 = &DR18E_Testpult_P.Subsystem_bk.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_76 =
    &DR18E_Testpult_P.Subsystem_bk.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_77 = &DR18E_Testpult_P.Subsystem_i.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_78 =
    &DR18E_Testpult_P.Subsystem_i.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_79 = &DR18E_Testpult_P.Subsystem_b.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_80 =
    &DR18E_Testpult_P.Subsystem_b.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_81 = &DR18E_Testpult_P.Subsystem_l.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_82 =
    &DR18E_Testpult_P.Subsystem_l.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_83 = &DR18E_Testpult_P.Subsystem_n.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_84 =
    &DR18E_Testpult_P.Subsystem_n.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_85 = &DR18E_Testpult_P.Subsystem_g.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_86 =
    &DR18E_Testpult_P.Subsystem_g.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_87 = &DR18E_Testpult_P.Subsystem_j.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_88 =
    &DR18E_Testpult_P.Subsystem_j.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_89 = &DR18E_Testpult_P.Subsystem_f.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_90 =
    &DR18E_Testpult_P.Subsystem_f.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_91 = &DR18E_Testpult_P.Subsystem.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_92 = &DR18E_Testpult_P.Subsystem.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_93 = &DR18E_Testpult_P.Subsystem_d.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_94 =
    &DR18E_Testpult_P.Subsystem_d.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_95 = &DR18E_Testpult_P.Subsystem_bek.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_96 =
    &DR18E_Testpult_P.Subsystem_bek.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_97 = &DR18E_Testpult_P.Subsystem_e3.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_98 =
    &DR18E_Testpult_P.Subsystem_e3.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_99 = &DR18E_Testpult_P.Subsystem_kl.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_100 =
    &DR18E_Testpult_P.Subsystem_kl.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_101 = &DR18E_Testpult_P.Subsystem_lz.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_102 =
    &DR18E_Testpult_P.Subsystem_lz.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_103 = &DR18E_Testpult_P.Subsystem_m.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_104 =
    &DR18E_Testpult_P.Subsystem_m.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_105 = &DR18E_Testpult_P.Subsystem_nc.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_106 =
    &DR18E_Testpult_P.Subsystem_nc.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_107 = &DR18E_Testpult_P.Subsystem_h.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_108 =
    &DR18E_Testpult_P.Subsystem_h.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_109 = &DR18E_Testpult_P.Subsystem_ih.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_110 =
    &DR18E_Testpult_P.Subsystem_ih.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_111 =
    &DR18E_Testpult_P.Subsystem_jsn.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_112 =
    &DR18E_Testpult_P.Subsystem_jsn.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_113 = &DR18E_Testpult_P.Subsystem_mf.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_114 =
    &DR18E_Testpult_P.Subsystem_mf.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_115 = &DR18E_Testpult_P.Subsystem_c0.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_116 =
    &DR18E_Testpult_P.Subsystem_c0.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_117 =
    &DR18E_Testpult_P.Subsystem_fqo.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_118 =
    &DR18E_Testpult_P.Subsystem_fqo.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_119 = &DR18E_Testpult_P.Subsystem_eq.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_120 =
    &DR18E_Testpult_P.Subsystem_eq.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_121 = &DR18E_Testpult_P.Subsystem_ot.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_122 =
    &DR18E_Testpult_P.Subsystem_ot.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_123 = &DR18E_Testpult_P.Subsystem_nw.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_124 =
    &DR18E_Testpult_P.Subsystem_nw.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_125 = &DR18E_Testpult_P.Subsystem_ms.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_126 =
    &DR18E_Testpult_P.Subsystem_ms.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_127 = &DR18E_Testpult_P.Subsystem_nx.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_128 =
    &DR18E_Testpult_P.Subsystem_nx.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_129 = &DR18E_Testpult_P.Subsystem_co.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_130 =
    &DR18E_Testpult_P.Subsystem_co.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_131 = &DR18E_Testpult_P.Subsystem_la.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_132 =
    &DR18E_Testpult_P.Subsystem_la.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_133 = &DR18E_Testpult_P.Subsystem_nm.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_134 =
    &DR18E_Testpult_P.Subsystem_nm.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_135 = &DR18E_Testpult_P.Subsystem_fe.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_136 =
    &DR18E_Testpult_P.Subsystem_fe.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_137 = &DR18E_Testpult_P.Subsystem_om.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_138 =
    &DR18E_Testpult_P.Subsystem_om.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_139 = &DR18E_Testpult_P.Subsystem_dl.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_140 =
    &DR18E_Testpult_P.Subsystem_dl.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_141 = &DR18E_Testpult_P.Subsystem_im.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_142 =
    &DR18E_Testpult_P.Subsystem_im.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_143 = &DR18E_Testpult_P.Subsystem_e1.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_144 =
    &DR18E_Testpult_P.Subsystem_e1.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_145 = &DR18E_Testpult_P.Subsystem_ig.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_146 =
    &DR18E_Testpult_P.Subsystem_ig.Delay_DelayLength;
  p_1_DR18E_Testpult_real_T_147 = &DR18E_Testpult_P.Subsystem_ld.Constant3_Value;
  p_1_DR18E_Testpult_uint32_T_148 =
    &DR18E_Testpult_P.Subsystem_ld.Delay_DelayLength;
  p_2_DR18E_Testpult_real_T_0 = &DR18E_Testpult_DW.DelayInput1_DSTATE;
  p_2_DR18E_Testpult_uint32_T_1 = &DR18E_Testpult_DW.UD_DSTATE;
  p_2_DR18E_Testpult_int32_T_2 = &DR18E_Testpult_DW.clockTickCounter;
  p_2_DR18E_Testpult_uint32_T_3 = &DR18E_Testpult_DW.e_ErrorEventCounter;
  p_2_DR18E_Testpult_int_T_4 = &DR18E_Testpult_DW.SFunction1_IWORK[0];
  p_2_DR18E_Testpult_uint16_T_5 = &DR18E_Testpult_DW.UD_DSTATE_h;
  p_2_DR18E_Testpult_boolean_T_6 = &DR18E_Testpult_DW.DelayInput1_DSTATE_p;
  p_2_DR18E_Testpult_int8_T_7 = &DR18E_Testpult_DW.SwitchCase_ActiveSubsystem;
  p_2_DR18E_Testpult_uint8_T_8 = &DR18E_Testpult_DW.is_active_c3_DR18E_Testpult;
  p_2_DR18E_Testpult_boolean_T_9 = &DR18E_Testpult_DW.Mem1_PreviousInput;
  p_2_DR18E_Testpult_boolean_T_10 =
    &DR18E_Testpult_DW.JKFlipFlop.Memory_PreviousInput;
  p_2_DR18E_Testpult_boolean_T_11 =
    &DR18E_Testpult_DW.JKFlipFlop_l.Memory_PreviousInput;
  p_2_DR18E_Testpult_boolean_T_12 =
    &DR18E_Testpult_DW.JKFlipFlop_n.Memory_PreviousInput;
  p_2_DR18E_Testpult_real_T_13 =
    &DR18E_Testpult_DW.TriggeredSubsystem_f.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_14 =
    &DR18E_Testpult_DW.TriggeredSubsystem_i.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_15 =
    &DR18E_Testpult_DW.TriggeredSubsystem.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_16 =
    &DR18E_Testpult_DW.TriggeredSubsystem_k.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_17 =
    &DR18E_Testpult_DW.TriggeredSubsystem_a.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_18 = &DR18E_Testpult_DW.Subsystem_gh.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_19 = &DR18E_Testpult_DW.Subsystem_bp.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_20 = &DR18E_Testpult_DW.Subsystem_p.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_21 = &DR18E_Testpult_DW.Subsystem_cy.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_22 = &DR18E_Testpult_DW.Subsystem_kn.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_23 = &DR18E_Testpult_DW.Subsystem_dm.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_24 = &DR18E_Testpult_DW.Subsystem_e.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_25 = &DR18E_Testpult_DW.Subsystem_oy.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_26 = &DR18E_Testpult_DW.Subsystem_o.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_27 = &DR18E_Testpult_DW.Subsystem_n4.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_28 = &DR18E_Testpult_DW.Subsystem_c.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_29 = &DR18E_Testpult_DW.Subsystem_fq.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_30 = &DR18E_Testpult_DW.Subsystem_fr.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_31 = &DR18E_Testpult_DW.Subsystem_be.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_32 = &DR18E_Testpult_DW.Subsystem_js.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_33 = &DR18E_Testpult_DW.Subsystem_gd.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_34 = &DR18E_Testpult_DW.Subsystem_a.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_35 = &DR18E_Testpult_DW.Subsystem_k.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_36 = &DR18E_Testpult_DW.Subsystem_bk.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_37 = &DR18E_Testpult_DW.Subsystem_i.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_38 = &DR18E_Testpult_DW.Subsystem_b.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_39 = &DR18E_Testpult_DW.Subsystem_l.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_40 = &DR18E_Testpult_DW.Subsystem_n.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_41 = &DR18E_Testpult_DW.Subsystem_g.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_42 = &DR18E_Testpult_DW.Subsystem_j.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_43 = &DR18E_Testpult_DW.Subsystem_f.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_44 = &DR18E_Testpult_DW.Subsystem.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_45 = &DR18E_Testpult_DW.Subsystem_d.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_46 = &DR18E_Testpult_DW.Subsystem_bek.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_47 = &DR18E_Testpult_DW.Subsystem_e3.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_48 = &DR18E_Testpult_DW.Subsystem_kl.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_49 = &DR18E_Testpult_DW.Subsystem_lz.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_50 = &DR18E_Testpult_DW.Subsystem_m.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_51 = &DR18E_Testpult_DW.Subsystem_nc.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_52 = &DR18E_Testpult_DW.Subsystem_h.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_53 = &DR18E_Testpult_DW.Subsystem_ih.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_54 = &DR18E_Testpult_DW.Subsystem_jsn.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_55 = &DR18E_Testpult_DW.Subsystem_mf.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_56 = &DR18E_Testpult_DW.Subsystem_c0.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_57 = &DR18E_Testpult_DW.Subsystem_fqo.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_58 = &DR18E_Testpult_DW.Subsystem_eq.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_59 = &DR18E_Testpult_DW.Subsystem_ot.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_60 = &DR18E_Testpult_DW.Subsystem_nw.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_61 = &DR18E_Testpult_DW.Subsystem_ms.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_62 = &DR18E_Testpult_DW.Subsystem_nx.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_63 = &DR18E_Testpult_DW.Subsystem_co.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_64 = &DR18E_Testpult_DW.Subsystem_la.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_65 = &DR18E_Testpult_DW.Subsystem_nm.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_66 = &DR18E_Testpult_DW.Subsystem_fe.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_67 = &DR18E_Testpult_DW.Subsystem_om.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_68 = &DR18E_Testpult_DW.Subsystem_dl.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_69 = &DR18E_Testpult_DW.Subsystem_im.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_70 = &DR18E_Testpult_DW.Subsystem_e1.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_71 = &DR18E_Testpult_DW.Subsystem_ig.Delay_DSTATE;
  p_2_DR18E_Testpult_real_T_72 = &DR18E_Testpult_DW.Subsystem_ld.Delay_DSTATE;
  p_3_DR18E_Testpult_real_T_0 = &DR18E_Testpult_X.emGM_CSTATE;
}

void DR18E_Testpult_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
