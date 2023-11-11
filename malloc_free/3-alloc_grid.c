#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)

{
    char **grid;
    int i;
    int j;

    if (height <= 0 || width <= 0)
    {
        return (NULL);
    }

    grid = malloc(sizeof(int) * height);

    for (i = 0; i < height; i++)
    {

        grid[i] = malloc(sizeof(int) * width);

        if (grid[i] == NULL)

        {
            for (--i; i <= 0; i--)
            {
                free(grid[i]);
            }
            free(grid);
            return (NULL);
        }
    }

    for (j = 0; j < width; j++)
    {
        grid[i][j] = 0;
    }

    return (grid);
}
