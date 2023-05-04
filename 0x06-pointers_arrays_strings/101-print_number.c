#include "main.h"

/**
 * print_number - prints a number
 * @n: number
 * Return: n
 */

void print_number(int n)
{
	int i = 0;
	
	while (i < n)
	{
		_putchar(n);
		i++;
	}
	_putchar('\n');
}
