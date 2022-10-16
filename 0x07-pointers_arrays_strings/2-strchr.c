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
	int index;
	char *ptr;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			ptr = &s[index];
			return (ptr);
		}
	}
	return (NULL);
}
