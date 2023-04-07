#include "main.h"

/**
 * _sqrt_recursion - a function that calculates
 * the natural square root of a number.
 * @n: integer value.
 * @val: square root
 * Return: integer value.
*/

int square(int n, int val);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - calculates square root.
 * @n: integer to calculate square root.
 * @val: square root.
 * Return: integer value.
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
