#include "lists.h"
#include <string.h>
/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h2;
	list_t *newnodo;
	int i;

	h2 = *head;
	while (h2 && h2->next != NULL)
		h2 = h2->next;

	newnodo = malloc(sizeof(list_t));
	if (newnodo == NULL)
	{
		free(newnodo);
		return (NULL);
	}

	newnodo->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	newnodo->len = i;
	newnodo->next = NULL;

	if (h2)
		h2->next = newnodo;

	else
		*head = newnodo;

	return (*head);
}
