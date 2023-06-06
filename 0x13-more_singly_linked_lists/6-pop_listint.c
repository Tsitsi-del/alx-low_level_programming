#include "lists.h"

/**
 * pop_listint - deletes head node of the list
 * @head - a pointer to the address of the head node
 * Return: 0, if list is empty.
 * 	Otherwise - head note data
 */

int pop_listint(listint_t **head)
{
	listint_t *tm;
	int val;

	if (*head == NULL)
	{
		return (0);
	}
	tm = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free (tm);

	return (val);
}
