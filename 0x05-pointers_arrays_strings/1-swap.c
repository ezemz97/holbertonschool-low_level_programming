#include "holberton.h"

void swap_int(int *a, int *b)
{
	int x, z;
	
	x = *a;
	z = *b;
	*a = z;
	*b = x;
}
