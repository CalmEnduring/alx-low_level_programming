#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer t string of 0 and 1 chars
 *
 * Return: converted number or 0 if
 * there isn't a 0 or a 1 or
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0); /* b is empty */

	/* Calculate the length of the binary string */
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0); /* Invalid character found */
	}

	/* Loop through the binary string from left to right */
	for (j = 0; j < i; j++)
	{
		/* Shift the decimal left by 1 bit (multiply by 2) */
		decimal = decimal << 1;

		/* If the current binary digit is '1', set the least significant bit to 1 */
		if (b[j] == '1')
			decimal |= 1;
	}

	return (decimal);
}
