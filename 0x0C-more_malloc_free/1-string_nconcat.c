#include "main.h"
/**
  * string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: number of bytes to concatenate
  *
  * Return: pointer to newly allocated space in memory,
  * on failure return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1 = 0, i2 = 0, k = 0, len = 0;
	char *newstr;

	if (s1 == NULL) /* if s1 and s2 NULL, treat as empty string */
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i1]) /* get length of s1 and s2 */
		i1++;

	while (s2[i2])
		i2++;

	if (n >= i2) /* if n greater than s2 */
		len = i2 + i1; /* use whole of s2 */
	else
		len = i1 + n; /* otherwise use n bytes of s2 */
	/* allocate memory for new string */
	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL) /* if no space available */
		return (NULL); /* return NULL */

	i2 = 0;
	while (k < len) /* while k less than the length of newstr */
	{
		if (k <= i1) /* copy s1 into newstr */
			newstr[k] = s1[k];

		if (k >= i1) /* copy s2 into newstr */
		{
			newstr[k] = s2[i2];
			i2++; /* move to next position */
		}
		k++; /* move to next position */
	}
	newstr[k] = '\0'; /* terminate string */
	return (newstr); /* return pointer to newstr */
}
