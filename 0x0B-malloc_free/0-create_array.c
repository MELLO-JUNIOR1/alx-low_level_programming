#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Function that creat an array of size (size) filled with (c)
 * @size: the size of the array
 * @c: the character with what we gonna fill the array
 * Return: Return p || 0
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *p = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
	p[i] = c;
	}



	return (p);
}
