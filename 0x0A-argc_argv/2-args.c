#include <stdio.h>

/**
 * main - Entry function
 * @argc: command line arguments's number
 * @argv: array contains the program's command line arguments
 * Return: Return 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}


return (0);
}
