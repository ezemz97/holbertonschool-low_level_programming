#include <stdarg.h>
#include "variadic_functions.h"
/**
  * format - type (char)
  * Return: void
  */
void print_all(const char * const format, ...)
{
	unsigned int x, z, count = 0;
	va_list valist;

	while (format[x] != '\0')
	{
		if (format[x] == 'c')
			count++;
		x++;
	}

	va_start(valist, count);
	while (formar[z] != 0 && <

