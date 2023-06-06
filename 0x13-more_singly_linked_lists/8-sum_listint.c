#include "lists.h"

/**
 * sum_listint - calculates the sum of data in list
 * @head: pointer to the head of the list
 * Return: if list is empty - 0
 * 	Otherwise - the sum of the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
