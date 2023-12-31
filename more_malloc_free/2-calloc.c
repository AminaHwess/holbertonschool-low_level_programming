#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: the size of the memory to print
 *
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}


		for (i = 0; i < nmemb * size; i++)
		{
			array[i] = 0;
		}


	return (array);
}
