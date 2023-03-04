#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string to reverse
  */
void rev_string(char *s)
{
	int i = 0, j, len;
	char temp; /* temporary storage variable */

	/* loop through string until NULL */
	while (s[i] != '\0')
	{
		/* increment i to count the length of string */
		i++;
	}

	/* store the length of the string in a variable */
	len = i;

	/* iterate through half of the string */
	for (j = 0; j < len / 2; j++)
	{
		temp = s[len - j - 1]; /* store the last char in temp */
		s[len - j - 1] = s[j]; /* replace the last char with the first char */
		s[j] = temp; /* replace the first char with the last char */
	}
	/* NULL terminate the string */
	s[len] = '\0';
}
