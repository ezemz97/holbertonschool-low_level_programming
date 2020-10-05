#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: main string
 * @needle: pattern to match
 * Return: string - 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		/* If first character of sub string match, check for whole string*/
		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		/* If complete sub string match, return starting address */
		if (!*pattern)
			return (begin);

		haystack = begin + 1; /* Increament main string*/
	}
	return (NULL);
}
