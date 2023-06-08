#include "main.h"

/**
 * set_bit - set bit at given index to 1
 * @n: pointer
 * @index: index of bit to set to 1
 * Return: 1 Success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
