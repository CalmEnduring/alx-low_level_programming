#include "main.h"
/**
  * _sqrt - Checks if number has a square root
  * @it: Iterative integer
  * @sq: Integer to check square root of
  *
  * Return: Square root
  */
int _sqrt(int it, int sq) /* separate function to check for sqrt */
{
	if (it * it == sq)
	{
		return (it);
	}
	else if (it * it > sq) /* returns error if sqrt not found */
	{
		return (-1);
	}
	else /* loops until sqrt is found or error */
	{ /* by it being incremented */
		return (_sqrt(it + 1, sq));

	}
}
/**
  * _sqrt_recursion - Calculates the natural square root of a number
  * @n: Integer
  *
  * Return: Square root of n
  */
int _sqrt_recursion(int n)
{
	if (n == 0) /* the sqrt of 0 is 0 */
	{
		return (0);
	}
	else /* calls the separate function to check sqrt of n */
	{/* and returns the sqrt found, if not found, returns error */
		return (_sqrt(1, n));
	}
}
