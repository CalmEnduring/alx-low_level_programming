#include "main.h"
/**
  * _strncpy - copies n characters of a string from source to destination
  * @dest: to copy to
  * @src: to copy from
  * @n: number of characters to copy
  *
  * Return: a pointer to resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* iterate over the two strings */
	for (i = 0; i < n && src[i]; i++)
	{
		/* copy src to dest */
		dest[i] = src[i];
	}

	/* iterate over dest */
	for (; i < n; i++)
	{
		/* NULL terminate any remaining positions in dest */
		/* in case src string is shorter than n */
		dest[i] = '\0';
	}

	/* return dest */
	return (dest);
}
