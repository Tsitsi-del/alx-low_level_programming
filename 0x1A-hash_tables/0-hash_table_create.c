#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash array
 * Return: pointer to newly created hash array
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
	{
		return (NULL); }
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
	{
		return (NULL); }
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
		return (NULL);
	return (new_table);
}

