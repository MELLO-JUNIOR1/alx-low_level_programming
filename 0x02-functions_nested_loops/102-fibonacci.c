#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: Always (0).
 */

int main(void)
{
	int i;
	unsigned long fib, Fib1, Fib2;

	Fib1 = 1, Fib2 = 0;

	for (i = 0; i < 50; i++)
	{
		fib = Fib1 + Fib2;
		printf("%lu", fib);

		Fib2 = Fib1;
		Fib1 = fib;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
