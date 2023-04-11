#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Function returns  pointer to newly allocated space
 * @str: the string that its value mush be copied inside the memory space
 * retrun: Return p || NULL
 * Return: Return a pointer or NULL
 */
char *_strdup(char *str)
{
	int size;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	p = malloc((size * sizeof(char)) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}

return (p);
}
