#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of variable arguments
 * @n: the num
 * @...: the int numbers
 * Return: (r)
 */

int sum_them_all(const unsigned int n, ...)
{
	int r = 0;
	int i1 = n;
	va_list pointer;

	/*if*/
	if (!n)
		return (0);

	va_start(pointer, n);

	/*while*/
	while (i1--)
		r += va_arg(pointer, int);

	va_end(pointer);
	return (r);
}
