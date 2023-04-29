#include "lists.h"

/**
 * add_node_end - adds a new node to the end
 * @head: address of ptr
 * @str: string
 * Return: (n_n)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_n = malloc(sizeof(list_t));
	list_t *n1 = *head;

	if (!head || !n_n)
		return (NULL);

	if (str)
	{
		n_n->str = strdup(str);

		if (!n_n->str)
		{
			free(n_n);
			return (NULL);
		}

		n_n->len = _strlen(n_n->str);
	}

	if (n1)
	{
		while (n1->next)
			n1 = n1->next;
		n1->next = n_n;
	}

	else
		*head = n_n;

	return (n_n);
}
