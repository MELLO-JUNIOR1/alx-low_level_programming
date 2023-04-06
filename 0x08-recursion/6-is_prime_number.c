#include "main.h"
/**
 * prime_num - check if a number is prime or not
 * @n: the number
 * @dv: divisor
 * Return: prime number
 */
int prime_num(int n, int dv)
{
	if (dv >= n && n > 1)
		return (1);
	else if (n % dv == 0 || n <= 1)
		return (0);
	else
		return (prime_num(n, dv + 1));
}
/**
 * is_prime_number - Check prime number or not
 * @n: the number
 * Return: 1 if is prime || 0 is is composite
 */
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
