#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node at end of list
 * @head: pointer to the list_t
 * @str: string to add in new node
 * Return: address of new list, NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list;
	list_t *tem = *head;
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
	new_list->next = NULL;

	if (*head = NULL)
	{
		*head = new_list;
		return (new_list);
	}
	while (tem->next)
	{
		tem = tem->next;
		return (new_list);
	}
}
