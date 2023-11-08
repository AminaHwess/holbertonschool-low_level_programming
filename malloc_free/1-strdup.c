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

	int i;
	char *s;
	int n = strlen(str);

	if (n == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * (n + 1));

	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
	}

	else
	{
		return (NULL);
	}

	s[i] = '\0';
	return (s);
}
