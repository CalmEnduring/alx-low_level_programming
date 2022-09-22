#include "main.h"
#include <stdio.h>
/**
  * print_array - Prints the elements of an array of int
  * @a: Array integers
  * @n: Elements to be printed
  */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);

		if (d != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
