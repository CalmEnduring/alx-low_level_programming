#include "main.h"
#include <stddef.h>
/**
  * _strstr - locates a substring
  * @haystack: string to search
  * @needle: string to locate
  *
  * Return: a pointer to the located substring
  *	or NULL if string was not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	/* iterate over the haystack */
	while (*haystack)
	{
		h = haystack;
		n = needle;

		/* iterate over needle, if needle and haystack matches */
		while (*h == *n && *n)
		{
			h++; /* onto next character */
			n++; /* onto next character */
		}
		/* if needle empty */
		if (*n == '\0')
		{
			return (haystack);
		}
		/* move to the next position in haystack */
		haystack++;
	}
	/* if nothing found, return NUL */
	return (NULL);
}
