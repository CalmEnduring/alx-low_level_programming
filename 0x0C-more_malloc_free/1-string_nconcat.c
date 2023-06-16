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
	char *new_string;
	unsigned int i1, i2, length_s1, length_s2, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	if (n >= length_s2)
		size = length_s1 + length_s2 + 1; /* +1 for null character */
	else
		size = length_s1 + n + 1;

	new_string = malloc(size);
	if (new_string == NULL)
		return NULL;

	for (i1 = 0; i1 < length_s1; i1++)
		new_string[i1] = s1[i1];

	for (i2 = 0; i2 < n && s2[i2] != '\0'; i2++, i1++)
		new_string[i1] = s2[i2];

	new_string[i1] = '\0';
	return (new_string);
}

