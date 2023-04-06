#include "main.h"

/**
 * _print_rev_recursion - description function
 * @s: pointer to string
 *
 * Description: Longer description of the function)
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
