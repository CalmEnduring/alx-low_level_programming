#include "main.h"
#include <stdlib.h>
/**
 * _puts_recursion - prints a string
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /* base case, end of recursion */
	{
		_putchar('\n'); /* newline at the end of string */
		exit(0); /* exit function */
	}
	else
	{
		_putchar(*s); /* print character */
		s++; /* move to next character */
		_puts_recursion(s); /* call function again */
	}
}
