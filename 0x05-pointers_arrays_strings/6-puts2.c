#include "main.h"
/**
  * puts2 - Prints every other character of a string
  * @str: String in question
  */
void puts2(char *str)
{
	int d, m = 0;

	while (str[m] != '\0')
	{
		m++;
	}

	for (d = 0; d < m; d += 2)
	{
		_putchar(str[d]);
	}

	_putchar('\n');
}
