#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the string in revrse
 * @s: holds the character string
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		len++;
	}
	for (len -= 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
