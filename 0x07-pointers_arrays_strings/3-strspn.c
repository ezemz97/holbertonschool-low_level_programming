#include "holberton.h"
#include <stdio.h>
/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: chars to match
  * Return: bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, z, bytes;

	for (x = 0; s[x] != 32; x++)
	{
		for (z = 0; accept[z] >= '\0'; z++)
		{
			if (s[x] == accept[z])
			{
				bytes++;
			}
		}

	}
	return (bytes);
}

