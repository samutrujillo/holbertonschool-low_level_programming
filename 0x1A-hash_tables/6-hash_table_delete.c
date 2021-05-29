#include "hash_tables.h"
/**
 * hash_table_delete - Free a hash table
 * @ht: Hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *h = ht;
	hash_node_t *del, *aux;
	unsigned long int i;

	for (i = 0; i < h->size; i++)
		if (h->array[i] != NULL)
		{
			del = h->array[i];
			while (del != NULL)
			{
				aux = del->next;
				free(del->key);
				free(del->value);
				free(del);
				del = aux;
			}
		}

	free(ht->array);
	free(ht);
}
