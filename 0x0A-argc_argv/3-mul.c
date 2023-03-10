#include "main.h"
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: number of command line arguments
  * @argv: command line arguments
  *
  * Return: on Error return 1, else return 0
  */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
