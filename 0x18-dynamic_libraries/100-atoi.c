#include "main.h"

/**
 * _atoi - function that converts a string to integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int n = 0;
	int j = 0;
	int si = 1;

	while (s[i])
	{
		if (s[i] == 45)
		{
			si *= -1;
		}
	while (s[i] >= 48 && s[i] <= 57)
	{
		j = 1;
		n = (n * 10) + (s[i] - '0');
		i++;
	}
	if (j == 1)
	{
		break;
	}
	i++;
	}
	n *= si;
	return (n);
}
