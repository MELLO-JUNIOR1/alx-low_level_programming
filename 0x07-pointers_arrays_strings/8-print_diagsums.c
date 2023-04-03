#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Function that prints the sum of diagonals
 * @a: 2D array
 * @size: size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
int s = size * size;

for (i = 0; i < s; i += size + 1)
{
sum1 += a[i];
}
for (i = size - 1; i < (s - 1); i += size - 1)
{
sum2 += a[i];
}
printf("%d, %d\n", sum1, sum2);
}
