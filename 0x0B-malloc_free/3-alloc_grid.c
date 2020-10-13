#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensioanl array of intergers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure if width or height is 0 || -1 return NULL
 */
int **alloc_grid(int width, int height)
{
int a, b, c;
int **p;
if (width < 1 || height < 1)
return (NULL);
p = malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
for (a = 0; a < height; a++)
{
p[a] = malloc(sizeof(int) * width);
if (p[a] == NULL)
{
for (; a >= 0 ; a--)
{
free(p[a]);
}
free(p);
return (NULL);
}
}
for (b = 0; b < height; b++)
{
for (c = 0; c < width; c++)
{
p[b][c] = 0;
}
}
return (p);
}
