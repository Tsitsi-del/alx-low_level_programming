#include "lists.h"

/**
 * free_distint - Function that frees a double linked list
 * @head: pointer to list that needs to be freed
 */

void free_dlistint(dlistint_t *head)
{
	distint_t *tem;

	while (head != NULL)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
