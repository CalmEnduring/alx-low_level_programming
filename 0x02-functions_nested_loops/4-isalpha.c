#include "main.h"
/**
 * _isalpha - Checks whether character is a letter (lowercase or uppercase)
 * @c: Character to be checked
 * Return: 1 if true,
 * if not, 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
