#include "main.h"
/**
  * string_toupper - changes lowercase letters to uppercase
  * @s: string
  *
  * Return: pointer to a string
  */
char *string_toupper(char *s)
{
	int i;

	/* iterate over string */
	for (i = 0; s[i]; i++)
	{
		/* if letters are lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* convert to uppercase */
			s[i] -= 32;
		}
	}
	/* return the string */
	return (s);
}
