#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings using malloc
  * @s1: string one
  * @s2: string two
  * @n: number of bytes
  *
  * Return: a pointer to newly allocated memory on success
  * on failure, NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int index, index2, ss;
	/* ss is the size of the first n bytes of s2 */
	ss = sizeof(s2) - (sizeof(s2) - n);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* if n is greater or equal to s2, use the whole string */
	if (n >= sizeof(s2))
	{
		mem = malloc(sizeof(s1) + sizeof(s2));
	}
	else
	{
		mem = malloc(sizeof(s1) + ss);
	}
	/* malloc failure */
	if (mem == NULL)
		return (NULL);
	/* copies s1 into mem */
	for (index = 0; index <= sizeof(s1); index++)
		mem[index] = s1[index];
	/* concatenates s2 into mem */
	for (index2 = 0; index2 < n; index2++, index++)
		mem[index] = s2[index2];
	/* terminates string */
	mem[index] = '\0';
	return (mem); /* returns pointer to string */
}
