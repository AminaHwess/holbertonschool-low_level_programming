#include <stdio.h>
#include <stdlib.h>
/**
 *main - print (+) numbers
 *@argc: int
 *@argv: pointer to an array
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char *j;

	while (--argc)
	{
		for (j = argv[argc]; *j; j++)
			if (*j < '0' || *j > '9')
				return (printf("Error\n"), 1);
		i = i + (atoi(argv[argc]));
	}
	printf("%d\n", i);
	return (0);
}
