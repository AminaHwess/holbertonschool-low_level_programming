#include <stdio.h>
#include <string.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - check the code
 * @name : char
 * @age : float
 * @owner : char
 * Return: void.
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (d->name == NULL)
	{
		return (NULL);
		free(d);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		return (NULL);
		free(d);
		free(d->owner);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
