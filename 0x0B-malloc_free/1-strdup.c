#include "main.h"
/**
  * _strdup - duplicates a string using malloc
  * @str: string
  *
  * Return: On success returns a pointer to duplicated string
  * On failure returns NULL (insufficient memeory available)
  */
char *_strdup(char *str)
{
	int i = 0, j = 0; /* iterators */
	char *newstr; /* pointer to the new string */

	/* if string is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* get length of string exluding NULL terminator */
	while (str[j])
	{
		/* move to next element */
		j++;
	}

	/* allocate memory for new string */
	/* size of data type * length of string + NULL term */
	newstr = malloc(sizeof(char) * (j + 1));
	/* if no space available return NULL */
	if (newstr == NULL)
		return (NULL);

	/* loop until NUll terminator */
	while (i < j)
	{
		/* copy elements of str to newstr */
		newstr[i] = str[i];
		i++; /* move to the next element */
	}
	/* NULL terminate string */
	newstr[i] = '\0';
	return (newstr); /* return pointer to new string */
}
