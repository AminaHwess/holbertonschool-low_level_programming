#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check the code
 *@array : ptr
 *@size : int
 *@cmp : func
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (array && size > 0 && cmp)

	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) == 1)
			{
				return (i);
			}
		}
	}
	return (-1);
}
