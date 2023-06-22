#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints out numbers
 * @separator: number separator
 * @n: numers of ints passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* holds argument list information */
	unsigned int i = 0; /* iterator */


	if (n > 0)
	{
		va_start(args, n); /* initialize argument list */

		/* traverse through argument list */
		while (i < n)
		{	/* if separator NULL, don't print separator */
			printf("%d ", va_arg(args, int));

			/* account for no separator on last arg */
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args); /* free argument list */
	}
	printf("\n"); /* newline */
}
