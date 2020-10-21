#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - print name
  * @f: function parameter
  * @name: pointer to char str
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);

}
