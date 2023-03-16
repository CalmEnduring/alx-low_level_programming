#include "main.h"
/**
  * _calloc - allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size of bytes per element
  *
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	/* number of elements and size cannot be 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate space for the array */
	array = malloc(size * nmemb);
	/* if no space available, failure */
	if (array == NULL)
		return (NULL);

	/* memory set to 0 */
	*array = 0;

	return (array); /* return pointer to array */
}
