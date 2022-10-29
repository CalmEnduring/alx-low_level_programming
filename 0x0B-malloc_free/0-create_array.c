#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * create_array - Creates an initialized array
  * @size: Size of the array
  * @c: character to initialize
  *
  * Return: c on success, NULL on failure
  */
char *create_array(unsigned int size, char c)
{
	char *space; /* point to the dynamic storage */
	unsigned int index;
	
	if (size == 0) /* if size is 0, terminate with NULL */
	{
		return (NULL);
	}
	space = malloc(size * sizeof(char)); /* size of storage to allocate */
	if (space == NULL) /* failure */
	{
		return (NULL);
	}
	for (index = 0; index < size; index++) /* loops for each element in array */
	{
		space[index] = c; /* assinged c to the indexed value */
	}
	/* returns a pointer to a string */
	return (space);
}
