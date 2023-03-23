#include "variadic_functions.h"
/**
  * print_strings - prints string followed by a newline
  * @separator: the string to print between numbers
  * @n: number of integers passed to the function
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap; /* declare variadic list */
	unsigned int i = 0; /* iterator */
	char *string;

	va_start(ap, n); /* intialize variadic list */
	if (n != 0) /* if paramts no empty */
	{
		while (i < n) /* loop through params */
		{
			string = va_arg(ap, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				/* print string */
				printf("%s", string);
			}

			/* print separator */
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++; /* move to next param */
		}
		va_end(ap); /* end variadic function call */
	}
	printf("\n"); /* newline */
}
