#include "lists.h"

/**
 * print_dlistint - Function to print doubly linked list
 * @h: pointer to the list
 * Return: size or number of nodes in a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
