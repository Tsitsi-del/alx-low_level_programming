#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: pointer to address of the head of list
 * @n: integer value of new node
 * Return: NULL, if function fails
 *	Otherwise  - address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *curr;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
	return (new);
}
