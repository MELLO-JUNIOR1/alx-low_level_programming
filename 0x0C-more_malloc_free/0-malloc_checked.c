#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of allocated memory
 * Return: pointer to array || NULL
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);

if (ptr == NULL)
exit(98);

return (ptr);
}
