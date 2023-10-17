#include "main.h"
/**
 * print_sign - Entry point
 *@n : integer
 * Return: (Success)
 */

int print_sign(int n)

{
	if (n > 0)

	{
		return (1);
		putchar('+');
		
	}

	else if (n == 0)
	{
		return (0);
		putchar('0');

	}

	else if (n < 0)
	{
		return (-1);
		putchar('-');
	}

	return (0);
}
