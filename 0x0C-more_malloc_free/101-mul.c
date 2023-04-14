#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - convert string to an integer
 * @str: string
 *
 * Return: integer
 */
int _atoi(char *str)
{
	int sign = 1;
	unsigned int dig = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			dig = dig * 10 + (str[i] - '0');
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	return (sign * dig);
}

/**
 * main - prints multiplication result, followed by newline
 * @argc: count of args
 * @argv: pointer to array of args
 *
 * Return: multiplication result
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = _atoi(argv[1]);
	int num2 = _atoi(argv[2]);

	unsigned long int result = (unsigned long int)num1 * (unsigned long int)num2;

	print_num(result);
	putchar('\n');

	return (0);
}
