#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int index = 0, index2 = 0, l1, l2, sl;
	char *s; /* pointer to concatenated string */

	l1 = l2 = 0;

	if (s1 != NULL) /* reads s1 + calculates string length */
	{
		while (s1[index] != '\0')
		{
			l1++;
			index++;
		}
	}

	if (s2 != NULL) /* reads s2 + calucaltes string length */
	{
		while (s2[index2] != '\0')
		{
			l2++;
			index2++;
		}
	}
	sl = l1 + l2; /* total string length of s1 and s2 */
	/* allocate storage for new string */
	/* add one additional space for NULL byte */
	s = malloc(sizeof(char) * (sl + 1));
	if (s == NULL) /* malloc failure */
		return (NULL);

	/* iterates through s1 and s */
	for (index = 0; index < l1; index++)
		s[index] = s1[index]; /* copies s1 into s */

	/* iterates through s2 + from the last character added to s */
	for (index2 = 0; index2 < l2; index2++, index++)
		s[index] = s2[index2]; /* concatenates s2 into s */

	s[sl] = '\0'; /* terminate with NULL byte */
	return (s);
}
