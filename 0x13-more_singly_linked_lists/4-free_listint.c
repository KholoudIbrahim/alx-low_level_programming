#include "lists.h"

/**
 * free_listint - frees the linked list
 *
 * @head: ptr
 *
 * Return: void function
 */

void free_listint(listint_t *head)
{
	listint_t *n1;

	while (head)
	{
		n1 = head;
		head = head->next;

		/*free(n1)*/
		free(n1);
	}
}
