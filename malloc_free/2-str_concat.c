#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat  - concatenate 2 strings
 *@s1 : string 1
 *@s2 : string 2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;
	int a = 0;
	int b = 0;

	if (s1 != NULL)
	{
		a = strlen(s1);
	}
	if (s2 != NULL)
	{
		b = strlen(s2);
	}

	p = malloc((a + b + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < b; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
