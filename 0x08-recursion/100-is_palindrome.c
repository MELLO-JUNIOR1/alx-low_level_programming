#include <stdio.h>
#include "main.h"

/**
 * str_len - Calculate the length of a null-terminated string
 * @s: The string to calculate length
 * Return: The length of string s
 */
int str_len(char *s)
{
if (*s == '\0')
return (0);
return (1 + str_len(s + 1));
}
/**
 * is_palindrome_helper - Recursively check if a string is a palindrome
 * @s: The string to check
 * @start: The index of the first character to check
 * @end: The index of the last character to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = str_len(s);
if (len == 0)
return (1);
return (is_palindrome_helper(s, 0, len - 1));
}
