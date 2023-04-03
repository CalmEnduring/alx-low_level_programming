#include "main.h"
/**
  *_sqrt_recursion - returns the natrual square root of a number
  * @n: number
  *
  * Return: resultant number
  */
int _sqrt_recursion(int n)
{
	return (squarert(n, 1));/* call recursion function */
}

/**
  * squarert - calculates the natural square root
  * @n: number
  * @i: iterator
  *
  * Return: natural square root
  */
int squarert(int n, int i)
{
	int sr; /* holds the square root */

	sr = i * i; /* initialize to i multiplying itself */

	if (sr > n) /* no natural square root */
		return (-1);

	if (sr == n) /* natural square root found */
		return (i); /* return square root */

	return (squarert(n, i + 1)); /* recur */
}
