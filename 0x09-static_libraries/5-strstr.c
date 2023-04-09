#include "main.h"

/**
 * _strstr - Function to locates substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *Return: Return pointer
 */


char *_strstr(char *haystack, char *needle)
{
char *h = haystack;
char *n = needle;

while (*h)
{
n = needle;
h = haystack;
while (*n)
{
if (*h == *n)
{
n++;
h++;
}
else
break;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
