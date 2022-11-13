#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: array to search
  * @size: size of array
  * @cmp: function
  *
  * Return: index of found element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size > 0)
	{
		/* account for NULL arguments */
		if (array != NULL && cmp != NULL)
		{
			index = 0;
			while (index < size)
			{ /* compare element */
				if (cmp(array[index]) != 0)
				{
					return (index);
				}
				index++;
			}
		}
	}
	/* failure to find element */
	return (-1);
}
