#include "main.h"
/**
  * puts_half - prints only half of a string
  * @str: string to print
  */

void puts_half(char *str)
{
	int n = 0, j;

	/* get length of the string */
	while (str[n] != '\0')
	{
		n++;
	}

	/* if number is odd */
	if (n % 2 == 1)
	{	/* make length even and divide by 2 */
		n = (n - 1) / 2;
		n += 1;
	}

	/* iterate from the start of the second half */
	for (j = n / 2; j < n; j++)
	{	/* print each character */
		_putchar(str[j]);
	}
	_putchar('\n');
}
