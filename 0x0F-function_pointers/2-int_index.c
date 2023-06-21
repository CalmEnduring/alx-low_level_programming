#include "function_pointers.h"
/**
 * int_index - searches for an index
 * @array: array to search
 * @size: size of array
 * @cmp: compare function pointer
 *
 * Return: index of the first element which the cmp function does not
 * return 0, otherwise returns -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0; /* iterator */

	if (size > 0) /* array is a valid size */
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size) /* iterate through array */
			{
				if (cmp(array[i])) /* compare integers */
					return (i); /* return index of integer */
				i++; /* move to next element */
			}
		}
	}
	return (-1); /* match not found */
}
