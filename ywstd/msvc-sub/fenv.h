/// \file fenv.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define FE_DFL_ENV (static_cast<const std::fenv_t*>(&_Fenv1))

#define FE_INEXACT 0x01
#define FE_UNDERFLOW 0x02
#define FE_OVERFLOW 0x04
#define FE_DIVBYZERO 0x08
#define FE_INVALID 0x10
#define FE_ALL_EXCEPT 0x1f

#define FE_TONEAREST 0x000
#define FE_DOWNWARD 0x100
#define FE_UPWARD 0x200
#define FE_TOWARDZERO 0x300

extern "C" struct fenv_t;

#if ywstd_is_exported
#include "corecrt.h"
extern "C" {

using fexcept_t = unsigned long;

struct fenv_t {
  unsigned long _Fe_ctl, _Fe_stat;
};

_ACRTIMP int __cdecl fegetround();
_ACRTIMP int __cdecl fesetround(int);

_ACRTIMP int __cdecl fegetenv(fenv_t*);
_ACRTIMP int __cdecl fesetenv(const fenv_t*);
_ACRTIMP int __cdecl feclearexcept(int);
_ACRTIMP int __cdecl feholdexcept(fenv_t*);
_ACRTIMP int __cdecl fetestexcept(int);
_ACRTIMP int __cdecl fegetexceptflag(fexcept_t*, int);
_ACRTIMP int __cdecl fesetexceptflag(const fexcept_t*, int);

#ifndef __midl
#ifdef _M_IX86
export __declspec(selectany) extern const fenv_t _Fenv1{0x3f3f103f, 0};
#elif defined _M_X64
export __declspec(selectany) extern const fenv_t _Fenv1{0x3f00003f, 0};
#else
export __declspec(selectany) extern const fenv_t _Fenv1{0x0000003f, 0};
#endif
#endif

__pragma(optimize("", off))
__inline int __CRTDECL feraiseexcept(int e) {
  if ((e &= FE_ALL_EXCEPT) == 0) return 0;
  static struct {
    int except;
    double num, den;
  } const table[]{{FE_INVALID, 0.0, 0.0},
                  {FE_DIVBYZERO, 1.0, 0.0},
                  {FE_OVERFLOW, 1e+300, 1e-300},
                  {FE_UNDERFLOW, 1e-300, 1e+300},
                  {FE_INEXACT, 2.0, 3.0}};
  double ans = 0.0;
  (void)ans;
  constexpr size_t n = sizeof(table) / sizeof(table[0]);
  for (size_t i{}; i < n; ++i)
    if ((e & table[i].except) != 0) ans = table[i].num / table[i].den;
  return 0;
}
__pragma(optimize("", on))

__inline int __CRTDECL feupdateenv(const fenv_t* fe) {
  if (fesetenv(fe) != 0) return 1;
  else if (const int e = fetestexcept(FE_ALL_EXCEPT); feraiseexcept(e) != 0) return 1;
  else return 0;
}
}
#endif
