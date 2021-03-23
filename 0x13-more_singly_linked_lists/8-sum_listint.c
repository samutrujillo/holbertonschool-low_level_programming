#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data
 * @head: address new head
 * Return: n
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
	unsigned int n = 0;

	aux = head;
	while (aux)
	{
	n += aux->n;
	aux = aux->next;
	}
	return (n);
}
