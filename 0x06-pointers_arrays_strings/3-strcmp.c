#include "main.h"
/**
  * _strcmp - Comapares two strings
  * @s1: string one
  * @s2: string two
  *
  * Return:	0, if strings are equal
  *		- value if s1 is less than s2
  *		+ value if s1 is greather than s2
  */
int _strcmp(char *s1, char *s2)
{
	int value = *s1 - *s2;

	return (value);
}
