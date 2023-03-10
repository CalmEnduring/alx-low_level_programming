#include "main.h"
/**
  * main - prints all arguments passed
  * @argc: number of command line arguments
  * @argv: command line arguments passed
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
