#include "main.h"

/**
 * _w - the number of words
 * @s: input (string)
 * Return: (m)
 */

int _w(char *s)
{
	int j1, m = 0;

	for (j1 = 0; s[j1]; j1++)
	{
		if (s[j1] == ' ')
		{
			if (s[j1 + 1] != ' ' && s[j1 + 1] != '\0')
				m++;
		}

		else if (j1 == 0)
			m++;
	}
	m++;
	/*return (m)*/
	return (m);
}
/**
 * strtow - splits the string
 * @str: input (string)
 * Return: (p)
 */

char **strtow(char *str)
{
	int i1, j1, n1, m1, c = 0, w = 0;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = _w(str);
	if (c == 1)
		return (NULL);
	p = (char **)malloc(c * sizeof(char *));
	if (p == NULL)
		return (NULL);
	p[c - 1] = NULL;
	i1 = 0;
	while (str[i1])
	{
		if (str[i1] != ' ' && (i1 == 0 || str[i1 - 1] == ' '))
		{
			for (j1 = 1; str[i1 + j1] != ' ' && str[i1 + j1]; j1++)
				;
			j1++;
			p[w] = (char *)malloc(j1 * sizeof(char));
			j1--;
			if (p[w] == NULL)
			{
				for (n1 = 0; n1 < w; n1++)
					free(p[n1]);
				free(p[c - 1]);
				free(p);
				return (NULL);
			}
			for (m1 = 0; m1 < j1; m1++)
				p[w][m1] = str[i1 + m1];
			p[w][m1] = '\0';
			w++;
			i1 = i1 + j1;
		}
		else
			i1++;
	}
	return (p);
}
