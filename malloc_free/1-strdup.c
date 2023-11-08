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

	int n = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	printf("%s", str);
	str = malloc(sizeof(char) * n + 1);

	return (str);
}
