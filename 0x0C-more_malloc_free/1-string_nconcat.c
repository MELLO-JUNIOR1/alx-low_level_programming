#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * up to n bytes of the second string.
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to concatenate from s2
 * Return:A pointer to the concatenated string,
 * which is a newly allocated space in memory, containing s1.
 * followed by the first n bytes of s2, and null-terminated.
 * If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len_s1 = 0, len_s2 = 0, idx1 = 0, idx2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1] != '\0')
len_s1++;
while (s2[len_s2] != '\0')
len_s2++;
if (n >= len_s2)
n = len_s2;
result = malloc(sizeof(char) * (len_s1 + n + 1));
if (result == NULL)
return (NULL);
for (idx1 = 0; idx1 < len_s1; idx1++)
result[idx1] = s1[idx1];
for (idx2 = 0; idx2 < n; idx2++)
result[idx1 + idx2] = s2[idx2];
result[idx1 + idx2] = '\0';
return (result);
}
