#include "main.h"
/**
 * square - calculate square of a number
 * @n: number
 * @sq: square of the number n
 * Return: square of the number
 */
int square(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq * sq < n)
		return (square(n, sq + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number
 * Return: value of the sqrt number
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
