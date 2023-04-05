#include "main.h"

/**
 * set_string - sets the value of a pointer
 * in a character.
 * @s: pointer to a pointer.
 * @to: char pointer.
 *
 * Return: Always 0.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
