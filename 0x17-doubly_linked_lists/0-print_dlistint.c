#include "lists.h"
/**
* print_dlistint - prints a doulbly linked list
* @h: head of the list
* Return: number of elements.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (a)
	{
		printf("%d\n", h->a);
		h = h->next;
		a++;
	}
	return (a);
}
