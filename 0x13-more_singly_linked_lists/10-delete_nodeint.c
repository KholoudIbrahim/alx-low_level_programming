#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 *
 * @head: address of ptr
 * @index: index
 *
 * Return: (1) or (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n1, *pv_n;
	unsigned int n;

	n = 0;
	if (!head || !*head)
		return (-1);

	if (!index)
	{
		n1 = *head;
		*head = (*head)->next;
		/*free(n1)*/
		free(n1);
		/*return (1)*/
		return (1);
	}

	n1 = *head;

	while (n1)
	{
		if (n == index)
		{
			pv_n->next = n1->next;
			/*free(n1)*/
			free(n1);
			/*return (1)*/
			return (1);
		}

		n++;
		pv_n = n1;
		n1 = n1->next;
	}
	/*return (-1)*/
	return (-1);
}
