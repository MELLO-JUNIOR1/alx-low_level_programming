#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert string to an integer
 * @str: string
 * Return: integer
 */
char _atoi(char *str)
{
	int sign = 1;
	unsigned long int dig = 0, num1, i;

	for (num1 = 0; !(str[num1] <= 48 && str[num1] >= 57); num1++)
	{
		if (str[num1] == '-')
			sign *= -1;
	}

	for (i = num1; str[i] >= 48 && str[i] <= 57; i++)
	{
		dig *= 10;
		dig += (str[i] - 48);
	}

	return (sign * dig);
}
/**
 * print_num - prints number
 * @num: number
 * Return: void
 */
void print_num(unsigned long int num)
{
	unsigned long int div = 1, i, rem;

	for (i = 0; num / div > 9; i++, div %= 10)
		;

	for (; div >= 1; num %= div, div /= 10)
	{
		rem = num / div;
		putchar(rem + '0');
	}
}
/**
 * main - prints multiplication result, followed by newline
 * @argc: count of args
 * @argv: pointer to array of args
 * Return: multiplication result
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	print_num(_atoi(argv[1]) * _atoi(argv[2]));
	putchar('\n');

	return (0);
}
