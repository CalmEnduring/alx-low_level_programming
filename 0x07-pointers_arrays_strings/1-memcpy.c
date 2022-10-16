#include "main.h"
/**
  * _memcpy - copies n bytes of a src string to dest string
  * @dest: destination string
  * @src: source string
  * @n: amount of bybtes
  *
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
