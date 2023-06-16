#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concatenate
 *
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string; /* pointer to allocated storage */
	unsigned int i1, i2, ss; /* ss is the size of the first n byts of s2 */

	ss = sizeof(s2) - (sizeof(s2) - n);
	if (s1 == NULL) /* if string NULL, treat as empty */
		s1 = "";
	if (s2 == NULL) /* if string NULL, treat as empty */
		s2 = "";

	/* if n > || = to s2, use entirety of s2 */
	if (n >= sizeof(s2))
		new_string = malloc(sizeof(s1) + sizeof(s2));
	else
		new_string = malloc(sizeof(s1) + ss);
	/* malloc failure */
	if (new_string == NULL)
		return (NULL);

	for (i1 = 0; i1 <= sizeof(s1); i1++) /* iterate through new_string */
		new_string[i1] = s1[i1]; /* copy s1 into new_string */

	for (i2 = 0; i2 < n; i2++, i1++) /* iterate through new _tring */
		new_string[i1] = s2[i2]; /* concatenate s2 with new_string */

	new_string[i1] = '\0'; /* NULL terminate new_string */
	return (new_string); /* return pointer to new string */
}
