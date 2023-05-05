#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n |= (1ul << index);

return (1);
}
