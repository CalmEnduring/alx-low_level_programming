#include "main.h"
/**
  * factorial -  returns the factorial of a given number
  * @n: number
  *
  * Return: facotiral of n
  */
int factorial(int n)
{
	/* factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
	/* if given number is lower than 0 */
	else if (n < 0)
	{
		/* return error */
		return (-1);
	}
	/* otherwise find the factorial */
	else
	{
		/* example: n * (n - 1) recur */
		return (n * factorial(n - 1));
	}
}
