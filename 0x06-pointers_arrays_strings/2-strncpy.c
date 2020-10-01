#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - Concatenate two given strings, src of size n
 * @dest: string var
 * @src: given string
 * @n: size of src
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z] = '\0';
	return (dest);
}
