#include <stdio.h>
#include "main.h"

/**
 * *_strchr - find location of a character
 *@s: target to search in
 *@c: the character to find
 *Return: return s depending on the location
 *
 */

char *_strchr(char *s, char c)
{
int check;

while (1)
{
check = *s++;
if (check == c)
{
return (s - 1);
}
if (check == 0)
{
return (NULL);
}
}
}
