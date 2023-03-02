#include "main.h"
/**
  * puts2 - prints every other character of a string starting with first
  * @str: string to print
  */
void puts2(char *str)
{
	int i = 0, j;

	/* read the string first */
	while (str[i] != '\0')
	{
		i++;
	}

	/* iterate through string 2 characters at a time */
	for (j = 0; j < i; j += 2)
	{	/* print character */
		_putchar(str[j]);
	}
	_putchar('\n'); /* newline */
}
