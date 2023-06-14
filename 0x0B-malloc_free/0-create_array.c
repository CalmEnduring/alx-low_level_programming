#include "main.h"
/**
 * create_array - creates an array of chars and
 * initializes with a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: NULL if size is 0, NULL if it fails, otherwise
 * returns pointer to the array on success
 */
char *create_array(unsigned int size, char c)
{
	char *space; /* pointer to the array */
	unsigned int index; /* iterator */

	if (size == 0) /* terminate if size is 0 */
	{
		return (NULL);
	}
	/* allocate storage to space pointer */
	space = malloc(size * sizeof(char));
	if (space == NULL) /* malloc failure */
	{
		return (NULL);
	}
	/* initialize is element in array with c */
	for (index = 0; index < size; index++)
	{ /* assign character to each individual element in array */
		space[index] = c;
	}
	/* returns pointer to array */
	return (space);
}
