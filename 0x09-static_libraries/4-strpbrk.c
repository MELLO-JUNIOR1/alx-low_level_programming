#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - searches in a string
 *@s: string
 *@accept: second string
 *Return: Return a pointer or NULL depending on the case
 */


char *_strpbrk(char *s, char *accept)
{

int i, j;

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}


}


return (NULL);
}
