#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime number
 * @n : int
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n > 0)
		return (prime_check(n, 1));
	else
		return (0);
}
/**
 * prime_check - check the code
 * Description: see if x is divisible by y
 * @x : int
 * @y : int
 * Return: int
 */
int prime_check(int x, int y)
{
	if (x % y == 0)
		return (1);
	else if (x % y > 0)
		return (prime_check(x, y + 1));
	else
		return (0);
}
