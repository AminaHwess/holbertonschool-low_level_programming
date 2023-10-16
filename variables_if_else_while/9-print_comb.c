#include <stdio.h>

/**
 *main-checks if positive
 *Return: 0
 */
int main(void)
{
int digit = 0;

for (digit = 0 ; digit < 10 ; digit++)
{putchar('0' + digit);
if (digit < 9)
{ putchar(','); }
}


putchar('\n');


return (0);
}
