#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 * @str: string
 * Return: Always 0.
 */

char *rot13(char *str)
{
	int x, z;
	char fh[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sh[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; fh[z] != '\0'; z++)
		{
			if (fh[z] == str[x])
			{
				str[x] = sh[z];
				break;
			}
		}
	}
	return (str);
}

