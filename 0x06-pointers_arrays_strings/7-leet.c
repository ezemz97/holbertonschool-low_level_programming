#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */

char *leet(char *str)
{
	int x, z;
	char az[5] = "aeotl";
	char num[5] = "43071";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; az[z] != '\0'; z++)
		{
			if (az[z] == str[x] || (az[z] - 32) == str[x])
			{
				str[x] = num[z];
			}
		}
	}
	return (str);
}
