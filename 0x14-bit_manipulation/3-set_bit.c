#include "main.h"
/**
 * set_bit - sets value of bit to 1 at given index
 * @n: integer in question
 * @index: given index
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
