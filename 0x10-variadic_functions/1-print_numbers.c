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
	unsigned int i; /* iterator */

	if (n == 0) /* no arguments */
		return;

	va_start(args, n); /* initialize argument list */

	/* traverse through argument list */
	for (i = 0; i < n; i++)
	{	/* if separator NULL, don't print separator */
		if (separator == NULL)
			printf("%d ", va_arg(args, int));
		else /* include separator */
			if (i == (n - 1)) /* account for no separator on last arg */
				printf("%d ", va_arg(args, int));
			else
				printf("%d%s ", va_arg(args, int), separator);
	}
	printf("\n"); /* newline */
}
