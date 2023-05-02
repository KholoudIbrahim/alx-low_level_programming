#include "lists.h"

/**
 * pop_listint - deletes the node of the linked list
 *
 * @head: address of ptr
 *
 * Return: (i)
 */

int pop_listint(listint_t **head)
{
	listint_t *n1;
	int i;

	if (!head || !*head)
		return (0);

	n1 = (*head)->next;
	i = (*head)->i;

	/*free(*head)*/
	free(*head);
	*head = n1;

	/*return (i)*/
	return (i);
}
