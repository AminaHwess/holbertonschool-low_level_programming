#include "main.h"

/**
 * main - print_last_digit
 *
 * Return: Always 0.
 */

int print_last_digit(int d)
{
	int n;
	n = d % 10;

	while (n >= 10)
	{
		n = n % 10;
	}

	if (n <= 0)
	{
		n = n * -1;
	}
	putchar(n + '0');
	return (n);
}
