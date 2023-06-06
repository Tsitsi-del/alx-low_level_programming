#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of the list
 * @h: pointer to the head of list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes;

	for (count_nodes = 0; h != NULL; count_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_nodes);
}
