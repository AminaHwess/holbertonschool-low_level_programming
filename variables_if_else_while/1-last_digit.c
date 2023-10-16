#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-checks if positive
 *Return: 0
 */
int main(void)
{
int n;
int lastd;

	srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = abs(n);
while (lastd >= 10)
{ lastd = lastd % 10; }

if (lastd > 5 && n > 0)
{printf("Last digit of %d is %d and is greater than 5\n", n, lastd); }

else if (lastd == 0)
{printf("Last digit of %d is %d and is 0\n", n, lastd); }

else if (n < 0)
{printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, lastd); }

else
{printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd); }

return (0);

}
