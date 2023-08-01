#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that returns the number of elements in a linked listint_t list.
 * @h: pointer to the header of list_t list.
 *
 * Return: number of elements in listint_t.
 */
size_t listint_len(const listint_t *h);
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

