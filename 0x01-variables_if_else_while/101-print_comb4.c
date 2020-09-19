#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int one;
int two;
int three;
for (one = 48; one <= 57; one++)
{
for (two = (one + 1); two <= 57; two++)
{
for (three = (two + 1); three <= 57; three++)
{
putchar (one);
putchar (two);
putchar (three);
if (one != 55)
{
putchar (44);
putchar (32);
}
}
}
}
putchar ('\n');
return (0);
}
