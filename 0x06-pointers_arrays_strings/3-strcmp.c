#include "main.h"
/**
  * _strcmp - compares two strings
  * @s1: string one
  * @s2: string two
  *
  * Return: -15 if s1 is less than s2
  *	15 s1 is greater than s2
  *	0 if s1 and s2 are equal
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	/* get length of s1 */
	while (s1[i])
	{
		i++;
	}

	/* get length of s2 */
	while (s2[j])
	{
		j++;
	}

	/* if s1 is less than s2 */
	if (i < j)
	{
		return (-15);
	} /* if s1 is greater than s2 */
	else if (i > j)
	{
		return (15);
	} /* if s1 and s2 are equal */
	else
	{
		return (0);
	}
}
