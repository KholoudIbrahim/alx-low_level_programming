#include "lists.h"

/**
 * listint_len - prints linked lists
 * @h: pointer pointing at irst node
 *
 * Return: the size of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
