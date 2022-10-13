#include "main.h"
/**
  * string_toupper - Converts the letters of a string to uppercase
  * @str: The string in question
  *
  * Return: char
  */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] = str[index] - 32;
		}
		else if (str[index] >= 65 && str[index] <= 90)
		{
			continue;
		}
	}
	return (str);
}
