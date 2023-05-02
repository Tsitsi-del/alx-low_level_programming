#include "main.h"

/**
 * puts2 - prints one character of two
 * @str: input
 *
 * Return: print
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
