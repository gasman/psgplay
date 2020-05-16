// SPDX-License-Identifier: GPL-2.0

#ifndef TOS_STDLIB_H
#define TOS_STDLIB_H

#include <stddef.h>

#define EXIT_SUCCESS	0
#define EXIT_FAILURE	1

static inline int abs(int i)
{
	return i < 0 ? -i : i;
}

void *malloc(size_t size);

void free(void *ptr);

long int strtol(const char *nptr, char **endptr, int base);

long long int strtoll(const char *nptr, char **endptr, int base);

intmax_t strntoimax(const char *nptr, char **endptr, int base, size_t n);

uintmax_t strntoumax(const char *, char **, int, size_t);

void __attribute__((__noreturn__)) exit(int status);

int atexit(void (*function)(void));

#endif /* TOS_STDLIB_H */
