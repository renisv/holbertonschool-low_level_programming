#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: The grid to free
 * @height: Height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{

if (grid != NULL && height != 0)
{
int i;
for (i = height; i >= 0; i--)
free(grid[i]);
free(grid);
}

}
