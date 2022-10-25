#include <stdio.h>
/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Arguments
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int index; /* the index value of argv */
	/* prints all the arguments it the main function receives */
	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
