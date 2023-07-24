#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: the string to be searched
 * @c: the char to be located
 * Return: if c is found - pointer to the first occurence of
 * the char otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
