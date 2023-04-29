#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free_dog
 * @d: the dog
 * Return: void function
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		/*free: name*/
		if (d->name)
			free(d->name);

		/*free: owner*/
		if (d->owner)
			free(d->owner);

		/*free: d*/
		free(d);
	}
}
