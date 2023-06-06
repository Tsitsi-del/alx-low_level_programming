#include "lists.h"
#include <stdio.h>
#include <unistd.h>

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the address of the head of the lists
 * @n: value of the new node
 * Return: NULL, if function fails
 * 	Otherwise - address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
