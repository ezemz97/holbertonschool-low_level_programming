#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *string_nconcat - Allocate memory, check failure
  * @s1: string
  * @s2: string
  * @n: unsigned int
  * Return: pointer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, z = 0, l1 = 0, l2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0' && l2 < n)
		l2++;
	p = malloc(l1 + l2 + 1);
	if (p == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[z] != '\0' && z < n)
	{
		p[x + z] = s2[z];
		z++;
	}
	p[x + z] = '\0';
	return (p);
}
