#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: width of array (columns)
 * @height: height of array (rows)
 *
 * Return: pointer to 2D array, otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int **gr; /* stores address of 2D array (x2 pointer to an int */
	int r, c;

	/* function failure */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocates space for each row of data pointing to ints */
	/* gr sotres address for first element in array */
	gr = malloc(sizeof(int *) * height);
	if (gr == NULL) /* malloc failure */
	{
		free(gr); /* free allocated space */
		return (NULL);
	}
	/* access each row */
	for (r = 0; r < height; r++)
	{
		gr[r] = malloc(sizeof(int) * width);
		if (gr[r] == NULL) /* malloc failure */
		{ /* free allocated space for each column */
			for (c = r; c >= 0; c--)
			{
				free(gr[c]);
			}
			free(gr); /* free allocated tp gr */
			return (NULL);
		}
	}
	/* runs through each element of array and reassigns value to 0 */
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			gr[r][c] = 0;
		}
	}
	return (gr);
}
