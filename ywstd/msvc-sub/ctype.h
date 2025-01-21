/// \file ctype.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define MB_CUR_MAX (static_cast<int>(::___mb_cur_max_func()))

#if ywstd_is_exported
#include "corecrt.h"
extern "C" {
_ACRTIMP int __cdecl isalpha(int);
_ACRTIMP int __cdecl isupper(int);
_ACRTIMP int __cdecl islower(int);
_ACRTIMP int __cdecl isdigit(int);
_ACRTIMP int __cdecl isxdigit(int);
_ACRTIMP int __cdecl isspace(int);
_ACRTIMP int __cdecl ispunct(int);
_ACRTIMP int __cdecl isblank(int);
_ACRTIMP int __cdecl isalnum(int);
_ACRTIMP int __cdecl isprint(int);
_ACRTIMP int __cdecl isgraph(int);
_ACRTIMP int __cdecl iscntrl(int);
_ACRTIMP int __cdecl toupper(int);
_ACRTIMP int __cdecl tolower(int);

export _ACRTIMP int __cdecl ___mb_cur_max_func();
}
#endif
