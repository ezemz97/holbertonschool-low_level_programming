#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *array_range - Range of the integer array
  * @min: start
  * @max: end
  * Return: pointer array
  */

int *array_range(int min, int max)
{
	int *p, x, sum;

	if (min > max)
		return (NULL);
	sum = (max - min) + 1;

	p = malloc(sizeof(int) * sum);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < sum; x++)
		p[x + min] = x;
	return (p);
}
