#include "lists.h"
/**
* get_dnodeint_at_index - deletes the head node
* @head: head
* @index: variable
* Return: aux
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
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
