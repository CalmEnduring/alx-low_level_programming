#include "variadic_functions.h"
/**
  * print_numbers - prints numbers followed by a newline
  * @separator: the string to print between numbers
  * @n: number of integers passed to the function
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap; /* declare variadic list */
	unsigned int i = 0; /* iterator */

	va_start(ap, n); /* intialize variadic list */
	if (n != 0) /* if paramts no empty */
	{
		while (i < n) /* loop through params */
		{
			/* print number */
			printf("%d", va_arg(ap, int));

			/* print separator */
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++; /* move to next param */
		}
		va_end(ap); /* end variadic function call */
	}
	printf("\n"); /* newline */
}
