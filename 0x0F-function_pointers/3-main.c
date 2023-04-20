#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - Entru function
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Return 0 (success)
*/
int main(int argc, char *argv[])
{
	int (*op_fun)(int, int), a, b;
	char opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_fun = get_op_func(argv[2]);
	if (!op_fun)
	{
		printf("Error\n");
		exit(99);
	}

	opr = *argv[2];
	if (b == 0 && (opr == '/' || opr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_fun(a, b));
	return (0);
}
