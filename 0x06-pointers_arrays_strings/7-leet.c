#include "main.h"
/**
  * leet - encodes a string into 1337
  * @s: string to encode
  *
  * Return: pointer to encoded string
  */
char *leet(char *s)
{
	/* iterators and length of comparison arrays */
	int i, j, len = 5;
	/* string comparison arrays */
	char letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char code[5] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i]) /* loop until end of string */
	{
		j = 0;
		while (j < len) /* loop through comparison arrays */
		{
			/* compare string character and array character */
			if ((s[i] == letters[j]) | (s[i] - 32 == letters[j]))
			{
				/* replace corresponding letter with number */
				s[i] = code[j];
			}
			/* move to next element */
			j++;
		}
		/* move to next element */
		i++;
	}
	/* return pointer to encoded string */
	return (s);
}
