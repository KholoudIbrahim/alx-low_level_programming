#include "lists.h"

/**
 * free_listint2 - frees the linked list 2
 *
 * @head: address of the ptr
 *
 * Return: void function
 */

void free_listint2(listint_t **head)
{
	listint_t *n1;
	listint_t *t1;

	if (!head)
		return;

	n1 = *head;

	while (n1)
	{
		t1 = n1;
		n1 = n1->next;
		/*free(t1)*/
		free(t1);
	}

	*head = NULL;
}
