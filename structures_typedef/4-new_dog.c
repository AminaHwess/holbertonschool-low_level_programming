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
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
	return (d);
}

/**
 * *_strcpy - copy a string
 * @src : char
 * @dest : char
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
