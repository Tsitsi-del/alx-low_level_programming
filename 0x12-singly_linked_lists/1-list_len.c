#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: pointer to lists_t
 * Return: number of elements in lists_t
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
