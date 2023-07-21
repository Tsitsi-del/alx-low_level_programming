#include "lists.h"

/**
 * distint_len - Function returns number of nodes in a list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_nodes++;
		h= h->next;
	}
	return (num_nodes);
}
