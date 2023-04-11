#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function that concatenates strings
 * @ac: the number of arguments
 * @av: pointer to the arguments
 * Return: Return a pointer or NULL
 */


char *argstostr(int ac, char **av)
{
int l1 = 0;
int l2 = 0;
int i, j;
char *p;


	if (ac == 0 || !av)
		return (NULL);

for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != 0; j++)
	{
	l1++;
	}
	l1++;
}

	p = (char *) malloc((sizeof(char) * l1) + 1);

	if (p == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
		p[l2] = av[i][j];
		l2++;
		}

		p[l2] = '\n';
		l2++;
	}

p[l2] = '\0';

return (p);
}
