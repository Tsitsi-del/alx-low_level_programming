#include "main.h"

/**
 * _memset - fills memory with constant byte b
 * @s: memory area to be filled
 * @b: char
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
