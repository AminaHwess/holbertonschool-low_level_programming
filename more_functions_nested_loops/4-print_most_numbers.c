#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 *function that prints numbers except 2 and 4
 * Return: Always 0.
 **/
void print_most_numbers(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		if (f != 2 && f != 4)
		{
			_putchar(f + '0');
		}
	}
	_putchar('\n');
}
