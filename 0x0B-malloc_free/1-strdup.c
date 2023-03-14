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
	int i = 0, j = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	newstr = malloc(sizeof(char) * (j + 1));
	if (newstr == NULL)
		return (NULL);

	while (i < j)
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
