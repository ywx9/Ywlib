/// \file string.h
/// \copyright (c) 2022 ywx9.com

#pragma once

#ifndef NULL
#define NULL 0
#endif

#if ywstd_is_exported
extern "C" {
void* __cdecl memcpy(void*, const void*, size_t);
void* __cdecl memmove(void*, const void*, size_t);
char* __cdecl strcpy(char*, const char*);
char* __cdecl strncpy(char*, const char*, size_t);
char* __cdecl strcat(char*, const char*);
int __cdecl memcmp(const void*, const void*, size_t);
int __cdecl strcmp(const char*, const char*);
int __cdecl strcoll(const char*, const char*);
int __cdecl strncmp(const char*, const char*, size_t);
size_t __cdecl strxfrm(char*, const char*, size_t);
const void* __cdecl memchr(const void*, int, size_t);
const char* __cdecl strchr(const char*, int);
size_t __cdecl strcspn(const char*, const char*);
const char* __cdecl strpbrk(const char*, const char*);
const char* __cdecl strrchr(const char*, int);
size_t __cdecl strspn(const char*, const char*);
const char* __cdecl strstr(const char*, const char*);
char* __cdecl strtok(char*, const char*);
void* __cdecl memset(void*, int, size_t);
char* __cdecl strerror(int);
size_t __cdecl strlen(const char*);
}
#endif
