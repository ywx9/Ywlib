/// \file signal.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#define SIGINT 2
#define SIGILL 4
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15
#define SIGBREAK 21
#define SIGABRT 22
#define NSIG 23

#define SIGABRT_COMPAT 6

#define SIG_DFL ((signal_handler*)0)
#define SIG_IGN ((signal_handler*)1)
#define SIG_GET ((signal_handler*)2)
#define SIG_SGE ((signal_handler*)3)
#define SIG_ACK ((signal_handler*)4)
#define SIG_DIE ((signal_handler*)5)
#define SIG_ERR ((signal_handler*)-1)

#if ywstd_is_exported
#include "corecrt.h"
extern "C" {

using sig_atomic_t = int;
using signal_handler = void(__cdecl)(int);

_ACRTIMP signal_handler* __cdecl signal(int, signal_handler*);
_ACRTIMP int __cdecl raise(int);
}
#endif
