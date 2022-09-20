#include "main.h"
/**
  * print_line - Prints a straight line
  * @n: Number of lines to draw
  * Return: 0
  */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
