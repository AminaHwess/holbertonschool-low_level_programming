#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Check description
 * Description: It prints 9 times table starting with 0
 * @n : integer
 * Return: Nothing.
 */

void print_to_98(int n)
{
int i;

if (n >= 98)
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
}
else
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
}
printf("\n");
}
