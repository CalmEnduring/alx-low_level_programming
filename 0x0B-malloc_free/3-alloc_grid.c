#include "main.h"
/**
  * alloc_grid - allocates space to a 2D array
  * @width: width of array
  * @height: height of array
  *
  * Return: NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **twoD; /* pointer-2-pointer to 2D array */
	int i; /* iterator */

	/* if height or width is less than or equal to 0 */
	/* return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate space for the height */
	twoD = malloc(sizeof(int) * height);
	if (twoD == NULL) /* return NULL if no space avaialable */
		return (NULL);

	/* loop through height */
	for (i = 0; i < height; i++)
	{
		/* allocate space for width */
		twoD[i] = malloc(sizeof(int) * width);
		if (twoD[i] == NULL) /* return NULL if no space */
			return (NULL);
	}
	/* return pointer to a pointer to the 2D array */
	return (twoD);
}
