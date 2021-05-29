#include "hash_tables.h"
/**
 * hash_table_set - Adds or Updates an element in table
 * @ht: Hash table
 * @key: Key
 * @value: value associate with key
 * Return: 1 Success, 0 Failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	char *copy;
	hash_node_t *new;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(copy);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
