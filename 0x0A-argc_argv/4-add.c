#include <stdio.h>
#include <stdlib.h>

/**
 * main - the starting point
 * @argc: number of arguments
 * @argv: array of pointers of the arguments
 *
 * Return: 0.
 **/
int main(int argc, char *argv[])
{
	int s = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
