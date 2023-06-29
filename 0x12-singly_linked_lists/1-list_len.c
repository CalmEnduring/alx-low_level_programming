#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list
 * @h: linked list_t list
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0; /* number of elements in list */

	while (h) /* iterate through list */
	{
		i++; /* increment count */
		h = h->next; /* traverse to next element in list */
	}
	return (i); /* return number of elements */
}
