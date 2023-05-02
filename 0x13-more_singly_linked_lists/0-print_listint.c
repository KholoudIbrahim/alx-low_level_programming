#include "lists.h"

/**
 * print_listint - prints all the elements of the linked lists.
 *
 * @h: ptr.
 *
 * Return: (n).
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	/*return (n)*/
	return (n);
}
