#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half a string
 * @str: holds a string
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j; 
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (count % 2 != 0)
	{
		for (j = (count - 1) / 2; j < count - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}

	_putchar('\n');
}
