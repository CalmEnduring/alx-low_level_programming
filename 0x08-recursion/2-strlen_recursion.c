#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* base case, terminate recursion */
	{
		return (0); /* gets added to function return value */
	}
	else
	{
		s++; /* move to next element in string */
		return (_strlen_recursion(s) + 1); /* icrement length count */
	}
}
