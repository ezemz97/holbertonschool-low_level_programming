#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - sum arguments function
  * @n: number of arguments
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int suma = 0, x;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		suma += va_arg(valist, int);
	}
	va_end(valist);
	return (suma);
}
