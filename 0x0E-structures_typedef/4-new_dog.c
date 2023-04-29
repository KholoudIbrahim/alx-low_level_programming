#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length
 * @str: the str
 * Return: (le)
*/

int _strlen(const char *str)
{
	int le = 0;

	while (*str++)
		le++;

	return (le);
}

/**
 * _strcopy - returns a copy of a string
 * @src: the str 1
 * @dest: the str 2
 * Return: (dest)
*/

char *_strcopy(char *dest, char *src)
{
	int i1;

	for (i1 = 0; src[i1]; i1++)
		dest[i1] = src[i1];

	dest[i1] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: (dog_d)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_d;

	/*if*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog_d = (dog_t *) malloc(sizeof(dog_t));

	/*if*/
	if (dog_d == NULL)
		return (NULL);

	dog_d->name = malloc(sizeof(char) * (_strlen(name) + 1));

	/*if*/
	if ((*dog_d).name == NULL)
	{
		free(dog_d);
		return (NULL);
	}

	dog_d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	/*if*/
	if ((*dog_d).owner == NULL)
	{
		free(dog_d->name);
		free(dog_d);
		return (NULL);
	}

	dog_d->name = _strcopy(dog_d->name, name);
	dog_d->age = age;
	dog_d->owner = _strcopy(dog_d->owner, owner);

	return (dog_d);
}
