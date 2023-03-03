#include "main.h"
/**
  * _strcpy - copies a string to destination
  * @dest: destination to copy to
  * @src: source to copy from
  *
  * Return: a pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	/* iterate through source string until NULL */
	for (i = 0; src[i] != '\0'; i++)
	{
		/* copy characters from source into destination */
		dest[i] = src[i];
	}
	dest[i] = '\0'; /* NULL terminate destination string */
	return (dest);
}
