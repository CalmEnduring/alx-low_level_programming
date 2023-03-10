#include "main.h"
#include <stdlib.h>
/**
  * main - adds positive numbers
  * @argc: number of command line arguments
  * @argv: command line arguments
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *num;

	if (argc == 1)
		printf("0");

	for (i = 1; i < argc; i++)
	{
		num = argv[i];

		if (*num < 48 || *num > 57)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(num);
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
