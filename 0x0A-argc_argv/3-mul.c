#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 On succes, else -1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
