#include "main.h"

/**
 * flip_bits - number of bits to flip
 * @n: first num
 * @m: second num
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int exclu = n ^ m;
	unsigned long int position;

	for (index = 63; index >= 0; index--)
	{
		position = exclu >> index;
		if (position & 1)
		{
			count++;
		}
	}
	return (count);
}
