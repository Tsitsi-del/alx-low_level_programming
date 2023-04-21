#include <stdio.h>

/**
 * main - A program that prints alphabets in lower cases
 *
 * Return: Always 0 (Succsess)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 26; c++)
	{
		putchar(alph[c]);
	}
	putchar("\n");
	return (0);
}
