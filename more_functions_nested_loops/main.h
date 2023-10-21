#include<stdio.h>
int _isupper(int c);

#include "main.h"

/**
 *isupper - Entry point
 *@c : integer
 *Return: void (Success)
*/

int _isupper(int c);
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