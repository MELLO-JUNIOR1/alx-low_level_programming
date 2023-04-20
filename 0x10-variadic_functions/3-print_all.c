#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - function that prints everything
 * @format: array of characters passed to function
 *
 *
 *
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *separator;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					printf("%s%s", str ? str : "(nil)", i ? separator : "\n");
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
