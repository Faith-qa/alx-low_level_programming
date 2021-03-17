#!/usr/bin/python3
"""
creates the perimeter of an island
"""


def island_perimeter(grid):
    """
    returns the perimeter of an island
    Args:
    grid (list): A list of integers representing an island

    Returns:
        the perimeter of the island defined in the grid
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    while (width < 100 and height < 100):
        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    size += 1
                if (j > 0 and grid[i - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
                    return (size * 4) + (edges * 4)
