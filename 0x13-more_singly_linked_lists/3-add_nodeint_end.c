#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 *
 * @head: ptr
 * @n: the value
 *
 * Return: (a_n_node)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a_n_node = malloc(sizeof(listint_t));
	listint_t *n1;

	if (!head || !a_n_node)
		return (NULL);

	a_n_node->next = NULL;
	a_n_node->n = n;

	if (!*head)
		*head = a_n_node;

	else
	{
		n1 = *head;
		while (n1->next)
			n1 = n1->next;

		n1->next = a_n_node;
	}

	/*return (a_n_node)*/
	return (a_n_node);
}
