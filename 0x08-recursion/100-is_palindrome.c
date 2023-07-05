#include "main.h"

int check_drome(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0') /* error */
		return (1);

	return (check_drome(s));
}

/**
  * check_drome - Check if a string is palindrome
  * @s: string to check
  *
  * Return: integer value
  */
int check_drome(char *s)
{
	/* lengh of string excluding null terminator */
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l]) /* checking if string halves are identical */
	{
		s++; /* move forward to next element in first half of string */
		l--; /* move backwards to next element in second half of string */
	}
	else /* no palindrome */
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
