#include <stdio.h>

/**
 *main-checks if positive
 *Return: 0
 */
int main(void)
{
int digit;
char ch;

for (digit = 0 ; digit < 10 ; digit++)
{putchar('0' + digit); }

for (ch = 'a' ; ch < 'g' ; ch++)
{putchar(ch); }

putchar('\n');


return (0);
}
