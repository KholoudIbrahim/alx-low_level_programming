#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 *
 * @head: ptr
 * @n: the value
 *
 * Return: (a_n_node)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a_n_node;

	a_n_node = malloc(sizeof(listint_t));
	if (!head || !a_n_node)
		return (NULL);

	a_n_node->next = NULL;
	a_n_node->n = n;

	if (*head)
		a_n_node->next = *head;

	*head = a_n_node;

	/*return (a_n_node)*/
	return (a_n_node);
}
