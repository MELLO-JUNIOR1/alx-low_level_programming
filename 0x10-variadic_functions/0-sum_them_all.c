#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum up numbers
 * @n: constant represent number of numbers
 * Return: Return res;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
