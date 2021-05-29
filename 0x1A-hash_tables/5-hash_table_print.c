#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;
	int f = 0;

	if (!ht)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (f == 1)
				printf(", ");

			aux = ht->array[i];
			while (aux != NULL)
			{
				printf("'%s': '%s'", aux->key, aux->value);
				aux = aux->next;
				if (aux != NULL)
					printf(", ");
			}
			f = 1;
		}
	printf("}\n");
}
