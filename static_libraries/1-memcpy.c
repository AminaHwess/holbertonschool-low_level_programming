#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  fills memory with a constant byte
 * @dest: string
 * @src: string
 * @n: integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
