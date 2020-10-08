#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: string
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
