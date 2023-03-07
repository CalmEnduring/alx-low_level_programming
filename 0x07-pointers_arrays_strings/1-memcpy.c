#include "main.h"
/**
  * _memcpy - copies memory area
  * @dest: to copy from
  * @src: to copy to
  * @n: number of bytes to copy
  *
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* iterate up until n bytes of dest */
	for (i = 0; i < n; i++)
	{
		/* copy src memory area to dest memory area */
		dest[i] = src[i];
	}
	/* return pointer to dest */
	return (dest);
}
