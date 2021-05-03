#include "lists.h"
/**
* delete_dnodeint_at_index - deletes the node at index of a listint_t
* @head: head
* @index: index
* Return: 1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *aux2, *aux3;
	unsigned int i = 0;

	aux = *head;
	while (index && i < index - 1)
	{
		if (aux)
			aux = aux->next;
		else
		{
			return (-1);
		}
		i++;
	}
	if (!index && *head)
	{
		*head = aux->next;
		if (aux->next)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	if (aux && aux->next)
	{
		aux2 = aux;
		aux3 = aux2->next;
		aux->next = aux3->next;
		if (aux3->next)
			aux3->next->prev = aux2;
		free(aux3);
		return (1);
	}
	return (-1);
}
