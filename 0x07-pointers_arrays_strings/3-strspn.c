#include "main.h"
/**
  * _strspn - Prints length of prefix substring
  * @s: Tested string
  * @accept: Restrictment string
  *
  * Return: Number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index1 = 0;
	unsigned int index2;
	unsigned int length = 0;

	while (accept[index1])
	{
		index2 = 0;

		while (s[index2] != 32)
		{
			if (accept[index1] == s[index2])
			{
				length++;
			}
			index2++;
		}
		index1++;
	}
	return (length);
}
