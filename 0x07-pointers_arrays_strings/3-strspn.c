#include <stdio.h>
#include "main.h"

/**
 * _strspn - Function that gets the length of the prefix substring
 * @s: string we are searching in it
 * @accept: prefix
 *Return: Return byte
 *
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int byte = 0;

while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
byte++;
break;
}
else if (accept[i + 1] == '\0')
{
return (byte);
}
}
s++;
}
return (byte);
}
