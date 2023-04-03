#include <stdio.h>
#include "main.h"
/**
* *_memset - function that fills memory with constant byte
*
* @s:input pointer
* @b: the character that is gonna be used to fill s
* @n: n bytes of s
*
* Return:  Return (s)
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
