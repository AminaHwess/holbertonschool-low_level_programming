#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
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
            return (value);
        }
    }

    return (-1);

}