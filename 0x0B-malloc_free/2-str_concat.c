#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: concatenate of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	ptr = malloc(sizeof(char) * (i + k + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	i = k = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		ptr[i] = s2[k];
		i++, k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
