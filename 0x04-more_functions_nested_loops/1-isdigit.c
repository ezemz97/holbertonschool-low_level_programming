#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 * @c: var
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
