#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to a lis
 * at given index
 * @head: pointer to the address of the head
 * @idx: index where new node will be inserted
 * @n: value of the new node
 * Return: NULL - if function fails
 *	Otherwise - pointer of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *curr = *head;
	unsigned int index;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = curr;
		*head = new;
		return (new);
	}
	for (index = 0; index < idx - 1; index++)
	{
		if (curr == NULL || curr->next == NULL)
		{
			return (NULL);
		}
		curr = curr->next;
	}
	new->next = curr->next;
	curr->next = new;

	return (NULL);
}
