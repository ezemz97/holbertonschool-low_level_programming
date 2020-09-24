#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: var
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int line, column;

	for (line = 0; line < n; line++)
	{
		for (column = 0; column < line; column++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
