#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 *
 * @head: address of ptr
 *
 * Return: the address (*head)
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_n = NULL, *n1;

	n1 = NULL
	if (!head || !*head)
		return (NULL);

	n1 = *head;
	*head = NULL;

	while (n1)
	{
		next_n = n1->next;
		n1->next = *head;
		*head = n1;
		n1 = next_n;
	}
	/*return (*head)*/
	return (*head);
}
