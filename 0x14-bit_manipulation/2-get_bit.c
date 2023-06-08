#include "main.h"

/**
 * get_bit - returns a bit of a decimal number at an index
 * @n: number
 * @index: index of bit
 * Return: number of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_bit;

	if (index > 63)
	{
		return (-1);
	}
	value_bit = (n >> index) & 1;

	return (value_bit);
}
