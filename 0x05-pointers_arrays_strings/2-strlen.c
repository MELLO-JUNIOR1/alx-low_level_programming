#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int n = 0;

while (*s++ != '\0')
{
n++;
}
return (n);

}
