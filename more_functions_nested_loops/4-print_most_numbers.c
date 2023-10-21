#include "main.h"
 /**
 * print_most_numbers - function
 * Description: function that prints numbers except 2 and 4
 * Return: void (Success) .
 */

void print_most_numbers(void)

{
int f;

for (f = 0; f <= 9; f++)
{
if (f != 2 && f !=  4)
{_putchar (f + '0');
}
}
_putchar ('\n');
}
