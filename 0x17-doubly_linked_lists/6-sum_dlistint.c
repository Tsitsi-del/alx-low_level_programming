#include "lists.h"

/**
 * sum_dlistint - Function return sum of all data in list
 * @head: pointer to list
 * Return: the sum of data in list
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
