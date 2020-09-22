#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
  int a, b, x;
  for (a = 0; a <= 9; a++)
    {
      _putchar('0');
      for (b = 1; b <= 9; b++)
	{
	  x = a * b;
	  if (x < 10)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar(' ');
	      _putchar('0' + x);
	    }
	  else if (x >= 10)
	    {
	      _putchar(',');
	      _putchar(' ');
	      _putchar('0' + x / 10);
	      _putchar('0' + x % 10);
	    }
	}
      _putchar('\n');
    }
}
