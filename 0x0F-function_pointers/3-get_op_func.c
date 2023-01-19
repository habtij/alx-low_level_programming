#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - returns a pointer to the function that corresponds
 * to the operator given as a parameter
 * @s: operator passed
 *
 * Return: integer;
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("%s\n", ops[i].op);
	printf("Error\n");
	exit(99);
}
