#include "main.h"

/**
 * binary_to_uint - function converts binary to uint
 * @b: string with binary numbers
 * Return: number converted from binary to uint
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal_num = 0;

	if (!b)
	{
		return (0);
	}
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
		{
			return (0);
		}
		decimal_num = 2 * decimal_num + (b[index] - '0');
	}
	return (decimal_num);
}

