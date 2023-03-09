#include "main.h"
/**
  * _puts_recursion - prints a string followed by a newline
  * @s: string to print
  */
void _puts_recursion(char *s)
{
	/* recur until NULL terminator */
	if (*s != '\0')
	{
		_putchar(*s); /* print current character */
		s++; /* move to next character */
		_puts_recursion(s); /* recur */
	}
	else
	{
		_putchar('\n'); /* newline */
	}
}
