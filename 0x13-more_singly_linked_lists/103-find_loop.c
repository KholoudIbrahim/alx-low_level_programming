#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop
 *
 * @head: ptr
 *
 * Return: (NULL)
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *l;

	if (head == NULL)
		return (NULL);

	for (l = head->next; l != NULL; l = l->next)
	{
		if (l == l->next)
			return (l);

		for (p = head; p != l; p = p->next)
			if (p == l->next)
				/*return (l->next)*/
				return (l->next);
	}
	/*return (NULL)*/
	return (NULL);
}
