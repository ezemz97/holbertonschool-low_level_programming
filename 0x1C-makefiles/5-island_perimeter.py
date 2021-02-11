#!/usr/bin/python3
"""Defines a function to sum the perimeter of an "island".

"""


def island_perimeter(grid):
    """Returns the perimeter of the island.

    From a grid representing water as Zeros and land as Ones.
    0 = water
    1 = land

    Args:
        grid (list): List of lists of integers
    Returns:
        Perimeter of the island.

    """
    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                if ((y > 0) and (grid[x][y-1] == 0)):
                    perimeter += 1
                if ((y < len(grid[0])) and (grid[x][y+1] == 0)):
                    perimeter += 1
                if ((x > 0) and (grid[x-1][y] == 0)):
                    perimeter += 1
                if ((x < len(grid) and (grid[x+1][y] == 0))):
                    perimeter += 1
    return perimeter
