#include "main.h"
/**
  * _isupper - Checks if character is uppercase
  * Return: 1 if c is uppercase
  * @c: character to be checked
  *	    0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
