#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: string to search
  * @accept: search criteria
  *
  * Return: pointer to byte in s that matches one of the bytes in accept
  *	or NULL if no bytes are found
  */
char *_strpbrk(char *s, char *accept)
{
	/* iterate over s string */
	while (*s)
	{
		/* create a pointer to accept */
		char *p = accept;
		/* iterate over accept */
		while (*p)
		{
			/* if characters match between s and accept */
			if (*s == *p)
			{
				/* return the first occurence */
				return (s);
			}
			/* move to the next position in string */
			p++;
		}
		/* move to the next position in string */
		s++;
	}
	/* return NULL if no characters match */
	return ('\0');
}
