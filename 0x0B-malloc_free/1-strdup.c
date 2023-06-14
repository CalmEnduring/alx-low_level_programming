#include "main.h"
/**
 * _strdup - returns a pointer to newly allocated space in memory
 * which contains a copy of the string given
 * @str: string to copy
 *
 * Return: pointer to copy of a string
 */
char *_strdup(char *str)
{
	char *new_string; /* pointer to new string */
	unsigned int index1 = 1, index2; /* iterators */

	/* empty string */
	if (str == NULL)
	{
		return (NULL);
	}
	/* calculate string size excluding NULL byte */
	while (str[index1] != '\0')
	{
		index1++; /* increment count */
	}
	/* allocate memory to new string */
	new_string = malloc(sizeof(char) * index1);
	if (new_string == NULL) /* malloc failure */
	{
		return (NULL);
	}
	/* copy given string into newly allocated memoery */
	for (index2 = 0; index2 < index1; index2++)
	{
		new_string[index2] = str[index2];
	}
	/* return pointer to new array */
	return (new_string);
}
