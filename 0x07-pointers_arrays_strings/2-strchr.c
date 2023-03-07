#include "main.h"
#include <stddef.h>
/**
  * _strchr - locates a character in a string
  * @s: string
  * @c: character
  *
  * Return: a pointer to the first occurence of the character
  *	or NULL if the character is not found
  */
char *_strchr(char *s, char c)
{
	/* iterate over string using pointer arithmetic */
	while (*s)
	{
		/* if character in string match given character */
		if (*s == c)
		{
			/* return pointer to s */
			return (s);
		}
		s++;
	}
	/* if given character is NULL */
	if (c == '\0')
	{
		/* return pointer to s */
		return (s);
	}
	return ('\0');
}
