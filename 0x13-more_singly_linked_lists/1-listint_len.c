#include "lists.h"
/**
* listint_len - function that returns the number of elements
* @h: variable
* Return: n
*/
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
return (n);
}
