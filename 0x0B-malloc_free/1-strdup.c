#include "main.h"

/**
 * *_strdup - returns a pointer
 * @str: input (string)
 * Return: (p)
 */

char *_strdup(char *str)
{
	int j = 0;
	int s = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (; str[s] != '\0'; s++)
	;
	/*+1 on the size puts the end of string character*/
	p = malloc(s * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}

	else
	{

		for (; j < s; j++)
			p[j] = str[j];
	}
	/*return (p)*/
	return (p);
}
