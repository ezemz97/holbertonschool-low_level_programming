#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: first int
 * @b: second int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x, z;

	x = *a;
	z = *b;
	*a = z;
	*b = x;
}
