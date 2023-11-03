#include <stdio.h>

/**
 * main - prints the name of a file
 * @argv: string
 * @argc: int
 * Return: always 0.
 */

int main(int *argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	return (0);
}
