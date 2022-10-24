#include "main.h"
/**
  * prime_check - Confirms whether number is prime or not
  * @it: Iterative integer
  * @num: Integer to check for prime number
  *
  * Return: 1
  */
int prime_check(int it, int num)
{ /* if prime, return 0 */
	if (num < 2 || num % it == 0)
	{
		return (0);
	}
	else if (it > num / 2) /* number is prime */
	{
		return (1);
	}
	else
	{ /* prime not found, reiterate function and increment 'it' */
		return (prime_check(it + 1, num));
	}
}
/**
  * is_prime_number - Checks for prime number
  * @n: Intger to be checked
  *
  * Return: 1 if n is a prime, otherwise 0
  */
int is_prime_number(int n)
{
	if (n == 2) /* 2 is the lowest prime number > 1 */

	{
		return (1);
	}
	else /* call function prime_check to verify if n is prime */
	{
		return (prime_check(2, n));
	}
}
