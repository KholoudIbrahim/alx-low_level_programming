#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: integer alphabet input
 *
 * Return: 1 if it is uppercase, else 0.
*/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
