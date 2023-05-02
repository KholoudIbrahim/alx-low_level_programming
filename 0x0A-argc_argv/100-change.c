#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: pointer to array of commmand line arguments.
 * Return: 0 if success, non-zero if fail.
 **/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int k, lcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (k = 0; k < 5; k++)
		{
			if (money >= cents[k])
			{
				lcents += money / cents[k];
				money = money % cents[k];
				if (money % cents[k] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
