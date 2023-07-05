#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0) /* error */
		return (-1);

	if (n <= 1) /* factorial of 1 is 1 */
		return (1);

	return (n * factorial(n - 1)); /* multiply n with n - 1 */
}
