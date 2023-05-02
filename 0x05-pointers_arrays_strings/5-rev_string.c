#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int count = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
