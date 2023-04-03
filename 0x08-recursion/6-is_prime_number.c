#include "main.h"
/**
  * is_prime_number - determines the prime number
  * @n: number
  *
  * Return: prime number
  */
int is_prime_number(int n)
{
	return (checkp(n, 1));
}

/**
  * checkp - check for prime number
  * @n: number
  * @i: numberf of iterations
  *
  * Return: 1 if prime or 0 for composite
  */
int checkp(int n, int i)
{
	if (n % i == 0 && i > 1) /* composite */
		return (0);

	if (n <= 1) /* composite */
		return (0);

	if ((n / i) < i) /* prime number */
		return (1); /* return prime number */

	return (checkp(n, i + 1)); /* recur */
}
