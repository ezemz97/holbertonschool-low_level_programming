#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *_strdup - Return an array of bytes 'h'
  * @str: string to copy
  *
  * Return: null if malloc fail, return pointer
  */

char *_strdup(char *str)
{
	int x, z;
	char *strDUPE;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; ++x)
	{
	}

	strDUPE = malloc(sizeof(x + 1));
	if (strDUPE == NULL)
		return (NULL);

	for (z = 0; z <= x; z++)
	{
		strDUPE[z] = str[z];
	}

	return (strDUPE);
	free(strDUPE);
}
