#include "lists.h"

/**
 * _strlen - length of a string
 * @s: the string
 * Return: (i1)
 */

int _strlen(char *s)
{
	int i1 = 0;

	/*if*/
	if (!s)
		return (0);

	/*while*/
	while (*s++)
		i1++;

	return (i1);
}

/**
 * print_list - returns a linked lists
 * @h: pointer
 * Return: (i1)
 */

size_t print_list(const list_t *h)
{
	size_t i1 = 0;

	/*while*/
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i1++;
	}

	return (i1);
}
