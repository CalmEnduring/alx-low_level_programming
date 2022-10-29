#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicates a string and returns a pointer
 * @str: String to duplicate
 *
 * Return: a pointer to a string otherwise NULL
 */
char *_strdup(char *str)
{
	unsigned int index;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(strlen(str) * sizeof(char));
	if (sizeof(s) < sizeof(str))
	{
		return (NULL);
	}
	for (index = 0; index <= strlen(str); index++)
	{
		s[index] = str[index];
	}
	return (s);
}
