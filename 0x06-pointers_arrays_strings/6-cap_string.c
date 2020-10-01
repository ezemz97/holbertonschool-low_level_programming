#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = str[0] - 32;
		}
		if (
				str[x] == ',' || str[x] == ';' || str[x] == '.' ||
				str[x] == '!' || str[x] == '?' || str[x] == '"' ||
				str[x] == '(' || str[x] == ')' || str[x] == '{' ||
				str[x] == '}' || str[x] == ' ' || str[x] == '\n' ||
				str[x] == '\t'
		   )
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] = str[x] - 32;
			}
		}
	}
	return (str);
}
