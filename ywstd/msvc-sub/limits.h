/// \file limits.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define CHAR_BIT 8
#define MB_LEN_MAX 5

#define SCHAR_MIN (static_cast<signed char>(-128))
#define SCHAR_MAX (static_cast<signed char>(127))
#define UCHAR_MAX (static_cast<unsigned char>(255))

#ifndef _CHAR_UNSIGNED
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
#else
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#endif

#define SHRT_MIN (static_cast<short>(-32768))
#define SHRT_MAX (static_cast<short>(32767))
#define USHRT_MAX (static_cast<unsigned short>(65535))
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647
#define UINT_MAX 0xffffffffU
#define LONG_MIN (-2147483647L - 1)
#define LONG_MAX 2147483647L
#define ULONG_MAX 0xffffffffUL
#define LLONG_MAX 9223372036854775807LL
#define LLONG_MIN (-9223372036854775807LL - 1)
#define ULLONG_MAX 0xffffffffffffffffULL

#ifndef SIZE_MAX
#define SIZE_MAX ULLONG_MAX
#endif

#ifndef RSIZE_MAX
#define RSIZE_MAX (static_cast<rsize_t>(SIZE_MAX >> 1))
#endif

#if ywstd_is_exported
#include "corecrt.h"
#endif
