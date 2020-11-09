#include "holberton.h"

/**
  * binary_to_uint - convert to decimal
  *
  * @b: binary number in form of a string
  *
  * Return: unsigned decimal
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, x = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[x] == '0' || b[x] == '1')
		{
			value <<= 1;
			value += b[x] - '0';
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (value);
}
