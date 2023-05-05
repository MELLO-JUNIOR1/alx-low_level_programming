#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 || 1
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endiann = (char *)&num;

	return ((int)*endiann);
}
