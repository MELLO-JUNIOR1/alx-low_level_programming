#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: sthe size of each element in bytes
 * Return:  a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem_ptr;
unsigned int idx;
if (nmemb == 0 || size == 0)
return (NULL);
mem_ptr = malloc(nmemb * size);
if (mem_ptr == NULL)
return (NULL);
for (idx = 0; idx < (nmemb * size); idx++)
mem_ptr[idx] = 0;
return (mem_ptr);
}
