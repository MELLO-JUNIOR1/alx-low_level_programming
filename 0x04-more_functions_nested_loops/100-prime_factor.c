#include <stdio.h>
/**
 * main - return prime factor of number
 *
 * Description: prime factor is the number that can divided only by 1
 * and itself.
 *
 * Return: 0
 */
int main(void)
{
	long int n, i;

	n = 612852475143;
	i = 2;
	while (i < n)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
		i++;
	}
	printf("%li\n", n);

	return (0);
}
