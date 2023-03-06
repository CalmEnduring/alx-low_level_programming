#include "main.h"
/**
  * cap_string - capitalizes all words of a string
  * @s: string in question
  *
  * Return: pointer to resulting string
  */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = {
		' ', '\t', '\n',
		',', ';', '.',
		'!', '?', '"',
		'(', ')', '{', '}'};

	/* iterate through string until NULL */
	while (s[i])
	{
		/* if letters are lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* if indexs is 0 */
			if (i == 0)
			{
				/* convert first character to uppercase */
				s[i] -= 32;
			}
			else
			{
				/* iterate over string string */
				for (j = 0; j <= 12; j++)
				{
					/* if seperator and current character match */
					if (sep[j] == s[i - 1])
					{
						/* convert to uppercase */
						s[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (s);
}
