#include "main.h"

int check(int n, int i);

/**
 * is_prime_number - returns the prime number
 * @n: number to check
 *
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - checks if number is prime
 * @n: number to check
 *
 * Return: 1 for prime, 0 on not prime
 */
int check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 8 && i > 1)
		return (1);

	return (check(n, i + 1));
}
