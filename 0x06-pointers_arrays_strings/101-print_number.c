#include "main.h"
/**
  * print_number - print number using _putchar function
  * @n: number
  *
  * Return: void
  */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
