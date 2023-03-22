#include "main.h"

/**
 * _isalpha - checks if character is a letter (either lowercase or uppercase)
 *
 * @c: input
 *
 * Return: 1 if c is a letter, else 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
