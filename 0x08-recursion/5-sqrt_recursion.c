#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: natural square root of number, -1 on error
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the natural square root of a number
 * @n: number
 * @i: iterator
 *
 * Return: natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n) /* error */
		return (-1);

	if (sqrt == n) /* square root found */
		return (i);

	return (_sqrt(n, i + 1)); /* increment iterator and call function */
}
