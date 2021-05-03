#include "lists.h"
/**
* free_dlistint - free
* @head: head
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
