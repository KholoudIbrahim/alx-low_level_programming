#include "variadic_functions.h"


/**
 * print_strings - prints the strings
 * @separator: the string
 * @n: the num
 * @...: the strings
 * Return: void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i1 = n;
	char *string1;
	va_list pr;

	/*if*/
	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(pr, n);

	/*while*/
	while (i1--)
		printf("%s%s", (string1 = va_arg(pr, char *)) ? string1 : "(nil)",
			i1 ? (separator ? separator : "") : "\n");

	va_end(pr);
}
