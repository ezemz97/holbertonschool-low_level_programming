#include "holberton.h"
#include <stdio.h>

int prime(int n, int in);

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - check the code for Holberton School students.
 * @n: int
 * @in: count
 * Return: Always 0.
 */

int prime(int n, int in)
{
	if (n == in)
	{
		return (1);
	}
	else if (n % in == 0)
		return (0);
	else
	{
		return (prime(n, in + 1));
	}
}
