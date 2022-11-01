#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - free space allocated to 2D array
  * @grid: 2D array
  * @height: height of array
  */
void free_grid(int **grid, int height)
{
	int index;
	/* loops through each element in columns of array */
	for (index = 0; index < height; index++)
	{ /* frees each element in columns */
		free(grid[index]);
	}
	free(grid); /* frees rows of grid */
}
