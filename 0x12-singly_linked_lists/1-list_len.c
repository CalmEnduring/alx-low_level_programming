#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t num_of_el = 0; /* number of elements var */

	for (; h != NULL; h = h->next) /* traverse through linked lists */
	{
		num_of_el++; /* increment count */
	}
	return (num_of_el); /* return number of elemetns */
}
