#include "hash_tables.h"

/**
 * hash_table_get - function that gets value of key
 * @ht: pointer to hash aaray
 * @key: pointer to key to look for
 * Retrun: value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x = 0;
	hash_node_t *temp;

	if (!ht || key == NULL)
		return (NULL);

	x = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[x];

	for (; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value); }
	return (NULL);
}
