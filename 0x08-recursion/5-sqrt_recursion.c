#include "holberton.h"
#include <stdio.h>

int _sqrt(int n, int x);


/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


int _sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x == n || n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, x + 1));
	}
	return (0);
}
