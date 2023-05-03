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
 * Return: (m)
 */

char *argstostr(int ac, char **av)
{
	int j1 = 0, n = 0;
	int j2 = 0, cm = 0;
	char *m;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; j1 < ac; j1++, nc++)
		nc += _strlen(av[j1]);

	m = malloc(sizeof(char) * nc + 1);
	if (m == 0)
		return (NULL);

	for (j1 = 0; j1 < ac; j1++)
	{
		for (j2 = 0; av[j1][j2] != '\0'; j2++, cm++)
			m[cm] = av[j1][j2];

		m[cm] = '\n';
		cm++;
	}
	m[cm] = '\0';
	/*return (m)*/
	return (m);
}
