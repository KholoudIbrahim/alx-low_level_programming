#include "main.h"

/**
 * len - the length
 * @s: input (string)
 * Return: (si)
 */


int len(char *s)
{
	int si = 0;

	for (; s[si] != '\0'; si++)
	;
/*return (si)*/
	return (si);
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

	si1 = _strlen(s1);
	si2 = _strlen(s2);

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
