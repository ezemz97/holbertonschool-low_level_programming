#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *create_array - Return an array of bytes 'h'
  * @size: memory bytes to allocate
  * @c: character to fill array with
  * Return: null if malloc fail, null if size == 0
  */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
	free(ptr);
}
