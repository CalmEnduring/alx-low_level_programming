#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Duplicates a string and returns a pointer
 * @str: String to duplicate
 *
 * Return: a pointer to a string otherwise NULL
 */
char *_strdup(char *str)
{
	int index = 1, index2 = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index] != '\0')
	{
		index++;
	}

	s = malloc((index * sizeof(char) + 1));
	if (s ==  NULL)
	{
		return (NULL);
	}
	for (; index2 < index; index2++)
	{
		s[index2] = str[index2];
	}
	return (s);
}
