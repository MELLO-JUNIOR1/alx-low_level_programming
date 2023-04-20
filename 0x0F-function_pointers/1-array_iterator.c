#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function as a arg on each element of an array
 * @array: array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	int i, *end = array + size - 1;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; array <= end; i++)
			action(*array++);
	}
}
