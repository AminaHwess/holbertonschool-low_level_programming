#include "3-calc.h"

/**
 * main - check the code
 * @argc : int
 * @argv : char
 * Return: 0.
 */

int main(int argc, char *argv[])

{
	int a;
	int b;

	if (argc == 4)

	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if (*get_op_func(argv[2]) == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		else
		{

			printf(("%d\n" * get_op_func(argv[2]))(a, b));
		}
	}

	else
	{
		printf("Error");
		exit(98);
	}
	return (0);
}
