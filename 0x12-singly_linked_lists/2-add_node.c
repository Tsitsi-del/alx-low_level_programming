#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning of lis
 * @head: pointer to the list_t
 * @str: string to add in node
 * Return: address of new string, or NULL if fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	new_list = malloc(sizeof(list_t));
	if (!new_list)
	{
		return (NULL);
	}
	new_list->str = strdup(str);
	new_list->len = len;
	new_list->next = (*head);
	(*head) = new_list;

	return (*head);
}
