#include <stdio.h>
#include <stdlib.h>
/**
 * main - program multiplies two numbers
 * @argc: counter of args
 * @argv: pointer to array of args
 * Return: multiplication of 2 number || Error
 */
int main(int argc, char *argv[])
{
	int result = 1, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
		return (0);
	}
}
