#include <stdio.h>
/**
  * main - entry point
  * Description: Prints numbers 1-100
  * multiples of 3 printed as Fizz
  * multiples of 5 printed as Buzz
  * multiples of both 5 and 3 are printed as FizzBuzz
  *
  * Return: 0
  */
int main(void)
{
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 3 == 0 && o % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (o % 3 == 0)
		{
			printf("Fizz");
		}
		else if (o % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", o);
		}
		if (o < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
