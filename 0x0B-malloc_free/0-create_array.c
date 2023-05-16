#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that create an array
 * @size: number of elements
 * @c: characters
 * Description: create array of size of size and assign char c
 * Return: pointer to an array, null if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
