#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is checked 
 * Reurn: 1 if char is lowercase, othwise 0. 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
