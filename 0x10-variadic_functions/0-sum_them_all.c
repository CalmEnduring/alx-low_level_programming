#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* holds necesssary info to traverse arguments */
	unsigned int i = 0;
	int sum;

	if (n == 0) /* no arguments */
		return (0);

	/* va_start(<argument list name>, <first argument in list> */
	va_start(args, n); /* initialize the argument list */

	/* access the argumens within list */
	for (; i < n; i++)
	{ /* va_arg(<argument list name>, <datatype of arguments> */
		sum += va_arg(args, int); /* add arguments */
	}

	va_end(args); /* frees argument list */

	return (sum); /* return the sum of parameters */
}
