#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings, s1 and s2, with possible wildcards in s2
 *
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain wildcards (*)
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
return (1);
else
return (0);
}
else if (*s1 == '\0')
{
return (*s2 == '\0');
}
else if (*s1 != *s2)
{
return (0);
}
else
{
return (wildcmp(s1 + 1, s2 + 1));
}
}
