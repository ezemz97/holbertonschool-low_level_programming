#include "holberton.h"
#include <stdio.h>
/**
  * *_strchr - locate a character in a string
  * @s: string
  * @c: char
  * Return: 0
  */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (0);
}
