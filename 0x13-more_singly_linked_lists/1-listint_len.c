#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: listint_t list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int non = 0; /* number of nodes */

	if (h != NULL)
	{
		while (h != NULL) /* iterate through list */
		{
			h = h->next; /* points to next node */
			non++; /* increment number of nodes */
		}
	}
	return (non); /* return number of ndoes */
}
