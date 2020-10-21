#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - function name
  * @array: array of ints
  * @size: size of iterations
  * @action: function pointer
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
	return;
}
