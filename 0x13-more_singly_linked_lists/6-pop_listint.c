#include "lists.h"
/**
 * pop_listint - function that returns the nth node
 * @head: head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	if (head)
	{
		aux = *head;
		if (aux)
		{
			*head = aux->next;
			n = aux->n;
			free(aux);
		}
	}
	return (n);
}
