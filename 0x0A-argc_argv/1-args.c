#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: commandline arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
	}

	printf("%d\n", i);

	return (0);
}
