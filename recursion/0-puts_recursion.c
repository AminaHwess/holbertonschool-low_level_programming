#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string
 * @s : string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("%c", '\n');
return;
}

else
{
printf("%c", *s);
}

_puts_recursion(s + 1);
}
