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
		/* if character in string matches given character */
		if (*s == c)
		{
			/* return that first occurence + rest of string */
			return (s);
		}
		/* increment index position */
		s++;
	}
	s++;
	*s = '\0';
	/* return NULL if character not found */
	return (s);
}
