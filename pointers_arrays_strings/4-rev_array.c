#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a: array
 * @n: int
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
