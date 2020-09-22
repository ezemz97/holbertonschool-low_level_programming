#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
char ch;
int num = 0;
while ( num <= 9 )
{
num++;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
