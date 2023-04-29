#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers
 * @separator: the string
 * @n: the num
 * @...: the integers numbers
 * Return: void function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i1 = n;
	va_list pointer;

	/*if*/
	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(pointer, n);

	while (i1--)
		printf("%d%s", va_arg(pointer, int),
			i1 ? (separator ? separator : "") : "\n");

	va_end(pointer);
}
