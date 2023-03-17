#include "main.h"
/**
  * pow_recursion - returns the value of x to the power of
  * @x: floor number
  * @y: exponent
  *
  * Return: resultant value
  */
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (i == y)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
