include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all elements in list.
 * @h: Linked list.
 * Return: Number of nodes in list.
 */
int print_listint(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (nodes);
}
