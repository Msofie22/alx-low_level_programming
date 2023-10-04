#include "main.h"
#include <stdlib.h>
/**
*free_grid - frees 2d arrray
*@grid: 2d array
*@height: height dimension of grid
*DEscription: frees memory of grid
*REturn nothing
**/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
