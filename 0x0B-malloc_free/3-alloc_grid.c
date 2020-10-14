#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * **alloc_grid - Concatenate two strings
  * @width: string 1
  * @height: string 2
  * Return: null if malloc fail, return pointer
  */

int **alloc_grid(int width, int height)
{
	int x, z;
	int **grid;

	grid = malloc(sizeof(int) * height);

	/* Contemplate if memory is allocated into 'grid' (return error) */
	if (grid == NULL)
		return (NULL);
	/* Contemplate if width or height doesn't have any value (return error) */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Assign memory to every column for every index of row*/
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			grid[z] = malloc(sizeof(int) * width);
		}
	}

	return (grid);

	/* Free memory of every column in every row index */
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			free(grid[z]);
		}
	}
}
