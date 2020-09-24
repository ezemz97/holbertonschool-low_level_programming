#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int before = 0, after = 1, product, x;

	for (x = 0; x < 48; x++)
	{	
		product = before + after
		printf("%d, ", product);
		before = after;
		after = product;
	}
}
