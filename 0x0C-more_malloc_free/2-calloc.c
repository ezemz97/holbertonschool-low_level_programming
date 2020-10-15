#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocate memory for an array
 *
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (x = 0; x == (nmemb * size); x++)
	{
		p[x] = 0;
	}
	return (p);
}
