#include "main.h"
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{
	/* recur until NULL terminator */
	if (*s != '\0')
	{
		s++; /* move to next character */
		_print_rev_recursion(s); /* recur */
		_putchar(*s); /* print character */
	}
}
