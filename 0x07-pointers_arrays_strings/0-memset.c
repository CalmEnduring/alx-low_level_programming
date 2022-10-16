#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @s: string of memory
  * @b: character constant
  * @n: byte constant
  *
  * Return: Always 0
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
