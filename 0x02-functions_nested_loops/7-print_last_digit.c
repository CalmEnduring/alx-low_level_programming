#include "main.h"
/**
 * print_last_digit - prints last digigt of a num
 *
 * @n: checks number
 *
 * Return: lastd
 */
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;

	if (lastd < 0)
	{
		lastd = lastd * -1;
	}
	
	_putchar(lastd + '0');

	return (lastd);
}
