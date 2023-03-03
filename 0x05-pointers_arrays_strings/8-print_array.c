#include "main.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array
  * @a: the array to print
  * @n: the number of elements to print
  */
void print_array(int *a, int n)
{
	int i;

	/* iterate through the string */
	for (i = 0; i <= (n - 1); i++)
	{	/* print each element one at a time */
		printf("%d", a[i]);

		/* seperate elements with a comma followed by sace */
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	/* newline after printing all elements */
	printf("\n");
}
