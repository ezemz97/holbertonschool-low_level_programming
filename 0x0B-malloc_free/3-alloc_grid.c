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
	int x;
	int **grid;

	/* Contemplate if width or height doesn't have any value (return error) */
	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	/* Contemplate if memory is allocated into 'grid' (return error) */
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	/* Assign memory to every column for every index of row*/
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			for (x - 1; x > 0; x--)
			{
				free(grid[x]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
