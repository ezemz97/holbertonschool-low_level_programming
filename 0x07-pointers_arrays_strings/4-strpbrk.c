#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @s: string to search first occurence
 * @accept: any of those chars
 * Return: s and 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
