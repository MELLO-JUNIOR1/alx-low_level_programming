#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers within a specified range
 * @min: smallest number in the range
 * @max: largest number in the range
 *
 * Return: pointer to the array, or NULL if there was an error
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Check if the min is greater than the max */
	if (min > max)
		return (NULL);

	/* Dynamically allocate memory for the array */
	arr = malloc(size * sizeof(int));

	/* Check if the memory allocation was successful */
	if (arr == NULL)
		return (NULL);

	/* Assign values to each element in the array */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	/* Return the pointer to the array */
	return (arr);
}
