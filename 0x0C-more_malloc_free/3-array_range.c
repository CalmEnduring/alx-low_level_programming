#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  *
  * Return: pointer to newly created array
  */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (array == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
