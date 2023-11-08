#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - check the code
 *@str : string
 * Return: Always 0.
 */

char *_strdup(char *str)
{

	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}

	printf("%s", str);
	str = malloc(sizeof(char) * n + 1);

	return (str);
}
