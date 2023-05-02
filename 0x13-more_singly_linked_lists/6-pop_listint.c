#include "lists.h"

/**
 * pop_listint - deletes the node of the linked list
 *
 * @head: address of ptr
 *
 * Return: (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *n1;
	int n;

	if (!head || !*head)
		return (0);

	n1 = (*head)->next;
	n = (*head)->n;

	/*free(*head)*/
	free(*head);
	*head = n1;

	/*return (n)*/
	return (n);
}
