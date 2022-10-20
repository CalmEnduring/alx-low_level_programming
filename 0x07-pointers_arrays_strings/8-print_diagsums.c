#include <stdio.h>
/**
  * print_diagsums - Prints the sum of two diagonals
  * @a: Points to the 2D array
  * @size: Size of the array
  *
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int index, suml, sumr;

	sumr = 0;
	suml = 0;

	for (index = 0; index < size; index++)
	{
		suml += a[(size + 1) * index];
		sumr += a[(size - 1) * (index + 1)];
	}
	printf("%d, %d\n", suml, sumr);
}
