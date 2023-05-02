#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * r_memory - returns a new linked list
 *
 * @l1: old list
 * @s_l: size of the new linked list
 * @n: new node
 *
 * Return: (l2)
 */

const listint_t **r_memory(const listint_t **l1, size_t s_l,
		const listint_t *n)
{
	size_t j;
	const listint_t **l2;

	l2 = malloc(size * sizeof(listint_t *));
	if (l2 == NULL)
	{
		free(l1);
		exit(98);
	}

	for (j = 0; j < s_l - 1; j++)
		l2[j] = l1[j];

	l2[j] = n;
	free(l1);

	/*return (l2)*/
	return (l2);
}
/**
 * print_listint_safe - returns the linked list
 *
 * @head: ptr
 *
 * Return: (v)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, v = 0;
	const listint_t **l = NULL;

	while (head != NULL)
	{
		for (j = 0; j < v; j++)
		{
			if (head == l[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(l);
				/*return (v)*/
				return (v);
			}
		}
		v++;
		l = r_memory(l, v, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(l);
	/*return (v)*/
	return (v);
}
