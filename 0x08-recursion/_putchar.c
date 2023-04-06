#include <unistd.h>

/**
 * _putchar - displays the character c
 * to stdout.
 * @c: the character to be printed.
 * Return: 1 on success, or -1 on error.
*/

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
