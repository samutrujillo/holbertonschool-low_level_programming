#include "lists.h"
/**
 * add_nodeint -  function that adds a new node
 * @head: address new head
 * @n: variable
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
