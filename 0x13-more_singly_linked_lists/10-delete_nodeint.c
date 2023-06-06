#include "lists.h"

/**
 * delete_nodeint_at_index - deleting node at index specified
 * @head: head pointer to the list
 * @index: index of the specified node to be deleted
 * Return: -1 - when function fail
 *	Otherwise 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tm, *curr = *head;
	unsigned int indx;

	if (curr == NULL)
	{
		return (-1);
	}
	for (indx = 0; indx < (index - 1); indx++)
	{
		if (curr->next == NULL)
		{
			return (-1);
		}
		curr = curr->next;
	}
	tm = curr->next;
	curr->next = tm->next;
	free(tm);
	return (1);
}
