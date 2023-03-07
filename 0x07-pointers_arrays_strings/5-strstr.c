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
	/* if needle empty return haystack */
	if (*needle == '\0')
		return (haystack);
	/* iterate over the needle */
	while (*needle)
	{
		/* iterate over haystack */
		while (*haystack)
		{
			/* if the needle is in the haystack */
			if (*needle == *haystack)
			{
				/* return the needle in the haystack */
				return (haystack);
			}
			/* move to next position in haystack */
			haystack++;
		}
		/* move to next position in neelde */
		needle++;
	}
	/* if needle not found return NULL */
	return (NULL);
}
