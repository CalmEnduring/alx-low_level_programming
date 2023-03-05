#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: string one
  * @s2: string two
  *
  * Return: -15 if s1 is less than s2
  *	15 s1 is greater than s2
  *	0 if s1 and s2 are equal
  */
int _strcmp(char *s1, char *s2)
{
	/**
	  * iterate over the two strings until:
	  * one is reaches NULL,
	  * and the two compared characters do not match.
	  * the derefencing is used to access the characters.
	  */
	for (; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; s1++, s2++)
	{
	}

	/* if the last characters match return 0 */
	if (*s1 == *s2)
	{
		return (0);
	}
	else /* return the ASCI difference between the two characters */
	{
		return (*s1 - *s2);
	}
}
