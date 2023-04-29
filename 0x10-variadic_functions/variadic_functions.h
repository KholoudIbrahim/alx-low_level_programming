#ifndef VAR_H
#define VAR_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct tk - struct tk
 *
 * @tk: format
 * @f: The func
 */
typedef struct tk
{
	char *tk;
	void (*f)(char *, va_list);
} tk_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
