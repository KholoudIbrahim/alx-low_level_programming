#include "main.h"

/**
 * _memcpy - copies a memory area src
 * to a memory area dest.
 *
 * @dest: distination memory area
 * @src: source memory area
 * @n: size of memory area to be copied.
 * Return: pointer to distination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
