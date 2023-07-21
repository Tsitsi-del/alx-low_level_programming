#include "lists.h"

/**
 * free_dlistint - Function that frees a double linked list
 * @head: pointer to list that needs to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tem;

	while (head != NULL)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
