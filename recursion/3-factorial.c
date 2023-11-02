#include "main.h"
#include <stdio.h>

/**
 * factorial - print factorial
 * @n : int
 * Return: factorial value.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
