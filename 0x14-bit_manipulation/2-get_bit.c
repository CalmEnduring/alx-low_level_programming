#include "main.h"
/**
 * get_bit - retrieve value of bit at given index
 * @n: integer in question
 * @index: index of bit
 *
 * Return: value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0; /* counter to keep track of bit position */

	while (n)
	{
		if (i == index) /* if bit position found */
		{
			if (n % 2) /* if lsb not zero */
				return (1); /* bit is set */
			else
				return (0); /* bit not set */
		}

		n = n / 2; /* right-shift n by one position */
		i++; /* iterate to next bit position */
	}
	if (index > i && index < 63) /* if index in valid range */
		return (0); /* bit is not set */
	return (-1); /* index out of range */
}
