#include "main.h"
/**
  * leet - Replaces specific elements in a string
  * @str: String in question
  *
  * Return: str
  */
char *leet(char *s)
{
	int index1, index2;
	char rplc1[] = "aAeEoOtTlL";
	char rplc2[] = "4433007711";

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; index2 < 9; index2++)
		{
			if (rplc1[index2] == s[index1])
			{
				s[index1] = rplc2[index2];
			}
		}
	}
	return (s);
}
