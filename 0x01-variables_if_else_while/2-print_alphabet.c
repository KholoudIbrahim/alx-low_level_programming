#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet letters
 *
 * Return: 0 if successful
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
