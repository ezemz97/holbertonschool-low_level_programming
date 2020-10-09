#include "holberton.h"
#include <stdio.h>
int pal(char *s, int first, int last);
int _strlen_recursion(char *s);

/**
 * _strlen_recursion - Entry point
 * @s: d
 *
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
int i;
i = 0;

if (*s != '\0')
{
s++;
i++;
i = i + (_strlen_recursion(s));
}
return (i);
}

/**
 * pal - Entry point
 * @s: str
 * @first: int++
 * @last: int--
 *
 * Return: Always 0 (Success)
 */
int pal(char *s, int first, int last)
{
if (s[first] != s[last])
{
return (0);
}
if (first >= last)
{
return (1);
}

return (pal(s, (first + 1), (last - 1)));
}

/**
 * is_palindrome - Entry point
 * @s: str
 *
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
int last, first;

first = 0;
last = _strlen_recursion(s);
return (pal(s, first, last - 1));
}
