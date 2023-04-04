#include "main.h"

/**
 * _strchr - function that fills memory
 * with a const byte.
 * @s: a pointer to put the constant
 * @c: constant character parameter
 * Return: pointer is returned
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
