#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * free_listint2 - frees a list
 * @head: the pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tm = (*head)->next;
		free(*head);
		*head = tm;
	}
	head = NULL;
}
