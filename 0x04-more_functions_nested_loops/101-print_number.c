#include "main.h"

/**
 * print_number - prints a number
 * @n: Number to be printed
 *
 */
void print_number(int n)
{
	unsigned int j;

	j = n;

	if (n < 0)
	{
		_putchar('-');
		j = -j;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
