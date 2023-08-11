#include "hash_tables.h"

/**
 * hash_table_delete - function deleting a hash array
 * @ht: pointer to hash array to be deleted
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node = NULL;
	unsigned long int x = 0;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			while (ht->array[x] != NULL)
			{
				current_node = ht->array[x];
				free(current_node->key);
				free(current_node->value);
				ht->array[x] = ht->array[x]->next;
				free(current_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
