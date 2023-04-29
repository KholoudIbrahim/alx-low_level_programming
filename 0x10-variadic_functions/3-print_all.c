#include "variadic_functions.h"

/**
 * char_c - char
 * @sep: the string
 * @pr: the ptr
 */

void char_c(char *sep, va_list pr)
{
	printf("%s%c", sep, va_arg(pr, int));
}

/**
 * int_i - int
 * @sep: the string
 * @pr: the ptr
 */

void int_i(char *sep, va_list pr)
{
	printf("%s%d", sep, va_arg(pr, int));
}

/**
 * float_f - float
 * @sep: the string
 * @ap: the ptr
 */

void format_f(char *sep, va_list pr)
{
	printf("%s%f", sep, va_arg(pr, double));
}

/**
 * string_s - string
 * @sep: the string
 * @pr: the pointer
 */

void string_s(char *sep, va_list pr)
{
	char *string1 = va_arg(pr, char *);

	switch ((int)(!string1))
		case 1:
			string1 = "(nil)";

	printf("%s%s", sep, string1);
}

/**
 * print_all - prints all
 * @format: the format
 */

void print_all(const char * const format, ...)
{
	int i1 = 0;
	int j1;
	char *sep = "";
	va_list pr;
	tk_t tks[] = {
		{"c", char_c},
		{"i", int_i},
		{"f", float_f},
		{"s", string_s},
		{NULL, NULL}
	};

	va_start(pr, format);

	while (format && format[i1])
	{
		j1 = 0;

		while (tks[j1].tk)
		{
			if (format[i1] == tks[j1].tk[0])
			{
				tks[j1].f(sep, pr);
				sep = ", ";
			}
			j1++;
		}
		i1++;
	}
	printf("\n");
	va_end(pr);
}
