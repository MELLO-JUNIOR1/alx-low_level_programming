#include "main.h"

/**
 * _isdigit - Prints the digit
 *
 * @c: intiger input number
 *
 * Return: last digit.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
