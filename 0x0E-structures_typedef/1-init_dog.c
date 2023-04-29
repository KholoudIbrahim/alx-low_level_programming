#include "dog.h"

/**
 * init_dog - a variable of type struct dog
 * @d: the dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		/*name*/
		d->name = name;
		/*age*/
		d->age = age;
		/*owner*/
		d->owner = owner;
	}
}
