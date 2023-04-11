#include <stdlib.h>
#include "main.h"



/**
 * alloc_grid - Function creates 2d arrayy
 * @width: width
 * @height: height
 * Return: Retuen pointer || NULL
 */


int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	array[i] = malloc(sizeof(int) * width);

	if (array[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
		free(array[j]);
		}

		free(array);
		{
		return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		array[i][j] = 0;
	}
	}

return (array);
}
