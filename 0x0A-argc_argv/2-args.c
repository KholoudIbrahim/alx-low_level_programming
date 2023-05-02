#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: int value
 * @argv: list
 * Return: 0
 **/

int main(int argc, char const *argv[])
{
	int k = 0;

	while (argc--)
	{
		printf("%s\n", argv[k]);
		k++;
	}
	return (0);
}
