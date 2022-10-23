#include "main.h"
/**
  * _strlen_recursion - Counts length of string
  * @s: The string
  *
  * Return: Length of string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case: runs through the string */
	{
		return (0); /* returns 0 when s reaches NULL */
	}
	else
	{ /* adds 1 each time function is called */
		/* pointed arithmetic used to move to next value pointed to */
		return (1 + _strlen_recursion(s + 1));
	}
}
