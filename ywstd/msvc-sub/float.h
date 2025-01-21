/// \file float.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define FLT_RADIX 2
#define DECIMAL_DIG 17

#ifdef _M_FP_FAST
#define FLT_EVAL_METHOD -1
#else
#define FLT_EVAL_METHOD 0
#endif

#define FLT_ROUNDS (static_cast<int>(::__fpe_flt_rounds()))

#define FLT_HAS_SUBNORM true
#define DBL_HAS_SUBNORM true
#define LDBL_HAS_SUBNORM true

#define FLT_DIG 6
#define DBL_DIG 15
#define LDBL_DIG 15

#define FLT_DECIMAL_DIG 9
#define DBL_DECIMAL_DIG 17
#define LDBL_DECIMAL_DIG 17

#define FLT_MANT_DIG 24
#define DBL_MANT_DIG 53
#define LDBL_MANT_DIG 53

#define FLT_MAX_EXP 128
#define DBL_MAX_EXP 1024
#define LDBL_MAX_EXP 1024

#define FLT_MIN_EXP (-125)
#define DBL_MIN_EXP (-1021)
#define LDBL_MIN_EXP (-1021)

#define FLT_MAX_10_EXP 38
#define DBL_MAX_10_EXP 308
#define LDBL_MAX_10_EXP 308

#define FLT_MIN_10_EXP (-37)
#define DBL_MIN_10_EXP (-307)
#define LDBL_MIN_10_EXP (-307)

#define FLT_MAX 3.402823466e+38F
#define DBL_MAX 1.7976931348623158e+308
#define LDBL_MAX 1.7976931348623158e+308L

#define FLT_MIN 1.175494351e-38F
#define DBL_MIN 2.2250738585072014e-308
#define LDBL_MIN 2.2250738585072014e-308L

#define FLT_EPSILON 1.192092896e-07F
#define DBL_EPSILON 2.2204460492503131e-016
#define LDBL_EPSILON 2.2204460492503131e-016L

#define FLT_TRUE_MIN 1.401298464e-45F
#define DBL_TRUE_MIN 4.9406564584124654e-324
#define LDBL_TRUE_MIN 4.9406564584124654e-324L

#if ywstd_is_exported
#include "corecrt.h"
export extern "C" _ACRTIMP int __cdecl __fpe_flt_rounds();
#endif
