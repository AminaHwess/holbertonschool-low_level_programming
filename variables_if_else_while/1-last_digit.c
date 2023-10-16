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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		int lastdigit = abs(n);
while (lastdigit >= 10)
{ lastdigit = lastdigit % 10; }

if (lastdigit > 5)
{printf("Last digit of %d is %d and is greater than 5", n, lastdigit); }

else if (lastdigit - 1 > 0 > 1)
{printf("Last digit of %d is %d and is 0", n, lastdigit); }

else
{printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit); }

return (0);

}
