#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: address new head
 * @index: variable
 * Return: n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int n = 0;

	aux = head;
	while (n < index)
	{
		if (aux)
		{
			aux = aux->next;
			n++;
		}
		else
		{
			return (NULL);
		}
	}
	return (aux);
}
