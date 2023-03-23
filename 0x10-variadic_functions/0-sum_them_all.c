#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters
  * @n: constant named param
  *
  * Return: sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* pointer to first param */
	unsigned int i = 0; /* iterator */
	int sum = 0; /* sum of params */

	if (n != 0)
	{
		va_start(ap, n); /* intialize va_list */

		while (i < n) /* loop through params */
		{
			sum += va_arg(ap, int); /* add params */
			i++; /* move to next param */
		}

		va_end(ap); /* end variadic call */
		return (sum); /* return sum of params */
	}
	return (0); /* no params */
}
