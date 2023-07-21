#include "lists.h"

/**
 * dlistint_len - Function returns number of nodes in a list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_nodes++;
		h = h->next; }

	return (num_nodes);
}
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
		return (1); }
	while (x < index)
	{
		tem = tem->next;
		x++; }
	tem->prev->next = tem->next;
	if (tem->next)
		tem->next->prev = tem->prev;
	free(tem);

	return (1);
}
