#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to int
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, len, i, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	i = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && i == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			i = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			i = 0;
		}
		a++;
	}
	if (i == 0)
		return (0);
	return (c);
}
/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 + n2;

	printf("%d\n", res);

	return (0);
}
