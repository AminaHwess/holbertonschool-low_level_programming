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
		putchar('0' + n);
	}

	else if (n == 0)
	{
		return (0);
		putchar('0' + n);
		putchar('0' + 0);

	}

	else if (n < 0)
	{
		return (-1);
		putchar('-');
		putchar('0' + n);
	}

	return (0);
}
