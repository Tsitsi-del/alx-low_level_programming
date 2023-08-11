#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to a table
 * @ht: is pointer to the hash table you want to add or update the key/value to
 * @key: pointer to key, can not be empty
 * @value: pointer to value associated with key
 * Return: 1 if Succesful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_nodet_t *node_new = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int x;

	if (ht == NULL || key == NULL || value == null || strcmp(key, "") == 0)
	{
		return (0); }
	x = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[x];

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			if (strcmp(current_node->value, value) != 0)
			{
				free(current_node->value);
				current_node->value = strdup(value);
			}
			return (1);
		}
	}
	node_new = _node_(key, value);
	if (!node_new)
	{
		return (0); }
	node_new->next = ht->array[x];
	ht->array[x] = node_new;
	return (1);
}

/**
 * _node_ - function creates new node
 * @key: pointer to the key
 * @value: pointer to the value of key
 * Return: pointer to new node
 */

hash_node_t *_node_(const char *key, const char *value)
{
	hash_node_t *node_new;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
	{
		return (NULL); }
	node_new = malloc(sizeof(hash_node_t));

	if (!node_new)
		return (NULL);

	node_new->key = strdup(key);

	if (node_new->key == NULL)
	{
		free(node_new);
		return (NULL);
	}
	node_new->value = strdup(value);

	if (node_new->value == NULL)
	{
		free(node_new->key);
		free(node_new);
		return (NULL);
	}
	node_new->next = NULL;
	return (node_new);
}
