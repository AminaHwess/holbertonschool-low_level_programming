#include "main.h"
/**
 * *create_array - Write a function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the memory to print
 * @c : char
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			p[n] = c;
		}
		return (p);
	}
}
