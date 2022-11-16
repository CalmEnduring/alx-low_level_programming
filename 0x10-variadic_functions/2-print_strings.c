#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - prints strings
  * @separator: separator between strings
  * @n: number of arguments passed to function
  *
  * Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *s; /* string pointer */
	va_list ap; /* declare variadic function */

	va_start(ap, n); /* initialize argument list */
	if (separator == NULL)
	{/* don't print separator */
		separator = "";
	}

	for (index = 0; index < n; index++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
		{/* if string is empty */
			s = "(nil)";
		}

		printf("%s", s);

		if (index < n - 1) /* account for last string separator */
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap); /* end of variadic function */
}
