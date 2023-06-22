#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args; /* holds argument list */
	f_data dtypes[] = {
		{ "c", pac },
		{ "i", pai },
		{ "f", paf },
		{ "s", pacp }
	}; /* data structure holding format printing functions */
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format); /* initialize argument list */
	/* traverse through argument list */
	while (format !=  NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *dtypes[j].identifier)
			{
				dtypes[j].f(separator, args);
				separator = ", ";
			}
			j++;

		}
		i++;
	}
	va_end(args); /* frees argument list */
	printf("\n");
}
/**
 * pac - prints a character of char type
 * @separator: separator of characters
 * @args: list of variadic functions
 *
 * Return: void
 */
void pac(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * pai - prints a character of int type
 * @separator: separator of characters
 * @args: list of variadic functions
 *
 * Return: void
 */
void pai(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * paf - Prints a character of float type
 * @separator: separator of character
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void paf(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * pacp - Prints the content of pointer to char type
 * @separator: separator of character
 * @args: A list of variadic arguments
 *
 * Return: void
 */
void pacp(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}

