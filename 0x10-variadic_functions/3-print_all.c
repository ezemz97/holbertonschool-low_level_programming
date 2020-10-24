#include <stdarg.h>
#include "variadic_functions.h"
/**
  * format - type (char)
  * Return: void
  */
void print_all(const char * const format, ...)
{
	void (*fprints[4][2])() = {
		{'c', fchar}
		{'i', fint}}
		{'f', ffloat}
		{'s', fstring}
	};
	unsigned int x, z, count = 0;
	va_list args;


	while (format[x] != '\0')
	{
		if (format[x] == 'c' || format[x] == 'i' || format[x] == 'f' || format[x] == 's')
			count++;
		x++;
	}

	va_start(args, count);
	while (format[z] == fprints[z] && z <= 4)
	{
		printf(fprints[z][1]);
		z++;
	}
}

void fint(va_list args)
{
	printf("%i", va_arg(args, int));
}
void fchar(va_list args)
{
	printf("%c", va_arg(args, int));
}
void ffloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
void fstring(va_list args)
{
	printf("%i", va_arg(args, char*));
}
