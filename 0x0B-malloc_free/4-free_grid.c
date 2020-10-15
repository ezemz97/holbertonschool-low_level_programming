#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - Free space of previous grid
  * @grid: grid
  * @height: height
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
