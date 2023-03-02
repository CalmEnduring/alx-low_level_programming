#include "main.h"
/**
  * puts_half - prints only half of a string
  * @str: string to print
  */

void puts_half(char *str)
{
	int n;
	int j = 0;

	/* get length of the string */
	while (str[j] != '\0')
	{
		j++;
	}

	/* if number is odd */
	if (j % 2 == 1)
	{	/* make length even and divide by 2 */
		n = (j - 1) / 2;
		n += 1;
	}
	else
	{
		n = j / 2;
	}

	/* iterate from the start of the second half */
	for (; n < j; n++)
	{	/* print each character */
		_putchar(str[n]);
	}
	_putchar('\n');
}
