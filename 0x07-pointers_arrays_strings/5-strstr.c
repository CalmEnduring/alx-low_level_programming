#include "main.h"
/**
  * _strstr - Locates a substring
  * @haystack: The string to search
  * @needle: The string to find
  *
  * Return: a pointer to the beginning of located string
  */
char *_strstr(char *haystack, char *needle)
{
	int indx1 = 0;
	int indx2 = 0;

	while (haystack[indx1])
	{
		while (needle[indx2])
		{
			if (haystack[indx1 + indx2] != needle[indx2])
			{
				break;
			}
			indx2++;
		}
		if (needle[indx2] == '\0')
		{
			return (haystack + indx1);
		}
		indx1++;
	}
	return ('\0');
}
