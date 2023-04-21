#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Return 0 (success)
 */
int main(int argc, char *argv[])
{
int n, i;
char *p;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("Error\n");
exit(2);
}

p = (char *) main;

for (i = 0; i < n; i++)
{
if (i != 0)
printf(" ");
printf("%02hhx", p[i]);
}
printf("\n");

return (0);
}
