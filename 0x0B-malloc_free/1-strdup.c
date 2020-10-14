#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *create_array - Return an array of bytes 'h'
  * @size: memory bytes to allocate
  * @c: character to fill array with
  * Return: null if malloc fail, null if size == 0
  */

char *_strdup(char *str)
{
	int x, z;
	char *strDUPE;

	if (str == NULL)
		return(NULL);

	for (x = 0; str[x] != '\0'; x++);

	strDUPE = malloc(sizeof(x));

	if (strDUPE == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
	{
		strDUPE[z] = str[z];
	}

	return (strDUPE);
	free(strDUPE);
}
