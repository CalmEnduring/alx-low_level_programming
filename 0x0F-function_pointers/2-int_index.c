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

	if (size > 0) /* if array size bigger than 0 */
	{
		/* if argeument filled */
		if (array != NULL && cmp != NULL)
		{
			while (i < size) /* search the array */
			{
				if (cmp(array[i])) /* compare elements */
					return (i); /* return index */
				i++;
			}
		}
	}
	return (-1); /* no match found */
}
