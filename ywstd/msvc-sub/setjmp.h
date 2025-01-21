/// \file setjmp.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define setjmp _setjmp
extern "C" {
struct alignas(16) SETJMP_FLOAT128 { unsigned long long Part[2]; };
using jmp_buf = SETJMP_FLOAT128[16];
int __cdecl setjmp(jmp_buf);
[[noreturn]] void __cdecl longjmp(jmp_buf, int) noexcept(false);
}
