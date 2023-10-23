#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str : char
 * Return: Always 0.
 */

void _puts(char *str)
{

	while (*str != '\0')

	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
