#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated previously
 * @old_size: size of old memory allocated
 * @new_size: size of new memory allocated
 * Return: pointer to array || NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (old_size == new_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
