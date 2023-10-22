#include "main.h"
/**
 * print_diagonal - print diagonal lines
 * @n : integer
 * Return: void (Success) .
 */

void print_diagonal(int n)
{
	int i;
	int d;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (d = 0; i > d; d++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
