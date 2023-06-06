#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a list
 * @head: pointer to the head of list
 * @index: index of the node to locate
 * Return: if node does not exist - NULL
 *	Otherwise - the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indx;

	for (indx = 0; indx < index; indx++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
