#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the header of list_t list.
 *
 * Return: number of nodes in list_t list.
 */
size_t print_listint(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
