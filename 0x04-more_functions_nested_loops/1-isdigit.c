#include "main.h"

/**
 * _isdigit - a function that checks if an input
 *  is a  digit (0 through 9).
 *
 * @c: integer input
 *
 * Return: 1 if digit, 0 if not.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
