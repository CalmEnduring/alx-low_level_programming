#include "main.h"
/**
  * is_palindrome - checks for a palindrome
  * @s: string
  *
  * Returns: 1 on success, 0 on failure
  */
int is_palindrome(char *s)
{
	if (*s == '0') /* empty string is a palindrome */
		return (1);

	return (checkpal(s));
}

/**
  * checkpal - checks whether a string is a palindrome
  * @s: string
  *
  * Return: 1 on success, 0 on failure
  */
int checkpal(char *s)
{
	int len;

	/* get length of string */
	len = _strlen_recursion(s) - 1;

	/* if first letter equals last letter */
	if (*s == s[len])
	{
		s++; /* move forward to the next character */
		len--; /* move backwards to the next character */
	}
	else /* not a palindrome */
	{
		return (0);
	}
	return (1); /* success */
}
