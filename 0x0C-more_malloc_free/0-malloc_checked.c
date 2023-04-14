#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - dynamically allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: On success, a pointer to the allocated memory.
 *         On failure, exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *mem_ptr = malloc(b);
if (mem_ptr == NULL)
exit(98);
return (mem_ptr);
}
