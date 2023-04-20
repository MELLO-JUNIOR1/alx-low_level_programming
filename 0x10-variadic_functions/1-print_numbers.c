#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Funtion to print numbers
 * @separator: a comma
 * @n: number of numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("%c", '\n');
}
