#include "lists.h"

/**
 * get_nodeint_at_index - prints the nth node of linked list
 *
 * @head: ptr
 * @index: index of the node
 *
 * Return: (n1)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *n1;

	for (n1 = head, j = 0; n1 && j < index; n1 = n1->next, j++)
		;

	/*return (n1)*/
	return (n1);
}
