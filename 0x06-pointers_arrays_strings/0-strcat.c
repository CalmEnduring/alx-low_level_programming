#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: where to concatenate to
  * @src: where to concatenate from
  *
  * Return: pointer to resulted string (dest)
  */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	/* find the length of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* find the length of src */
	while (src[j] != '\0')
	{
		j++;
	}

	/* concatenate src with dest */
	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++; /* move to the next available space */
	}

	dest[i] = '\0'; /* NULL terminate string */

	return (dest);
}
