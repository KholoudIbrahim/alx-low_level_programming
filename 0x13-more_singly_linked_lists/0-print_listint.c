#include "lists.h"

/**
 * print_listint - a function that prints
 * linked lists.
 *
 * @h: pointer pointing at the first node.
 *
 * Return: the size of the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}
