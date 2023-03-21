#include<stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Funtion to print 10 lines of alphabets
 *
 */


void print_alphabet_x10(void)
{

char j;
int i;
for (i = 0; i <= 9; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
