#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 * @src : string
 * @dest : string
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = strlen(dest);

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
