#include "main.h"
/**
  * cap_string - Capaitalizes each word in the string
  * @str: The string in question
  *
  * Return: str
  */
char *cap_string(char *str)
{
	int index1 = 0, index2;
	char separators[] = " \t\n,;.!?\"(){}";

	while (*(str + index1))
	{
		if (*(str + index1) >= 'a' && *(str + index1) <= 'z')
		{
			if (index1 == 0)
			{
				*(str + index1) -= 32;
			}
			else
			{
				for (index2 = 0; index2 <= 12; index2++)
				{
					if (separators[index2] == *(str + index1 - 1))
					{
						*(str + index1) -= 32;
					}
				}
			}
		}
		index1++;
	}
	return (str);
}
