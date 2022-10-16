#include "main.h"
#include <stddef.h>
/**
  * _strchr - Locates a character in a string
  * @s: Location string
  * @c: String input
  *
  * Return: s if match found otherwise returns NULL
  */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
