#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index index || -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);
return ((n >> index) & 1);
}
