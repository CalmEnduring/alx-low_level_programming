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
	int i = 0; /* iterator */
	int index = 0; /* index of matching element */

	if (size <= 0) /* array is empty */
	{
		return (-1);
	}
	else
	{
		while (i < size) /* search the array */
		{
			index = (*cmp)(array[i]); /* compare elements */

			if (index != 0) /* matchf found */
				return (i); /* return index */
			i++; /* move to the next element */
		}
	}
	return (-1); /* no match found */

}
