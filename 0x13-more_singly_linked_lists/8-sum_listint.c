#include "lists.h"

/**
 * sum_listint - prints the sum of the data of the linked list
 *
 * @head: ptr
 *
 * Return: (sum_of_data)
 */

int sum_listint(listint_t *head)
{
	int sum_of_data = 0;

	while (head)
	{
		sum_of_data = sum_of_data + head->n;
		head = head->next;
	}

	/*return (sum_of_data)*/
	return (sum_of_data);
}
