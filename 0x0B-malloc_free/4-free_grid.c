#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function frees memory
 * @grid: pointer
 * @height: the array's hight
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
