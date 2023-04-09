#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - function that copies memory's area
 * @dest: where we ganna copy to
 * @src: source that we ganna copy
 * @n: how many bytes
 * Return: Return 0
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}


return (dest);
}
