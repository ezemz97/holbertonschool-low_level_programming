#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Print string 1 0 1 0 1 0 1 0
 * @str: char string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x, len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len -= 1;

	for (x = 0; x <= len; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');

}
