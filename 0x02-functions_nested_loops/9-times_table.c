#include <stdio.h>
#include "main.h"


/**
 * times_table - prints every minute of the day
 *
 * Return: no return
 */


void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int product = i * j;

if (product < 10)
{
if (j != 0)
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');
}
}
