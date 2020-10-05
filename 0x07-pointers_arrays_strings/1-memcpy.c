#include "holberton.h"
#include <stdio.h>
/**
  * *_memcpy - Copy memory area
  * @dest: destination memory area
  * @src: source memory area
  * @n: bytes to copy
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
