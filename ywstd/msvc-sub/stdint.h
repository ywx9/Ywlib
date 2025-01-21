/// \file stdint.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define INT8_MIN (static_cast<int8_t>(-128))
#define INT16_MIN (static_cast<int16_t>(-32768))
#define INT32_MIN (static_cast<int32_t>(0x80000000))
#define INT64_MIN (static_cast<int64_t>(0x8000000000000000))
#define INT8_MAX (static_cast<int8_t>(127))
#define INT16_MAX (static_cast<int16_t>(32767))
#define INT32_MAX (static_cast<int32_t>(0x7fffffff))
#define INT64_MAX (static_cast<int64_t>(0x7fffffffffffffff))
#define UINT8_MAX (static_cast<uint8_t>(255))
#define UINT16_MAX (static_cast<uint16_t>(65535))
#define UINT32_MAX (static_cast<uint32_t>(0xffffffff))
#define UINT64_MAX (static_cast<uint64_t>(0xffffffffffffffff))

#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MIN INT64_MIN
#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST64_MAX INT64_MAX
#define UINT_LEAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX

#define INT_FAST8_MIN INT8_MIN
#define INT_FAST16_MIN INT32_MIN
#define INT_FAST32_MIN INT32_MIN
#define INT_FAST64_MIN INT64_MIN
#define INT_FAST8_MAX INT8_MAX
#define INT_FAST16_MAX INT32_MAX
#define INT_FAST32_MAX INT32_MAX
#define INT_FAST64_MAX INT64_MAX
#define UINT_FAST8_MAX UINT8_MAX
#define UINT_FAST16_MAX UINT32_MAX
#define UINT_FAST32_MAX UINT32_MAX
#define UINT_FAST64_MAX UINT64_MAX

#define INTPTR_MIN INT64_MIN
#define INTPTR_MAX INT64_MAX
#define UINTPTR_MAX UINT64_MAX

#define INTMAX_MIN INT64_MIN
#define INTMAX_MAX INT64_MAX
#define UINTMAX_MAX UINT64_MAX

#define PTRDIFF_MIN INTPTR_MIN
#define PTRDIFF_MAX INTPTR_MAX

#ifndef SIZE_MAX
#define SIZE_MAX UINT64_MAX
#endif

#define SIG_ATOMIC_MIN INT32_MIN
#define SIG_ATOMIC_MAX INT32_MAX

#define WCHAR_MIN (static_cast<wchar_t>(0x0000))
#define WCHAR_MAX (static_cast<wchar_t>(0xffff))

#define WINT_MIN (static_cast<wint_t>(0x0000))
#define WINT_MAX (static_cast<wint_t>(0xffff))

#define INT8_C(x) (x)
#define INT16_C(x) (x)
#define INT32_C(x) (x)
#define INT64_C(x) (x##LL)

#define UINT8_C(x) (x)
#define UINT16_C(x) (x)
#define UINT32_C(x) (x##U)
#define UINT64_C(x) (x##ULL)

#define INTMAX_C(x) INT64_C(x)
#define UINTMAX_C(x) UINT64_C(x)

#if ywstd_is_exported
#include "vcruntime.h"
extern "C" {

using int8_t = signed char;
using int16_t = short;
using int32_t = int;
using int64_t = long long;
using uint8_t = unsigned char;
using uint16_t = unsigned short;
using uint32_t = unsigned int;
using uint64_t = unsigned long long;

using int_least8_t = signed char;
using int_least16_t = short;
using int_least32_t = int;
using int_least64_t = long long;
using uint_least8_t = unsigned char;
using uint_least16_t = unsigned short;
using uint_least32_t = unsigned int;
using uint_least64_t = unsigned long long;

using int_fast8_t = signed char;
using int_fast16_t = int;
using int_fast32_t = int;
using int_fast64_t = long long;
using uint_fast8_t = unsigned char;
using uint_fast16_t = unsigned int;
using uint_fast32_t = unsigned int;
using uint_fast64_t = unsigned long long;

using intmax_t = long long;
using uintmax_t = unsigned long long;
}
#endif
