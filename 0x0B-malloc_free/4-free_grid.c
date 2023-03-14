#include "main.h"
/**
  * free_grid - free previously allocated space of a grid
  * @grid: 2D array
  * @height: height of grid
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
