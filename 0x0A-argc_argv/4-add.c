#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - Calculates sum of positive numbers
  * @argc: Argument count
  * @argv: Arguments
  *
  * Return: 0 on success, 1 on failure
  */
int main(int argc, char *argv[])
{
	unsigned int sum = 0, index;
	int index2;
	char *_argv;

	if (argc > 1)
	{ /* loop to add numbers */
		for (index2 = 1; index2 < argc; index2++)
		{
			_argv = argv[index2]; /* _argv point to the index value in argv */
			/* checks eac character of the string */
			for (index = 0; index < strlen(_argv); index++)
			{ /* returns error if arguements aren't digits */
				if (_argv[index] < 47 || _argv[index] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			/* stores the anser in sum var */
			sum += atoi(_argv);
			_argv++;
		}
		printf("%d\n", sum);
	}
	else
	{ /* print 0 if no numbers were entered */
		printf("0\n");
	}
	return (0);
}
