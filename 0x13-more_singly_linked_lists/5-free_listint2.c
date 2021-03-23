#include "lists.h"
/**
 * free_listint2 - function that frees
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *aux2;

	if (head)
	{
		aux = *head;
		while (aux)
		{
			aux2 = aux->next;
			free(aux);
			aux = aux2;
		}
	*head = NULL;
	}
}
