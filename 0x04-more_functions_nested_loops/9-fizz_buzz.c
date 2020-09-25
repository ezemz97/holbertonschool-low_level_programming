#include <stdio.h>

/**
 * main - entry point
 * fizz_buzz: function
 * Return: 0 (success)
 *
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - 1 to 100 but it's fizzy and buzzy every
 */


void fizz_buzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
}
