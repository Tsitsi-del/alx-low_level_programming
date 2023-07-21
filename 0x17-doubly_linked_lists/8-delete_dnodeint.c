#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes node in list
 * @head: pointer to the list
 * @index: index of node to delete
 * Return: 1 on Success, -1 on Failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tem = *head;
	unsigned int x = 0;

	if (!*head || dlistint_len(tem) < index + 1)
		return (-1);

	if (!index)
	{
		(*head) = tem->next;
		if (tem->next)
		{
			tem->next->prev = NULL;
		}
		tem->next = NULL;
		free(tem);
		return (1);
	}
	while (x < index)
	{
		tem = tem->next;
		x++;
	}
	tem->prev->next = tem->next;
	if (tem->next)
		tem->next->prev = tem->prev;
	free(tem);

	return (1);
}
