#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: is the character to be printed
 *
 * Return: if success return 1, on error -1 is returned.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
