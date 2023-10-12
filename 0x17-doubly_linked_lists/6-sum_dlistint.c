#include "lists.h"

/**
 * sum_dlistint - Sums data of a dlistint_t list.
 * @head: Head of dlistint_t list.
 *
 * Return: The sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
