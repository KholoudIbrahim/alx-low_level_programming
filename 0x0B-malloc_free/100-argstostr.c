#include "main.h"

/**
 * len - length
 * @p: input (string)
 * Return: (size)
 */


int len(char *p)
{
	int size = 0;

	for (; p[size] != '\0'; size++)
	;
	/*return (size)*/
	return (size);
}
/**
 * *argstostr - concatenates all the arguments
 * @ac: ac
 * @av: av
 * Return: (s)
 */

char *argstostr(int ac, char **av)
{
	int j1 = 0, n = 0;
	int j2 = 0, cm = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; j1 < ac; j1++, n++)
		n = n + len(av[j1]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
		return (NULL);

	for (j1 = 0; j1 < ac; j1++)
	{
		for (j2 = 0; av[j1][j2] != '\0'; j2++, cm++)
			s[cm] = av[j1][j2];

		s[cm] = '\n';
		cm++;
	}
	s[cm] = '\0';
	/*return (s)*/
	return (s);
}
