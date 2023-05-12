#include "main.h"

/**
 * _puts - iterate through a string and prints a character on each
 * line
 * @str: holds the string character
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
