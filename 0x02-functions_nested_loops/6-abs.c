#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: Number to be computed
 * Return: Absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
