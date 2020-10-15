#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *malloc_checked - Allocate memory, check failure
  * @b: Unsigned Int
  * Return: void
  */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}

