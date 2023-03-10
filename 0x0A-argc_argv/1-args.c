#include "main.h"
/**
  * main - prints the number of arguments passed into it
  * @argc: number of command line arguments
  * @argv: command line arguments
  *
  * Return: 0
  */
int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
