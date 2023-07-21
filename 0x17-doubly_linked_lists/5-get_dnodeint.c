#include "lists.h"

/**
 * get_dnodeint_at_index - Function that gets nth node of a double linked list
 * @head: pointer to list
 * @index: index of node to return
 * Return: address of node or NULL if itt does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	while (head && x < index)
	{
		head = head->next;
		x++;
	}

	return (head ? head : NULL);
}
