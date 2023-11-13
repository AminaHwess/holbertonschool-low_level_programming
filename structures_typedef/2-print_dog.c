#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 * @d : struct
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)

	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

	if (d->name == NULL || d->owner == NULL || d->age == 0)
	{

	if (d->name == NULL)
	{
		printf("Name:(nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner:(nil)\n");
	}

	if (d->age == 0)
	{
		printf("Age: %f\n", d->age);
	}

	}
}
