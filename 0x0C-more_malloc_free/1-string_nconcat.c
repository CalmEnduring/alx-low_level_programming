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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i1])
		i1++;

	while (s2[i2])
		i2++;

	if (n >= i2)
		len = i2 + i1;
	else
		len = i1 + n;

	newstr = malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);

	i2 = 0;
	while (k < len)
	{
		if (k <= i1)
			newstr[k] = s1[k];

		if (k >= i1)
		{
			newstr[k] = s2[i2];
			i2++;
		}
		k++;
	}
	newstr[k] = '\0';
	return (newstr);
}
