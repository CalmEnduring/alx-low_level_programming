#include "main.h"
/**
  * _strlen - Prints length of string
  * @s: Points to string to be counted
  *
  * Return: Length of the string
  */
int _strlen(char *s)
{
	int d = 0;

	for (; *s++;)
	{
		d++;
	}
	return (d);
}
