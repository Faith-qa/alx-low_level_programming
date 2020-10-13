#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional
 * @grid: the address of the two dimensional array
 * @height: height of the grid
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
