#include "main.h"

/**
 * get_endianness - function to check machine endian
 * Return: 0 for bit and 1 for small
 */

int get_endianness(void)
{
	unsigned int index = 1;
	char *chr = (char *) &index;

	return (*chr);
}
