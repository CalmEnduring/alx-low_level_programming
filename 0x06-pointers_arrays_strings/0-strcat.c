#include "main.h"
/**
  * _strcat - Concatenates two strings
  * @dest: Destination string
  * @src: Source string
  *
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}
	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index2++;
		index1++;
	}
	dest[index1] = '\0';

	return (dest);
}
