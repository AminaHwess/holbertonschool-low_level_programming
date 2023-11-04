#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of a file
 * @argv: string
 * @argc: int
 * Return: always 0.
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{

		unsigned int i = atoi(argv[1]);
		unsigned int j = atoi(argv[2]);
		unsigned int r = i * j;

		printf("%d\n", r);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
