#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	n -= 1;
	for (x = 0; x < n; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}
}
