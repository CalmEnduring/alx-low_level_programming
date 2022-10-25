#include <stdio.h>
#include <stdlib.h>
/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Arguments
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{ /* multiplies two numbers */
	int sum; /* int to hold answer */

	if (argc == 3) /* only takes two numbers for multiplication */
	{
		sum = atoi(argv[1]) * atoi(argv[2]); /* convert char type to int type */
		printf("%d\n", sum);
	}
	else /* if arguments are less than 3 returns 1/Error */
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
