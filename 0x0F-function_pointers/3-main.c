#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - calculates two integers
  * @argc: argument count
  * @argv: arguments
  *
  * Return: result of calculation
  */
int main(int argc, char *argv[])
{
	int (*optr)(int, int);
	/* if arguments aren't exactly 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98); /* failure */
	}

	optr = get_op_func(argv[2]);
	/* if operator deosnt match */
	if (!optr)
	{
		printf("Error\n");
		exit(99); /* failure */
	}
	/* prints calculated answer, conversts string arguements to ints */
	printf("%d\n", optr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
