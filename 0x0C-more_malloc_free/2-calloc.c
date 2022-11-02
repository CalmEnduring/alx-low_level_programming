#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _calloc - allocates memory for an array
  * @nmemb: an array
  * @size: size of array
  *
  * Return: pointer to allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int index;
	/* calloc failure */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory */
	mem = malloc(nmemb * size);
	if (mem == NULL) /* malloc failure */
		return (NULL);
	/* access each element in newly allocated memory */
	for (index = 0; index < (nmemb * size); index++)
		mem[index] = 0; /* initialize each element to 0 */
	/* return pointer */
	return (mem);
}
