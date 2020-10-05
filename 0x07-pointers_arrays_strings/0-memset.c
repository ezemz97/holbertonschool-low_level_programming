#include "holberton.h"
#include <stdio.h>
/**
 * *_memset - memory constant byte
 * @b: char
 * @s: string
 * @n: length
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
