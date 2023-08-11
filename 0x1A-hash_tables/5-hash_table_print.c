#include "hash_tables.h"

/**
 * hash_table_print - function printing a hash table
 * @ht: pointer to hash table printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	unsigned long int i = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");

	for (x = i; x < ht->size; x++)
	{
		if (ht->array[x])
		{
			node = ht->array[x];
			while (node != NULL)
			{
				printf("%s '%s': '%s'", i == 0 ? "" : ", ",
						node->key, node->value), i++;
				node = node->next;
			}
		}
	}
	printf("}\n");
}

