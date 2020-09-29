#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: destination string
 * @src: source string
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] >= '\0'; ++x)
	{
		dest[x] = src[x];
	}
	return (dest);
}
