#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string in question
  */
void rev_string(char *s)
{
	int x, y, z;
	char c;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		c = s[y];
		s[y] = s[z];
		s[z] = c;
	}
}
