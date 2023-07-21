#include "lists.h"

/**
 * insert_dnodeint_at_index - Function to insert a node at given index
 * @h: pointer to list
 * @idx: index of node to insert
 * @n: data to insert in list
 * Return: addrss of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x;
	distint_t *tem = *h;
	distint_t *new_node;

	new_node = malloc(sizeof(distint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (x = 0; tem && x < idx; x++)
	{
		if (x == idx - 1)
		{
			if (tem->next == NULL)
				return (add_dnodeint_end(h, n));
			new_node->next = tem->next;
			new_node->prev = tem;
			tem->next->prev = new_node;
			tem->next = new_node;
			return (new_node);
		}
		else tem = tem->next;
	}
	return (NULL);
}
