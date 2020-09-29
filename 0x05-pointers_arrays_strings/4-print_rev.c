#include "holberton.h"
#include <stdio.h>

void print_rev(char *s)
{
	int x, rev;
	for (x = 0; s[x] != '\0'; ++x);
	
	for(rev = x; rev >= 0; rev--)
	{
		return (s[rev]);
	}

}
