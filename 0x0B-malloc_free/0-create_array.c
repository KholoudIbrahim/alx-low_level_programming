#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: (p)
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
		return (0);

	while (size--)
		p[size] = c;

	/*return (p)*/
	return (p);
}
