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
	unsigned int i;
	char *array;


	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
