#include "main.h"

/**
 * swap_int - swap  values of variable a and b
 * @a: holds the value of variable a
 * @b: holds the value of variable b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
