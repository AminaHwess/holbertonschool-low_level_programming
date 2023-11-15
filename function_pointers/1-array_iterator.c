#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 *@array : string
 *@size : int
 *@action : func
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	if (array && size && action)
	{
		size_t n;

		for (n = 0; n < size; n++)
		{

			action(array[n]);
		}
	}
}
