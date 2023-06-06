#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * free_listint - frees a list
 * @head: the pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tm;

	while (head)
	{
		tm = head->next;
		free(head);
		head = tm;
	}
}
