/// \file assert.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define __ywstd_wide_(s) L##s
#define __ywstd_wide(s) __ywstd_wide_(s)

#ifdef NDEBUG
#define assert(e) (static_cast<void>(0))
#else
#define assert(e) (static_cast<void>(!(e) && (::_wassert(L#e, __ywstd_wide(__FILE__), unsigned(__LINE__)), 0)))
#endif

#if ywstd_is_exported
#include "corecrt.h"
export extern "C" _ACRTIMP void __cdecl _wassert(const wchar_t*, const wchar_t*, unsigned);
#endif
