#include "main.h"
/**
  * _strncpy - Copies n elements of a string
  * @dest: Destination value
  * @src: Source value
  * @n: Number of elements
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; dest[index] != '\0' && index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
