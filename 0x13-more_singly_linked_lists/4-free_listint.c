#include "lists.h"
/**
 * free_listint - function that frees
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}

}
