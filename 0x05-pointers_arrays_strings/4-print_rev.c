#include "holberton.h"
#include <stdio.h>

void print_rev(char *s)
{
	int x, rev;
	for (x = 0; s[x] != '\0'; ++x);
	
	for(rev = x -1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
