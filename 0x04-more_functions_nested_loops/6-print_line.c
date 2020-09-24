#include "holberton.h"
#include <stdio.h>

/**
 * print_line - check the code for Holberton School students.
 * @n: var
 * Return: Always 0.
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
