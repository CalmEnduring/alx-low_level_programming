#include <stdio.h>
/**
  * main - Prints all unique possible combos of 2 doube digit numbers
  *
  * Return: 0 on success
  */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

					if (a + b + c + d == 227 && a == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
