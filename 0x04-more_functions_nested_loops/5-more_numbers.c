#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - check the code for Holberton School students.
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x, z;

	for (x = 0; x < 9; x++)
	{
		for (z = 0; z < 15; z++)
		{
			if (z >= 10)
			{
				_putchar('0' + (z / 10));
			}
			_putchar('0' + (z % 10));
		}
		_putchar('\n');
	}
}
