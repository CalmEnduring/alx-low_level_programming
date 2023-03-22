#include "function_pointers.h"
/**
  * array_iterator - executes a function on each element of array
  * @array: array in question
  * @size: size of array
  * @action: function pointer
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size > 0 && action != NULL && array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
