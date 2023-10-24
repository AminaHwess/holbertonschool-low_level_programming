#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string
 * @s : char
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int lne;

	lne = strlen(s);
	for (i = lne - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
