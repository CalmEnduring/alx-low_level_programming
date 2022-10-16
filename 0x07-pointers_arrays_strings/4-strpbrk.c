#include "main.h"
/**
  * _strpbrk - Prints string for the first occurence of a set of bytes
  * @s: String to search
  * @accept: Search criteria
  *
  * Return: s if match found, NULL if match not found.
  */
char *_strpbrk(char *s, char *accept)
{
	int index1 = 0;

	while (s[index1] != '\0')
	{
		int index2 = 0;

		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				s += index1;
				return (s);
			}
			index2++;
		}
		index1++;
	}
	return ('\0');
}
