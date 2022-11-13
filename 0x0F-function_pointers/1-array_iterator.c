#include "function_pointers.h"
/**
  * array_iterator - prints each element in array
  * @array: array
  * @size: size of array
  * @action: function
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;
	/* account for NULL arguments */
	if (array != NULL && action != NULL)
	{ /* iterate through each element of array */
		for (index = 0; index < size; index++)
		{ /* call print pointer function */
			action(array[index]);
		}
	}
}
