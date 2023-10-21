#include "main.h"

/**
 * print_numbers - check for a digit
 *@c : integer
 * Return: Always 0.
 */

void print_numbers(int c)
{


for (c = 0 ; c <= 9 ; c++)

{
putchar('0' + c);
putchar('\n');
}

return (0);
}
