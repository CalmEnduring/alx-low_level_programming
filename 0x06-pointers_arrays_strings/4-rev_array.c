#include "main.h"
/**
  * reverse_array -  reverse the content of an array of ints
  * @a: array of ints
  * @n: number of elements in array
  */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		/* store the last element in temp */
		temp = a[n - 1 - i];
		/* replace the last element with the first */
		a[n - 1 - i] = a[i];
		/* replace the first element with the last */
		a[i] = temp;
	}
}
