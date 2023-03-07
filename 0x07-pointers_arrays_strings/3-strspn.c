#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: string
  * @accept: substring
  *
  * Return: number of bytes in the initial segment of s
  *	which consists only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i1 = 0, i2;

	/* iterate over string accept */
	while (accept[i1])
	{
		i2 = 0;
		/* loop until a space is encountered */
		while (s[i2] != 32)
		{
			/* if characters of accept and s match */
			if (accept[i1] == s[i2])
			{
				/* increase count by 1 */
				count++;
			}
			i2++;
		}
		i1++;
	}
	/* return count */
	return (count);
}
