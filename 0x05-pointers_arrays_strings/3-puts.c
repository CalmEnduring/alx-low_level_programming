#include "main.h"
/**
  * _puts - prints a string followed by a newline
  * @str: string to print
  */
void _puts(char *str)
{
	int i;

	/* loop through string until NULL character */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* prints one character at a time */
		_putchar(str[i]);
	}
	/* add new line at the end */
	_putchar('\n');
}
