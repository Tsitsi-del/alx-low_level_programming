#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str = "";
	char *sep = "";
	va_list myFormats;

	va_start(myFormats, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(myFormats, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(myFormats, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(myFormats, double));
					break;
				case 's':
					str = va_arg(myFormats, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(myFormats);
}
