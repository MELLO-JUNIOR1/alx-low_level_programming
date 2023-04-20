#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Function for add
 * @a: first number
 * @b: second number
 * Return: Return result of add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Function for sub
 * @a: first number
 * @b: second number
 * Return: Return result of sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function for mul
 * @a: first number
 * @b: second number
 * Return: Return result of mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function for div
 * @a: first number
 * @b: second number
 * Return: Return result of div
 */
int op_div(int a, int b)
{
	if (b)
	{
	return (a / b);
	}
	printf("Error\n");
	return (98);
}

/**
 * op_mod - Function for mod
 * @a: first number
 * @b: second number
 * Return: Return result of mod
 */
int op_mod(int a, int b)
{
	if (b)
	{
	return (a % b);
	}
	printf("Error\n");
	return (98);
}
