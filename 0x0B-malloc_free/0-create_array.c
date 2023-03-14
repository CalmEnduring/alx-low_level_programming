#include "main.h"
/**
  * create_array - creates an array of characters initialized
  * with a specific character.
  * @size: size of the array
  * @c: character to initialize
  *
  * Return: a pointer to the array or NULL on failure
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i; /* iterator */
	char *array; /* pointer to an array */

	/* if size of array is 0 return NULL */
	if (size == 0)
		return (NULL);

	/* allocate memory for array */
	/* size of data type * size of array */
	array = malloc(sizeof(c) * size);

	/* if array NULL, no space available, return NULL */
	if (array == NULL)
		return (NULL);

	/* loop through the array */
	for (i = 0; i < size; i++)
	{
		/* initialize each space with a constant char */
		array[i] = c;
	}
	/* NULL terminate array */
	array[i] = '\0';
	return (array);
}
