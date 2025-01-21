/// \file vadefs.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define _CRT_PACKING 8
#pragma pack(push, _CRT_PACKING)

#ifndef _VCRUNTIME_DISABLED_WARNING_4339
#ifdef _M_CEE_PURE
#define _VCRUNTIME_DISABLED_WARNING_4339 4339
#else
#define _VCRUNTIME_DISABLED_WARNING_4339
#endif
#endif

#ifndef _VCRUNTIME_DISABLED_WARNING_4412
#ifdef _M_CEE_PURE
#define _VCRUNTIME_DISABLED_WARNING_4412 4412
#else
#define _VCRUNTIME_DISABLED_WARNING_4412
#endif
#endif

#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif

#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS \
  _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif

#pragma warning(push)
#pragma warning(disable : _VCRUNTIME_DISABLED_WARNINGS)

#if !defined _W64
#define _W64
#endif

#define _ADDRESSOF(v) (&const_cast<char&>(reinterpret_cast<const volatile char&>(v)))

extern "C" {

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
typedef unsigned __int64 uintptr_t;
#endif

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef char* va_list;
#endif
#endif

// #define _SLOTSIZEOF(t) (sizeof(t))
// #define _APALIGN(t, ap) (__alignof(t))

void __cdecl __va_start(va_list*, ...);
#define __crt_va_start_a(ap, x) ((void)(__va_start(&ap, x)))
#define __crt_va_arg(ap, t)                                            \
  ((sizeof(t) > sizeof(__int64) || (sizeof(t) & (sizeof(t) - 1)) != 0) \
     ? **(t**)((ap += sizeof(__int64)) - sizeof(__int64))              \
     : *(t*)((ap += sizeof(__int64)) - sizeof(__int64)))
#define __crt_va_end(ap) ((void)(ap = (va_list)0))
}

#if !defined _CRT_NO_VA_START_VALIDATION
extern "C++" {
template<typename T> constexpr bool __vcrt_va_list_is_reference_v = false;
template<typename T> constexpr bool __vcrt_va_list_is_reference_v<T&> = true;
template<typename T> constexpr bool __vcrt_va_list_is_reference_v<T&&> = true;
template<typename T> struct __vcrt_assert_va_start_is_not_reference {
  static_assert(!__vcrt_va_list_is_reference_v<T>, "invalid va_start argument");
};
}
#define __crt_va_start(ap, x) ((void)(__vcrt_assert_va_start_is_not_reference<decltype(x)>(), __crt_va_start_a(ap, x)))
#else
#define __crt_va_start(ap, x) __crt_va_start_a(ap, x)
#endif

#pragma warning(pop)
#pragma pack(pop)
