#include "main.h"

/**
 * _abs - function computes the absolute value of an integer
 *
 * @n: integer input
 *
 * Return: Always 0 if success
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
