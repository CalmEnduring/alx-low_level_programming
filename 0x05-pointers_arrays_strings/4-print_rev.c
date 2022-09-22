#include "main.h"
/**
  * print_rev - Prints a string in reverse
  * @s: string to be printed
  *
  */
void print_rev(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	for (d -= 1; d >= 0; d--)
	{
		_putchar(s[d]);
	}
	_putchar('\n');
}
