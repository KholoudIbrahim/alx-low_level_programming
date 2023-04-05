#include "main.h"

/**
 * _strpbrk - function searches within a string
 * @s: string pointer
 * @accept: a string to be matched
 * Return: a pointer of bytes matching bytes
 * in accept, or NULL if no match.
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;

	char *z;

	while (s[a] != '\0')
	{
		b = 0;

		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				z = &s[a];

				return (z);
			}
			b++;
		}
		a++;
	}
	return (0);
}
