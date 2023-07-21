#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of list
 * @head: pointer to list
 * @n: data to insert innew node
 * Return: address of new node or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	distint_t *new;
	distint_t *tem = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(distint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (tem->next)
		tem = tem->next;

	tem->next = new;
	new->prev = tem;

	return (new);
}
