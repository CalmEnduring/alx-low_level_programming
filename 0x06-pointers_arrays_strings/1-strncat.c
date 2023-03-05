#include "main.h"
/**
  * _strncat - concatenates n characters of a string
  * @dest: where to concatenate to
  * @src: where to concatenate from
  * @n: number of characters
  *
  * Return: pointer to resulted string (dest)
  */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	/* find the length of dest */
	while (dest[len] != '\0')
	{
		len++;
	}

	/* concatenate src with dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		/* append src string to dest string */
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0'; /* NULL terminate string */

	return (dest);
}
