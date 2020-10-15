#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *str_concat - Concatenate two strings
  * @s1: string 1
  * @s2: string 2
  * Return: null if malloc fail, return pointer
  */

char *argstostr(int ac, char **av)
{
	char *conct;
	int x, z, kont = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++)
		{
			kont++;
		}
	}
	conct = malloc(sizeof(char) * kont + ac);
	if (conct == NULL)
		return (NULL);

	kont = 0;
	for (x = 0; x < ac; x++)
	{
		for (z = 0; av[x][z] != '\0'; z++, kont++)
		{
			conct[kont] = av[x][z];
		}
		conct[kont] = '\n';
		kont++;
	}
	return(conct);
}
