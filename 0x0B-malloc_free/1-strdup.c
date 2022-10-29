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
	char *s; /* pointer to dynamic string */

	if (str == NULL) /* failure */
	{
		return (NULL);
	}
	while (str[index] != '\0') /* reads string */
	{
		index++;
	}

	s = malloc((index * sizeof(char) + 1)); /* allocates dynamic storage for duplicate string */
	if (s ==  NULL) /* failure if insuficient storage */
	{
		return (NULL);
	}
	for (; index2 < index; index2++) /* duplicates str into s */
	{
		s[index2] = str[index2];
	}
	return (s); /* returns pointer to duplicate string */
}
