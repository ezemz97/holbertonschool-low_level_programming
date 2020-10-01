#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Compare two strings (char x char) substracting their asscii values
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
