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
	for (; *needle != '\0'; needle++)
	{
		for (; *haystack != '\0'; haystack++)
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
