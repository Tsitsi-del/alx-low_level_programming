#include "lists.h"

//DO NOT FORGET THE COMENTS

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tm, *curr = *head;
	unsigned int indx;

	if (cuur == NULL)
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
	free (tm);
	return (1);
}
