#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - convert string to an integer
 * @str: string to convert
 *
 * Return: integer representation of string
 */
int _atoi(char *str)
{
    int num = 0;
    int sign = 1;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }

    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        num = num * 10 + (*str - '0');
        str++;
    }

    return num * sign;
}

/**
 * print_num - print an unsigned long integer
 * @num: the number to print
 *
 * Return: void
 */
void print_num(unsigned long int num)
{
    if (num >= 10)
        print_num(num / 10);
    putchar((num % 10) + '0');
}

/**
 * main - multiply two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    if (num1 == 0 || num2 == 0)
    {
        printf("Error\n");
        return (98);
    }

    print_num((unsigned long)num1 * (unsigned long)num2);
    putchar('\n');

    return (0);
}
