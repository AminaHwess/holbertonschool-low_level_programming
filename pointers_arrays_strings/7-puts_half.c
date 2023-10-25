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

	for (i /= 2; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
