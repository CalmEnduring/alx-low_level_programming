#include "main.h"
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success, else 1
 */
int main(int argc, char *argv[])
{
	unsigned int index, result = 0;
	int index2;
	char *_argv;

	if (argc > 1)
	{/* loop to add numbers */
		for (index2 = 1; index2 < argc; index2++)
		{
			_argv = argv[index2]; /* _argv points to the index value in argv */
			/* checks each char of the string */
			for (index = 0; index < strlen(_argv); index++)
			{/* returns error if arguments aren't digits */
				if (_argv[index] < 47 || _argv[index] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			/* stores the answer in result */
			result += atoi(_argv);
			_argv++;
		}
		printf("%d\n", result);
	}
	else
	{/* print 0 if no numbers were entered */
		printf("0\n");
	}
	return (0);
}
