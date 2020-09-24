#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar('0' + x);
	}
	_putchar('\n');
}
