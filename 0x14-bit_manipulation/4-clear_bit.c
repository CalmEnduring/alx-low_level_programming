#include "main.h"
/**
 * clear_bit - sets bit to 0 at given index
 * @n: integer in question
 * @index: given index
 *
 * Return: 1 on succes, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}
	return (-1);
}
