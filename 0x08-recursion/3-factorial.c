#include "main.h"
/**
  * factorial - Returns the factorial
  * @n: Integer
  *
  * Return: Factorial of n
  */
int factorial(int n)
{
	if (n == 1) /* base case */
	{
		return (1);
	}
	else if (n < 1) /* returns error if n < 1 */
	{
		return (-1);
	}
	else /* returns the factorial of n */
	{ /* factorial of n = n * (n - 1) */
		return (n * factorial(n - 1));
	}
}
