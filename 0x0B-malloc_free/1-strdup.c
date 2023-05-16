#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- function that return a pointer to a duplicated string
 * @str: string of characters
 * Description: function return pointer to duplicated string
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, k = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k]; k++)
	{
		ptr[k] = str[k];
	}
	return (ptr);
}
