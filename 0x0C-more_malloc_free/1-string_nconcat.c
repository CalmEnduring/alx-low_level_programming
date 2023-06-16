#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate
 *
 * Return: pointer to newly allocated space in memory
 */
#include <string.h> /* Add the string.h header for strlen */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string; /* pointer to new string */
	unsigned int i1, i2, length_s1, length_s2, size;
	/* if NULL passed, treat as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculate string length without NULL byte */
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	if (n >= length_s2) /* if n > || == use whole of s2 */
		size = length_s1 + length_s2 + 1; /* +1 for null character */
	else /* use n bytes of s2 */
		size = length_s1 + n + 1;

	new_string = malloc(size); /* allocate storage */
	if (new_string == NULL) /* malloc failure */
		return (NULL);
	/* copy s1 into new string */
	for (i1 = 0; i1 < length_s1; i1++)
		new_string[i1] = s1[i1];
	/* concatenate s2 onto new string */
	for (i2 = 0; i2 < n && s2[i2] != '\0'; i2++, i1++)
		new_string[i1] = s2[i2];

	new_string[i1] = '\0'; /* NULL terminate string */
	return (new_string); /* return pointer to string */
}

