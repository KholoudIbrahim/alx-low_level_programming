#include "main.h"

/**
 * main - Entry point
 *
 * Description: function sums all multiples
 *
 * Return: always 0 is success
*/

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
