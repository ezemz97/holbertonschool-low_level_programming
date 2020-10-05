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
	int x, coso = 0;

	for (x = 0; s != '\0'; x++)
	{
		if (s[x] == c)
		{
			coso = 1;
			break;
		}
	}
	if (coso == 1)
	{
		return (s + x);
	}
	else
	{
		return (0);
	}
}
