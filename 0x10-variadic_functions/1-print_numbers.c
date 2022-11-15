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

	for (index = 0; index < n; index++)
	{
		if (separator == NULL) /* print numbers without separator */
		{
			printf("%d", va_arg(ap, int));
		}
		else /* prints number with separator */
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
	}
	va_end(ap); /* end variadic function */
	printf("\n");
}
