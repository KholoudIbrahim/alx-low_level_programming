#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer
 * Return: void function
 */

void free_list(list_t *head)
{
	list_t *n1;
	list_t *n_node;

	if (!head)
		return;

	n1 = head;

	while (n1)
	{
		n_node = n1->next;
		free(n1->str);
		free(n1);
		n1 = n_node;
	}
}
