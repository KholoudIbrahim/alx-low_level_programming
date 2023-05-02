#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of 2 numbers
 * @argc: number of command line arguments
 * @argv: pointer to array of commmand line arguments
 * Return: 0 if success, non-zero if fail.
 **/

int main(int argc, char *argv[])
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

