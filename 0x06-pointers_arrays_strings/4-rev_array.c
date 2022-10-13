#include "main.h"
/**
  * reverse_array - Reverses the contents of an array
  * @a: The array
  * @n: The array length
  *
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = 0; index < (n / 2); index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
