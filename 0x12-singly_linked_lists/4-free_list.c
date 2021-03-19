#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */
void free_list(list_t *head)
{
	list_t *save;

	while ((save = head) != NULL)
	{
		head = head->next;

		free(save->str);
		free(save);
	}
}
