#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 *@b : unsigned int
 * Return: void.
 */

void *malloc_checked(unsigned int b)

{
	char *p;

	p = malloc(b);

	if (p == NULL)

	{
		exit(98);
	}

	else
	{
		return (p);
	}
}
