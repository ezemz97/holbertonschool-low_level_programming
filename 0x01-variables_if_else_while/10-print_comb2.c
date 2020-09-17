#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
int n;
int n2;
for (n = 48; n <= 57; n++)
{
for (n2 = 48; n2 <= 57; n2++)
{
putchar(n);
putchar(n2);
if (n != 57 || n2 != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
