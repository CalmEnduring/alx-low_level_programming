#include "main.h"
/**
  * print_triangle - Prints a triangle using '#'
  * @size: Size of triangle
  */
void print_triangle(int size)
{
	int p, o, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < size; p++)
		{
			for (o = size - p; o > 1; o--)
			{
				_putchar(' ');
			}

			for (w = 0; w <= p; w++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
