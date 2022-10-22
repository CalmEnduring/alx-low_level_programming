#include "main.h"
/**
  * _print_rev_recursion - Prints a string in reverse
  * @s: The string
  *
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* runs through entire string */
	{
		_print_rev_recursion(s + 1); /* increments &s on the stack */
		_putchar(*s); /* prints characters from the stack when *s == NULL */
	}
}
