#include "main.h"

/**
 * factorial - des function
 * @n: int
 * Return: value int 
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
