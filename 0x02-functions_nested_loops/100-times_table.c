#include "main.h"
/**
  * print_times_table - print the n times table starting with 0
  * @n: multiplier
  *
  * Return: void
  */
void print_times_table(int n)
{
	int i, j, sum;

	if (n >= 0 && n <= 14)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				sum = i * j;
				if (sum > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((sum / 100) + '0');
					_putchar(((sum / 10) % 10) + '0');
					_putchar((sum % 10) + '0');
				}
				else if (sum > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((sum / 10) % 10) + '0');
					_putchar((sum % 10) + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(sum + '0');
				}
			}
			_putchar('\n');
		}
	}
}
