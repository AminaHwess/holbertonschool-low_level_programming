#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search in
 * @value: value to search for
 * @size: size of the array
 * Return: value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		printf("checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}

	if (array[j] != value)
	{
		return (-1);
	}

	return (j);
}
