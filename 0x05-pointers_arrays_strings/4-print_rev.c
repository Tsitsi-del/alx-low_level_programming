#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the string in revrse
 * @s: holds the character string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
