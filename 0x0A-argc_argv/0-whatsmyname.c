#include "main.h"

/**
 * main - prints progam's name
 * @argc: count of command line arguments incl. programme name
 *
 * Return: 0
 **/

int main(int __attribute__((unused))argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");

	return (0);
}
