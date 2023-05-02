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
	int k;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (k = len; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
