#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed
 * by new line, for multiples of three prints Fizz instaed of the
 * number and for multiples of five prints Buzz
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
