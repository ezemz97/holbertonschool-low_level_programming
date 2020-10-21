#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
  * op_add - sum
  * @a: int 1
  * @b: int 2
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - substract
  * @a: int 1
  * @b: int 2
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiply
  * @a: int 1
  * @b: int 2
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - division
  * @a: int 1
  * @b: int 2
  */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit (100);
	}
}
/**
  * op_mod - module
  * @a: int 1
  * @b: int 2
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		printf("Error\n");
		exit (100);
	}
}
