#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: number of bytes
  *
  * Return: pointer to memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* iterate upto n bytes through memory area */
	for (i = 0; i < n; i++)
	{
		/* replace current element with constant byte */
		s[i] = b;
	}
	/* return pointer to resulting memory area */
	return (s);
}
