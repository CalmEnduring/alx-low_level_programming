#include "main.h"
/**
  * main - compute and prints the multiples of 3 or 5
  *
  * Return: 0 on success
  */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
		i++;
	}
	printf("sum of multiples: %d\n", sum);
	return (0);
}
