#include "holberton.h"
#include <stdio.h>
/**
 * _abs - check the code for Holberton School students.
 * @r : in
 * Return: Always 0.
 */
int _abs(int r)
{
if (r < 0)
{
r = r * (-1);
return (r);
}
else
{
return (r);
}
return (0);
}
