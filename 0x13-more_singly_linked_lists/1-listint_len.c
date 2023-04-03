#include "lists.h"
/**
  * listint_len - returns the number of elements in a listint_t list
  * @h: head node to list
  *
  * Return: number of elements in a linked listint_t list
  */
size_t listint_len(const listint_t *h)
{
	size_t noe = 0; /* number of elements */

	if (h != NULL) /* if struct not empty */
	{
		while (h) /* traverse the lists */
		{
			noe++; /* increment count */
			h = h->next; /* move to next element */
		}
	}
	return (noe); /* return number of elements */
}
