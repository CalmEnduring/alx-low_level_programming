#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum range
  * @max: maximum range
  *
  * Return: a pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *mem;
	int index, size;
	/* function failure */
	if (min > max)
		return (NULL);
	size = max - min + 1;
	/* allocate memory for array */
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	/* accessing each element in mem */
	for (index = 0; min <= max; index++)
		mem[index] = min++;
	/* return pointer to newly allocated memory */
	return (mem);
}
