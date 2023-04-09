#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = src[i];

	return (dest);

}
