#include "main.h"
/**
 * _islower - Entry point
 *@c : integer
 * Return: void (Success)
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
