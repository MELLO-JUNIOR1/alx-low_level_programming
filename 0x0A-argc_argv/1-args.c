#include <stdio.h>
/**
 * main - prints the number of arguments passed.
 * @argc: number of args
 * @argv: array
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
