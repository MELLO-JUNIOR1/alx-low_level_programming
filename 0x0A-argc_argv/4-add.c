#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: command line arguments's number
 * @argv: array contains the program's command line arguments
 * Return: Return 0 (success)
 */

int main(int argc, char *argv[])
{
int i, j, sum;

sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return (0);
}
