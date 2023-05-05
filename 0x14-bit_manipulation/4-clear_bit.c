#include "main.h"

/**
 * clear_bit - Function to set value of bit to 0 at certain index
 * @n: pointer to the number
 * @index: index
 * Return: Return 1 || -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n &= ~mask;

	return (1);
}
