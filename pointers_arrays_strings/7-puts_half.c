#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * @str : char
 * Return: Always 0.
 */

void puts_half(char *str)
{

	int i = strlen(str);
	int j;

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{ j = (i+1) / 2;
	}
	for (; i > j; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
