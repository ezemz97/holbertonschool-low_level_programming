#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - print numbers and a string (function)
  * @separator: string to be printed between numbers
  * @n: number of ints passed to function
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *str;

	if (n > 0)
	{
		va_start(valist, n);
		for (x = 0; x < n; x++)
		{
			str = va_arg(valist, char*);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (x != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(valist);
	}
	else
		printf("\n");
}
