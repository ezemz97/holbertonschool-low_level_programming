#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Concatenate two given strings, src of size n
 * @dest: Hello
 * @src: World
 * @n: size of src
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[x + z] = src[z];
	}
	dest[x + z] = '\0';
	return (dest);
}
