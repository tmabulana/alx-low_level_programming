#include "main.h"
#include <stdlib.h>
/**
 * free_grid - it fress 2 dimensional grids
 * @grid: the multidimensional array of integers
 * @height: the height of the grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}

