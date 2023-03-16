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
	unsigned int i = 0, j = 0, k, l;
	char *newstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	newstr = malloc(sizeof(char) * (i + j) + 1);
	if (newstr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		newstr[k] = s1[k];
	if (n >= j)
	{
		for (l = 0; l < j; l++)
		{
			newstr[k] = s2[l];
			k++;
		}
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			newstr[k] = s2[l];
			k++;
		}
	}
	newstr[k] = '\0';
	return (newstr);
}
