#include "main.h"

/**
 * jack_bauer - hours and minutes
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int k;

for (i = 0; i < 3; i++)
{
for (j = 0; j < 2; j++)
{
for (m = 0; m < 5; m++)
{
for (k = 0; k < 10; k++)
{
putchar('\n');
putchar('0' + i);
putchar('0' + j);
putchar(':');
putchar('0' + m);
putchar('0' + k);
}
}
}
}

return (0);
}
