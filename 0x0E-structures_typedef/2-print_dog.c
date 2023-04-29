#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print_dog
 * @d: the dog
 * Return: void function
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		/*print: name, age, owner.*/
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
