#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: counter of args
 * @argv: pointer to array of args
 * Return: aount of money || Error
 */
int main(int argc, char *argv[])
{
	int i, cents, money = 0;
	int coins[] = {25, 10, 5, 2, 1};

	i = 0;
	cents = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			while (cents >= coins[i])
			{
				cents -= coins[i];
				money++;
			}
			i++;
		}
		printf("%d\n", money);
	}

	return (0);
}
