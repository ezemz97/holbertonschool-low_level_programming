#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <string.h>
/**
  * get_op_func - function name
  * @s: string
  * Return: dale
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		return (ops[i].f);
		i++;
	}
	printf("Error");
	exit(99);
}
