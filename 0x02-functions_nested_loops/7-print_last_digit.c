#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - check the code for Holberton School students.
 * @r: ok
 * Return: Always 0.
 */
int print_last_digit(int r)
{
int x = (r % 10);
if (x < 0)
{
x = x * (-1);
}
_putchar ('0' + x);
return (x);
}
