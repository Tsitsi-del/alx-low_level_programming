#include "main.h"

/**
 * print_binary - print the binary number
 * @n: decimal number to print in binary
 */

void print_binary(unsigned long int n)
{
	int index, count = 0;
	unsigned long int position;

	for (index = 63; index >= 0; index--)
	{
		position = n >> index;

		if (position & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
