#include "main.h"
#include <stdio.h>

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - calculates square root
 * @n: number to calculate square root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate the square root
 * @a: number to iterate
 * Return: square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (a);
	}
	return (_sqrt(n, a + 1));
}
