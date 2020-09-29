#include "holberton.h"
#include <stdio.h>

void puts_half(char *str)
{
	int len;
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	len -= 1;
	len = len / 2;
	for (; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
