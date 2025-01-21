/// \file math.h
/// \copyright (c) 2022 ywx9.com

#pragma once
#ifndef ywstd_export
#define ywstd_export
#endif

#define INFINITY (static_cast<float>(1e+300 * 1e+300))
#ifndef _UCRT_NEGATIVE_NAN
#define NAN (-static_cast<float>(INFINITY * 0.0F))
#else
#define NAN (static_cast<float>(INFINITY * 0.0F))
#endif
#define HUGE_VALF (static_cast<float>(INFINITY))
#define HUGE_VAL (static_cast<double>(INFINITY))
#define HUGE_VALL (static_cast<long double>(INFINITY))
#define MATH_ERRNO 1
#define MATH_ERREXCEPT 2
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define FP_INFINITE 1
#define FP_NAN 2
#define FP_NORMAL (-1)
#define FP_SUBNORMAL (-2)
#define FP_ZERO 0

#if ywstd_is_exported
#include "corecrt.h"
#include "crtdefs.h"
extern "C" {

float __cdecl ceilf(float);
double __cdecl ceil(double);
inline long double __cdecl ceill(long double x) { return ::ceil(static_cast<double>(x)); }

float __cdecl floorf(float);
double __cdecl floor(double);
inline long double __cdecl floorl(long double x) { return ::floor(static_cast<double>(x)); }

float __cdecl truncf(float);
double __cdecl trunc(double);
long double __cdecl truncl(long double);

float __cdecl roundf(float);
double __cdecl round(double);
long double __cdecl roundl(long double);

long __cdecl lroundf(float);
long __cdecl lround(double);
long __cdecl lroundl(long double);

long long __cdecl llroundf(float);
long long __cdecl llround(double);
long long __cdecl llroundl(long double);

float __cdecl fmaf(float, float, float);
double __cdecl fma(double, double, double);
long double __cdecl fmal(long double, long double, long double);

float __cdecl fmaxf(float, float);
double __cdecl fmax(double, double);
long double __cdecl fmaxl(long double, long double);

float __cdecl fminf(float, float);
double __cdecl fmin(double, double);
long double __cdecl fminl(long double, long double);

float __cdecl fdimf(float, float);
double __cdecl fdim(double, double);
long double __cdecl fdiml(long double, long double);

int __cdecl abs(int);
long __cdecl labs(long);
long long __cdecl llabs(long long);
double __cdecl fabs(double);
inline float __cdecl fabsf(float x) { return (float)::fabs(static_cast<double>(x)); }
inline long double __cdecl fabsl(long double x) { return ::fabs(static_cast<double>(x)); }

float __cdecl fmodf(float, float);
double __cdecl fmod(double, double);
long double __cdecl fmodl(long double, long double);

float __cdecl remainderf(float, float);
double __cdecl remainder(double, double);
long double __cdecl remainderl(long double, long double);

float __cdecl remquof(float, float, int*);
double __cdecl remquo(double, double, int*);
long double __cdecl remquol(long double, long double, int*);

float __cdecl nanf(const char*);
double __cdecl nan(const char*);
long double __cdecl nanl(const char*);

float __cdecl expf(float);
double __cdecl exp(double);
long double __cdecl expl(long double);

float __cdecl exp2f(float);
double __cdecl exp2(double);
long double __cdecl exp2l(long double);

float __cdecl expm1f(float);
double __cdecl expm1(double);
long double __cdecl expm1l(long double);

float __cdecl logf(float);
double __cdecl log(double);
long double __cdecl logl(long double);

float __cdecl log2f(float);
double __cdecl log2(double);
long double __cdecl log2l(long double);

float __cdecl log10f(float);
double __cdecl log10(double);
inline long double __cdecl log10l(long double x) { return ::log10(static_cast<double>(x)); }

float __cdecl log1pf(float);
double __cdecl log1p(double);
long double __cdecl log1pl(long double);

float __cdecl powf(float, float);
double __cdecl pow(double, double);
long double __cdecl powl(long double, long double);

float __cdecl sqrtf(float);
double __cdecl sqrt(double);
long double __cdecl sqrtl(long double);

float __cdecl cbrtf(float);
double __cdecl cbrt(double);
long double __cdecl cbrtl(long double);

float __cdecl hypotf(float, float);
double __cdecl hypot(double, double);
long double __cdecl hypotl(long double, long double);

float __cdecl sinf(float);
double __cdecl sin(double);
long double __cdecl sinl(long double);

float __cdecl cosf(float);
double __cdecl cos(double);
long double __cdecl cosl(long double);

float __cdecl tanf(float);
double __cdecl tan(double);
long double __cdecl tanl(long double);

float __cdecl asinf(float);
double __cdecl asin(double);
inline long double __cdecl asinl(long double x) { return ::asin(static_cast<double>(x)); }

float __cdecl acosf(float);
double __cdecl acos(double);
inline long double __cdecl acosl(long double x) { return ::acos(static_cast<double>(x)); }

float __cdecl atanf(float);
double __cdecl atan(double);
inline long double __cdecl atanl(long double x) { return ::atan(static_cast<double>(x)); }

float __cdecl atan2f(float, float);
double __cdecl atan2(double, double);
long double __cdecl atan2l(long double, long double);

float __cdecl sinhf(float);
double __cdecl sinh(double);
long double __cdecl sinhl(long double);

float __cdecl coshf(float);
double __cdecl cosh(double);
inline long double __cdecl coshl(long double x) { return ::cosh(static_cast<double>(x)); }

float __cdecl tanhf(float);
double __cdecl tanh(double);
inline long double __cdecl tanhl(long double x) { return ::tanh(static_cast<double>(x)); }

float __cdecl asinhf(float);
double __cdecl asinh(double);
long double __cdecl asinhl(long double);

float __cdecl acoshf(float);
double __cdecl acosh(double);
long double __cdecl acoshl(long double);

float __cdecl atanhf(float);
double __cdecl atanh(double);
long double __cdecl atanhl(long double);

float __cdecl erff(float);
double __cdecl erf(double);
long double __cdecl erfl(long double);

float __cdecl erfcf(float);
double __cdecl erfc(double);
long double __cdecl erfcl(long double);

float __cdecl tgammaf(float);
double __cdecl tgamma(double);
long double __cdecl tgammal(long double);

float __cdecl lgammaf(float);
double __cdecl lgamma(double);
long double __cdecl lgammal(long double);

float __cdecl nearbyintf(float);
double __cdecl nearbyint(double);
long double __cdecl nearbyintl(long double);

float __cdecl rintf(float);
double __cdecl rint(double);
long double __cdecl rintl(long double);

long __cdecl lrintf(float);
long __cdecl lrint(double);
long __cdecl lrintl(long double);

long long __cdecl llrintf(float);
long long __cdecl llrint(double);
long long __cdecl llrintl(long double);

double __cdecl frexp(double, int*);
inline float __cdecl frexpf(float x, int* i) { return (float)::frexp((double)x, i); }
inline long double __cdecl frexpl(long double x, int* i) { return ::frexp((double)x, i); }

float __cdecl ldexpf(float, int);
double __cdecl ldexp(double, int);
long double __cdecl ldexpl(long double, int);

float __cdecl modff(float, float*);
double __cdecl modf(double, double*);
inline long double __cdecl modfl(long double x, long double* y) { return ::modf((double)x, (double*)&y); }

float __cdecl scalbnf(float, int);
double __cdecl scalbn(double, int);
long double __cdecl scalbnl(long double, int);

float __cdecl scalblnf(float, long);
double __cdecl scalbln(double, long);
long double __cdecl scalblnl(long double, long);

float __cdecl logbf(float);
double __cdecl logb(double);
long double __cdecl logbl(long double);

int __cdecl ilogbf(float);
int __cdecl ilogb(double);
int __cdecl ilogbl(long double);

float __cdecl nextafterf(float, float);
double __cdecl nextafter(double, double);
long double __cdecl nextafterl(long double, long double);

float __cdecl nexttowardf(float, long double);
double __cdecl nexttoward(double, long double);
long double __cdecl nexttowardl(long double, long double);

float __cdecl copysignf(float, float);
double __cdecl copysign(double, double);
long double __cdecl copysignl(long double, long double);

short __cdecl _fdtest(float*);
short __cdecl _dtest(double*);
short __cdecl _ldtest(long double*);

int __cdecl _fdsign(float);
int __cdecl _dsign(double);
int __cdecl _ldsign(long double);

int __cdecl _fdpcomp(float, float);
int __cdecl _dpcomp(double, double);
int __cdecl _ldpcomp(long double, long double);

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_assoc_laguerref(unsigned, unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_assoc_laguerre(unsigned, unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_assoc_legendref(unsigned, unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_assoc_legendre(unsigned, unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_betaf(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_beta(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_comp_ellint_1f(float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_comp_ellint_1(double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_comp_ellint_2f(float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_comp_ellint_2(double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_comp_ellint_3f(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_comp_ellint_3(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_cyl_bessel_if(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_cyl_bessel_i(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_cyl_bessel_jf(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_cyl_bessel_j(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_cyl_bessel_kf(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_cyl_bessel_k(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_cyl_neumannf(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_cyl_neumann(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_ellint_1f(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_ellint_1(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_ellint_2f(float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_ellint_2(double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_ellint_3f(float, float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_ellint_3(double, double, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_expintf(float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_expint(double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_hermitef(unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_hermite(unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_laguerref(unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_laguerre(unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_legendref(unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_legendre(unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_riemann_zetaf(float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_riemann_zeta(double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_sph_besself(unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_sph_bessel(unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_sph_legendref(unsigned, unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_sph_legendre(unsigned, unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_sph_neumannf(unsigned, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_sph_neumann(unsigned, double) noexcept;

[[nodiscard]] _CRT_SATELLITE_2 float __stdcall __std_smf_hypot3f(float, float, float) noexcept;
[[nodiscard]] _CRT_SATELLITE_2 double __stdcall __std_smf_hypot3(double, double, double) noexcept;
}
#endif
