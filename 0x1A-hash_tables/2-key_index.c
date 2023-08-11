#include "hash_tables.h"

/**
 * key_index - function returns index of key
 * @key: pointer to key to get index
 * @size: size of array of table
 * Return: index to store the key and value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
