#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: string to be printed between the numbers
 * @n: number of integers passed to the function
 * @...: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list myNum;
	unsigned int i;

	va_start(myNum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myNum, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(myNum);
}
