#include <stdio.h>

/**
 * main - A program that prints lowercase and uppercase alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c;

	for (c = 0; c < 52; c++)
	{
		putchar(alph[c]);
	}
	putchar('\n');
	return (0);
}
