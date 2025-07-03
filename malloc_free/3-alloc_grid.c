#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Allocates a 2D array of integers initialized to 0
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the allocated 2D array (success),
 *         NULL if width/height are 0 or negative, or if malloc fails
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
