#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat  - concatenate 2 strings
 *@s1 : string 1
 *@s2 : string 2
 *@n: unsigned int
 * Return: char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i;
	unsigned int j;
	char *p;
	unsigned int a = 0;
	unsigned int b = 0;

	if (s1 != NULL)
	{
		a = strlen(s1);
	}
	if (s2 != NULL)
	{
		b = strlen(s2);
	}
	if (n >= b)
	{
		n = b;
	}
	p = malloc((a + n + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)

	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
