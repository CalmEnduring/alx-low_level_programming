#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_div(n);
}

/**
  * _div - ...
  * @n: ...
  *
  * Return: ...
  */
void _div(unsigned long int n)
{
	if (n < 1)
		return;

	_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
