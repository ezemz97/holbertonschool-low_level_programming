#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
  * print_numbers - print numbers and a string (function)
  * @separator: string to be printed between numbers
  * @n: number of ints passed to function
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	if (n == 0)
		printf("\n");

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		if (separator != NULL && separator[0] != '\0')
		{
			if (x != n - 1)
				printf("%d%s", va_arg(valist, int), separator);
			else
				printf("%d\n", va_arg(valist, int));
		}
		else
		{
			if (x != n - 1)
				printf("%d", va_arg(valist, int));
			else
				printf("%d\n", va_arg(valist, int));
		}
	}
	va_end(valist);

}
