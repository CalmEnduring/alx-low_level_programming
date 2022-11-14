#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - adds all the opertional parameters
  * @n: required constant parameter
  *
  * Return: sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap; /* declare variadic function */
	unsigned int index, sum;

	va_start(ap, n); /* initializes argument lsit */

	sum = 0;
	for (index = 0; index < n; index++)
	{
		sum += va_arg(ap, int); /* retrieves successive value */
	}
	va_end(ap); /* end variadic function */
	return (sum);
}
