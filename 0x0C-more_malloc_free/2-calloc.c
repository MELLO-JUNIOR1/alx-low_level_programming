#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: element
 * @size: size of the element
 * Return: allocate memory for array of nmemb || NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i, fullsize;

if (nmemb == 0 || size == 0)
	return (NULL);

fullsize = size * nmemb;
arr = malloc(fullsize);
if (arr == NULL)
	return (NULL);

for (i = 0; i < fullsize; i++)
	arr[i] = 0;

return (arr);
}
