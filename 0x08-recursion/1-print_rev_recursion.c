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
		/* new line at the end of string */
		return; /* exit function*/
	}
	else
	{
		s++; /* iterate to next element */
		_print_rev_recursion(s); /* print the next element */
		s--;
		_putchar(*s); /* print element */
	}
}
