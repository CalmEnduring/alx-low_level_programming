#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to print
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		return; /* exit function */
	}
	else
	{
		s++; /* iterate to next element */
		_print_rev_recursion(s); /* call function to the stack */
		s--; /* move one element low */
		_putchar(*s); /* print element */
	}
}
