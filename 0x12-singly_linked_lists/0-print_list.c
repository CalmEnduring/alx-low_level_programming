#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0; /* node count */

	while (h) /* iterate through linked list */
	{
		if (h->str == NULL) /* empty string */
		{
			printf("[0] (nil)\n");
		}
		else /* prints string, string length */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next; /* traverse to next node */
		i++; /* increment node count */
	}
	return (i); /* return number of nodes */
}
