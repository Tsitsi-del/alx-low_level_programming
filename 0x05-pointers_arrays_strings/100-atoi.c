#include "main.h"

/**
 * _atoi - function that converts a string to integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int si = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			si *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '0')
	{
		if (j >= 0)
		{
			j = j * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			j = j * 10 - (s[i] - '0');
			i++;
		}
	}
	si *= - 1;
	return (j * si);
}
