#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that checks
 * if n is a prime number.
 *
 * @n2: integer value.
 * @n: integer value.
 * Return: 0, or 1.
*/

int check_prime(int n, int n2);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - a function that checks all numbers < n
 * they could divide it.
 * @n: integer value.
 * @n2: integer value.
 * Return: integer value.
*/

int check_prime(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, n2 + 1));
}
