#include "main.h"
/**
  * _strcpy - Copies a string
  * @dest: Value of destination
  * @src: Value of source
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}

	dest[d++] = '\0';

	return (dest);
}
