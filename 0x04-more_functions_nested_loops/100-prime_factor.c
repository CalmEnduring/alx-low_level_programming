#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  * Return: Always 0 (Success)
  */
int main(void)
{
	long d, mxf;
	long num = 612852475143;
	double sqr = sqrt(num);

	for (d = 1; d <= sqr; d++)
	{
		if (num % d == 0)
		{
			mxf = num / d;
		}
	}
	printf("%ld\n", mxf);
	return (0);
}
