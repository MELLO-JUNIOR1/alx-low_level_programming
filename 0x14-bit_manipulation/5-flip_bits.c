#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int num = 0;

	while (flip > 0)
	{
		if ((flip & 1) != 0)
			num++;
		flip >>= 1;
	}

	return (num);
}
