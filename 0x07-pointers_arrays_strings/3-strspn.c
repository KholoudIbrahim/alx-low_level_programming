#include "main.h"

/**
 * _strspn - function that gets the size
 *           of prefix substring
 * @s: string pointer
 * @accept: accepted character's substring
 * Return: length occurence
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
