#include "lists.h"

/**
 * list_len - returns the length of ll
 * @h: pointer
 * Return: (i1)
 */

size_t list_len(const list_t *h)
{
	size_t i1 = 0;

	/*while*/
	while (h)
	{
		h = h->next;
		i1++;
	}

	return (i1);
}
