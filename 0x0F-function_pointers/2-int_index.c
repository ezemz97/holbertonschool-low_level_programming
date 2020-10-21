#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - function name
  * @array: array of ints
  * @size: size of array
  * @cmp: functions pointers
  * Return: -1 if no match, index if matched, 0 if parameters empty
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (0);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
