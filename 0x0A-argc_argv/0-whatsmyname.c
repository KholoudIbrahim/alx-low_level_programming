#include <stdio.h>

/**
 * main - prints a program name, followed by a new line.
 * @argc: integer value
 * @argv: list
 *
 * Return: always 0.
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
