/// \file stdarg.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define va_start(ap, x) (static_cast<void>(::__ywstd_va_check<decltype(x)>(), ::__va_start(&ap, x)))
#define va_arg(ap, t) ((sizeof(t) > 8 || (sizeof(t) & (sizeof(t) - 1))) ? **(t**)((ap += 8) - 8) : *(t*)((ap += 8) - 8))
#define va_end (static_cast<void>(ap = nullptr))
#define va_copy(dest, src) ((dest) = (src))

#if ywstd_is_exported
extern "C" {
using va_list = char*;
export void __cdecl __va_start(va_list*, ...);
extern "C++" template<typename T> constexpr bool __ywstd_va_is_ref = false;
extern "C++" template<typename T> constexpr bool __ywstd_va_is_ref<T&> = true;
extern "C++" template<typename T> constexpr bool __ywstd_va_is_ref<T&&> = true;
extern "C++" template<typename T>
constexpr auto __ywstd_va_check = [] { static_assert(!__ywstd_va_is_ref<T>, "invalid va_start argument"); };
}
#endif
