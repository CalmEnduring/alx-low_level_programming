#include "3-calc.h"
/**
  * main - executes an arithemtic operation on 2 integers
  * @argc: number of arguments
  * @argv: arguments
  *
  * Return: results of operation
  */
int main(int argc, char *argv[])
{
	int (*op)(int, int); /* fetch operation variable */
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4) /* too many arguments */
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]); /* call corresponding operational function */

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(num1, num2));
	return (0);
}
