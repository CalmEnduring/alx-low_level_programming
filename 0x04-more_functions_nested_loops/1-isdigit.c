#include "main.h"
/**
  * _isdigit - Checks whether character is a digit or not
  * @c: Character to be checked
  *
  * Return: 0 if not digit
  *	    1 if digit
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
