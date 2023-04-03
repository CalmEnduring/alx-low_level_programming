#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints the elements of a listint_t list
  * @h: list
  *
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t non = 0; /* number of nodes */

	if (h != NULL)
	{
		while (h != NULL) /* traverse through lists */
		{
			printf("%d\n", h->n); /* print element */
			h = h->next; /* move to next node */
			non++; /* increment number of nodes */
		}
	}
	return (non); /* return number of nodes */
}
