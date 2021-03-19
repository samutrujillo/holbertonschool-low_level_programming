#include "lists.h"
#include <string.h>
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: j
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *j;
	int i;

	j = malloc(sizeof(list_t));
	if (j == NULL)
		return (NULL);
	j->str = strdup(str);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j->len = i;
	j->next = *head;
	*head = j;
	return (j);
}
