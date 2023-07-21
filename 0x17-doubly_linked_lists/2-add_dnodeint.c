#include "lists.h"

/**
 * add_dnodeint - Function adds a new node at the beginning of list
 * @head: pointer to the list
 * @n: the data to be added in the new node
 * Return: address of new element or Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	distint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(distint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
