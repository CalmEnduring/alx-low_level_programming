#include <stdio.h>
/**
  * _strncat - Concatenates n elements of a string to another
  * @dest: Destination string
  * @src: Source string
  * @n: The amount of elements to concatenate
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index1, index2;
	/* Gives us the destination string */
	for (index1 = 0; dest[index1] != '\0'; index1++)
	{
	}
	/* Gives us n elements of the source string */
	for (index2 = 0; src[index2] != '\0' && index2 < n; index2++)
	{
		dest[index1] = src[index2];/* Adds source string to */
		index1++;/* the destination string */
	}
	dest[index1] = '\0';/* Adds the NULL terminator to end of string */
	return (dest);
}
