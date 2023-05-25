#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all parameters
 * @n: the number of parameters passed to the function
 * @...: variable number of parameters to calculate sum
 * Return: if n == 0 - 0.
 * Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mySum;
	unsigned int i, results = 0;

	va_start(mySum, n);

	for (i = 0; i < n; i++)
	{
		results += va_arg(mySum, int);
	}
	va_end(mySum);
	return (results);
}
