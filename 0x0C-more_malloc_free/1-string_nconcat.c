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
	unsigned int l1, l2, sl, i, j; /* iterators */

	if (s1 == NULL) /* if string NULL, treat as empty */
		s1 = "";
	if (s2 == NULL) /* if string NULL, treat as empty */
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0') /* calculates length of string 1 */
		l1++;
	l2 = 0;
	while (s2[l2] != '\0') /* calculates length of string 2 */
		l2++;

	if ((n - 1) >= l2) /* if number of bytes greater than s2 */
		sl = l1 + l2; /* use whole of s2 */
	else /* if number of bytes is not greater than s2 */
		sl = l1 + (n - 1); /* use n bytes of s2 */

	new_string = malloc(sizeof(char) * sl); /* allocate storage */
	if (new_string == NULL) /* malloc failure */
		return (NULL);

	for (i = 0; i < l1; i++) /* iterate through new_string */
		new_string[i] = s1[i]; /* copy s1 into new_string */

	for (j = 0; j < n; j++, i++) /* iterate through new _tring */
		new_string[i] = s2[j]; /* concatenate s2 with new_string */

	new_string[i + j + 1] = '\0'; /* NULL terminate new_string */
	return (new_string); /* return pointer to new string */
}
