/// \file stddef.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#ifndef NULL
#define NULL 0
#endif

#define offsetof(s, m) ((::size_t)&reinterpret_cast<char const volatile&>((((s*)0)->m)))

#if ywstd_is_exported
extern "C" {
using size_t = unsigned long long;
using ptrdiff_t = long long;
using nullptr_t = decltype(nullptr);
using max_align_t = double;
}
#endif
