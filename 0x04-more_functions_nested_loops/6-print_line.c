#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: integer value represents
 * the number of _ character used to
 * make a line.
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
