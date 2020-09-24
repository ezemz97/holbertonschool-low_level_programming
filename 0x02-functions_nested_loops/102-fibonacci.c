#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int before = 1, after = 1, product, x;

	for (x = 0; x < 48; x++)
	{
		printf("%d, ", before);
		product = (after + before);
		before = after;
	}
}
