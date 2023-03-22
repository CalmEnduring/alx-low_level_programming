#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: array to search
  * @size: number of elements in the array
  * @cmp: function pointer to comparison function
  *
  * Return: index of first matching element
  * else -1 if no matching element
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* iterator */
	int index = 0; /* index of matching element */

	if (size <= 0) /* array is empty */
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++) /* search the array */
		{
			index = (*cmp)(array[i]); /* compare elements */

			if (index != 0) /* match found */
			{
				return (i); /* return index */
			}
		}
		return (-1);
	}
}
