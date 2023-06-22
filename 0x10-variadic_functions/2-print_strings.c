#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints out numbers
 * @separator: number separator
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* holds argument list information */
	unsigned int i = 0; /* iterator */
	char *string; /* holds string argument */


	if (n > 0)
	{
		va_start(args, n); /* initialize argument list */

		/* traverse through argument list */
		while (i < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("(nil)");
			else
			/* if separator NULL, don't print separator */
				printf("%s", string);

			/* account for no separator on last arg */
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args); /* free argument list */
	}
	printf("\n"); /* newline */
}
