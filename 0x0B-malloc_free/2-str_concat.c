#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *str_concat - Concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: null if malloc fail, return pointer
  */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, x = 0;
	char *concstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[l1] != '\0')
	{
		++l1;
	}
	while (s2[l2] != '\0')
	{
		++l2;
	}

	concstr = malloc(l1 + l2 + 1);

	while (s1[x] != '\0')
	{
		concstr[x] = s1[x];
		++x;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		concstr[l1] = s2[x];
		++l1;
		++x;
	}

	concstr[l1] = '\0';
	return (concstr);
	free(concstr);
}
