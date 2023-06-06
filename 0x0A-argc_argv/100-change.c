#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argv length
 * @argv: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int place, change, tot, aux;
	int coin[] = {25, 10, 5, 2, 1};

	place = tot = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot =  atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coin[place] != '\0')
	{
		if (tot >= coin[place])
		{
			aux = (tot / coin[place]);
			change += aux;
			tot -= coin[place] * aux;
	}
	place++;
	}
	printf("%d\n", change);
	return (0);
}
