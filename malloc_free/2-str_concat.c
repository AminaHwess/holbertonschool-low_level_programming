#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
int i;
int j;
char *p;
int a=strlen(s1);
int b=strlen(s2);
p = malloc((a+b+1) * sizeof(char));


if(p==NULL)
{return(NULL);}

for(i=0; i<a; i++)
{p[i] = s1[i];}

for(j=0; j<b; j++)
{p[i] = s2[j];
i++;}
p[i]= '\0';
return(p);
}
