#include "main.h"
/**
  * _pow_recursion - Calculates x to the power of y
  * @x: Base integer
  * @y: Exponential integer
  *
  * Return: x ^ y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* base case 1: returns error */
	{
		return (-1);
	}
	else if (y == 1) /* base case 2 */
	{
		return (x);
	}
	else if (y == 0) /* base case 3 */
	{
		return (1);
	}
	else /* returns the value of x ^ y */
	{ /* function will run until y == 1 || y == 0 */
		return (x * _pow_recursion(x, y - 1));
	}
}
