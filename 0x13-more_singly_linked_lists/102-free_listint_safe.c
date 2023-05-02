#include "lists.h"
#include <stdlib.h>

/**
 * loop_l - loop_l function
 *
 * @p: ptr
 *
 * Return: (l->next)
 */

listint_t *loop_l(listint_t *p)
{
	listint_t *n;
	listint_t *l;

	if (p == NULL)
		return (NULL);

	for (l = p->next; l != NULL; l = l->next)
	{
		if (l == l->next)
			return (l);

		for (n = p; n != l; n = n->next)
			if (n == l->next)
				/*return (l->next)*/
				return (l->next);
	}
	/*return (NULL)*/
	return (NULL);
}
/**
 * free_listint_safe - frees the linked list
 *
 * @h: address of the linked list
 *
 * Return: (s)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s;
	listint_t *next_n, *loop;
	int p = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop = loop_l(*h);

	for (s = 0; (*h != loop || p) && *h != NULL; *h = next_n)
	{
		s++;
		next_n = (*h)->next;

		if (*h == loop && p)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}

			s++;
			next_n = next_n->next;
			free((*h)->next);
			p = 0;
		}
		/*free(*h)*/
		free(*h);
	}
	*h = NULL;
	/*return (s)*/
	return (s);
}
