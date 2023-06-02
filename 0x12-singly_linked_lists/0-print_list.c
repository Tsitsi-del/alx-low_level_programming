#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elemnts in list
 * @h: pointer to the list_t to print
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t lis = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		lis++;
	}
	return (lis);
}
