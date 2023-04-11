#include "main.h"

/**
 * _isalpha - Retuns 1 if char is uppercase character
 * else, return 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for uppercase. 0 for the rest.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
