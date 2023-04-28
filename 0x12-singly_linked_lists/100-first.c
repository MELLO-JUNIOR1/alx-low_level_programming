#include <stdio.h>
#include "lists.h"

void print_two_lines(void) __attribute__((constructor));

/**
 * print_two_lines - Function that prints two lines before main executes
 *
 * Return: void
 */
void print_two_lines(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
