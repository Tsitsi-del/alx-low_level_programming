#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is checked
 * Return: 1 if successful otherwise 0 on error
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
