#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - print args
 * @ac: width of grid
 * @av: heigth of grid
 * Return: args on a line
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int index, i, b, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		b = 0;
		while (ac[i][b] != '\0')
		{
			index++;
			b++;
		}
		i++;
	}
	index = index + ac + 1;
	string = malloc(sizeof(char) * index);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (b = 0; av[i][b] != '\0'; b++)
		{
			string[c] = av[i][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	return (string);
}
