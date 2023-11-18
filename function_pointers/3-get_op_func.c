#include "3-calc.h"

/**
 * get_op_func - check the code
 * @s : char
 * Return: null
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;

	while (i < 6 && i!=5)

	{
		if (strcmp(s, ops[i].op))

		{
			return ((*f));
		}
		i++;
	}
	return (NULL);
}
