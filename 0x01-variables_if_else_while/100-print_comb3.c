#include <stdio.h>
/**
  * main - Entry point
  * Description: Prints different combos of two different digits
  * Return: 0 success
  */
int main(void)
{
	int d;
	int m;

	for (d = '0'; d <= '9'; d++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			if (d < m)
			{
				putchar(d);
				putchar(m);

				if (d != '8' || (d == '8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
