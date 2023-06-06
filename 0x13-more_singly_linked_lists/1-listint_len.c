#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in a list
 * @h: pointer to the head of list
 * Return: the number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count_nodes;

	for (count_nodes = 0; h != NULL; count_nodes++)
	{
		h = h->next;
	}
	return (count_nodes);
}
