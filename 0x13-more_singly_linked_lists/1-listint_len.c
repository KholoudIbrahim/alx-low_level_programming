#include "lists.h"

/**
 * listint_len - prints the number of elements in the linked lists
 *
 * @h: ptr
 *
 * Return: (n)
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	/*return (n)*/
	return (n);
}
