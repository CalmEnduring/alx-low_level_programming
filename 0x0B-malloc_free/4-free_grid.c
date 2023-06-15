#include "main.h"
/**
 * free_grid - frees allocated storage of an 2D array
 * @grid: 2D array
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int index;

	/* iterates through each element in columns of array */
	for (index = 0; index < height; index++)
	{ /* frees each element in column */
		free(grid[index]);
	}
	free(grid); /* frees grid rows */
}
