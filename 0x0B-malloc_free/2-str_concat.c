#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - Concatenates two strings
  * @s1: string one
  * @s2: string two
  * Return: a pointer to a string on succes, NUll on failure
  */
char *str_concat(char *s1, char *s2)
{
	int index = 0, index2 = 0, l1, l2, sl;
	char *s;

	l1 = l2 = 0;

	if (s1 != NULL) /* reads s1 + calculates string length */
	{
		while (s1[index] != '\0')
		{
			l1++;
			index++;
		}
	}
	if (s2 != NULL) /* reads s2 + calculates string length */
	{
		while (s2[index2] != '\0')
		{
			l2++;
			index2++;
		}
	}
	sl = l1 + l2; /* combined string legnth */
	/* dynamically allocates storage for new string */
	s = (char *)malloc(sizeof(char) * (sl + 1));
	if (s == NULL) /* malloc failure */
		return (NULL);
	/* loops through s1 + s */
	for (index = 0; index < l1; index++)
		s[index] = s1[index]; /* copies s1 into s */
	/* loops through s2 + from the last character added to s */
	for (index2 = 0; index2 < l2; index2++, index++)
		s[index] = s2[index2]; /* concatenates s2 onto s */
	s[sl] = '\0'; /* terminates string */
	return (s); /* returns a pointer to new string */
}
