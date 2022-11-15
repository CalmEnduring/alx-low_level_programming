#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers
  * @separator: separates the numbers
  * @n: number of ints passed to arguments
  *
  * Returns: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap; /* declare variadic function */
	unsigned int index;

	va_start(ap, n); /* initializes argument list */

	if (separator == NULL) /* don't print separator */
	{
		separator = "";
	}
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (index < n - 1) /* don't print separator after last int */
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap); /* end variadic function */
}
