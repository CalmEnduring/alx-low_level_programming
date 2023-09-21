#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip to another number
 * @n: integer 1
 * @m: integer 2
 *
 * Return: number of bits to flip needed to get to another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, j = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			j++;

		i >>= 1;
	}
	return (j);
}
