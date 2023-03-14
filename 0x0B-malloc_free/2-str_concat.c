#include "main.h"
/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  *
  * Return: NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l; /* iterators */
	char *concat; /* pointer to new string */

	/* treat s1 as an empty string if NULL */
	if (s1 == NULL)
		s1 = "";

	/* treat s2 as an empty string if NULL */
	if (s2 == NULL)
		s2 = "";

	/* get length of s1 */
	while (s1[i])
		i++;

	/* get length of s2 */
	while (s2[j])
		j++;

	/* allocate space for new string */
	/* size of data type * lenOfs1 + lenOfs2 + NULL term */
	concat = malloc(sizeof(char) * (i + j + 1));
	/* if no space available return NULL */
	if (concat == NULL)
		return (NULL);

	/* loop the length of s1 */
	for (k = 0; k < i; k++)
		/* copy s1 into concat */
		concat[k] = s1[k];

	/* loop the length of s2 */
	for (l = 0; l < j; l++)
	{
		/* copy s2 into concat */
		concat[k] = s2[l];
		k++; /* move to next position in concat */
	}
	concat[k] = '\0'; /* NULL terminate string */
	return (concat); /* return pointer to string */
}
