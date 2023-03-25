#include "main.h"

/**
 * _sqrt - function that finds the square root.
 *
 * @x: integer input
 *
 * Return: square root of input (x)
*/

double _sqrt(double x)
{
	float tmp, sqrt;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints out
 * the largest prime factor of number (num).
 *
 * @num: integer number to find.
*/

void largest_prime_factor(long int num)
{
	int largest, prmNu;

	while (num % 2 == 0)
		num = num / 2;

	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 if successful.
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
