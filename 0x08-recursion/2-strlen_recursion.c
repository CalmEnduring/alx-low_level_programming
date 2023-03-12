#include "main.h"
/**
  * _strlen_recursion - returns the lenght of a string
  * @s: string
  *
  * Return: length of a string
  */
int _strlen_recursion(char *s)
{
	/* "loop" until the end of the string */
	if (*s == '\0')
	{
		return (0);
	}
	/* otherwise recur then increment the count */
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
