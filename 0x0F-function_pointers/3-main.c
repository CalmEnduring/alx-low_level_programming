#include "3-calc.h"
/**
 * main - executes arithmetic function
 * @argc: argument count
 * @argv: argument list
 *
 * Return: result of arithmetic function
 */
int main(int argc, char *argv[])
{
	int (*oprst)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprst = get_op_func(argv[2]);

	if (!oprst)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprst(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
