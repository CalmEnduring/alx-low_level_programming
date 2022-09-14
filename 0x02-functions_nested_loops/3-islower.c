#include "main.h"
/**
 * _islower - This function checks if character is lowercase
 * @c: Checks input of function
 * Return: Returns 1 if 'c' is lowercase
 * if not, always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
