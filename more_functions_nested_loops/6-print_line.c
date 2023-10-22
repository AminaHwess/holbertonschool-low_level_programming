#include "main.h"
/**
 * print_line - function that prints a line
 * @n : integer
 * Return: void (Success) .
 **/

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
