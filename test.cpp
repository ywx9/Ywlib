// #include <exception>

// int main() {
//   std::exception_ptr ep{};
// }

// #include <exception>
// #include <iostream>
// #include <typeinfo>

// #include <yvals.h>
// #define _CRT_MSVCP_CURRENT "msvcp140.dll"
// #include <use_ansi.h>
// #include <crtdbg.h>
// #include <crtdefs.h>
// #include <cstdlib>
// #include <type_traits>
// #include <malloc.h>
// #include <vcruntime_exception.h>

// extern "C++" void __cdecl __ExceptionPtrCreate(void*) noexcept;
// extern "C++" void __cdecl __ExceptionPtrDestroy(void*) noexcept;

// class exception_ptr {
//   void *_data1{}, *_data2{};
// public:
//   exception_ptr() { __ExceptionPtrCreate(this); }
//   ~exception_ptr() { __ExceptionPtrDestroy(this); }
// };

// // using type = decltype(__ExceptionPtrCreate);

// int main() {
//   // std::cout << typeid(type).name() << std::endl;
//   exception_ptr ep;
// }

#include "ywlib"

int main() {

#pragma region <cassert>
  assert(1 == 1);
  // assert(1 == 0);
#pragma endregion

#pragma region <cctype>
  assert(std::isalpha('a'));
  assert(not std::isalpha('1'));
  assert(std::isalnum('a'));
  assert(std::isalnum('1'));
  assert(not std::isalnum(' '));
  assert(std::isblank(' '));
  assert(std::isblank('\t'));
  assert(not std::isblank('a'));
#pragma endregion

#pragma region <cerrno>
  assert(errno == 0);
  errno = EPERM;
  assert(errno == EPERM);
  errno = 0;
#pragma endregion

#pragma region <cfenv>
  assert(std::fegetround() == FE_TONEAREST);
  assert(std::fesetround(FE_DOWNWARD) == 0);
  assert(std::fegetround() == FE_DOWNWARD);
  assert(std::fesetround(FE_TONEAREST) == 0);
  assert(std::fegetround() == FE_TONEAREST);
#pragma endregion

#pragma region <cfloat>
  assert(FLT_RADIX == 2);
  static_cast<void>(FLT_ROUNDS);
#pragma endregion

#pragma region <cinttypes>
  std::imaxdiv_t div = std::imaxdiv(10, 3);
  assert(div.quot == 3);
  assert(div.rem == 1);
#pragma endregion

#pragma region <climits>
  assert(CHAR_BIT == 8);
#pragma endregion

#pragma region <cmath>
  static_cast<void>(std::ceil(1.5f), std::ceil(1.5), std::ceil(1.5l));
  static_cast<void>(std::floor(1.5f), std::floor(1.5), std::floor(1.5l));
  static_cast<void>(std::round(1.5f), std::round(1.5), std::round(1.5l));
  static_cast<void>(std::trunc(1.5f), std::trunc(1.5), std::trunc(1.5l));
  static_cast<void>(std::learp(1.5f, 2.5f, 0.5f), std::learp(1.5, 2.5, 0.5), std::learp(1.5l, 2.5l, 0.5l));
  static_cast<void>(std::fma(1.5f, 2.5f, 3.5f), std::fma(1.5, 2.5, 3.5), std::fma(1.5l, 2.5l, 3.5l));
  static_cast<void>(std::fmax(1.5f, 2.5f), std::fmax(1.5, 2.5), std::fmax(1.5l, 2.5l));
  static_cast<void>(std::fmin(1.5f, 2.5f), std::fmin(1.5, 2.5), std::fmin(1.5l, 2.5l));
  static_cast<void>(std::fdim(1.5f, 2.5f), std::fdim(1.5, 2.5), std::fdim(1.5l, 2.5l));
  static_cast<void>(std::fabs(1.5f), std::fabs(1.5), std::fabs(1.5l));
  static_cast<void>(std::fmod(1.5f, 2.5f), std::fmod(1.5, 2.5), std::fmod(1.5l, 2.5l));



}
