#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at a given position
 *
 * @head: address of ptr
 * @idx: index
 * @n: the value
 *
 * Return: (a_n_node)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a_n_node = malloc(sizeof(listint_t));
	listint_t *n1;
	unsigned int j = 0;

	if (!head || !a_n_node)
		return (NULL);

	a_n_node->n = n;
	a_n_node->next = NULL;

	if (!idx)
	{
		a_n_node->next = *head;
		*head = a_n_node;
		/*return (a_n_node)*/
		return (a_n_node);
	}

	n1 = *head;

	while (n1)
	{
		if (j == idx - 1)
		{
			a_n_node->next = n1->next;
			n1->next = a_n_node;
			/*return (a_n_node)*/
			return (a_n_node);
		}

		j++;
		n1 = n1->next;
	}

	free(a_n_node);
	/*return (NULL)*/
	return (NULL);
}
