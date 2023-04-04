#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: string
 *
 * Return: converted string to integer
 */
int _atoi(char *s)
{
	int i = 0, j = 0, min  = 1;
	unsigned int num = 0;

	while (s[i]) /* loop through string */
	{
		if (s[i] == 45) /* if number negative */
			min *= -1;

		while (s[i] >= 48 && s[i] <= 57) /* checkin for numbers */
		{
			j = 1;
			num = (num * 10) + (s[i] - '0');
			i++;
		}

		if (j == 1)
			break;

		i++;
	}
	num *= min;
	return (num); /* return number */
}
