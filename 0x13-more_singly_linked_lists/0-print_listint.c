#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int non = 0; /* number of nodes */

	if (h != NULL)
	{
		while (h != NULL) /* iterate through list */
		{
			printf("%d\n", h->n); /* print list element */
			h = h->next; /* points to next node */
			non++; /*increment number of nodes */
		}
	}
	return (non); /* return number of ndoes */
}
