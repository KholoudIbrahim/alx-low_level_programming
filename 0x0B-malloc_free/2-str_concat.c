#include "main.h"

/**
 * len - the length
 * @n: input (string)
 * Return: (size)
 */

int len(char *n)
{
	int size = 0;

	for (; n[size] != '\0'; size++)
	;
	/*return (si)*/
	return (size);
}
/**
 * *str_concat - it concatenates two strings
 * @s1: string
 * @s2: string
 * Return: (p)
 */

char *str_concat(char *s1, char *s2)
{
	int si1;
	int si2, j;
	char *p;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	si1 = len(s1);
	si2 = len(s2);

	p = malloc((si1 + si2) * sizeof(char) + 1);
	if (p == 0)
		return (0);

	for (j = 0; j <= si1 + si2; j++)
	{
		if (j < si1)
			p[j] = s1[j];
		else
			p[j] = s2[j - si1];
	}

	p[j] = '\0';
	/*return (p)*/
	return (p);
}
