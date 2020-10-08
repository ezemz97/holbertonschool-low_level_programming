#include "holberton.h"
#include <stdio.h>

/**
 * factorial - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */

int factorial(int n)
{
	if ( n >= 1 )
	{
		return (n * factorial(n - 1));
	}
	else if ( n < 0 )
		return (-1);

	return (1);
}
