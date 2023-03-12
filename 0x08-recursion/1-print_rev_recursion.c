#include "main.h"
#include <string.h>
/**
  * _print_rev_recursion - prints a string in reverse
  * @s: string
  */
void _print_rev_recursion(char *s)
{

	/* recur until NULL terminator */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /* recur */
		_putchar(*s);

	}
	else
	{
		_putchar('\n');
	}
}
