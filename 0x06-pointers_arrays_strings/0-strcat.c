#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Concatenate two given strings.
 * @dest: "Hello"
 * @src: "World\n"
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[x + z] = src[z];
	}
	dest[x + z] = '\0';
	return (dest);
}
