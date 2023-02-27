#include "main.h"
/**
  * _strlen - counts the length of a string
  * @s: string to coutn
  *
  * Return: lenght of string
  */
int _strlen(char *s)
{
	int i = 1;

	/* loops through the string until NULL */
	while (s[i] != '\0')
	{
		i++; /* iterator that keeps count of characters counted */
	}
	/* returns the length of the string */
	return (i);
}
