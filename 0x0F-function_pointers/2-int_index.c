#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that search for integer inside array
 * @array: array
 * @size: size of array
 * @cmp: Function pointer
 * Return: Return i || -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
